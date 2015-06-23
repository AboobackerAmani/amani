<?php

/**
 * @file
 * Default theme implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all,
 *   or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct URL of the current node.
 * - $display_submitted: Whether submission information should be displayed.
 * - $submitted: Submission information created from $name and $date during
 *   template_preprocess_node().
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - node: The current template type; for example, "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Blog entry" it would result in "node-blog". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser
 *     listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type; for example, story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $view_mode: View mode; for example, "full", "teaser".
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * Field variables: for each field instance attached to the node a corresponding
 * variable is defined; for example, $node->body becomes $body. When needing to
 * access a field's raw values, developers/themers are strongly encouraged to
 * use these variables. Otherwise they will have to explicitly specify the
 * desired field language; for example, $node->body['en'], thus overriding any
 * language negotiation rule that was previously applied.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 *
 * @ingroup themeable
 */
?>
samer1234


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









