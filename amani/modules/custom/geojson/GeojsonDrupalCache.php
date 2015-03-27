<?php

class GeojsonDrupalCache { // implements Affinity\GeoJSON\CacheInterface {

  /**
   *
   */
  public function get($key) {
    $cache = cache_get($key);
    return $cache ? $cache->data : NULL;
  }

  /**
   *
   */
  public function set($key, $value) {
    return cache_set($key, $value);
  }

}
