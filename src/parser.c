#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 39
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 32
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_EQ = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  aux_sym_raw_text_token1 = 4,
  aux_sym__parsing_expression_item_token1 = 5,
  aux_sym__parsing_expression_item_token2 = 6,
  anon_sym_COLON = 7,
  anon_sym_LBRACK = 8,
  aux_sym_regular_expression_token1 = 9,
  anon_sym_RBRACK = 10,
  aux_sym_regular_expression_token2 = 11,
  anon_sym_LPAREN = 12,
  anon_sym_RPAREN = 13,
  anon_sym_SLASH = 14,
  sym_literal = 15,
  sym_label = 16,
  sym_source_file = 17,
  sym__instruction = 18,
  sym_rule = 19,
  sym_block = 20,
  sym_raw_text = 21,
  sym_parsing_expression = 22,
  sym__parsing_expression_item = 23,
  sym_expression = 24,
  sym_type_expression = 25,
  sym_regular_expression = 26,
  sym_parenthesis_expression = 27,
  sym_or_expression = 28,
  aux_sym_source_file_repeat1 = 29,
  aux_sym_parsing_expression_repeat1 = 30,
  aux_sym_parenthesis_expression_repeat1 = 31,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [aux_sym_raw_text_token1] = "raw_text_token1",
  [aux_sym__parsing_expression_item_token1] = "_parsing_expression_item_token1",
  [aux_sym__parsing_expression_item_token2] = "_parsing_expression_item_token2",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACK] = "[",
  [aux_sym_regular_expression_token1] = "regular_expression_token1",
  [anon_sym_RBRACK] = "]",
  [aux_sym_regular_expression_token2] = "regular_expression_token2",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_SLASH] = "/",
  [sym_literal] = "literal",
  [sym_label] = "label",
  [sym_source_file] = "source_file",
  [sym__instruction] = "_instruction",
  [sym_rule] = "rule",
  [sym_block] = "block",
  [sym_raw_text] = "raw_text",
  [sym_parsing_expression] = "parsing_expression",
  [sym__parsing_expression_item] = "_parsing_expression_item",
  [sym_expression] = "expression",
  [sym_type_expression] = "type_expression",
  [sym_regular_expression] = "regular_expression",
  [sym_parenthesis_expression] = "parenthesis_expression",
  [sym_or_expression] = "or_expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parsing_expression_repeat1] = "parsing_expression_repeat1",
  [aux_sym_parenthesis_expression_repeat1] = "parenthesis_expression_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym_raw_text_token1] = aux_sym_raw_text_token1,
  [aux_sym__parsing_expression_item_token1] = aux_sym__parsing_expression_item_token1,
  [aux_sym__parsing_expression_item_token2] = aux_sym__parsing_expression_item_token2,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [aux_sym_regular_expression_token1] = aux_sym_regular_expression_token1,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_regular_expression_token2] = aux_sym_regular_expression_token2,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_literal] = sym_literal,
  [sym_label] = sym_label,
  [sym_source_file] = sym_source_file,
  [sym__instruction] = sym__instruction,
  [sym_rule] = sym_rule,
  [sym_block] = sym_block,
  [sym_raw_text] = sym_raw_text,
  [sym_parsing_expression] = sym_parsing_expression,
  [sym__parsing_expression_item] = sym__parsing_expression_item,
  [sym_expression] = sym_expression,
  [sym_type_expression] = sym_type_expression,
  [sym_regular_expression] = sym_regular_expression,
  [sym_parenthesis_expression] = sym_parenthesis_expression,
  [sym_or_expression] = sym_or_expression,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parsing_expression_repeat1] = aux_sym_parsing_expression_repeat1,
  [aux_sym_parenthesis_expression_repeat1] = aux_sym_parenthesis_expression_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_raw_text_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__parsing_expression_item_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__parsing_expression_item_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_regular_expression_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_regular_expression_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__instruction] = {
    .visible = false,
    .named = true,
  },
  [sym_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_raw_text] = {
    .visible = true,
    .named = true,
  },
  [sym_parsing_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__parsing_expression_item] = {
    .visible = false,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_type_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_regular_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesis_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_or_expression] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parsing_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parenthesis_expression_repeat1] = {
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(7);
      if (lookahead == '!') ADVANCE(13);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == '(') ADVANCE(22);
      if (lookahead == ')') ADVANCE(23);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == '=') ADVANCE(8);
      if (lookahead == '[') ADVANCE(16);
      if (lookahead == ']') ADVANCE(19);
      if (lookahead == '{') ADVANCE(9);
      if (lookahead == '}') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '?' ||
          lookahead == '|') ADVANCE(14);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '^') ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(25);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 4:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1);
      if (lookahead == '"') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == '\\') ADVANCE(5);
      END_STATE();
    case 6:
      if (eof) ADVANCE(7);
      if (lookahead == '!') ADVANCE(13);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == '(') ADVANCE(22);
      if (lookahead == ')') ADVANCE(23);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == '[') ADVANCE(16);
      if (lookahead == '{') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '?' ||
          lookahead == '|') ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_raw_text_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_raw_text_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym__parsing_expression_item_token1);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym__parsing_expression_item_token2);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_regular_expression_token1);
      if (lookahead == '^') ADVANCE(18);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_regular_expression_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_regular_expression_token2);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_regular_expression_token2);
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_literal);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '\'') ADVANCE(25);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 6},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 11},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 21},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [aux_sym__parsing_expression_item_token1] = ACTIONS(1),
    [aux_sym__parsing_expression_item_token2] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [aux_sym_regular_expression_token1] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_literal] = ACTIONS(1),
    [sym_label] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(38),
    [sym__instruction] = STATE(24),
    [sym_rule] = STATE(24),
    [aux_sym_source_file_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_label] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      aux_sym__parsing_expression_item_token1,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_SLASH,
    ACTIONS(17), 1,
      sym_literal,
    ACTIONS(19), 1,
      sym_label,
    STATE(19), 1,
      sym_expression,
    STATE(3), 2,
      sym__parsing_expression_item,
      aux_sym_parsing_expression_repeat1,
    STATE(13), 4,
      sym_type_expression,
      sym_regular_expression,
      sym_parenthesis_expression,
      sym_or_expression,
  [35] = 10,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      aux_sym__parsing_expression_item_token1,
    ACTIONS(26), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(32), 1,
      anon_sym_SLASH,
    ACTIONS(35), 1,
      sym_literal,
    ACTIONS(38), 1,
      sym_label,
    STATE(19), 1,
      sym_expression,
    STATE(3), 2,
      sym__parsing_expression_item,
      aux_sym_parsing_expression_repeat1,
    STATE(13), 4,
      sym_type_expression,
      sym_regular_expression,
      sym_parenthesis_expression,
      sym_or_expression,
  [70] = 10,
    ACTIONS(9), 1,
      aux_sym__parsing_expression_item_token1,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_SLASH,
    ACTIONS(17), 1,
      sym_literal,
    ACTIONS(19), 1,
      sym_label,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    STATE(19), 1,
      sym_expression,
    STATE(2), 2,
      sym__parsing_expression_item,
      aux_sym_parsing_expression_repeat1,
    STATE(13), 4,
      sym_type_expression,
      sym_regular_expression,
      sym_parenthesis_expression,
      sym_or_expression,
  [105] = 10,
    ACTIONS(9), 1,
      aux_sym__parsing_expression_item_token1,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_SLASH,
    ACTIONS(17), 1,
      sym_literal,
    ACTIONS(19), 1,
      sym_label,
    STATE(4), 1,
      sym__parsing_expression_item,
    STATE(19), 1,
      sym_expression,
    STATE(29), 1,
      sym_parsing_expression,
    STATE(13), 4,
      sym_type_expression,
      sym_regular_expression,
      sym_parenthesis_expression,
      sym_or_expression,
  [139] = 10,
    ACTIONS(9), 1,
      aux_sym__parsing_expression_item_token1,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_SLASH,
    ACTIONS(17), 1,
      sym_literal,
    ACTIONS(19), 1,
      sym_label,
    STATE(4), 1,
      sym__parsing_expression_item,
    STATE(19), 1,
      sym_expression,
    STATE(25), 1,
      sym_parsing_expression,
    STATE(13), 4,
      sym_type_expression,
      sym_regular_expression,
      sym_parenthesis_expression,
      sym_or_expression,
  [173] = 8,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_SLASH,
    ACTIONS(17), 1,
      sym_literal,
    ACTIONS(19), 1,
      sym_label,
    ACTIONS(43), 1,
      anon_sym_RPAREN,
    STATE(8), 2,
      sym_expression,
      aux_sym_parenthesis_expression_repeat1,
    STATE(13), 4,
      sym_type_expression,
      sym_regular_expression,
      sym_parenthesis_expression,
      sym_or_expression,
  [202] = 8,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_RPAREN,
    ACTIONS(53), 1,
      anon_sym_SLASH,
    ACTIONS(56), 1,
      sym_literal,
    ACTIONS(59), 1,
      sym_label,
    STATE(8), 2,
      sym_expression,
      aux_sym_parenthesis_expression_repeat1,
    STATE(13), 4,
      sym_type_expression,
      sym_regular_expression,
      sym_parenthesis_expression,
      sym_or_expression,
  [231] = 8,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_SLASH,
    ACTIONS(17), 1,
      sym_literal,
    ACTIONS(19), 1,
      sym_label,
    ACTIONS(62), 1,
      anon_sym_RPAREN,
    STATE(7), 2,
      sym_expression,
      aux_sym_parenthesis_expression_repeat1,
    STATE(13), 4,
      sym_type_expression,
      sym_regular_expression,
      sym_parenthesis_expression,
      sym_or_expression,
  [260] = 2,
    ACTIONS(66), 1,
      anon_sym_COLON,
    ACTIONS(64), 9,
      anon_sym_LBRACE,
      aux_sym__parsing_expression_item_token1,
      aux_sym__parsing_expression_item_token2,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      sym_literal,
      sym_label,
  [275] = 7,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_SLASH,
    ACTIONS(17), 1,
      sym_literal,
    ACTIONS(19), 1,
      sym_label,
    STATE(18), 1,
      sym_expression,
    STATE(13), 4,
      sym_type_expression,
      sym_regular_expression,
      sym_parenthesis_expression,
      sym_or_expression,
  [300] = 7,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_SLASH,
    ACTIONS(17), 1,
      sym_literal,
    ACTIONS(19), 1,
      sym_label,
    STATE(20), 1,
      sym_expression,
    STATE(13), 4,
      sym_type_expression,
      sym_regular_expression,
      sym_parenthesis_expression,
      sym_or_expression,
  [325] = 1,
    ACTIONS(64), 9,
      anon_sym_LBRACE,
      aux_sym__parsing_expression_item_token1,
      aux_sym__parsing_expression_item_token2,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      sym_literal,
      sym_label,
  [337] = 1,
    ACTIONS(68), 9,
      anon_sym_LBRACE,
      aux_sym__parsing_expression_item_token1,
      aux_sym__parsing_expression_item_token2,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      sym_literal,
      sym_label,
  [349] = 1,
    ACTIONS(70), 9,
      anon_sym_LBRACE,
      aux_sym__parsing_expression_item_token1,
      aux_sym__parsing_expression_item_token2,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      sym_literal,
      sym_label,
  [361] = 1,
    ACTIONS(72), 9,
      anon_sym_LBRACE,
      aux_sym__parsing_expression_item_token1,
      aux_sym__parsing_expression_item_token2,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      sym_literal,
      sym_label,
  [373] = 1,
    ACTIONS(74), 9,
      anon_sym_LBRACE,
      aux_sym__parsing_expression_item_token1,
      aux_sym__parsing_expression_item_token2,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      sym_literal,
      sym_label,
  [385] = 1,
    ACTIONS(76), 9,
      anon_sym_LBRACE,
      aux_sym__parsing_expression_item_token1,
      aux_sym__parsing_expression_item_token2,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      sym_literal,
      sym_label,
  [397] = 2,
    ACTIONS(80), 1,
      aux_sym__parsing_expression_item_token2,
    ACTIONS(78), 7,
      anon_sym_LBRACE,
      aux_sym__parsing_expression_item_token1,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_SLASH,
      sym_literal,
      sym_label,
  [410] = 2,
    ACTIONS(84), 1,
      aux_sym__parsing_expression_item_token2,
    ACTIONS(82), 7,
      anon_sym_LBRACE,
      aux_sym__parsing_expression_item_token1,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_SLASH,
      sym_literal,
      sym_label,
  [423] = 1,
    ACTIONS(86), 7,
      anon_sym_LBRACE,
      aux_sym__parsing_expression_item_token1,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_SLASH,
      sym_literal,
      sym_label,
  [433] = 1,
    ACTIONS(82), 7,
      anon_sym_LBRACE,
      aux_sym__parsing_expression_item_token1,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_SLASH,
      sym_literal,
      sym_label,
  [443] = 3,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
    ACTIONS(90), 1,
      sym_label,
    STATE(23), 3,
      sym__instruction,
      sym_rule,
      aux_sym_source_file_repeat1,
  [455] = 3,
    ACTIONS(5), 1,
      sym_label,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    STATE(23), 3,
      sym__instruction,
      sym_rule,
      aux_sym_source_file_repeat1,
  [467] = 2,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    STATE(30), 1,
      sym_block,
  [474] = 1,
    ACTIONS(97), 2,
      ts_builtin_sym_end,
      sym_label,
  [479] = 2,
    ACTIONS(99), 1,
      aux_sym_raw_text_token1,
    STATE(36), 1,
      sym_raw_text,
  [486] = 2,
    ACTIONS(101), 1,
      anon_sym_EQ,
    ACTIONS(103), 1,
      sym_literal,
  [493] = 2,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      sym_block,
  [500] = 1,
    ACTIONS(105), 2,
      ts_builtin_sym_end,
      sym_label,
  [505] = 1,
    ACTIONS(107), 2,
      ts_builtin_sym_end,
      sym_label,
  [510] = 1,
    ACTIONS(109), 1,
      aux_sym_regular_expression_token2,
  [514] = 1,
    ACTIONS(111), 1,
      anon_sym_RBRACK,
  [518] = 1,
    ACTIONS(113), 1,
      aux_sym_regular_expression_token1,
  [522] = 1,
    ACTIONS(115), 1,
      anon_sym_RBRACE,
  [526] = 1,
    ACTIONS(117), 1,
      anon_sym_RBRACE,
  [530] = 1,
    ACTIONS(119), 1,
      anon_sym_EQ,
  [534] = 1,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 35,
  [SMALL_STATE(4)] = 70,
  [SMALL_STATE(5)] = 105,
  [SMALL_STATE(6)] = 139,
  [SMALL_STATE(7)] = 173,
  [SMALL_STATE(8)] = 202,
  [SMALL_STATE(9)] = 231,
  [SMALL_STATE(10)] = 260,
  [SMALL_STATE(11)] = 275,
  [SMALL_STATE(12)] = 300,
  [SMALL_STATE(13)] = 325,
  [SMALL_STATE(14)] = 337,
  [SMALL_STATE(15)] = 349,
  [SMALL_STATE(16)] = 361,
  [SMALL_STATE(17)] = 373,
  [SMALL_STATE(18)] = 385,
  [SMALL_STATE(19)] = 397,
  [SMALL_STATE(20)] = 410,
  [SMALL_STATE(21)] = 423,
  [SMALL_STATE(22)] = 433,
  [SMALL_STATE(23)] = 443,
  [SMALL_STATE(24)] = 455,
  [SMALL_STATE(25)] = 467,
  [SMALL_STATE(26)] = 474,
  [SMALL_STATE(27)] = 479,
  [SMALL_STATE(28)] = 486,
  [SMALL_STATE(29)] = 493,
  [SMALL_STATE(30)] = 500,
  [SMALL_STATE(31)] = 505,
  [SMALL_STATE(32)] = 510,
  [SMALL_STATE(33)] = 514,
  [SMALL_STATE(34)] = 518,
  [SMALL_STATE(35)] = 522,
  [SMALL_STATE(36)] = 526,
  [SMALL_STATE(37)] = 530,
  [SMALL_STATE(38)] = 534,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parsing_expression, 2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parsing_expression_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parsing_expression_repeat1, 2), SHIFT_REPEAT(12),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parsing_expression_repeat1, 2), SHIFT_REPEAT(34),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parsing_expression_repeat1, 2), SHIFT_REPEAT(9),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parsing_expression_repeat1, 2), SHIFT_REPEAT(16),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parsing_expression_repeat1, 2), SHIFT_REPEAT(13),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parsing_expression_repeat1, 2), SHIFT_REPEAT(10),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parsing_expression, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parenthesis_expression_repeat1, 2), SHIFT_REPEAT(34),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parenthesis_expression_repeat1, 2), SHIFT_REPEAT(9),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parenthesis_expression_repeat1, 2),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parenthesis_expression_repeat1, 2), SHIFT_REPEAT(16),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parenthesis_expression_repeat1, 2), SHIFT_REPEAT(13),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parenthesis_expression_repeat1, 2), SHIFT_REPEAT(10),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesis_expression, 3),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regular_expression, 4),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or_expression, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesis_expression, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_expression, 3),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parsing_expression_item, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parsing_expression_item, 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parsing_expression_item, 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_text, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [121] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_peggy(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
