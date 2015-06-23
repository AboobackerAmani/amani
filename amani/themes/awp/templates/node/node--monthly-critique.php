
<?php  if ($teaser):  ?>

<!--    --><?php //if(!empty($node->field_days_link)){ print render($content['field_days_link']);}?>

    <?php /*if(!empty($node->field_trucks_delivered)):
        print render($content['field_trucks_delivered']);
    endif;*/?><!--

    <?php /*if(!empty($node->field_trucks_needed)):
        print render($content['field_trucks_needed']);
    endif;*/?>

    <?php /*if(!empty($node->field_trucks_link)):
        print render($content['field_trucks_link']);
    endif;*/?>

    <?php /*if(!empty($node->field_people_displaced)):
        print render($content['field_people_displaced']);
    endif;*/?>

    <?php /*if(!empty($node->field_people_comment)):
        print render($content['field_people_comment']);
    endif;*/?>

    <?php /*if(!empty($node->field_people_link)):
        print render($content['field_people_link']);
    endif;*/?>

    <?php /*if(!empty($node->field_pledged_amount)):
        print render($content['field_pledged_amount']);
    endif;*/?>

    <?php /*if(!empty($node->field_paid_amount)):
        print render($content['field_paid_amount']);
    endif;*/?>

    <?php /*if(!empty($node->field_pledged_link)):
        print render($content['field_pledged_link']);
    endif;*/?>
    <?php /*if(!empty($node->field_temperature_min)):
        print render($content['field_temperature_min']);
    endif;*/?>
    <?php /*if(!empty($node->field_temperature_max)):
        print render($content['field_temperature_max']);
    endif;*/?>

    <?php /*if(!empty($node->field_temperature_link)):
        print render($content['field_temperature_link']);
    endif;*/?>

    <?php /*if(!empty($node->field_home_rebuilt)):
        print render($content['field_home_rebuilt']);
    endif;*/?>

    <?php /*if(!empty($node->field_home_destroyed)):
        print render($content['field_home_destroyed']);
    endif;*/?>

    --><?php /*if(!empty($node->field_home_link)):
        print render($content['field_home_link']);
    endif;*/?>


<div id="left-wrapper" class="block block-views contextual-links-region even left-wrapper">


    <div class=" view-aidwatch-front-page-blocks ">



        <div class="view-content">
            <div class="views-row views-row-1 views-row-odd views-row-first row-days">
                <?php
                $now = time(); // or your date as well
                $your_date = strtotime("2014-08-26");
                $datediff = $now - $your_date;
                $number_days = ($datediff/(60*60*24));
                ?>
                <div class="views-field views-field-field-image">        <div class="field-content"><a href="<?php if(!empty($node->field_days_link)){ print render($content['field_days_link']);}?>"><img typeof="foaf:Image" src="http://dev.awptheme.peacegeeks.org/sites/default/files/front-pages-images/calendar.png" width="104" height="91" alt=""></a></div>  </div>
                <div class="views-field views-field-title">        <span class="field-content"><a href="<?php if(!empty($node->field_days_link)){ print render($content['field_days_link']);}?>"><?php print ('Days Since Ceasfire');?></a></span>  </div>
                <div class="views-field views-field-field-text">        <div class="field-content"><?php print $number_days;?></div>  </div>
                <div class="views-field views-field-title-1">        <span class="field-content"><a href="<?php if(!empty($node->field_days_link)){ print render($content['field_days_link']);}?>"><?php print t('Read More');?></a></span>  </div>  </div>

            <div class="views-row views-row-2 views-row-even views-row-last row-trucks">

                <div class="views-field views-field-field-image">        <div class="field-content"><a href="<?php if(!empty($node->field_trucks_link)):
                            print render($content['field_trucks_link']);
                        endif;?>"><img typeof="foaf:Image" src="http://dev.awptheme.peacegeeks.org/sites/default/files/front-pages-images/truck_0.png" width="116" height="77" alt=""></a></div>  </div>
                <div class="views-field views-field-title">        <span class="field-content"><a href="<?php if(!empty($node->field_trucks_link)):
                            print render($content['field_trucks_link']);
                        endif;?>"><?php printt('Trucks Delivered vs. Needed');?></a></span>  </div>
                <div class="views-field views-field-field-text">        <div class="field-content">    <?php if(!empty($node->field_trucks_needed)):
                            print render($content['field_trucks_needed']);
                        endif;?> /      <?php if(!empty($node->field_trucks_needed)):
                            print render($content['field_trucks_needed']);
                        endif;?> </div>  </div>
                <div class="views-field views-field-title-1">        <span class="field-content"><a href="<?php if(!empty($node->field_trucks_link)):
                            print render($content['field_trucks_link']);
                        endif;?>"><?php print t('Read More');?></a></span>  </div>  </div>
        </div>






    </div>
</div>

