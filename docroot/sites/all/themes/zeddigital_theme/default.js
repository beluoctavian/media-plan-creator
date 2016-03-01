jQuery(document).ready(function ($) {
    var bought_adviews = $('input', '.field-name-field-bought-adviews');
    var net_cpm = $('input', '.field-name-field-cpm');
    var total_net_budget = $('input', '.field-name-field-total-net-budget');
    total_net_budget.attr('disabled','disabled');
    bought_adviews.change(set_total_net_budget);
    net_cpm.change(set_total_net_budget);
    function set_total_net_budget() {
        /**
         * Compute "Total Net Budget" value.
         * The formula is: ("Bought adviews" * "Net Cost-Per-Thou (CPM)") / 1000
         */
        total_net_budget.val((bought_adviews.val() * net_cpm.val()) / 1000);
    }
}(jQuery));

