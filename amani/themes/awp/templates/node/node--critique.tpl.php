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


<?php if ($page){print "";}
else{ ?>
    <?php $theme_path = drupal_get_path('theme', variable_get('theme_default', NULL));
    $theme_path = '/'.$theme_path.'/images/indicators/';?>

    <!------------------------------------------------First Column----------------------------------------------------------------->
    <div id="left-wrapper" class="block block-views contextual-links-region even left-wrapper">


        <div class=" view-aidwatch-front-page-blocks view-display-id-block f-left-block ">



            <div class="view-content">

                <!-------------------------------- Ceasfire -------------------------------->

                <div class="views-row views-row-1  views-row-first row-days">
                    <?php
                    $now = time(); // or your date as well
                    $your_date = strtotime("2014-08-26");
                    $datediff = $now - $your_date;
                    $number_days = ($datediff/(60*60*24));
                    ?>
                    <div class="views-field views-field-field-image">        <div class="field-content"><a href="<?php if(!empty($node->field_days_link)){ print ($node->field_days_link[und][0][url]);}?>"><img typeof="foaf:Image" src="<?php print $theme_path.'calendar.png';?>" width="104" height="91" alt=""></a></div>  </div>
                    <div class="views-field views-field-title">        <span class="field-content"><a href="<?php if(!empty($node->field_days_link)){print ($node->field_days_link[und][0][url]);}?>"><?php print t('Days Since Ceasefire');?></a></span>  </div>
                    <div class="views-field views-field-field-text big">        <div class="field-content"><?php print floor($number_days);?></div>  </div>
                    <div class="views-field views-field-title-1">        <span class="field-content"><a href="<?php if(!empty($node->field_days_link)){ print ($node->field_days_link[und][0][url]);}?>"><?php print t('Read More');?></a></span>  </div>
                </div>



                <!-------------------------------- Trucks -------------------------------->

                <div class="views-row views-row-2 views-row-odd views-row-last row-trucks">

                    <div class="views-field views-field-field-image">        <div class="field-content"><a href="<?php if(!empty($node->field_trucks_link)) {
                                print ($node->field_trucks_link[und][0][url]);
                            }?>"><img typeof="foaf:Image" src="<?php print $theme_path.'truck.png';?>" width="116" height="77" alt=""></a></div>  </div>
                    <div class="views-field views-field-title">        <span class="field-content"><a href="<?php if(!empty($node->field_trucks_link)){
                                print ($node->field_trucks_link[und][0][url]);
                            }?>"><?php print t('Trucks Delivered vs. Needed');?></a></span>  </div>
                    <div class="views-field views-field-field-text">        <div class="field-content">    <?php if(!empty($node->field_trucks_delivered)){
                                print $node->field_trucks_delivered[und][0][value];
                            }?> /      <?php if(!empty($node->field_trucks_needed)){
                                print $node->field_trucks_needed[und][0][value];
                            }?> </div>  </div>
                    <div class="views-field views-field-title-1">        <span class="field-content"><a href="<?php if(!empty($node->field_trucks_link)){
                                print ($node->field_trucks_link[und][0][url]);
                            }?>"><?php print t('Read More');?></a></span>  </div>
                </div>

            </div>
        </div>
    </div>

    <!------------------------------------------------Second Column----------------------------------------------------------------->

    <div id="center-wrapper" class="block block-views  odd center-wrapper">

        <div class=" view-aidwatch-front-page-blocks view-display-id-block_1 f-center-block">



            <div class="view-content">




                <!-------------------------------- people Displaced -------------------------------->
                <div class="views-row views-row-1 views-row-odd views-row-first row-people">

                    <div class="views-field views-field-field-image">        <div class="field-content"><a href="<?php if(!empty($node->field_people_link)):
                                print ($node->field_people_link[und][0][url]);
                            endif;?>"><img typeof="foaf:Image" src="<?php print $theme_path.'displace.png'?>" width="138" height="111" alt=""></a></div>  </div>
                    <div class="views-field views-field-title">        <span class="field-content"><a href="<?php if(!empty($node->field_people_link)):
                                print ($node->field_people_link[und][0][url]);
                            endif;?>"><?php print t('People Still Displaced');?></a></span>  </div>
                    <div class="views-field views-field-field-text">        <div class="field-content">    <?php if(!empty($node->field_people_displaced)):
                                print $node->field_people_displaced[und][0][value];
                            endif;?>
                            <div class="comments">
                                <?php if(!empty($node->field_people_comment)):
                                    print $node->field_people_comment[und][0][value];
                                endif;?>
                            </div>
                        </div>  </div>
                    <div class="views-field views-field-title-1">        <span class="field-content"><a href="<?php if(!empty($node->field_people_link)):
                                print ($node->field_people_link[und][0][url]);
                            endif;?>"><?php print t('Read More');?></a></span>  </div>
                </div>

                <!-------------------------------- Homes repaired -------------------------------->
                <div class="views-row views-row-2 views-row-even views-row-last row-home">

                    <div class="views-field views-field-field-image">        <div class="field-content"><a href="    <?php if(!empty($node->field_home_link)):
                                print ($node->field_home_link[und][0][url]);
                            endif;?>"><img typeof="foaf:Image" src="<?php print $theme_path.'hummer.png';?>" width="84" height="112" alt=""></a></div>  </div>
                    <div class="views-field views-field-title">        <span class="field-content"><a href="    <?php if(!empty($node->field_home_link)):
                                print ($node->field_home_link[und][0][url]);
                            endif;?>"><?php print t('Homes repaired and rebuilt');?> </a></span>  </div>
                    <div class="views-field views-field-field-text">
                        <div class="field-content">  <?php if(!empty($node->field_home_rebuilt)):
                                print $node->field_home_rebuilt[und][0][value];
                            endif;?> /       <?php if(!empty($node->field_home_destroyed)):
                                print $node->field_home_destroyed[und][0][value];
                            endif;?> </div>  </div>
                    <div class="views-field views-field-title-1">        <span class="field-content"><a href="    <?php if(!empty($node->field_home_link)):
                                print ($node->field_home_link[und][0][url]);
                            endif;?>"><?php print t('Read More');?></a></span>  </div>
                </div>

            </div>
        </div>
    </div>




    <!--------------------------------------------Third Column------------------------------------------------->


    <div id="right-wrapper" class="block block-views  even right-wrapper">

        <div class=" view-aidwatch-front-page-blocks view-display-id-block_2 f-right-block">

            <div class="view-content">


                <!-------------------------------- Pledged Amount -------------------------------->
                <div class="views-row views-row-2 views-row-even views-row-first  row-pledged">

                    <div class="views-field views-field-field-image">        <div class="field-content"><a href=" <?php if(!empty($node->field_pledged_link)):
                                print ($node->field_pledged_link[und][0][url]);
                            endif;?>"><img typeof="foaf:Image" src="<?php print $theme_path.'dollar.png'?>" width="69" height="103" alt=""></a></div>  </div>
                    <div class="views-field views-field-title">        <span class="field-content"><a href=" <?php if(!empty($node->field_pledged_link)):
                                print ($node->field_pledged_link[und][0][url]);
                            endif;?>"><?php print t('Amount pledged and paid');?> </a></span>  </div>
                    <div class="views-field views-field-field-text">        <div class="field-content">   <?php if(!empty($node->field_pledged_amount)):
                                print $node->field_pledged_amount[und][0][value];
                            endif;?> /               <?php if(!empty($node->field_paid_amount)):
                                print $node->field_paid_amount[und][0][value];
                            endif;?></div>  </div>
                    <div class="views-field views-field-title-1">        <span class="field-content"><a href=" <?php if(!empty($node->field_pledged_link)):
                                print ($node->field_pledged_link[und][0][url]);
                            endif;?>"><?php print t('Read More');?></a></span>  </div>
                </div>

                <!-------------------------------- Average Temperature -------------------------------->
                <div class="views-row views-row-1 views-row-odd views-row-last row-temperature">

                    <div class="views-field views-field-field-image">        <div class="field-content"><a href="<?php if(!empty($node->field_temperature_link)):
                                print ($node->field_temperature_link[und][0][url]);
                            endif;?>"><img typeof="foaf:Image" src="<?php print $theme_path.'temp.png';?>" width="84" height="130" alt=""></a></div>  </div>
                    <div class="views-field views-field-title">        <span class="field-content"><a href="<?php if(!empty($node->field_temperature_link)):
                                print ($node->field_temperature_link[und][0][url]);
                            endif;?>"><?php print t('Average Temperature');?></a></span>  </div>
                    <div class="views-field views-field-field-text big">
                        <div class="field-content"><?php if(!empty($node->field_temperature_min)):
                                print $node->field_temperature_min[und][0][value];
                            endif;?>-<?php if(!empty($node->field_temperature_max)):
                                print $node->field_temperature_max[und][0][value];
                            endif;?></div>  </div>


                    <div class="views-field views-field-title-1">        <span class="field-content"><a href="<?php if(!empty($node->field_temperature_link)):
                                print ($node->field_temperature_link[und][0][url]);
                            endif;?>"><?php print t('Read More');?></a></span>  </div>
                </div>




            </div>

        </div>
    </div>


<?php }?>










