<?php
/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * The doctype, html, head and body tags are not in this template. Instead they
 * can be found in the html.tpl.php template in this directory.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * @see bootstrap_preprocess_page()
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see bootstrap_process_page()
 * @see template_process()
 * @see html.tpl.php
 *
 * @ingroup themeable
 */

global $base_path;
$images_dir = '/public/images/';

// <?php print $base_path . drupal_get_path('theme', 'drupalcampcebu2014') .
// $images_dir . 'campcebu-sun-alone.png';

?>

<div class="above-the-fold">
  <div class="container">
    <div class="camp-logo">
      <div class="row">
        <div class="col-md-4">
          <div class="logo-container">
            <img class="logo-whale" src="<?php print $base_path . drupal_get_path('theme', 'drupalcampcebu2014') .
              $images_dir . 'campcebu-whale-alone.png'; ?>">
            <img class="logo-sun" src="public/images/campcebu-sun-alone.png">
          </div>
        </div>
        <div class="col-md-5">
          <div class="drupalcamp-title">
            <span style="color: white;">DRUPAL</span><span style="color: #f0c419">CAMP</span> <span style="color: #3b97d3" class="cebu">CEBU</span>
          </div>
        </div>
        <div class="col-md-3">
          <div class="venue-container">
            <span style="color: white;" class="date">15/16 NOVEMBER 2014</span> <span style="color: #3b97d3;" class="uni">UNIVERSITY OF</span> <span style="color: #3b97d3;" class="uni-name">SAN CARLOS</span> <span style="color: white;" class="cebucity">CEBU CITY</span>
          </div>
        </div>

        <div class="header-intro-text">
          <div class="row">
            <div class="col-md-12">
              <p>Drupalcamp Cebu is a 1.5 day conference organized by  the Drupal Cebu User Group. This is the first Drupalcamp in the Philippines, outside of Manila. We wish to bring together a variety of people interested in learning and growing skills in open-source, web development, business, DevOps, web design and more with great speakers and sessions.<br>
                Join us to learn, attend great sessions for various levels of experience, social events and cebu&#39;s specialities &#59;)</p>
            </div>
          </div>
        </div>
      </div>
    </div>
  </div>

  <div class="nav-container">
    <div class="nav">
      <div class="camp-menu">
        <div class="row">
          <div class="col-md-12">
            <ul class="menu">
              <div class="col-md-3">
                <li class="logo-title-menu logo-title-menu-hidden">
                  <span class="title-1st">DRUPAL</span><span class="title-2nd">CAMP</span>
                  <span class="title-3rd">CEBU</span>
                </li>
              </div>
              <div class="col-md-6">
                <li class="active"><a href="#">Sessions</a></li>
                <li><a href="#">Speakers</a></li>
                <li><a href="#">Venue</a></li>
                <li><a href="#">Sponsors</a></li>
                <li><a href="#" class="register">Register</a></li>
              </div>
              <div class="col-md-3"></div>
            </ul>
          </div>
        </div>
      </div>
    </div>
  </div>
</div>
</div>



