<?php

class GeoJSONGeofieldFeatureFactory extends Affinity\GeoJSON\FeatureFactory {

  protected $entity_type;

  protected $geofield;

  protected $properties_callback;

  protected $properties = array();

  public function __construct($info) {
    if (!isset($info['entity_type']))
      throw new \InvalidArgumentException("No entity type provided.");
    if (!isset($info['geofield']))
      throw new \InvalidArgumentException("No geofield provided.");

    $this->entity_type = $info['entity_type'];
    $this->geofield = $info['geofield'];

    if (isset($info['properties callback'])) {
      $this->properties_callback = $info['properties callback'];
    }

    if (isset($info['properties'])) {
      $this->properties = $info['properties'];
    }
  }

  public function geometry($item) {
    $items = $this->geofieldValue($item) ?: array();
    $wkt = array_map(function ($item) { return $item['geom']; }, $items);
    return $this->createGeoPHPGeometry($wkt);
  }

  public function properties($item) {
    $properties = parent::properties($item);

    if ($this->properties) {
      $properties = array_merge($properties, $this->properties);
    }

    if ($this->properties_callback) {
      $result = call_user_func($this->properties_callback, $item);
      $properties = array_merge($properties, $result);
    }

    return $properties;
  }

  public function id($item) {
    return "{$item->nid}:{$this->geofield}";
  }

  protected function geofieldValue($item) {
    return field_get_items($this->entity_type, $item, $this->geofield);
  }
}
