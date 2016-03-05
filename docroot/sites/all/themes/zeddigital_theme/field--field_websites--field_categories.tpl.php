<?php

/**
 * @file field.tpl.php
 * Default template implementation to display the value of a field.
 *
 * This file is not used and is here as a starting point for customization only.
 * @see theme_field()
 *
 * Available variables:
 * - $items: An array of field values. Use render() to output them.
 * - $label: The item label.
 * - $label_hidden: Whether the label display is set to 'hidden'.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - field: The current template type, i.e., "theming hook".
 *   - field-name-[field_name]: The current field name. For example, if the
 *     field name is "field_description" it would result in
 *     "field-name-field-description".
 *   - field-type-[field_type]: The current field type. For example, if the
 *     field type is "text" it would result in "field-type-text".
 *   - field-label-[label_display]: The current label position. For example, if
 *     the label position is "above" it would result in "field-label-above".
 *
 * Other variables:
 * - $element['#object']: The entity to which the field is attached.
 * - $element['#view_mode']: View mode, e.g. 'full', 'teaser'...
 * - $element['#field_name']: The field name.
 * - $element['#field_type']: The field type.
 * - $element['#field_language']: The field language.
 * - $element['#field_translatable']: Whether the field is translatable or not.
 * - $element['#label_display']: Position of label display, inline, above, or
 *   hidden.
 * - $field_name_css: The css-compatible field name.
 * - $field_type_css: The css-compatible field type.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 *
 * @see template_preprocess_field()
 * @see theme_field()
 *
 * @ingroup themeable
 */
$term_ref_fields = [
  'field_category',
  'field_ad_format',
  'field_campaign_type',
];
?>
<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <?php if (!$label_hidden): ?>
    <div class="field-label"<?php print $title_attributes; ?>><?php print $label ?>:&nbsp;</div>
  <?php endif; ?>
  <div class="field-items"<?php print $content_attributes; ?>>
    <tbody>
    <?php foreach ($items as $delta => $item): ?>
      <tr class="<?php print $delta%2==0 ? 'odd' : 'even'; ?>">
        <?php
        $field_collection_item = $item['entity']['field_collection_item'];
        $collection = entity_metadata_wrapper('field_collection_item', key($field_collection_item));
        foreach ($term_ref_fields as $field) {
          ${$field} = [];
          foreach ($collection->{$field}->value() as $term) {
            ${$field}[] = $term->name;
          }
        }
        ?>
        <td><?php print $collection->field_site->value()->name; ?></td>
        <td><?php print $collection->field_supplier->value()->name; ?></td>
        <td><?php print implode(', ', $field_category); ?></td>
        <td><?php print implode(', ', $field_ad_format); ?></td>
        <td><?php print implode(', ', $field_campaign_type); ?></td>
        <td><?php print $collection->field_bought_adviews->value(); ?></td>
        <td><?php print $collection->field_cpm->value(); ?></td>
        <td><?php print $collection->field_total_net_budget->value(); ?></td>
      </tr>
    <?php endforeach; ?>
    </tbody>
  </div>
</div>
