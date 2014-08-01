<?php

// Remove 'video' field
field_delete_field('field_video');
field_purge_batch(1);
