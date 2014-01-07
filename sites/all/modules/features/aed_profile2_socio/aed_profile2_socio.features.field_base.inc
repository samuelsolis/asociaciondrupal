<?php
/**
 * @file
 * aed_profile2_socio.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function aed_profile2_socio_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_apellidos'
  $field_bases['field_apellidos'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_apellidos',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 50,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_exponer_mi_perfil'
  $field_bases['field_exponer_mi_perfil'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_exponer_mi_perfil',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'false',
        1 => 'true',
      ),
      'allowed_values_function' => '',
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_foto'
  $field_bases['field_foto'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_foto',
    'foreign keys' => array(
      'fid' => array(
        'columns' => array(
          'fid' => 'fid',
        ),
        'table' => 'file_managed',
      ),
    ),
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 1,
      'profile2_private' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_idiomas'
  $field_bases['field_idiomas'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_idiomas',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Abkhazian' => 'Abkhazian',
        'Afar' => 'Afar',
        'Afrikaans' => 'Afrikaans',
        'Akan' => 'Akan',
        'Albanian' => 'Albanian',
        'Amharic' => 'Amharic',
        'Arabic' => 'Arabic',
        'Armenian' => 'Armenian',
        'Assamese' => 'Assamese',
        'Avar' => 'Avar',
        'Avestan' => 'Avestan',
        'Aymara' => 'Aymara',
        'Azerbaijani' => 'Azerbaijani',
        'Bambara' => 'Bambara',
        'Bashkir' => 'Bashkir',
        'Basque' => 'Basque',
        'Belarusian' => 'Belarusian',
        'Bengali' => 'Bengali',
        'Bhutani' => 'Bhutani',
        'Bihari' => 'Bihari',
        'Bislama' => 'Bislama',
        'Bosnian' => 'Bosnian',
        'Breton' => 'Breton',
        'Bulgarian' => 'Bulgarian',
        'Burmese' => 'Burmese',
        'Cambodian' => 'Cambodian',
        'Catalan' => 'Catalan',
        'Chamorro' => 'Chamorro',
        'Chechen' => 'Chechen',
        'Chichewa' => 'Chichewa',
        'Chinese, Simplified' => 'Chinese, Simplified',
        'Chinese, Traditional' => 'Chinese, Traditional',
        'Chuvash' => 'Chuvash',
        'Cornish' => 'Cornish',
        'Corsican' => 'Corsican',
        'Cree' => 'Cree',
        'Croatian' => 'Croatian',
        'Czech' => 'Czech',
        'Danish' => 'Danish',
        'Dutch' => 'Dutch',
        'English" selected="selected' => 'English',
        'Esperanto' => 'Esperanto',
        'Estonian' => 'Estonian',
        'Ewe' => 'Ewe',
        'Faeroese' => 'Faeroese',
        'Filipino' => 'Filipino',
        'Fiji' => 'Fiji',
        'Finnish' => 'Finnish',
        'French' => 'French',
        'Frisian' => 'Frisian',
        'Fulah' => 'Fulah',
        'Galician' => 'Galician',
        'Georgian' => 'Georgian',
        'German' => 'German',
        'Greek' => 'Greek',
        'Greenlandic' => 'Greenlandic',
        'Guarani' => 'Guarani',
        'Gujarati' => 'Gujarati',
        'Hausa' => 'Hausa',
        'Hebrew' => 'Hebrew',
        'Herero' => 'Herero',
        'Hindi' => 'Hindi',
        'Hiri Motu' => 'Hiri Motu',
        'Hungarian' => 'Hungarian',
        'Icelandic' => 'Icelandic',
        'Igbo' => 'Igbo',
        'Indonesian' => 'Indonesian',
        'Interlingua' => 'Interlingua',
        'Interlingue' => 'Interlingue',
        'Inuktitut' => 'Inuktitut',
        'Inupiak' => 'Inupiak',
        'Irish' => 'Irish',
        'Italian" selected="selected' => 'Italian',
        'Japanese' => 'Japanese',
        'Javanese' => 'Javanese',
        'Kannada' => 'Kannada',
        'Kanuri' => 'Kanuri',
        'Kashmiri' => 'Kashmiri',
        'Kazakh' => 'Kazakh',
        'Kikuyu' => 'Kikuyu',
        'Kinyarwanda' => 'Kinyarwanda',
        'Kirghiz' => 'Kirghiz',
        'Kirundi' => 'Kirundi',
        'Komi' => 'Komi',
        'Kongo' => 'Kongo',
        'Korean' => 'Korean',
        'Kurdish' => 'Kurdish',
        'Kwanyama' => 'Kwanyama',
        'Laothian' => 'Laothian',
        'Latin' => 'Latin',
        'Latvian' => 'Latvian',
        'Lingala' => 'Lingala',
        'Lithuanian' => 'Lithuanian',
        'Luganda' => 'Luganda',
        'Luxembourgish' => 'Luxembourgish',
        'Macedonian' => 'Macedonian',
        'Malagasy' => 'Malagasy',
        'Malay' => 'Malay',
        'Malayalam' => 'Malayalam',
        'Maldivian' => 'Maldivian',
        'Maltese' => 'Maltese',
        'Manx' => 'Manx',
        'Maori' => 'Maori',
        'Marathi' => 'Marathi',
        'Marshallese' => 'Marshallese',
        'Moldavian' => 'Moldavian',
        'Mongolian' => 'Mongolian',
        'Nauru' => 'Nauru',
        'Navajo' => 'Navajo',
        'Ndonga' => 'Ndonga',
        'Nepali' => 'Nepali',
        'North Ndebele' => 'North Ndebele',
        'Northern Sami' => 'Northern Sami',
        'Norwegian Bokmål' => 'Norwegian Bokmål',
        'Norwegian Nynorsk' => 'Norwegian Nynorsk',
        'Occitan' => 'Occitan',
        'Old Slavonic' => 'Old Slavonic',
        'Oriya' => 'Oriya',
        'Oromo' => 'Oromo',
        'Ossetian' => 'Ossetian',
        'Pali' => 'Pali',
        'Pashto' => 'Pashto',
        'Persian' => 'Persian',
        'Polish' => 'Polish',
        'Portuguese, Brazil' => 'Portuguese, Brazil',
        'Portuguese, Portugal' => 'Portuguese, Portugal',
        'Punjabi' => 'Punjabi',
        'Quechua' => 'Quechua',
        'Rhaeto-Romance' => 'Rhaeto-Romance',
        'Romanian' => 'Romanian',
        'Russian' => 'Russian',
        'Samoan' => 'Samoan',
        'Sango' => 'Sango',
        'Sanskrit' => 'Sanskrit',
        'Sardinian' => 'Sardinian',
        'Scots Gaelic' => 'Scots Gaelic',
        'Serbian' => 'Serbian',
        'Serbo-Croatian' => 'Serbo-Croatian',
        'Sesotho' => 'Sesotho',
        'Setswana' => 'Setswana',
        'Shona' => 'Shona',
        'Sindhi' => 'Sindhi',
        'Singhalese' => 'Singhalese',
        'Siswati' => 'Siswati',
        'Slovak' => 'Slovak',
        'Slovenian' => 'Slovenian',
        'Somali' => 'Somali',
        'South Ndebele' => 'South Ndebele',
        'Spanish" selected="selected' => 'Spanish',
        'Sudanese' => 'Sudanese',
        'Swahili' => 'Swahili',
        'Swedish' => 'Swedish',
        'Tagalog' => 'Tagalog',
        'Tahitian' => 'Tahitian',
        'Tajik' => 'Tajik',
        'Tamil' => 'Tamil',
        'Tatar' => 'Tatar',
        'Telugu' => 'Telugu',
        'Thai' => 'Thai',
        'Tibetan' => 'Tibetan',
        'Tigrinya' => 'Tigrinya',
        'Tonga' => 'Tonga',
        'Tsonga' => 'Tsonga',
        'Turkish' => 'Turkish',
        'Turkmen' => 'Turkmen',
        'Twi' => 'Twi',
        'Uighur' => 'Uighur',
        'Ukrainian' => 'Ukrainian',
        'Urdu' => 'Urdu',
        'Uzbek' => 'Uzbek',
        'Venda' => 'Venda',
        'Vietnamese' => 'Vietnamese',
        'Welsh' => 'Welsh',
        'Wolof' => 'Wolof',
        'Xhosa' => 'Xhosa',
        'Yiddish' => 'Yiddish',
        'Yoruba' => 'Yoruba',
        'Zhuang' => 'Zhuang',
        'Zulu' => 'Zulu',
      ),
      'allowed_values_function' => '',
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_nombre'
  $field_bases['field_nombre'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_nombre',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 50,
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_pagina_web'
  $field_bases['field_pagina_web'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_pagina_web',
    'field_permissions' => array(
      'type' => 2,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 60,
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_pais'
  $field_bases['field_pais'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_pais',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Afghanistan' => 'Afghanistan',
        'Albania' => 'Albania',
        'Algeria' => 'Algeria',
        'American Samoa' => 'American Samoa',
        'Andorra' => 'Andorra',
        'Angola' => 'Angola',
        'Anguilla' => 'Anguilla',
        'Antigua and Barbuda' => 'Antigua and Barbuda',
        'Argentina' => 'Argentina',
        'Armenia' => 'Armenia',
        'Ascension Island' => 'Ascension Island',
        'Australia' => 'Australia',
        'Austria' => 'Austria',
        'Azerbaijan' => 'Azerbaijan',
        'Bahamas' => 'Bahamas',
        'Bahrain' => 'Bahrain',
        'Bangladesh' => 'Bangladesh',
        'Barbados' => 'Barbados',
        'Belarus' => 'Belarus',
        'Belgium' => 'Belgium',
        'Belize' => 'Belize',
        'Benin' => 'Benin',
        'Bermuda' => 'Bermuda',
        'Bhutan' => 'Bhutan',
        'Bolivia' => 'Bolivia',
        'Bosnia and Herzegovina' => 'Bosnia and Herzegovina',
        'Botswana' => 'Botswana',
        'Brazil' => 'Brazil',
        'British Indian Ocean Territory' => 'British Indian Ocean Territory',
        'Brunei Darussalam' => 'Brunei Darussalam',
        'Bulgaria' => 'Bulgaria',
        'Burkina Faso' => 'Burkina Faso',
        'Burundi' => 'Burundi',
        'Camaroon' => 'Camaroon',
        'Cambodia' => 'Cambodia',
        'Cameroon' => 'Cameroon',
        'Canada' => 'Canada',
        'Cape Verde' => 'Cape Verde',
        'Cayman Islands' => 'Cayman Islands',
        'Central African Republic' => 'Central African Republic',
        'Chad' => 'Chad',
        'Chile' => 'Chile',
        'China' => 'China',
        'Colombia' => 'Colombia',
        'Comoros' => 'Comoros',
        'Congo' => 'Congo',
        'Cook Islands' => 'Cook Islands',
        'Costa Rica' => 'Costa Rica',
        'Cote D Ivoire' => 'Cote D Ivoire',
        'Croatia' => 'Croatia',
        'Cuba' => 'Cuba',
        'Cyprus' => 'Cyprus',
        'Czech Republic' => 'Czech Republic',
        'Denmark' => 'Denmark',
        'Djibouti' => 'Djibouti',
        'Dominica' => 'Dominica',
        'Dominican Republic' => 'Dominican Republic',
        'Ecuador' => 'Ecuador',
        'Egypt' => 'Egypt',
        'El Salvador' => 'El Salvador',
        'Equatorial Guinea' => 'Equatorial Guinea',
        'Eritrea' => 'Eritrea',
        'Estonia' => 'Estonia',
        'Ethiopia' => 'Ethiopia',
        'Falkland Islands' => 'Falkland Islands',
        'Faroe Islands' => 'Faroe Islands',
        'Federated States of Micronesia' => 'Federated States of Micronesia',
        'Fiji' => 'Fiji',
        'Finland' => 'Finland',
        'France' => 'France',
        'French Guiana' => 'French Guiana',
        'French Polynesia' => 'French Polynesia',
        'Gabon' => 'Gabon',
        'Georgia' => 'Georgia',
        'Germany' => 'Germany',
        'Ghana' => 'Ghana',
        'Greece' => 'Greece',
        'Greenland' => 'Greenland',
        'Grenada' => 'Grenada',
        'Guadeloupe' => 'Guadeloupe',
        'Guatemala' => 'Guatemala',
        'Guam' => 'Guam',
        'Guinea' => 'Guinea',
        'Guinea Bissau' => 'Guinea Bissau',
        'Guyana' => 'Guyana',
        'Haiti' => 'Haiti',
        'Holy See (Vatican City)' => 'Holy See (Vatican City)',
        'Honduras' => 'Honduras',
        'Hong Kong' => 'Hong Kong',
        'Hungary' => 'Hungary',
        'Iceland' => 'Iceland',
        'India' => 'India',
        'Indonesia' => 'Indonesia',
        'Iran' => 'Iran',
        'Iraq' => 'Iraq',
        'Ireland' => 'Ireland',
        'Isle of Man' => 'Isle of Man',
        'Israel' => 'Israel',
        'Italy' => 'Italy',
        'Jamaica' => 'Jamaica',
        'Japan' => 'Japan',
        'Jordan' => 'Jordan',
        'Kazakhstan' => 'Kazakhstan',
        'Kenya' => 'Kenya',
        'Kiribati' => 'Kiribati',
        'Korea' => 'Korea',
        'Kosovo' => 'Kosovo',
        'Kuwait' => 'Kuwait',
        'Kyrgyzstan' => 'Kyrgyzstan',
        'Laos' => 'Laos',
        'Latvia' => 'Latvia',
        'Lebanon' => 'Lebanon',
        'Lesotho' => 'Lesotho',
        'Liberia' => 'Liberia',
        'Libya' => 'Libya',
        'Liechtenstein' => 'Liechtenstein',
        'Lithuania' => 'Lithuania',
        'Luxembourg' => 'Luxembourg',
        'Macau' => 'Macau',
        'Macedonia' => 'Macedonia',
        'Madagascar' => 'Madagascar',
        'Malawi' => 'Malawi',
        'Malaysia' => 'Malaysia',
        'Maldives' => 'Maldives',
        'Mali' => 'Mali',
        'Malta' => 'Malta',
        'Marshall Islands' => 'Marshall Islands',
        'Martinique' => 'Martinique',
        'Mauritius' => 'Mauritius',
        'Mayotte' => 'Mayotte',
        'Mexico' => 'Mexico',
        'Moldova' => 'Moldova',
        'Monaco' => 'Monaco',
        'Mongolia' => 'Mongolia',
        'Montenegro' => 'Montenegro',
        'Montserrat' => 'Montserrat',
        'Morocco' => 'Morocco',
        'Mozambique' => 'Mozambique',
        'Myanmar' => 'Myanmar',
        'Namibia' => 'Namibia',
        'Nauru' => 'Nauru',
        'Nepal' => 'Nepal',
        'Netherlands' => 'Netherlands',
        'Netherlands Antilles' => 'Netherlands Antilles',
        'New Caledonia' => 'New Caledonia',
        'New Zealand' => 'New Zealand',
        'Nicaragua' => 'Nicaragua',
        'Niger' => 'Niger',
        'Nigeria' => 'Nigeria',
        'Niue' => 'Niue',
        'Norfolk Island' => 'Norfolk Island',
        'Northern Mariana Islands' => 'Northern Mariana Islands',
        'Norway' => 'Norway',
        'Oman' => 'Oman',
        'Pakistan' => 'Pakistan',
        'Palau' => 'Palau',
        'Palestine' => 'Palestine',
        'Panama' => 'Panama',
        'Papua New Guinea' => 'Papua New Guinea',
        'Paraguay' => 'Paraguay',
        'Peru' => 'Peru',
        'Philippines' => 'Philippines',
        'Pitcairn' => 'Pitcairn',
        'Poland' => 'Poland',
        'Portugal' => 'Portugal',
        'Puerto Rico' => 'Puerto Rico',
        'Qatar' => 'Qatar',
        'Reunion' => 'Reunion',
        'Romania' => 'Romania',
        'Russian Federation' => 'Russian Federation',
        'Rwanda' => 'Rwanda',
        'Saint Vincent and the Grenadines' => 'Saint Vincent and the Grenadines',
        'San Marino' => 'San Marino',
        'Sao Tome and Principe' => 'Sao Tome and Principe',
        'Saudi Arabia' => 'Saudi Arabia',
        'Senegal' => 'Senegal',
        'Serbia' => 'Serbia',
        'Seychelles' => 'Seychelles',
        'Sierra Leone' => 'Sierra Leone',
        'Singapore' => 'Singapore',
        'Slovakia' => 'Slovakia',
        'Slovenia' => 'Slovenia',
        'Solomon Islands' => 'Solomon Islands',
        'Somalia' => 'Somalia',
        'South Africa' => 'South Africa',
        'South Georgia' => 'South Georgia',
        'Spain" selected="selected' => 'Spain',
        'Sri Lanka' => 'Sri Lanka',
        'St. Kitts and Nevis' => 'St. Kitts and Nevis',
        'St. Lucia' => 'St. Lucia',
        'St. Pierre and Miquelon' => 'St. Pierre and Miquelon',
        'Sudan' => 'Sudan',
        'Suriname' => 'Suriname',
        'Swaziland' => 'Swaziland',
        'Sweden' => 'Sweden',
        'Switzerland' => 'Switzerland',
        'Syrian Arab Republic' => 'Syrian Arab Republic',
        'Taiwan' => 'Taiwan',
        'Tajikistan' => 'Tajikistan',
        'Tanzania' => 'Tanzania',
        'Thailand' => 'Thailand',
        'The Gambia' => 'The Gambia',
        'Togo' => 'Togo',
        'Tokelau' => 'Tokelau',
        'Tonga' => 'Tonga',
        'Trinidad and Tobago' => 'Trinidad and Tobago',
        'Tunisia' => 'Tunisia',
        'Turkey' => 'Turkey',
        'Turkmenistan' => 'Turkmenistan',
        'Turks and Caicos Islands' => 'Turks and Caicos Islands',
        'Tuvalu' => 'Tuvalu',
        'Uganda' => 'Uganda',
        'Ukraine' => 'Ukraine',
        'United Arab Emirates' => 'United Arab Emirates',
        'United Kingdom' => 'United Kingdom',
        'United States' => 'United States',
        'Uruguay' => 'Uruguay',
        'Uzbekistan' => 'Uzbekistan',
        'Vanuatu' => 'Vanuatu',
        'Venezuela' => 'Venezuela',
        'Viet Nam' => 'Viet Nam',
        'Virgin Islands' => 'Virgin Islands',
        'Western Samoa' => 'Western Samoa',
        'Yemen' => 'Yemen',
        'Yugoslavia' => 'Yugoslavia',
        'Zaire' => 'Zaire',
        'Zambia' => 'Zambia',
        'Zimbabwe' => 'Zimbabwe',
      ),
      'allowed_values_function' => '',
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_perfil_en_drupal_org'
  $field_bases['field_perfil_en_drupal_org'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_perfil_en_drupal_org',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 40,
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_perfil_facebook'
  $field_bases['field_perfil_facebook'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_perfil_facebook',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 60,
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_perfil_google_plus'
  $field_bases['field_perfil_google_plus'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_perfil_google_plus',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 60,
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_perfil_linkedin'
  $field_bases['field_perfil_linkedin'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_perfil_linkedin',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 60,
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_perfil_twitter'
  $field_bases['field_perfil_twitter'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_perfil_twitter',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 60,
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_que_haces_en_drupal'
  $field_bases['field_que_haces_en_drupal'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_que_haces_en_drupal',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_sexo'
  $field_bases['field_sexo'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sexo',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'hombre' => 'Hombre',
        'mujer' => 'Mujer',
      ),
      'allowed_values_function' => '',
      'profile2_private' => 0,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  return $field_bases;
}