<div id="center-wrapper" class="block block-views  odd center-wrapper">

    <div class=" view-aidwatch-front-page-blocks ">



        <div class="view-content">
            <div class="views-row views-row-1 views-row-odd views-row-first row-people">

                <div class="views-field views-field-field-image">        <div class="field-content"><a href="<?php if(!empty($node->field_people_link)):
                            print render($content['field_people_link']);
                        endif;?>"><img typeof="foaf:Image" src="http://dev.awptheme.peacegeeks.org/sites/default/files/front-pages-images/displace.png" width="138" height="111" alt=""></a></div>  </div>
                <div class="views-field views-field-title">        <span class="field-content"><a href="<?php if(!empty($node->field_people_link)):
                            print render($content['field_people_link']);
                        endif;?>">People Still Displaced</a></span>  </div>
                <div class="views-field views-field-field-text">        <div class="field-content">    <?php if(!empty($node->field_people_displaced)):
                            print render($content['field_people_displaced']);
                        endif;?>
                    <div class="comments">
                        <?php if(!empty($node->field_people_comment)):
                            print render($content['field_people_comment']);
                        endif;?>
                    </div>
                    </div>  </div>
                <div class="views-field views-field-title-1">        <span class="field-content"><a href="<?php if(!empty($node->field_people_link)):
                            print render($content['field_people_link']);
                        endif;?>"><?php print t('Read More');?></a></span>  </div>  </div>



            <div class="views-row views-row-2 views-row-even views-row-last row-pledged">

                <div class="views-field views-field-field-image">        <div class="field-content"><a href=" <?php if(!empty($node->field_pledged_link)):
                            print render($content['field_pledged_link']);
                        endif;?>"><img typeof="foaf:Image" src="http://dev.awptheme.peacegeeks.org/sites/default/files/front-pages-images/dollar.png" width="69" height="103" alt=""></a></div>  </div>
                <div class="views-field views-field-title">        <span class="field-content"><a href=" <?php if(!empty($node->field_pledged_link)):
                            print render($content['field_pledged_link']);
                        endif;?>">Amount pledged and paid </a></span>  </div>
                <div class="views-field views-field-field-text">        <div class="field-content">   <?php if(!empty($node->field_pledged_amount)):
                            print render($content['field_pledged_amount']);
                        endif;?> /               <?php if(!empty($node->field_paid_amount)):
                            print render($content['field_paid_amount']);
                        endif;?></div>  </div>
                <div class="views-field views-field-title-1">        <span class="field-content"><a href=" <?php if(!empty($node->field_pledged_link)):
                            print render($content['field_pledged_link']);
                        endif;?>"><?php print t('Read More');?></a></span>  </div>  </div>
        </div>






    </div>
</div>


<div id="right-wrapper" class="block block-views  even right-wrapper">

    <div class=" view-aidwatch-front-page-blocks ">



        <div class="view-content">
            <div class="views-row views-row-1 views-row-odd views-row-first row-temperature">

                <div class="views-field views-field-field-image">        <div class="field-content"><a href="<?php if(!empty($node->field_temperature_link)):
                            print render($content['field_temperature_link']);
                        endif;?>"><img typeof="foaf:Image" src="http://dev.awptheme.peacegeeks.org/sites/default/files/front-pages-images/temp.png" width="84" height="130" alt=""></a></div>  </div>
                <div class="views-field views-field-title">        <span class="field-content"><a href="<?php if(!empty($node->field_temperature_link)):
                            print render($content['field_temperature_link']);
                        endif;?>">Average Temperature</a></span>  </div>
                <div class="views-field views-field-field-text">
                    <div class="field-content"><?php if(!empty($node->field_temperature_min)):
                            print render($content['field_temperature_min']);
                        endif;?>-<?php if(!empty($node->field_temperature_max)):
                            print render($content['field_temperature_max']);
                        endif;?></div>  </div>

                <div class="views-field views-field-title-1">        <span class="field-content"><a href="<?php if(!empty($node->field_temperature_link)):
                            print render($content['field_temperature_link']);
                        endif;?>"><?php print t('Read More');?></a></span>  </div>  </div>
            <div class="views-row views-row-2 views-row-even views-row-last row-home">

                <div class="views-field views-field-field-image">        <div class="field-content"><a href="    <?php if(!empty($node->field_home_link)):
                            print render($content['field_home_link']);
                        endif;?>"><img typeof="foaf:Image" src="http://dev.awptheme.peacegeeks.org/sites/default/files/front-pages-images/hummer.png" width="84" height="112" alt=""></a></div>  </div>
                <div class="views-field views-field-title">        <span class="field-content"><a href="    <?php if(!empty($node->field_home_link)):
                            print render($content['field_home_link']);
                        endif;?>">Homes repaired and rebuilt </a></span>  </div>
                <div class="views-field views-field-field-text">
                    <div class="field-content">  <?php if(!empty($node->field_home_rebuilt)):
                            print render($content['field_home_rebuilt']);
                        endif;?> /       <?php if(!empty($node->field_home_destroyed)):
                            print render($content['field_home_destroyed']);
                        endif;?> </div>  </div>
                <div class="views-field views-field-title-1">        <span class="field-content"><a href="    <?php if(!empty($node->field_home_link)):
                            print render($content['field_home_link']);
                        endif;?>"><?php print t('Read More');?></a></span>  </div>  </div>
        </div>






    </div>
</div>


    <?php print t('Rimawi 333');?>
<?php endif; ?>








