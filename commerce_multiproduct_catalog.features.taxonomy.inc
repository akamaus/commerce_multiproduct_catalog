<?php
/**
 * @file
 * commerce_multiproduct_catalog.features.taxonomy.inc
 */

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function commerce_multiproduct_catalog_taxonomy_default_vocabularies() {
  return array(
    'product_category' => array(
      'name' => 'Категория товара',
      'machine_name' => 'product_category',
      'description' => 'Категории товаров на сайте',
      'hierarchy' => '1',
      'module' => 'taxonomy',
      'weight' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
