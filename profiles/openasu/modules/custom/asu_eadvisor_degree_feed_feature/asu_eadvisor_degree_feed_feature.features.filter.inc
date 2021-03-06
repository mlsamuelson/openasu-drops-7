<?php
/**
 * @file
 * asu_eadvisor_degree_feed_feature.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function asu_eadvisor_degree_feed_feature_filter_default_formats() {
  $formats = array();

  // Exported format: ASU Feeds Text Format
  $formats['asu_feeds_text_format'] = array(
    'format' => 'asu_feeds_text_format',
    'name' => 'ASU Feeds Text Format',
    'cache' => '1',
    'status' => '1',
    'weight' => '0',
    'filters' => array(
      'filter_url' => array(
        'weight' => '-50',
        'status' => '1',
        'settings' => array(
          'filter_url_length' => '72',
        ),
      ),
      'filter_html' => array(
        'weight' => '-49',
        'status' => '1',
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <b> <i> <cite> <code> <pre> <ul> <ol> <li> <dl> <dt> <dd> <p> <h1> <h2> <h3> <h4> <h5> <h6> <img> <table> <thead> <tbody> <tr> <th> <td> <div> <span> <blockquote> <br> <hr> <small> <ins> <big> <sub> <sup>',
          'filter_html_help' => 0,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => '-46',
        'status' => '1',
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