<div class="camp-speakers-wave"></div>
<div class="camp-speakers">
  <div class="container">
    <div class="row">
      <div class="col-md-12 drupalcamp-speakers">
        <h3>Speakers</h3>
        <h6 class="speaker-description">Our speakers are international thinkers and doers from business, academia and activism, each bringing their view of the challenges and opportunities available to us.</h6>
        <p class="speaker-announcement">More speakers to be announced over the coming weeks.</p>
      </div>
    </div>

    <div class="speakers-list">
      <div class="row">
        <div class="col-md-3">
          <div class="speaker-info">
            <div class="img-speaker">
              <img src="public/images/spkr-melvin-collins.png">
            </div>
            <p class="speaker-name">Melvin Collins</p>
            <p class="speaker-short-bio">Drupal.com, Founder</p>
            <p class="speaker-bio">Eiusmod fringilla sollicitudin bibendum sunt hymenaeos, facilis ridiculus, vol uptatibus, phasellus laborum accusa ntium nostra adipiscing animi aliquam, facere justo do voluptatum</p>
          </div>
        </div>

        <div class="col-md-3">
          <div class="speaker-info">
            <div class="img-speaker">
              <img src="public/images/speaker2.png">
            </div>
            <p class="speaker-name">Melvin Collins</p>
            <p class="speaker-short-bio">Drupal.com, Founder</p>
            <p class="speaker-bio">Eiusmod fringilla sollicitudin bibendum sunt hymenaeos, facilis ridiculus, vol uptatibus, phasellus laborum accusa ntium nostra adipiscing animi aliquam, facere justo do voluptatum</p>
          </div>
        </div>

        <div class="col-md-3">
          <div class="speaker-info">
            <div class="img-speaker">
              <img src="public/images/speaker3.png">
            </div>
            <p class="speaker-name">Melvin Collins</p>
            <p class="speaker-short-bio">Drupal.com, Founder</p>
            <p class="speaker-bio">Eiusmod fringilla sollicitudin bibendum sunt hymenaeos, facilis ridiculus, vol uptatibus, phasellus laborum accusa ntium nostra adipiscing animi aliquam, facere justo do voluptatum</p>
          </div>
        </div>

        <div class="col-md-3">
          <div class="speaker-info">
            <div class="img-speaker">
              <img src="public/images/speaker4.png">
            </div>
            <p class="speaker-name">Melvin Collins</p>
            <p class="speaker-short-bio">Drupal.com, Founder</p>
            <p class="speaker-bio">Eiusmod fringilla sollicitudin bibendum sunt hymenaeos, facilis ridiculus, vol uptatibus, phasellus laborum accusa ntium nostra adipiscing animi aliquam, facere justo do voluptatum</p>
          </div>
        </div>
      </div>

      <div class="row">
        <div class="col-md-3">
          <div class="speaker-info">
            <div class="img-speaker">
              <img src="public/images/speaker5.png">
            </div>
            <p class="speaker-name">Melvin Collins</p>
            <p class="speaker-short-bio">Drupal.com, Founder</p>
            <p class="speaker-bio">Eiusmod fringilla sollicitudin bibendum sunt hymenaeos, facilis ridiculus, vol uptatibus, phasellus laborum accusa ntium nostra adipiscing animi aliquam, facere justo do voluptatum</p>
          </div>
        </div>

        <div class="col-md-3">
          <div class="speaker-info">
            <div class="img-speaker">
              <img src="public/images/speaker6.png">
            </div>
            <p class="speaker-name">Melvin Collins</p>
            <p class="speaker-short-bio">Drupal.com, Founder</p>
            <p class="speaker-bio">Eiusmod fringilla sollicitudin bibendum sunt hymenaeos, facilis ridiculus, vol uptatibus, phasellus laborum accusa ntium nostra adipiscing animi aliquam, facere justo do voluptatum</p>
          </div>
        </div>

        <div class="col-md-3">
          <div class="speaker-info">
            <div class="img-speaker">
              <img src="public/images/speaker7.png">
            </div>
            <p class="speaker-name">Melvin Collins</p>
            <p class="speaker-short-bio">Drupal.com, Founder</p>
            <p class="speaker-bio">Eiusmod fringilla sollicitudin bibendum sunt hymenaeos, facilis ridiculus, vol uptatibus, phasellus laborum accusa ntium nostra adipiscing animi aliquam, facere justo do voluptatum</p>
          </div>
        </div>

        <div class="col-md-3">
          <div class="speaker-info">
            <div class="img-speaker">
              <img src="public/images/speaker8.png">
            </div>
            <p class="speaker-name">Melvin Collins</p>
            <p class="speaker-short-bio">Drupal.com, Founder</p>
            <p class="speaker-bio">Eiusmod fringilla sollicitudin bibendum sunt hymenaeos, facilis ridiculus, vol uptatibus, phasellus laborum accusa ntium nostra adipiscing animi aliquam, facere justo do voluptatum</p>
          </div>
        </div>
      </div>
    </div>


  </div>
