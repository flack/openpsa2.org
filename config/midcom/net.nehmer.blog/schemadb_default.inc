'default' => array
(
    'description' => 'article',
    'fields'      => array
    (
        'name' => Array
        (
            // COMPONENT-REQUIRED
            'title'   => 'url name',
            'storage' => 'name',
            'type'    => 'urlname',
            'widget'  => 'text',
            'type_config' => array
            (
                'allow_catenate' => true,
            ),
        ),
        'url' => Array
        (
            'title'   => 'URL',
            'storage' => 'url',
            'type'    => 'text',
            'widget'  => 'text',
        ),
        'title' => Array
        (
            // COMPONENT-REQUIRED
            'title' => 'title',
            'storage' => 'title',
            'required' => true,
            'type' => 'text',
            'widget' => 'text',
        ),
        'abstract' => Array
        (
            // COMPONENT-REQUIRED
            'title' => 'abstract',
            'storage' => 'abstract',
            'type' => 'text',
            'widget' => 'textarea',
        ),
        'content' => Array
        (
            // COMPONENT-REQUIRED
            'title' => 'content',
            'storage' => 'content',
            'required' => true,
            'type' => 'text',
            'type_config' => Array 
            ( 
                'output_mode' => 'html' 
            ),
            'widget' => 'tinymce',
        ),
        'categories' => Array
        (
            'title' => midcom::get('i18n')->get_string('categories', 'net.nehmer.blog'), // No idea why this didn't translate
            'storage' => 'extra1',
            'type' => 'select',
            'widget' => 'select',
            'type_config' => Array 
            ( 
                'options'        => Array('Release'),
                'allow_other'    => true,
                'allow_multiple' => true,
                'multiple_storagemode' => 'imploded_wrapped',
            ),    
            'widget_config' => Array 
            ( 
                'height' => 3,
            ),
        ),  
        'related' => array
        (
            'title' => 'related stories',
            'storage' => 'extra3',
            'type' => 'select',
            'type_config' => array
            (
                 'require_corresponding_option' => false,
                 'allow_multiple' => true,
                 'options' => array(),
                 'multiple_storagemode' => 'imploded_wrapped',
            ),
            'widget' => 'chooser',
            'widget_config' => array
            (
                'clever_class' => 'article',
            ),        
        ),
        'image' => Array
        (
            'title' => 'image',
            'storage' => null,
            'type' => 'image',
            'type_config' => Array
            (
                'filter_chain' => 'resize(400,300)',
                'auto_thumbnail' => Array(80,80),
            ),
            'widget' => 'image',
        ),
    ),
),