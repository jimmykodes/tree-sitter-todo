module.exports = grammar({
  name: "todo",
  word: $ => $.identifier,
  rules: {
    source_file: $ => repeat($.section),

    section: $ => seq($.header, repeat($.item)),

    header: $ => seq('[', $.identifier, ']'),
    project: $ => seq('@', $.identifier),
    tag: $ => seq('#', $.identifier),

    bullet: _ => '-',
    content: $ => repeat1(choice(
      /[\w]+/,
      $.project,
      $.tag,
    )),

    item: $ => seq($.bullet, $.content),

    identifier: _ => /[a-zA-Z0-9]+/,
  }
})