</div>

<div class="camp-sessions-wave"></div>
<div class="camp-sessions">
  <div class="container">
    <div class="row">
      <div class="col-md-12">
        <h3>Sessions</h3>
        <h6>Drupal Camp is a 2-day conference running from 9.30 am - 5.30 pm.<br>
          A lovely lunch together provides an informal way to get to know other participants and keep<br>the conversation going.</h6>
        <p>More speakers to be announced over the coming weeks.</p>
      </div>
    </div>

    <div class="row">
      <div class="col-md-1"></div>
      <div class="col-md-9">
        <ul id="camp_session_list" class="nav nav-tabs">
          <li class="active">
            <a href="#day_one" role="tab" data-toggle="tab">
              <span class="tab-title">DAY 01</span>
              <span class="tab-left-first">NOV 14</span>
              <span class="tab-left-second">SATURDAY</span>
            </a>
          </li>
          <li class="">
            <a href="#day_two" role="tab" data-toggle="tab">
              <span class="tab-title">DAY 02</span>
              <span class="tab-left-first">NOV 15</span>
              <span class="tab-left-second">SUNDAY</span>
            </a>
          </li>
        </ul>

        <div class="tab-content">
          <div class="tab-pane fade active in" id="day_one">
            <table class="table">
              <tr>
                <td class="time"><i class="fa fa-clock-o"></i>9:00 AM</td>
                <td>
                  <h4 class="activity">Registration &amp; Coffee</h4>
                  <p class="place">Hallway</p>
                </td>
              </tr>
              <tr>
                <td class="time"><i class="fa fa-clock-o"></i>9:30 AM</td>
                <td>
                  <h4 class="activity">Keynote</h4>
                  <p class="speaker">By Speaker</p>
                  <p class="place">ROOM A</p>
                </td>
              </tr>
              <tr>
                <td class="time"><i class="fa fa-clock-o"></i>10:00 AM</td>
                <td>
                  <h4 class="activity">Running Effective Meetings</h4>
                  <p class="speaker">By Speaker</p>
                  <p class="place"><span class="category">CATEGORY A</span> ROOM A</p>
                </td>
              </tr>
              <tr>
                <td></td>
                <td>
                  <h4 class="activity">The Symphony Way</h4>
                  <p class="speaker">By Speaker</p>
                  <p class="place"><span class="category">CATEGORY A</span> ROOM B</p>
                </td>
              </tr>
              <tr>
                <td></td>
                <td>
                  <h4 class="activity">Configuration management in Drupal 8</h4>
                  <p class="speaker">By Speaker</p>
                  <p class="place"><span class="category">CATEGORY A</span> ROOM C</p>
                </td>
              </tr>
              <tr>
                <td class="time"><i class="fa fa-clock-o"></i>9:30 AM</td>
                <td>
                  <h4 class="activity">Google Analytics</h4>
                  <p class="speaker">By Speaker</p>
                  <p class="place"><span class="category">CATEGORY A</span> ROOM A</p>
                </td>
              </tr>
              <tr>
                <td class="time"><i class="fa fa-clock-o"></i>9:30 AM</td>
                <td>
                  <h4 class="activity">Lunch</h4>
                  <p class="place"><span class="category">THANK YOU PROMET INC.</span></p>
                </td>
              </tr>
              <tr>
                <td class="time"><i class="fa fa-clock-o"></i>9:30 AM</td>
                <td>
                  <h4 class="activity">Introducing the Drupal 8 Console scaffolding module generator</h4>
                  <p class="speaker">By Speaker</p>
                  <p class="place"><p class="place"><span class="category">CATEGORY A</span> ROOM A</p>
                </td>
              </tr>
              <tr>
                <td class="time"><i class="fa fa-clock-o"></i>9:30 AM</td>
                <td>
                  <h4 class="activity">Securing Your Drupal Site</h4>
                  <p class="speaker">By Speaker</p>
                  <p class="place"><p class="place"><span class="category">CATEGORY A</span> ROOM A</p>
                </td>
              </tr>
            </table>
          </div>

          <div class="tab-pane fade" id="day_two">
            <table class="table">
              <tr>
                <td class="time"><i class="fa fa-clock-o"></i>9:00 AM</td>
                <td>
                  <h4 class="activity">Day 2 Registration &amp; Coffee</h4>
                  <p class="speaker">Hallway</p>
                </td>
              </tr>
              <tr>
                <td class="time"><i class="fa fa-clock-o"></i>9:30 AM</td>
                <td>
                  <h4 class="activity">Keynote</h4>
                  <p class="speaker">By Speaker</p>
                  <p class="place">Room A</p>
                </td>
              </tr>
              <tr>
                <td class="time"><i class="fa fa-clock-o"></i>10:00 AM</td>
                <td>
                  <h4 class="activity">Running Effective Meetings</h4>
                  <p class="speaker">By Speaker</p>
                  <p class="place"><i class="fa fa-clock-o"></i>Room A</p>
                </td>
              </tr>
              <tr>
                <td></td>
                <td>
                  <h4 class="activity">The Symphony Way</h4>
                  <p class="speaker">By Speaker</p>
                  <p class="place">Room A</p>
                </td>
              </tr>
              <tr>
                <td></td>
                <td>
                  <h4 class="activity">The Symphony Way</h4>
                  <p class="speaker">By Speaker</p>
                  <p class="place">Room A</p>
                </td>
              </tr>
              <tr>
                <td class="time"><i class="fa fa-clock-o"></i>9:30 AM</td>
                <td>
                  <h4 class="activity">Keynote</h4>
                  <p class="speaker">By Speaker</p>
                  <p class="place">Room A</p>
                </td>
              </tr>
              <tr>
                <td class="time"><i class="fa fa-clock-o"></i>9:30 AM</td>
                <td>
                  <h4 class="activity">Keynote</h4>
                  <p class="speaker">By Speaker</p>
                  <p class="place">Room A</p>
                </td>
              </tr>
              <tr>
                <td class="time"><i class="fa fa-clock-o"></i>9:30 AM</td>
                <td>
                  <h4 class="activity">Keynote</h4>
                  <p class="speaker">By Speaker</p>
                  <p class="place">Room A</p>
                </td>
              </tr>
              <tr>
                <td class="time"><i class="fa fa-clock-o"></i><i class="fa fa-clock-o"></i>9:30 AM</td>
                <td>
                  <h4 class="activity">Keynote</h4>
                  <p class="speaker">By Speaker</p>
                  <p class="place">Room A</p>
                </td>
              </tr>
            </table>
          </div>
        </div>
      </div>
    </div>
  </div>
