#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 18
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 17
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  sym_identifier = 1,
  anon_sym_LBRACK = 2,
  anon_sym_RBRACK = 3,
  anon_sym_AT = 4,
  anon_sym_POUND = 5,
  sym_bullet = 6,
  aux_sym_item_token1 = 7,
  sym_source_file = 8,
  sym_section = 9,
  sym_header = 10,
  sym_project = 11,
  sym_tag = 12,
  sym_item = 13,
  aux_sym_source_file_repeat1 = 14,
  aux_sym_section_repeat1 = 15,
  aux_sym_item_repeat1 = 16,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_AT] = "@",
  [anon_sym_POUND] = "#",
  [sym_bullet] = "bullet",
  [aux_sym_item_token1] = "item_token1",
  [sym_source_file] = "source_file",
  [sym_section] = "section",
  [sym_header] = "header",
  [sym_project] = "project",
  [sym_tag] = "tag",
  [sym_item] = "item",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_section_repeat1] = "section_repeat1",
  [aux_sym_item_repeat1] = "item_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_POUND] = anon_sym_POUND,
  [sym_bullet] = sym_bullet,
  [aux_sym_item_token1] = aux_sym_item_token1,
  [sym_source_file] = sym_source_file,
  [sym_section] = sym_section,
  [sym_header] = sym_header,
  [sym_project] = sym_project,
  [sym_tag] = sym_tag,
  [sym_item] = sym_item,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_section_repeat1] = aux_sym_section_repeat1,
  [aux_sym_item_repeat1] = aux_sym_item_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [sym_bullet] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_item_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym_project] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_item] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_item_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(3);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '@') ADVANCE(6);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == ']') ADVANCE(5);
      if (lookahead == '_') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 1:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 2:
      if (eof) ADVANCE(3);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '@') ADVANCE(6);
      if (lookahead == '[') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_bullet);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_item_token1);
      if (lookahead == '_') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_item_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [sym_bullet] = ACTIONS(1),
    [aux_sym_item_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(14),
    [sym_section] = STATE(8),
    [sym_header] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(5),
  },
  [2] = {
    [sym_project] = STATE(3),
    [sym_tag] = STATE(3),
    [aux_sym_item_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_AT] = ACTIONS(9),
    [anon_sym_POUND] = ACTIONS(11),
    [sym_bullet] = ACTIONS(7),
    [aux_sym_item_token1] = ACTIONS(13),
  },
  [3] = {
    [sym_project] = STATE(4),
    [sym_tag] = STATE(4),
    [aux_sym_item_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_AT] = ACTIONS(9),
    [anon_sym_POUND] = ACTIONS(11),
    [sym_bullet] = ACTIONS(15),
    [aux_sym_item_token1] = ACTIONS(17),
  },
  [4] = {
    [sym_project] = STATE(4),
    [sym_tag] = STATE(4),
    [aux_sym_item_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_POUND] = ACTIONS(24),
    [sym_bullet] = ACTIONS(19),
    [aux_sym_item_token1] = ACTIONS(27),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(30), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      anon_sym_POUND,
      sym_bullet,
      aux_sym_item_token1,
  [9] = 1,
    ACTIONS(32), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      anon_sym_POUND,
      sym_bullet,
      aux_sym_item_token1,
  [18] = 3,
    ACTIONS(36), 1,
      sym_bullet,
    ACTIONS(34), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(9), 2,
      sym_item,
      aux_sym_section_repeat1,
  [30] = 4,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      sym_header,
    STATE(10), 2,
      sym_section,
      aux_sym_source_file_repeat1,
  [44] = 3,
    ACTIONS(36), 1,
      sym_bullet,
    ACTIONS(40), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(11), 2,
      sym_item,
      aux_sym_section_repeat1,
  [56] = 4,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(44), 1,
      anon_sym_LBRACK,
    STATE(7), 1,
      sym_header,
    STATE(10), 2,
      sym_section,
      aux_sym_source_file_repeat1,
  [70] = 3,
    ACTIONS(49), 1,
      sym_bullet,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(11), 2,
      sym_item,
      aux_sym_section_repeat1,
  [82] = 1,
    ACTIONS(52), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_bullet,
  [88] = 1,
    ACTIONS(54), 1,
      sym_identifier,
  [92] = 1,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
  [96] = 1,
    ACTIONS(58), 1,
      anon_sym_RBRACK,
  [100] = 1,
    ACTIONS(60), 1,
      sym_identifier,
  [104] = 1,
    ACTIONS(62), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 9,
  [SMALL_STATE(7)] = 18,
  [SMALL_STATE(8)] = 30,
  [SMALL_STATE(9)] = 44,
  [SMALL_STATE(10)] = 56,
  [SMALL_STATE(11)] = 70,
  [SMALL_STATE(12)] = 82,
  [SMALL_STATE(13)] = 88,
  [SMALL_STATE(14)] = 92,
  [SMALL_STATE(15)] = 96,
  [SMALL_STATE(16)] = 100,
  [SMALL_STATE(17)] = 104,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_item_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_item_repeat1, 2), SHIFT_REPEAT(16),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_item_repeat1, 2), SHIFT_REPEAT(17),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_item_repeat1, 2), SHIFT_REPEAT(4),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 2),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(2),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [56] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_todo(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
