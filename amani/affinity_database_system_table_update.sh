#!/bin/bash
drush dl registry_rebuild -y
drush sql-query "UPDATE system SET filename = REPLACE(filename,'profiles/openoutreach','profiles/amani')"
drush sql-query "UPDATE system SET filename = REPLACE(filename,'sites/all','profiles/amani')"
drush sql-query "TRUNCATE TABLE cache_libraries"
drush rr
drush fr amani_global -y
drush fr amani_blog -y
drush cc all