</div>

<div class="camp-venue">
  <div class="container">
    <div class="row">
      <div class="col-md-12">
        <div class="venue-info">
          <h3 class="venue-label">Venue</h3>
          <p class="venue-address">UNIVERSITY OF SAN CARLOS - Talamban Campus. Nasipit, Talamban Cebu City.</p>
        </div>
        <iframe src="https://www.google.com/maps/embed?pb=!1m16!1m12!1m3!1d3924.8531820579547!2d123.9109376342627!3d10.353622172260941!2m3!1f0!2f0!3f0!3m2!1i1024!2i768!4f13.1!2m1!1sUniversity+of+San+Carlos%2C+Talamban!5e0!3m2!1sen!2sph!4v1409822043976" width="100%" height="700px" frameborder="0" style="border:0"></iframe>
      </div>
    </div>
  </div>
</div>

<div class="camp-sponsors">
  <div class="container">
    <div class="row">
      <div class="col-md-12">
        <h3>SPONSORS</h3>
        <h6>Check out some of the people that made this happen. Interested in <a href="">becoming a sponsor</a>?</h6>
      </div>


      <div class="row gold-sponsors">
        <p>GOLD</p>
        <div class="col-md-12">
          <img src="public/images/logo-small.png">
        </div>
      </div>

      <div class="row silver-sponsors">
        <p>SILVER</p>
        <div class="col-md-3">
          <img src="public/images/logo-small.png">
        </div>
        <div class="col-md-3">
          <img src="public/images/logo-small.png">
        </div>
        <div class="col-md-3">
          <img src="public/images/logo-small.png">
        </div>
        <div class="col-md-3">
          <img src="public/images/logo-small.png">
        </div>
      </div>

      <div class="row bronze-sponsors">
        <p>BRONZE</p>
        <div class="col-md-2">
          <img src="public/images/logo-small.png">
        </div>
        <div class="col-md-2">
          <img src="public/images/logo-small.png">
        </div>
        <div class="col-md-2">
          <img src="public/images/logo-small.png">
        </div>
        <div class="col-md-2">
          <img src="public/images/logo-small.png">
        </div>
        <div class="col-md-2">
          <img src="public/images/logo-small.png">
        </div>
        <div class="col-md-2">
          <img src="public/images/logo-small.png">
        </div>
      </div>

      <div class="col-md-4">
        <p>FOOD SPONSORS</p>
        <div class="row food-sponsors">
          <img src="public/images/logo-small.png">
        </div>
      </div>
      <div class="col-md-4">
        <p>SATURDAY NIGHT</p>
        <div class="row coffee-sponsors">
          <img src="public/images/logo-small.png">
        </div>
      </div>
      <div class="col-md-4">
        <p>COFFEE SPONSOR</p>
        <div class="row saturday-sponsors">
          <img src="public/images/logo-small.png">
        </div>
      </div>
    </div>

  </div>
