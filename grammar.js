module.exports = grammar({
    name: "peggy",

    rules: {
        source_file: ($) => repeat($._instruction),

        _instruction: ($) => choice($.rule),

        rule: ($) =>
            seq(
                $.label,
                optional($.literal),
                "=",
                $.parsing_expression,
                $.block
            ),

        block: ($) => seq("{", $.raw_text, "}"),

        raw_text: (_) => seq(/[\w\s;]*/),

        parsing_expression: ($) =>
            seq($._parsing_expression_item, repeat($._parsing_expression_item)),

        _parsing_expression_item: ($) =>
            seq(optional(/[!]/), $.expression, optional(/[\*|\+|\?]/)),

        expression: ($) =>
            choice(
                $.label,
                $.type_expression,
                $.regular_expression,
                $.parenthesis_expression,
                $.or_expression,
                $.literal
            ),

        type_expression: ($) => seq($.label, ":", $.expression),

        regular_expression: (_) => seq("[", /[\^\-\w]+/, "]", /i?/),

        parenthesis_expression: ($) => seq("(", repeat($.expression), ")"),

        or_expression: (_) => seq("/"),

        literal: (_) =>
            token(
                choice(
                    seq("'", /([^'\n]|\\(.|\n))*/, "'"),
                    seq('"', /([^"\n]|\\(.|\n))*/, '"')
                )
            ),

        label: (_) => /([a-zA-Z_])[a-zA-Z0-9-_]*/,
    },
});
