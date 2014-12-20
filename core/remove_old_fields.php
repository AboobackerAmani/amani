<?php

// Remove 'video' field, comment out to run
field_delete_field('field_featured_');
field_purge_batch(1);