</div>

<div class="camp-footer">
  <div class="container">
    <div class="row">
      <div class="col-md-7">
        <h3>ABOUT</h3>
        <p class="footer-description">This camp is brought to you by the Drupal Cebu User Group.
          All the sources of this website based on Drupal are Open Source, under GNU GENERAL PUBLIC LICENSE on <a href="#">github.com</a></p>
      </div>
      <div class="col-md-5">
        <h3>CONNECT</h3>
        <p class="footer-description">We tweet
          <a href="#">@DrupalcampCebu</a>
          <a href="#">Drupal Cebu on Facebook</a>
          More about the <a href="#">Drupal cebu user group</a>
        </p>
      </div>
    </div> <!-- row -->
    <div class="row">
      <div class="col-md-12">
        <p class="copyright">&copy; Copyright 2014 Drupal Camp Cebu. All rights reserved. Drupal is a <a href="#">registered trademark</a> of <a href="#">Dries Buytaert</a>.<br>
          Logo by <a href="#">Lord Geltzdale de Vera</a>. Design by <a href="#">Rein Figuracion</a>. Web development by these <a href="#">amazing guys!</a></p>
      </div>
    </div> <!-- row -->
  </div> <!-- container -->
</div> <!-- camp-footer -->

<script src="lib/jquery/jquery.js"></script>
<script type="text/javascript" src="lib/bootstrap/js/bootstrap.js"></script>
<script type="text/javascript" src="public/js/site.js"></script>
<script src="public/js/jquery.js"></script>
<script type="text/javascript">
  // Function to fix the menu when scrolling.
  jQuery("document").ready(function($){
    var nav = $('.nav-container');
    $(window).scroll(function () {
      if ($(this).scrollTop() > 670) {
        nav.addClass("f-nav");
        nav.addClass("logo-title-menu");
        $( ".logo-title-menu-hidden" ).removeClass("hide");
      } else {
        nav.removeClass("f-nav");
        nav.removeClass("logo-title-menu");
        $( ".logo-title-menu-hidden" ).addClass("hide");
      }
    });
  });
</script>
