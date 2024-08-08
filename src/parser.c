#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 489
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 139
#define ALIAS_COUNT 0
#define TOKEN_COUNT 72
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 38
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LBRACK = 1,
  anon_sym_ScriptInfo = 2,
  anon_sym_RBRACK = 3,
  anon_sym_LF = 4,
  anon_sym_V4Styles = 5,
  anon_sym_Events = 6,
  anon_sym_LBRACKFonts_RBRACK = 7,
  anon_sym_Graphics = 8,
  sym_styles_header_name = 9,
  sym_styles_header_font_name = 10,
  sym_styles_header_font_size = 11,
  sym_styles_header_primary_color = 12,
  sym_styles_header_secondary_color = 13,
  sym_styles_header_tertiary_color = 14,
  sym_styles_header_back_color = 15,
  sym_styles_header_bold = 16,
  sym_styles_header_italic = 17,
  sym_styles_header_border_style = 18,
  sym_styles_header_outline = 19,
  sym_styles_header_shadow = 20,
  sym_styles_header_alignment = 21,
  anon_sym_MarginL = 22,
  anon_sym_MarginR = 23,
  anon_sym_MarginV = 24,
  sym_styles_header_alpha_level = 25,
  sym_styles_header_encoding = 26,
  anon_sym_Style = 27,
  aux_sym_styles_body_row_token1 = 28,
  sym_style_name = 29,
  sym_style_font_name = 30,
  aux_sym_style_font_size_token1 = 31,
  sym_events_header_format = 32,
  sym_events_header_start = 33,
  sym_events_header_end = 34,
  sym_events_header_name = 35,
  sym_events_header_effect = 36,
  sym_events_header_text = 37,
  sym__comma = 38,
  sym_info_comment = 39,
  anon_sym_COLON = 40,
  anon_sym_Title = 41,
  anon_sym_OriginalScript = 42,
  anon_sym_OriginalTranslation = 43,
  anon_sym_OriginalEditing = 44,
  anon_sym_OriginalTiming = 45,
  anon_sym_SynchPoint = 46,
  anon_sym_ScriptUpdatedBy = 47,
  anon_sym_UpdateDetails = 48,
  anon_sym_ScriptType = 49,
  anon_sym_Collisions = 50,
  anon_sym_PlayResY = 51,
  anon_sym_PlayResX = 52,
  anon_sym_PlayDepth = 53,
  anon_sym_Timer = 54,
  anon_sym_WrapStyle = 55,
  anon_sym_ScaledBorderAndShadow = 56,
  aux_sym_info_prop_value_token1 = 57,
  anon_sym_Marked = 58,
  aux_sym_event_dialogue_row_token1 = 59,
  sym_event_type_dialogue = 60,
  sym_event_type_comment = 61,
  sym_event_type_picture = 62,
  sym_event_type_sound = 63,
  sym_event_type_movie = 64,
  sym_event_type_command = 65,
  anon_sym_0 = 66,
  anon_sym_1 = 67,
  aux_sym_event_start_token1 = 68,
  aux_sym_event_style_token1 = 69,
  anon_sym_aaa = 70,
  anon_sym_bbb = 71,
  sym_ssa = 72,
  sym_section = 73,
  sym_section_info = 74,
  sym_section_info_name = 75,
  sym_section_styles = 76,
  sym_section_styles_name = 77,
  sym_section_events = 78,
  sym_section_events_name = 79,
  sym_section_fonts = 80,
  sym_section_fonts_name = 81,
  sym_section_graphics = 82,
  sym_section_graphics_name = 83,
  sym_styles_header_row = 84,
  sym_styles_header_margin_l = 85,
  sym_styles_header_margin_r = 86,
  sym_styles_header_margin_v = 87,
  sym_styles_body_row = 88,
  sym_style_font_size = 89,
  sym_style_primary_color = 90,
  sym_style_secondary_color = 91,
  sym_style_tertiary_color = 92,
  sym_style_back_color = 93,
  sym_style_bold = 94,
  sym_style_italic = 95,
  sym_style_border_style = 96,
  sym_style_outline = 97,
  sym_style_shadow = 98,
  sym_style_alignment = 99,
  sym_style_margin_l = 100,
  sym_style_margin_r = 101,
  sym_style_margin_v = 102,
  sym_style_alpha_level = 103,
  sym_style_encoding = 104,
  sym_events_header_row = 105,
  sym_events_header_style = 106,
  sym_events_header_margin_l = 107,
  sym_events_header_margin_r = 108,
  sym_events_header_margin_v = 109,
  sym_info_body_row = 110,
  sym_info_prop = 111,
  sym_info_prop_name = 112,
  sym_info_prop_value = 113,
  sym_events_body_row = 114,
  sym_event_dialogue_row = 115,
  sym_event_comment_row = 116,
  sym_event_picture_row = 117,
  sym_event_sound_row = 118,
  sym_event_movie_row = 119,
  sym_event_command_row = 120,
  sym_event_is_marked = 121,
  sym_event_start = 122,
  sym_event_end = 123,
  sym_event_style = 124,
  sym_event_name = 125,
  sym_event_margin_l = 126,
  sym_event_margin_r = 127,
  sym_event_margin_v = 128,
  sym_event_effect = 129,
  sym_event_text = 130,
  sym_fonts_body_row = 131,
  sym_graphics_body_row = 132,
  aux_sym_ssa_repeat1 = 133,
  aux_sym_section_info_repeat1 = 134,
  aux_sym_section_styles_repeat1 = 135,
  aux_sym_section_events_repeat1 = 136,
  aux_sym_section_fonts_repeat1 = 137,
  aux_sym_section_graphics_repeat1 = 138,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACK] = "[",
  [anon_sym_ScriptInfo] = "Script Info",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LF] = "\n",
  [anon_sym_V4Styles] = "V4 Styles",
  [anon_sym_Events] = "Events",
  [anon_sym_LBRACKFonts_RBRACK] = "[Fonts]",
  [anon_sym_Graphics] = "Graphics",
  [sym_styles_header_name] = "styles_header_name",
  [sym_styles_header_font_name] = "styles_header_font_name",
  [sym_styles_header_font_size] = "styles_header_font_size",
  [sym_styles_header_primary_color] = "styles_header_primary_color",
  [sym_styles_header_secondary_color] = "styles_header_secondary_color",
  [sym_styles_header_tertiary_color] = "styles_header_tertiary_color",
  [sym_styles_header_back_color] = "styles_header_back_color",
  [sym_styles_header_bold] = "styles_header_bold",
  [sym_styles_header_italic] = "styles_header_italic",
  [sym_styles_header_border_style] = "styles_header_border_style",
  [sym_styles_header_outline] = "styles_header_outline",
  [sym_styles_header_shadow] = "styles_header_shadow",
  [sym_styles_header_alignment] = "styles_header_alignment",
  [anon_sym_MarginL] = "MarginL",
  [anon_sym_MarginR] = "MarginR",
  [anon_sym_MarginV] = "MarginV",
  [sym_styles_header_alpha_level] = "styles_header_alpha_level",
  [sym_styles_header_encoding] = "styles_header_encoding",
  [anon_sym_Style] = "Style",
  [aux_sym_styles_body_row_token1] = "styles_body_row_token1",
  [sym_style_name] = "style_name",
  [sym_style_font_name] = "style_font_name",
  [aux_sym_style_font_size_token1] = "style_font_size_token1",
  [sym_events_header_format] = "events_header_format",
  [sym_events_header_start] = "events_header_start",
  [sym_events_header_end] = "events_header_end",
  [sym_events_header_name] = "events_header_name",
  [sym_events_header_effect] = "events_header_effect",
  [sym_events_header_text] = "events_header_text",
  [sym__comma] = "_comma",
  [sym_info_comment] = "info_comment",
  [anon_sym_COLON] = ": ",
  [anon_sym_Title] = "Title",
  [anon_sym_OriginalScript] = "OriginalScript",
  [anon_sym_OriginalTranslation] = "OriginalTranslation",
  [anon_sym_OriginalEditing] = "OriginalEditing",
  [anon_sym_OriginalTiming] = "OriginalTiming",
  [anon_sym_SynchPoint] = "SynchPoint",
  [anon_sym_ScriptUpdatedBy] = "ScriptUpdatedBy",
  [anon_sym_UpdateDetails] = "UpdateDetails",
  [anon_sym_ScriptType] = "ScriptType",
  [anon_sym_Collisions] = "Collisions",
  [anon_sym_PlayResY] = "PlayResY",
  [anon_sym_PlayResX] = "PlayResX",
  [anon_sym_PlayDepth] = "PlayDepth",
  [anon_sym_Timer] = "Timer",
  [anon_sym_WrapStyle] = "WrapStyle",
  [anon_sym_ScaledBorderAndShadow] = "ScaledBorderAndShadow",
  [aux_sym_info_prop_value_token1] = "info_prop_value_token1",
  [anon_sym_Marked] = "Marked",
  [aux_sym_event_dialogue_row_token1] = "event_dialogue_row_token1",
  [sym_event_type_dialogue] = "event_type_dialogue",
  [sym_event_type_comment] = "event_type_comment",
  [sym_event_type_picture] = "event_type_picture",
  [sym_event_type_sound] = "event_type_sound",
  [sym_event_type_movie] = "event_type_movie",
  [sym_event_type_command] = "event_type_command",
  [anon_sym_0] = "0",
  [anon_sym_1] = "1",
  [aux_sym_event_start_token1] = "event_start_token1",
  [aux_sym_event_style_token1] = "event_style_token1",
  [anon_sym_aaa] = "aaa",
  [anon_sym_bbb] = "bbb",
  [sym_ssa] = "ssa",
  [sym_section] = "section",
  [sym_section_info] = "section_info",
  [sym_section_info_name] = "section_info_name",
  [sym_section_styles] = "section_styles",
  [sym_section_styles_name] = "section_styles_name",
  [sym_section_events] = "section_events",
  [sym_section_events_name] = "section_events_name",
  [sym_section_fonts] = "section_fonts",
  [sym_section_fonts_name] = "section_fonts_name",
  [sym_section_graphics] = "section_graphics",
  [sym_section_graphics_name] = "section_graphics_name",
  [sym_styles_header_row] = "styles_header_row",
  [sym_styles_header_margin_l] = "styles_header_margin_l",
  [sym_styles_header_margin_r] = "styles_header_margin_r",
  [sym_styles_header_margin_v] = "styles_header_margin_v",
  [sym_styles_body_row] = "styles_body_row",
  [sym_style_font_size] = "style_font_size",
  [sym_style_primary_color] = "style_primary_color",
  [sym_style_secondary_color] = "style_secondary_color",
  [sym_style_tertiary_color] = "style_tertiary_color",
  [sym_style_back_color] = "style_back_color",
  [sym_style_bold] = "style_bold",
  [sym_style_italic] = "style_italic",
  [sym_style_border_style] = "style_border_style",
  [sym_style_outline] = "style_outline",
  [sym_style_shadow] = "style_shadow",
  [sym_style_alignment] = "style_alignment",
  [sym_style_margin_l] = "style_margin_l",
  [sym_style_margin_r] = "style_margin_r",
  [sym_style_margin_v] = "style_margin_v",
  [sym_style_alpha_level] = "style_alpha_level",
  [sym_style_encoding] = "style_encoding",
  [sym_events_header_row] = "events_header_row",
  [sym_events_header_style] = "events_header_style",
  [sym_events_header_margin_l] = "events_header_margin_l",
  [sym_events_header_margin_r] = "events_header_margin_r",
  [sym_events_header_margin_v] = "events_header_margin_v",
  [sym_info_body_row] = "info_body_row",
  [sym_info_prop] = "info_prop",
  [sym_info_prop_name] = "info_prop_name",
  [sym_info_prop_value] = "info_prop_value",
  [sym_events_body_row] = "events_body_row",
  [sym_event_dialogue_row] = "event_dialogue_row",
  [sym_event_comment_row] = "event_comment_row",
  [sym_event_picture_row] = "event_picture_row",
  [sym_event_sound_row] = "event_sound_row",
  [sym_event_movie_row] = "event_movie_row",
  [sym_event_command_row] = "event_command_row",
  [sym_event_is_marked] = "event_is_marked",
  [sym_event_start] = "event_start",
  [sym_event_end] = "event_end",
  [sym_event_style] = "event_style",
  [sym_event_name] = "event_name",
  [sym_event_margin_l] = "event_margin_l",
  [sym_event_margin_r] = "event_margin_r",
  [sym_event_margin_v] = "event_margin_v",
  [sym_event_effect] = "event_effect",
  [sym_event_text] = "event_text",
  [sym_fonts_body_row] = "fonts_body_row",
  [sym_graphics_body_row] = "graphics_body_row",
  [aux_sym_ssa_repeat1] = "ssa_repeat1",
  [aux_sym_section_info_repeat1] = "section_info_repeat1",
  [aux_sym_section_styles_repeat1] = "section_styles_repeat1",
  [aux_sym_section_events_repeat1] = "section_events_repeat1",
  [aux_sym_section_fonts_repeat1] = "section_fonts_repeat1",
  [aux_sym_section_graphics_repeat1] = "section_graphics_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_ScriptInfo] = anon_sym_ScriptInfo,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_V4Styles] = anon_sym_V4Styles,
  [anon_sym_Events] = anon_sym_Events,
  [anon_sym_LBRACKFonts_RBRACK] = anon_sym_LBRACKFonts_RBRACK,
  [anon_sym_Graphics] = anon_sym_Graphics,
  [sym_styles_header_name] = sym_styles_header_name,
  [sym_styles_header_font_name] = sym_styles_header_font_name,
  [sym_styles_header_font_size] = sym_styles_header_font_size,
  [sym_styles_header_primary_color] = sym_styles_header_primary_color,
  [sym_styles_header_secondary_color] = sym_styles_header_secondary_color,
  [sym_styles_header_tertiary_color] = sym_styles_header_tertiary_color,
  [sym_styles_header_back_color] = sym_styles_header_back_color,
  [sym_styles_header_bold] = sym_styles_header_bold,
  [sym_styles_header_italic] = sym_styles_header_italic,
  [sym_styles_header_border_style] = sym_styles_header_border_style,
  [sym_styles_header_outline] = sym_styles_header_outline,
  [sym_styles_header_shadow] = sym_styles_header_shadow,
  [sym_styles_header_alignment] = sym_styles_header_alignment,
  [anon_sym_MarginL] = anon_sym_MarginL,
  [anon_sym_MarginR] = anon_sym_MarginR,
  [anon_sym_MarginV] = anon_sym_MarginV,
  [sym_styles_header_alpha_level] = sym_styles_header_alpha_level,
  [sym_styles_header_encoding] = sym_styles_header_encoding,
  [anon_sym_Style] = anon_sym_Style,
  [aux_sym_styles_body_row_token1] = aux_sym_styles_body_row_token1,
  [sym_style_name] = sym_style_name,
  [sym_style_font_name] = sym_style_font_name,
  [aux_sym_style_font_size_token1] = aux_sym_style_font_size_token1,
  [sym_events_header_format] = sym_events_header_format,
  [sym_events_header_start] = sym_events_header_start,
  [sym_events_header_end] = sym_events_header_end,
  [sym_events_header_name] = sym_events_header_name,
  [sym_events_header_effect] = sym_events_header_effect,
  [sym_events_header_text] = sym_events_header_text,
  [sym__comma] = sym__comma,
  [sym_info_comment] = sym_info_comment,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_Title] = anon_sym_Title,
  [anon_sym_OriginalScript] = anon_sym_OriginalScript,
  [anon_sym_OriginalTranslation] = anon_sym_OriginalTranslation,
  [anon_sym_OriginalEditing] = anon_sym_OriginalEditing,
  [anon_sym_OriginalTiming] = anon_sym_OriginalTiming,
  [anon_sym_SynchPoint] = anon_sym_SynchPoint,
  [anon_sym_ScriptUpdatedBy] = anon_sym_ScriptUpdatedBy,
  [anon_sym_UpdateDetails] = anon_sym_UpdateDetails,
  [anon_sym_ScriptType] = anon_sym_ScriptType,
  [anon_sym_Collisions] = anon_sym_Collisions,
  [anon_sym_PlayResY] = anon_sym_PlayResY,
  [anon_sym_PlayResX] = anon_sym_PlayResX,
  [anon_sym_PlayDepth] = anon_sym_PlayDepth,
  [anon_sym_Timer] = anon_sym_Timer,
  [anon_sym_WrapStyle] = anon_sym_WrapStyle,
  [anon_sym_ScaledBorderAndShadow] = anon_sym_ScaledBorderAndShadow,
  [aux_sym_info_prop_value_token1] = aux_sym_info_prop_value_token1,
  [anon_sym_Marked] = anon_sym_Marked,
  [aux_sym_event_dialogue_row_token1] = aux_sym_event_dialogue_row_token1,
  [sym_event_type_dialogue] = sym_event_type_dialogue,
  [sym_event_type_comment] = sym_event_type_comment,
  [sym_event_type_picture] = sym_event_type_picture,
  [sym_event_type_sound] = sym_event_type_sound,
  [sym_event_type_movie] = sym_event_type_movie,
  [sym_event_type_command] = sym_event_type_command,
  [anon_sym_0] = anon_sym_0,
  [anon_sym_1] = anon_sym_1,
  [aux_sym_event_start_token1] = aux_sym_event_start_token1,
  [aux_sym_event_style_token1] = aux_sym_event_style_token1,
  [anon_sym_aaa] = anon_sym_aaa,
  [anon_sym_bbb] = anon_sym_bbb,
  [sym_ssa] = sym_ssa,
  [sym_section] = sym_section,
  [sym_section_info] = sym_section_info,
  [sym_section_info_name] = sym_section_info_name,
  [sym_section_styles] = sym_section_styles,
  [sym_section_styles_name] = sym_section_styles_name,
  [sym_section_events] = sym_section_events,
  [sym_section_events_name] = sym_section_events_name,
  [sym_section_fonts] = sym_section_fonts,
  [sym_section_fonts_name] = sym_section_fonts_name,
  [sym_section_graphics] = sym_section_graphics,
  [sym_section_graphics_name] = sym_section_graphics_name,
  [sym_styles_header_row] = sym_styles_header_row,
  [sym_styles_header_margin_l] = sym_styles_header_margin_l,
  [sym_styles_header_margin_r] = sym_styles_header_margin_r,
  [sym_styles_header_margin_v] = sym_styles_header_margin_v,
  [sym_styles_body_row] = sym_styles_body_row,
  [sym_style_font_size] = sym_style_font_size,
  [sym_style_primary_color] = sym_style_primary_color,
  [sym_style_secondary_color] = sym_style_secondary_color,
  [sym_style_tertiary_color] = sym_style_tertiary_color,
  [sym_style_back_color] = sym_style_back_color,
  [sym_style_bold] = sym_style_bold,
  [sym_style_italic] = sym_style_italic,
  [sym_style_border_style] = sym_style_border_style,
  [sym_style_outline] = sym_style_outline,
  [sym_style_shadow] = sym_style_shadow,
  [sym_style_alignment] = sym_style_alignment,
  [sym_style_margin_l] = sym_style_margin_l,
  [sym_style_margin_r] = sym_style_margin_r,
  [sym_style_margin_v] = sym_style_margin_v,
  [sym_style_alpha_level] = sym_style_alpha_level,
  [sym_style_encoding] = sym_style_encoding,
  [sym_events_header_row] = sym_events_header_row,
  [sym_events_header_style] = sym_events_header_style,
  [sym_events_header_margin_l] = sym_events_header_margin_l,
  [sym_events_header_margin_r] = sym_events_header_margin_r,
  [sym_events_header_margin_v] = sym_events_header_margin_v,
  [sym_info_body_row] = sym_info_body_row,
  [sym_info_prop] = sym_info_prop,
  [sym_info_prop_name] = sym_info_prop_name,
  [sym_info_prop_value] = sym_info_prop_value,
  [sym_events_body_row] = sym_events_body_row,
  [sym_event_dialogue_row] = sym_event_dialogue_row,
  [sym_event_comment_row] = sym_event_comment_row,
  [sym_event_picture_row] = sym_event_picture_row,
  [sym_event_sound_row] = sym_event_sound_row,
  [sym_event_movie_row] = sym_event_movie_row,
  [sym_event_command_row] = sym_event_command_row,
  [sym_event_is_marked] = sym_event_is_marked,
  [sym_event_start] = sym_event_start,
  [sym_event_end] = sym_event_end,
  [sym_event_style] = sym_event_style,
  [sym_event_name] = sym_event_name,
  [sym_event_margin_l] = sym_event_margin_l,
  [sym_event_margin_r] = sym_event_margin_r,
  [sym_event_margin_v] = sym_event_margin_v,
  [sym_event_effect] = sym_event_effect,
  [sym_event_text] = sym_event_text,
  [sym_fonts_body_row] = sym_fonts_body_row,
  [sym_graphics_body_row] = sym_graphics_body_row,
  [aux_sym_ssa_repeat1] = aux_sym_ssa_repeat1,
  [aux_sym_section_info_repeat1] = aux_sym_section_info_repeat1,
  [aux_sym_section_styles_repeat1] = aux_sym_section_styles_repeat1,
  [aux_sym_section_events_repeat1] = aux_sym_section_events_repeat1,
  [aux_sym_section_fonts_repeat1] = aux_sym_section_fonts_repeat1,
  [aux_sym_section_graphics_repeat1] = aux_sym_section_graphics_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ScriptInfo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_V4Styles] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Events] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKFonts_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Graphics] = {
    .visible = true,
    .named = false,
  },
  [sym_styles_header_name] = {
    .visible = true,
    .named = true,
  },
  [sym_styles_header_font_name] = {
    .visible = true,
    .named = true,
  },
  [sym_styles_header_font_size] = {
    .visible = true,
    .named = true,
  },
  [sym_styles_header_primary_color] = {
    .visible = true,
    .named = true,
  },
  [sym_styles_header_secondary_color] = {
    .visible = true,
    .named = true,
  },
  [sym_styles_header_tertiary_color] = {
    .visible = true,
    .named = true,
  },
  [sym_styles_header_back_color] = {
    .visible = true,
    .named = true,
  },
  [sym_styles_header_bold] = {
    .visible = true,
    .named = true,
  },
  [sym_styles_header_italic] = {
    .visible = true,
    .named = true,
  },
  [sym_styles_header_border_style] = {
    .visible = true,
    .named = true,
  },
  [sym_styles_header_outline] = {
    .visible = true,
    .named = true,
  },
  [sym_styles_header_shadow] = {
    .visible = true,
    .named = true,
  },
  [sym_styles_header_alignment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_MarginL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MarginR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MarginV] = {
    .visible = true,
    .named = false,
  },
  [sym_styles_header_alpha_level] = {
    .visible = true,
    .named = true,
  },
  [sym_styles_header_encoding] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Style] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_styles_body_row_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_style_name] = {
    .visible = true,
    .named = true,
  },
  [sym_style_font_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_style_font_size_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_events_header_format] = {
    .visible = true,
    .named = true,
  },
  [sym_events_header_start] = {
    .visible = true,
    .named = true,
  },
  [sym_events_header_end] = {
    .visible = true,
    .named = true,
  },
  [sym_events_header_name] = {
    .visible = true,
    .named = true,
  },
  [sym_events_header_effect] = {
    .visible = true,
    .named = true,
  },
  [sym_events_header_text] = {
    .visible = true,
    .named = true,
  },
  [sym__comma] = {
    .visible = false,
    .named = true,
  },
  [sym_info_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Title] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OriginalScript] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OriginalTranslation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OriginalEditing] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OriginalTiming] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SynchPoint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ScriptUpdatedBy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_UpdateDetails] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ScriptType] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Collisions] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PlayResY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PlayResX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PlayDepth] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Timer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WrapStyle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ScaledBorderAndShadow] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_info_prop_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_Marked] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_event_dialogue_row_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_event_type_dialogue] = {
    .visible = true,
    .named = true,
  },
  [sym_event_type_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_event_type_picture] = {
    .visible = true,
    .named = true,
  },
  [sym_event_type_sound] = {
    .visible = true,
    .named = true,
  },
  [sym_event_type_movie] = {
    .visible = true,
    .named = true,
  },
  [sym_event_type_command] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_event_start_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_event_style_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_aaa] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bbb] = {
    .visible = true,
    .named = false,
  },
  [sym_ssa] = {
    .visible = true,
    .named = true,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [sym_section_info] = {
    .visible = true,
    .named = true,
  },
  [sym_section_info_name] = {
    .visible = true,
    .named = true,
  },
  [sym_section_styles] = {
    .visible = true,
    .named = true,
  },
  [sym_section_styles_name] = {
    .visible = true,
    .named = true,
  },
  [sym_section_events] = {
    .visible = true,
    .named = true,
  },
  [sym_section_events_name] = {
    .visible = true,
    .named = true,
  },
  [sym_section_fonts] = {
    .visible = true,
    .named = true,
  },
  [sym_section_fonts_name] = {
    .visible = true,
    .named = true,
  },
  [sym_section_graphics] = {
    .visible = true,
    .named = true,
  },
  [sym_section_graphics_name] = {
    .visible = true,
    .named = true,
  },
  [sym_styles_header_row] = {
    .visible = true,
    .named = true,
  },
  [sym_styles_header_margin_l] = {
    .visible = true,
    .named = true,
  },
  [sym_styles_header_margin_r] = {
    .visible = true,
    .named = true,
  },
  [sym_styles_header_margin_v] = {
    .visible = true,
    .named = true,
  },
  [sym_styles_body_row] = {
    .visible = true,
    .named = true,
  },
  [sym_style_font_size] = {
    .visible = true,
    .named = true,
  },
  [sym_style_primary_color] = {
    .visible = true,
    .named = true,
  },
  [sym_style_secondary_color] = {
    .visible = true,
    .named = true,
  },
  [sym_style_tertiary_color] = {
    .visible = true,
    .named = true,
  },
  [sym_style_back_color] = {
    .visible = true,
    .named = true,
  },
  [sym_style_bold] = {
    .visible = true,
    .named = true,
  },
  [sym_style_italic] = {
    .visible = true,
    .named = true,
  },
  [sym_style_border_style] = {
    .visible = true,
    .named = true,
  },
  [sym_style_outline] = {
    .visible = true,
    .named = true,
  },
  [sym_style_shadow] = {
    .visible = true,
    .named = true,
  },
  [sym_style_alignment] = {
    .visible = true,
    .named = true,
  },
  [sym_style_margin_l] = {
    .visible = true,
    .named = true,
  },
  [sym_style_margin_r] = {
    .visible = true,
    .named = true,
  },
  [sym_style_margin_v] = {
    .visible = true,
    .named = true,
  },
  [sym_style_alpha_level] = {
    .visible = true,
    .named = true,
  },
  [sym_style_encoding] = {
    .visible = true,
    .named = true,
  },
  [sym_events_header_row] = {
    .visible = true,
    .named = true,
  },
  [sym_events_header_style] = {
    .visible = true,
    .named = true,
  },
  [sym_events_header_margin_l] = {
    .visible = true,
    .named = true,
  },
  [sym_events_header_margin_r] = {
    .visible = true,
    .named = true,
  },
  [sym_events_header_margin_v] = {
    .visible = true,
    .named = true,
  },
  [sym_info_body_row] = {
    .visible = true,
    .named = true,
  },
  [sym_info_prop] = {
    .visible = true,
    .named = true,
  },
  [sym_info_prop_name] = {
    .visible = true,
    .named = true,
  },
  [sym_info_prop_value] = {
    .visible = true,
    .named = true,
  },
  [sym_events_body_row] = {
    .visible = true,
    .named = true,
  },
  [sym_event_dialogue_row] = {
    .visible = true,
    .named = true,
  },
  [sym_event_comment_row] = {
    .visible = true,
    .named = true,
  },
  [sym_event_picture_row] = {
    .visible = true,
    .named = true,
  },
  [sym_event_sound_row] = {
    .visible = true,
    .named = true,
  },
  [sym_event_movie_row] = {
    .visible = true,
    .named = true,
  },
  [sym_event_command_row] = {
    .visible = true,
    .named = true,
  },
  [sym_event_is_marked] = {
    .visible = true,
    .named = true,
  },
  [sym_event_start] = {
    .visible = true,
    .named = true,
  },
  [sym_event_end] = {
    .visible = true,
    .named = true,
  },
  [sym_event_style] = {
    .visible = true,
    .named = true,
  },
  [sym_event_name] = {
    .visible = true,
    .named = true,
  },
  [sym_event_margin_l] = {
    .visible = true,
    .named = true,
  },
  [sym_event_margin_r] = {
    .visible = true,
    .named = true,
  },
  [sym_event_margin_v] = {
    .visible = true,
    .named = true,
  },
  [sym_event_effect] = {
    .visible = true,
    .named = true,
  },
  [sym_event_text] = {
    .visible = true,
    .named = true,
  },
  [sym_fonts_body_row] = {
    .visible = true,
    .named = true,
  },
  [sym_graphics_body_row] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_ssa_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_info_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_styles_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_events_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_fonts_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_graphics_repeat1] = {
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
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 467,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 482,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 488,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(337);
      ADVANCE_MAP(
        ',', 693,
        '-', 752,
        '0', 747,
        '1', 749,
        ':', 5,
        ';', 1,
        '=', 733,
        'A', 531,
        'B', 408,
        'C', 580,
        'D', 510,
        'E', 491,
        'F', 581,
        'G', 616,
        'I', 647,
        'M', 413,
        'N', 409,
        'O', 614,
        'P', 508,
        'S', 437,
        'T', 463,
        'U', 599,
        'W', 619,
        '[', 338,
        ']', 340,
        'a', 423,
        'b', 436,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(9);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(388);
      if (('H' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(694);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(341);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(728);
      if (lookahead != 0) ADVANCE(730);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(729);
      if (lookahead != 0) ADVANCE(730);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(342);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(695);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(30);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(32);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(27);
      if (lookahead == 'T') ADVANCE(318);
      if (lookahead == 'U') ADVANCE(249);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        ',', 693,
        '-', 752,
        '0', 747,
        '1', 749,
        ':', 5,
        ';', 1,
        '=', 733,
        'A', 531,
        'B', 408,
        'C', 580,
        'D', 510,
        'E', 491,
        'F', 581,
        'G', 616,
        'I', 647,
        'M', 413,
        'N', 409,
        'O', 614,
        'P', 508,
        'S', 437,
        'T', 463,
        'U', 599,
        'W', 619,
        '[', 338,
        ']', 340,
        'a', 423,
        'b', 436,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(9);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(388);
      if (('H' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 10:
      if (lookahead == ',') ADVANCE(693);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        '0', 746,
        '1', 748,
        ':', 386,
        ';', 1,
        'A', 169,
        'B', 40,
        'C', 223,
        'D', 147,
        'E', 127,
        'F', 224,
        'G', 261,
        'I', 295,
        'M', 45,
        'N', 59,
        'O', 259,
        'P', 145,
        'S', 69,
        'T', 98,
        'U', 243,
        'V', 12,
        'W', 264,
        '[', 338,
        'a', 54,
        'b', 68,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '4') ADVANCE(7);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(334);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(6);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(335);
      END_STATE();
    case 17:
      if (lookahead == 'A') ADVANCE(213);
      END_STATE();
    case 18:
      if (lookahead == 'B') ADVANCE(317);
      END_STATE();
    case 19:
      if (lookahead == 'B') ADVANCE(231);
      END_STATE();
    case 20:
      if (lookahead == 'C') ADVANCE(236);
      END_STATE();
    case 21:
      if (lookahead == 'C') ADVANCE(240);
      END_STATE();
    case 22:
      if (lookahead == 'C') ADVANCE(241);
      END_STATE();
    case 23:
      if (lookahead == 'C') ADVANCE(242);
      END_STATE();
    case 24:
      if (lookahead == 'D') ADVANCE(124);
      if (lookahead == 'R') ADVANCE(113);
      END_STATE();
    case 25:
      if (lookahead == 'D') ADVANCE(122);
      END_STATE();
    case 26:
      if (lookahead == 'E') ADVANCE(93);
      if (lookahead == 'S') ADVANCE(77);
      if (lookahead == 'T') ADVANCE(151);
      END_STATE();
    case 27:
      if (lookahead == 'I') ADVANCE(202);
      END_STATE();
    case 28:
      if (lookahead == 'L') ADVANCE(374);
      if (lookahead == 'R') ADVANCE(376);
      if (lookahead == 'V') ADVANCE(378);
      END_STATE();
    case 29:
      if (lookahead == 'L') ADVANCE(112);
      END_STATE();
    case 30:
      if (lookahead == 'M') ADVANCE(38);
      if (lookahead == 'N') ADVANCE(39);
      END_STATE();
    case 31:
      if (lookahead == 'P') ADVANCE(233);
      END_STATE();
    case 32:
      if (lookahead == 'S') ADVANCE(292);
      END_STATE();
    case 33:
      if (lookahead == 'S') ADVANCE(141);
      END_STATE();
    case 34:
      if (lookahead == 'S') ADVANCE(302);
      END_STATE();
    case 35:
      if (lookahead == 'S') ADVANCE(304);
      END_STATE();
    case 36:
      if (lookahead == 'X') ADVANCE(718);
      if (lookahead == 'Y') ADVANCE(716);
      END_STATE();
    case 37:
      if (lookahead == ']') ADVANCE(346);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(251);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(190);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(71);
      if (lookahead == 'o') ADVANCE(173);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(316);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(753);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(244);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(252);
      if (lookahead == 'o') ADVANCE(312);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(174);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(250);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(263);
      if (lookahead == 'y') ADVANCE(179);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(186);
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(260);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(297);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(210);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(290);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(301);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(176);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(212);
      if (lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(303);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(195);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(269);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(270);
      END_STATE();
    case 67:
      if (lookahead == 'b') ADVANCE(755);
      END_STATE();
    case 68:
      if (lookahead == 'b') ADVANCE(67);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(49);
      if (lookahead == 'e') ADVANCE(78);
      if (lookahead == 'h') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(305);
      if (lookahead == 't') ADVANCE(48);
      if (lookahead == 'y') ADVANCE(204);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(364);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(167);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(137);
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(229);
      if (lookahead == 'd') ADVANCE(685);
      END_STATE();
    case 74:
      if (lookahead == 'c') ADVANCE(291);
      END_STATE();
    case 75:
      if (lookahead == 'c') ADVANCE(274);
      END_STATE();
    case 76:
      if (lookahead == 'c') ADVANCE(284);
      END_STATE();
    case 77:
      if (lookahead == 'c') ADVANCE(267);
      END_STATE();
    case 78:
      if (lookahead == 'c') ADVANCE(235);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(682);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(362);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(740);
      END_STATE();
    case 82:
      if (lookahead == 'd') ADVANCE(731);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(19);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(744);
      END_STATE();
    case 85:
      if (lookahead == 'd') ADVANCE(33);
      END_STATE();
    case 86:
      if (lookahead == 'd') ADVANCE(18);
      END_STATE();
    case 87:
      if (lookahead == 'd') ADVANCE(225);
      END_STATE();
    case 88:
      if (lookahead == 'd') ADVANCE(116);
      END_STATE();
    case 89:
      if (lookahead == 'd') ADVANCE(53);
      END_STATE();
    case 90:
      if (lookahead == 'd') ADVANCE(227);
      END_STATE();
    case 91:
      if (lookahead == 'd') ADVANCE(157);
      END_STATE();
    case 92:
      if (lookahead == 'd') ADVANCE(57);
      END_STATE();
    case 93:
      if (lookahead == 'd') ADVANCE(161);
      END_STATE();
    case 94:
      if (lookahead == 'd') ADVANCE(120);
      END_STATE();
    case 95:
      if (lookahead == 'd') ADVANCE(66);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(349);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(262);
      if (lookahead == 'i') ADVANCE(193);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(687);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(742);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(384);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(696);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(368);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(738);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(734);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(350);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(352);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(724);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(712);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(366);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(313);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(298);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 127:
      if (lookahead == 'f') ADVANCE(128);
      if (lookahead == 'n') ADVANCE(73);
      if (lookahead == 'v') ADVANCE(126);
      END_STATE();
    case 128:
      if (lookahead == 'f') ADVANCE(123);
      END_STATE();
    case 129:
      if (lookahead == 'f') ADVANCE(226);
      END_STATE();
    case 130:
      if (lookahead == 'g') ADVANCE(382);
      END_STATE();
    case 131:
      if (lookahead == 'g') ADVANCE(704);
      END_STATE();
    case 132:
      if (lookahead == 'g') ADVANCE(702);
      END_STATE();
    case 133:
      if (lookahead == 'g') ADVANCE(311);
      END_STATE();
    case 134:
      if (lookahead == 'g') ADVANCE(220);
      END_STATE();
    case 135:
      if (lookahead == 'g') ADVANCE(150);
      if (lookahead == 'k') ADVANCE(118);
      END_STATE();
    case 136:
      if (lookahead == 'g') ADVANCE(153);
      END_STATE();
    case 137:
      if (lookahead == 'h') ADVANCE(31);
      END_STATE();
    case 138:
      if (lookahead == 'h') ADVANCE(720);
      END_STATE();
    case 139:
      if (lookahead == 'h') ADVANCE(43);
      END_STATE();
    case 140:
      if (lookahead == 'h') ADVANCE(154);
      END_STATE();
    case 141:
      if (lookahead == 'h') ADVANCE(61);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(134);
      if (lookahead == 'p') ADVANCE(139);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(325);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(279);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(74);
      if (lookahead == 'l') ADVANCE(41);
      if (lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(136);
      END_STATE();
    case 147:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(197);
      END_STATE();
    case 149:
      if (lookahead == 'i') ADVANCE(245);
      END_STATE();
    case 150:
      if (lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 151:
      if (lookahead == 'i') ADVANCE(196);
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 152:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 153:
      if (lookahead == 'i') ADVANCE(215);
      END_STATE();
    case 154:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 155:
      if (lookahead == 'i') ADVANCE(217);
      END_STATE();
    case 156:
      if (lookahead == 'i') ADVANCE(178);
      END_STATE();
    case 157:
      if (lookahead == 'i') ADVANCE(205);
      END_STATE();
    case 158:
      if (lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 159:
      if (lookahead == 'i') ADVANCE(206);
      END_STATE();
    case 160:
      if (lookahead == 'i') ADVANCE(207);
      END_STATE();
    case 161:
      if (lookahead == 'i') ADVANCE(299);
      END_STATE();
    case 162:
      if (lookahead == 'i') ADVANCE(230);
      END_STATE();
    case 163:
      if (lookahead == 'i') ADVANCE(247);
      END_STATE();
    case 164:
      if (lookahead == 'i') ADVANCE(232);
      END_STATE();
    case 165:
      if (lookahead == 'i') ADVANCE(218);
      END_STATE();
    case 166:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 167:
      if (lookahead == 'k') ADVANCE(20);
      END_STATE();
    case 168:
      if (lookahead == 'k') ADVANCE(97);
      END_STATE();
    case 169:
      if (lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 170:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 171:
      if (lookahead == 'l') ADVANCE(380);
      END_STATE();
    case 172:
      if (lookahead == 'l') ADVANCE(175);
      if (lookahead == 'm') ADVANCE(191);
      END_STATE();
    case 173:
      if (lookahead == 'l') ADVANCE(80);
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 174:
      if (lookahead == 'l') ADVANCE(228);
      END_STATE();
    case 175:
      if (lookahead == 'l') ADVANCE(144);
      END_STATE();
    case 176:
      if (lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 177:
      if (lookahead == 'l') ADVANCE(234);
      END_STATE();
    case 178:
      if (lookahead == 'l') ADVANCE(277);
      END_STATE();
    case 179:
      if (lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 180:
      if (lookahead == 'l') ADVANCE(155);
      END_STATE();
    case 181:
      if (lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 182:
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 183:
      if (lookahead == 'l') ADVANCE(115);
      END_STATE();
    case 184:
      if (lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 185:
      if (lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 186:
      if (lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 187:
      if (lookahead == 'l') ADVANCE(237);
      END_STATE();
    case 188:
      if (lookahead == 'l') ADVANCE(238);
      END_STATE();
    case 189:
      if (lookahead == 'l') ADVANCE(239);
      END_STATE();
    case 190:
      if (lookahead == 'm') ADVANCE(96);
      END_STATE();
    case 191:
      if (lookahead == 'm') ADVANCE(62);
      END_STATE();
    case 192:
      if (lookahead == 'm') ADVANCE(99);
      END_STATE();
    case 193:
      if (lookahead == 'm') ADVANCE(114);
      if (lookahead == 't') ADVANCE(181);
      END_STATE();
    case 194:
      if (lookahead == 'm') ADVANCE(56);
      END_STATE();
    case 195:
      if (lookahead == 'm') ADVANCE(107);
      END_STATE();
    case 196:
      if (lookahead == 'm') ADVANCE(159);
      END_STATE();
    case 197:
      if (lookahead == 'm') ADVANCE(52);
      END_STATE();
    case 198:
      if (lookahead == 'm') ADVANCE(125);
      END_STATE();
    case 199:
      if (lookahead == 'n') ADVANCE(280);
      END_STATE();
    case 200:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 201:
      if (lookahead == 'n') ADVANCE(700);
      END_STATE();
    case 202:
      if (lookahead == 'n') ADVANCE(129);
      END_STATE();
    case 203:
      if (lookahead == 'n') ADVANCE(281);
      if (lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 204:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 205:
      if (lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 206:
      if (lookahead == 'n') ADVANCE(131);
      END_STATE();
    case 207:
      if (lookahead == 'n') ADVANCE(132);
      END_STATE();
    case 208:
      if (lookahead == 'n') ADVANCE(276);
      END_STATE();
    case 209:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 210:
      if (lookahead == 'n') ADVANCE(278);
      END_STATE();
    case 211:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 212:
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 213:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 214:
      if (lookahead == 'n') ADVANCE(286);
      END_STATE();
    case 215:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 216:
      if (lookahead == 'n') ADVANCE(287);
      END_STATE();
    case 217:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 218:
      if (lookahead == 'n') ADVANCE(288);
      END_STATE();
    case 219:
      if (lookahead == 'n') ADVANCE(293);
      END_STATE();
    case 220:
      if (lookahead == 'n') ADVANCE(198);
      END_STATE();
    case 221:
      if (lookahead == 'n') ADVANCE(64);
      if (lookahead == 's') ADVANCE(143);
      END_STATE();
    case 222:
      if (lookahead == 'o') ADVANCE(199);
      END_STATE();
    case 223:
      if (lookahead == 'o') ADVANCE(172);
      END_STATE();
    case 224:
      if (lookahead == 'o') ADVANCE(203);
      END_STATE();
    case 225:
      if (lookahead == 'o') ADVANCE(314);
      END_STATE();
    case 226:
      if (lookahead == 'o') ADVANCE(339);
      END_STATE();
    case 227:
      if (lookahead == 'o') ADVANCE(315);
      END_STATE();
    case 228:
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 229:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 230:
      if (lookahead == 'o') ADVANCE(208);
      END_STATE();
    case 231:
      if (lookahead == 'o') ADVANCE(266);
      END_STATE();
    case 232:
      if (lookahead == 'o') ADVANCE(201);
      END_STATE();
    case 233:
      if (lookahead == 'o') ADVANCE(165);
      END_STATE();
    case 234:
      if (lookahead == 'o') ADVANCE(307);
      END_STATE();
    case 235:
      if (lookahead == 'o') ADVANCE(211);
      END_STATE();
    case 236:
      if (lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 237:
      if (lookahead == 'o') ADVANCE(308);
      END_STATE();
    case 238:
      if (lookahead == 'o') ADVANCE(309);
      END_STATE();
    case 239:
      if (lookahead == 'o') ADVANCE(310);
      END_STATE();
    case 240:
      if (lookahead == 'o') ADVANCE(187);
      END_STATE();
    case 241:
      if (lookahead == 'o') ADVANCE(188);
      END_STATE();
    case 242:
      if (lookahead == 'o') ADVANCE(189);
      END_STATE();
    case 243:
      if (lookahead == 'p') ADVANCE(89);
      END_STATE();
    case 244:
      if (lookahead == 'p') ADVANCE(140);
      END_STATE();
    case 245:
      if (lookahead == 'p') ADVANCE(285);
      END_STATE();
    case 246:
      if (lookahead == 'p') ADVANCE(294);
      END_STATE();
    case 247:
      if (lookahead == 'p') ADVANCE(289);
      END_STATE();
    case 248:
      if (lookahead == 'p') ADVANCE(110);
      END_STATE();
    case 249:
      if (lookahead == 'p') ADVANCE(92);
      END_STATE();
    case 250:
      if (lookahead == 'p') ADVANCE(34);
      END_STATE();
    case 251:
      if (lookahead == 'r') ADVANCE(168);
      END_STATE();
    case 252:
      if (lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 253:
      if (lookahead == 'r') ADVANCE(722);
      END_STATE();
    case 254:
      if (lookahead == 'r') ADVANCE(360);
      END_STATE();
    case 255:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 256:
      if (lookahead == 'r') ADVANCE(354);
      END_STATE();
    case 257:
      if (lookahead == 'r') ADVANCE(358);
      END_STATE();
    case 258:
      if (lookahead == 'r') ADVANCE(356);
      END_STATE();
    case 259:
      if (lookahead == 'r') ADVANCE(146);
      if (lookahead == 'u') ADVANCE(300);
      END_STATE();
    case 260:
      if (lookahead == 'r') ADVANCE(322);
      END_STATE();
    case 261:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 262:
      if (lookahead == 'r') ADVANCE(296);
      if (lookahead == 'x') ADVANCE(282);
      END_STATE();
    case 263:
      if (lookahead == 'r') ADVANCE(283);
      END_STATE();
    case 264:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 265:
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 266:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 267:
      if (lookahead == 'r') ADVANCE(163);
      END_STATE();
    case 268:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 269:
      if (lookahead == 'r') ADVANCE(323);
      END_STATE();
    case 270:
      if (lookahead == 'r') ADVANCE(324);
      END_STATE();
    case 271:
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 272:
      if (lookahead == 's') ADVANCE(344);
      END_STATE();
    case 273:
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 274:
      if (lookahead == 's') ADVANCE(347);
      END_STATE();
    case 275:
      if (lookahead == 's') ADVANCE(343);
      END_STATE();
    case 276:
      if (lookahead == 's') ADVANCE(714);
      END_STATE();
    case 277:
      if (lookahead == 's') ADVANCE(710);
      END_STATE();
    case 278:
      if (lookahead == 's') ADVANCE(182);
      END_STATE();
    case 279:
      if (lookahead == 's') ADVANCE(162);
      END_STATE();
    case 280:
      if (lookahead == 't') ADVANCE(271);
      END_STATE();
    case 281:
      if (lookahead == 't') ADVANCE(221);
      END_STATE();
    case 282:
      if (lookahead == 't') ADVANCE(691);
      END_STATE();
    case 283:
      if (lookahead == 't') ADVANCE(683);
      END_STATE();
    case 284:
      if (lookahead == 't') ADVANCE(689);
      END_STATE();
    case 285:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 286:
      if (lookahead == 't') ADVANCE(736);
      END_STATE();
    case 287:
      if (lookahead == 't') ADVANCE(372);
      END_STATE();
    case 288:
      if (lookahead == 't') ADVANCE(706);
      END_STATE();
    case 289:
      if (lookahead == 't') ADVANCE(698);
      END_STATE();
    case 290:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 291:
      if (lookahead == 't') ADVANCE(306);
      END_STATE();
    case 292:
      if (lookahead == 't') ADVANCE(319);
      END_STATE();
    case 293:
      if (lookahead == 't') ADVANCE(272);
      END_STATE();
    case 294:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 295:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 296:
      if (lookahead == 't') ADVANCE(166);
      END_STATE();
    case 297:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 298:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 299:
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 300:
      if (lookahead == 't') ADVANCE(180);
      END_STATE();
    case 301:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 302:
      if (lookahead == 't') ADVANCE(320);
      END_STATE();
    case 303:
      if (lookahead == 't') ADVANCE(164);
      END_STATE();
    case 304:
      if (lookahead == 't') ADVANCE(321);
      END_STATE();
    case 305:
      if (lookahead == 'u') ADVANCE(209);
      END_STATE();
    case 306:
      if (lookahead == 'u') ADVANCE(265);
      END_STATE();
    case 307:
      if (lookahead == 'u') ADVANCE(254);
      END_STATE();
    case 308:
      if (lookahead == 'u') ADVANCE(256);
      END_STATE();
    case 309:
      if (lookahead == 'u') ADVANCE(257);
      END_STATE();
    case 310:
      if (lookahead == 'u') ADVANCE(258);
      END_STATE();
    case 311:
      if (lookahead == 'u') ADVANCE(106);
      END_STATE();
    case 312:
      if (lookahead == 'v') ADVANCE(158);
      END_STATE();
    case 313:
      if (lookahead == 'v') ADVANCE(117);
      END_STATE();
    case 314:
      if (lookahead == 'w') ADVANCE(370);
      END_STATE();
    case 315:
      if (lookahead == 'w') ADVANCE(726);
      END_STATE();
    case 316:
      if (lookahead == 'y') ADVANCE(24);
      END_STATE();
    case 317:
      if (lookahead == 'y') ADVANCE(708);
      END_STATE();
    case 318:
      if (lookahead == 'y') ADVANCE(248);
      END_STATE();
    case 319:
      if (lookahead == 'y') ADVANCE(183);
      END_STATE();
    case 320:
      if (lookahead == 'y') ADVANCE(184);
      END_STATE();
    case 321:
      if (lookahead == 'y') ADVANCE(185);
      END_STATE();
    case 322:
      if (lookahead == 'y') ADVANCE(21);
      END_STATE();
    case 323:
      if (lookahead == 'y') ADVANCE(22);
      END_STATE();
    case 324:
      if (lookahead == 'y') ADVANCE(23);
      END_STATE();
    case 325:
      if (lookahead == 'z') ADVANCE(108);
      END_STATE();
    case 326:
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(333);
      END_STATE();
    case 327:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(327);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(681);
      END_STATE();
    case 328:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(679);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(680);
      END_STATE();
    case 329:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(678);
      END_STATE();
    case 330:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(330);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 331:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 332:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      END_STATE();
    case 333:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(751);
      END_STATE();
    case 334:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      END_STATE();
    case 335:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      END_STATE();
    case 336:
      if (eof) ADVANCE(337);
      ADVANCE_MAP(
        '0', 746,
        '1', 748,
        ':', 386,
        ';', 1,
        'A', 169,
        'B', 40,
        'C', 223,
        'D', 147,
        'E', 127,
        'F', 224,
        'G', 261,
        'I', 295,
        'M', 45,
        'N', 59,
        'O', 259,
        'P', 145,
        'S', 69,
        'T', 98,
        'U', 243,
        'V', 12,
        'W', 264,
        '[', 338,
        'a', 54,
        'b', 68,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == 'F') ADVANCE(222);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_ScriptInfo);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(341);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(728);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(342);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_V4Styles);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_Events);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_Events);
      if (lookahead == '-') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_LBRACKFonts_RBRACK);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_Graphics);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_Graphics);
      if (lookahead == '-') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_styles_header_name);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_styles_header_font_name);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_styles_header_font_name);
      if (lookahead == '-') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_styles_header_font_size);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_styles_header_font_size);
      if (lookahead == '-') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_styles_header_primary_color);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_styles_header_primary_color);
      if (lookahead == '-') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_styles_header_secondary_color);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_styles_header_secondary_color);
      if (lookahead == '-') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_styles_header_tertiary_color);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_styles_header_tertiary_color);
      if (lookahead == '-') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_styles_header_back_color);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_styles_header_back_color);
      if (lookahead == '-') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_styles_header_bold);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_styles_header_bold);
      if (lookahead == '-') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_styles_header_italic);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_styles_header_italic);
      if (lookahead == '-') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_styles_header_border_style);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_styles_header_border_style);
      if (lookahead == '-') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_styles_header_outline);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_styles_header_outline);
      if (lookahead == '-') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_styles_header_shadow);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_styles_header_shadow);
      if (lookahead == '-') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_styles_header_alignment);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_styles_header_alignment);
      if (lookahead == '-') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_MarginL);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_MarginL);
      if (lookahead == '-') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_MarginR);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_MarginR);
      if (lookahead == '-') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_MarginV);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_MarginV);
      if (lookahead == '-') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_styles_header_alpha_level);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_styles_header_alpha_level);
      if (lookahead == '-') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_styles_header_encoding);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_styles_header_encoding);
      if (lookahead == '-') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_Style);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_Style);
      if (lookahead == '-') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_styles_body_row_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(386);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == ':') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(676);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == ':') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(387);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == ':') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'A') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'B') ADVANCE(668);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'B') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'C') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'C') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'C') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'C') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'D') ADVANCE(489);
      if (lookahead == 'R') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'D') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'E') ADVANCE(460);
      if (lookahead == 'S') ADVANCE(445);
      if (lookahead == 'T') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'L') ADVANCE(375);
      if (lookahead == 'R') ADVANCE(377);
      if (lookahead == 'V') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'L') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'P') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'S') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'S') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'S') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'T') ADVANCE(669);
      if (lookahead == 'U') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'X') ADVANCE(719);
      if (lookahead == 'Y') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'a') ADVANCE(438);
      if (lookahead == 'o') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'a') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'a') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'a') ADVANCE(754);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'a') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'a') ADVANCE(607);
      if (lookahead == 'o') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'a') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'a') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'a') ADVANCE(618);
      if (lookahead == 'y') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'a') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'a') ADVANCE(546);
      if (lookahead == 'r') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'a') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'a') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'a') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'a') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'a') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'a') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'a') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'a') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'a') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'a') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'a') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'a') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'a') ADVANCE(571);
      if (lookahead == 'e') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'a') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'a') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'a') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'b') ADVANCE(756);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'b') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'c') ADVANCE(418);
      if (lookahead == 'e') ADVANCE(442);
      if (lookahead == 'h') ADVANCE(419);
      if (lookahead == 'o') ADVANCE(656);
      if (lookahead == 't') ADVANCE(416);
      if (lookahead == 'y') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'c') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'c') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'c') ADVANCE(586);
      if (lookahead == 'd') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'c') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'c') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'c') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'c') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'c') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'c') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'd') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'd') ADVANCE(741);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'd') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'd') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'd') ADVANCE(745);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'd') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'd') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'd') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'd') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'd') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'd') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'd') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'd') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'd') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'd') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'd') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'e') ADVANCE(617);
      if (lookahead == 'i') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'e') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'e') ADVANCE(743);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'e') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'e') ADVANCE(697);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'e') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'e') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'e') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'e') ADVANCE(735);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'e') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'e') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'e') ADVANCE(725);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'e') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'e') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'e') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'e') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'e') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'e') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'e') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'e') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'e') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'e') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'e') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'e') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'e') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'e') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'e') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'e') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'f') ADVANCE(492);
      if (lookahead == 'n') ADVANCE(440);
      if (lookahead == 'v') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'f') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'g') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'g') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'g') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'g') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'g') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'g') ADVANCE(515);
      if (lookahead == 'k') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'g') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'h') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'h') ADVANCE(721);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'h') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'h') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'h') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'i') ADVANCE(497);
      if (lookahead == 'p') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'i') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'i') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'i') ADVANCE(443);
      if (lookahead == 'l') ADVANCE(410);
      if (lookahead == 'r') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'i') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'i') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'i') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'i') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'i') ADVANCE(557);
      if (lookahead == 'r') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'i') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'i') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'i') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'i') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'i') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'i') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'i') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'i') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'i') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'i') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'i') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'i') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'i') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'i') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'i') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'i') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'k') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'l') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'l') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'l') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'l') ADVANCE(537);
      if (lookahead == 'm') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'l') ADVANCE(447);
      if (lookahead == 'r') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'l') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'l') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'l') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'l') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'l') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'l') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'l') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'l') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'l') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'l') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'l') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'l') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'l') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'l') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'l') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'm') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'm') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'm') ADVANCE(480);
      if (lookahead == 't') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'm') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'm') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'm') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'm') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'm') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'n') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'n') ADVANCE(701);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'n') ADVANCE(633);
      if (lookahead == 'r') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'n') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'n') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'n') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'n') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'n') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'n') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'n') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'n') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'n') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'n') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'n') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'n') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'n') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'n') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'n') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'n') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'n') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'n') ADVANCE(429);
      if (lookahead == 's') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'o') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'o') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'o') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'o') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'o') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'o') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'o') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'o') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'o') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'o') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'o') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'o') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'o') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'o') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'o') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'o') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'o') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'o') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'o') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'p') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'p') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'p') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'p') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'p') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'p') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'p') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'p') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'r') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'r') ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'r') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'r') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'r') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'r') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'r') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'r') ADVANCE(509);
      if (lookahead == 'u') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'r') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'r') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'r') ADVANCE(651);
      if (lookahead == 'x') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'r') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'r') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'r') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'r') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'r') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'r') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'r') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'r') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 's') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 's') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 's') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 's') ADVANCE(715);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 's') ADVANCE(711);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 's') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 's') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 't') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 't') ADVANCE(692);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 't') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 't') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 't') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 't') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 't') ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 't') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 't') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 't') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 't') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 't') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 't') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 't') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 't') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 't') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 't') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 't') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 't') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 't') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 't') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 't') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 't') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'u') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'u') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'u') ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'u') ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'u') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'u') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'u') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'v') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'v') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'w') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'w') ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'y') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'y') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'y') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'y') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'y') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'y') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'y') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'y') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == 'z') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(677);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(676);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_style_name);
      if (lookahead == '-') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_style_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(678);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_style_font_name);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(679);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(680);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_style_font_name);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(680);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_style_font_size_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(681);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_events_header_format);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_events_header_start);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_events_header_start);
      if (lookahead == '-') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_events_header_end);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_events_header_end);
      if (lookahead == '-') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_events_header_name);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_events_header_name);
      if (lookahead == '-') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_events_header_effect);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_events_header_effect);
      if (lookahead == '-') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_events_header_text);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_events_header_text);
      if (lookahead == '-') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym__comma);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(693);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_info_comment);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_Title);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_Title);
      if (lookahead == '-') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_OriginalScript);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_OriginalScript);
      if (lookahead == '-') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_OriginalTranslation);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_OriginalTranslation);
      if (lookahead == '-') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_OriginalEditing);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_OriginalEditing);
      if (lookahead == '-') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_OriginalTiming);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_OriginalTiming);
      if (lookahead == '-') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_SynchPoint);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_SynchPoint);
      if (lookahead == '-') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_ScriptUpdatedBy);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_ScriptUpdatedBy);
      if (lookahead == '-') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_UpdateDetails);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_UpdateDetails);
      if (lookahead == '-') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_ScriptType);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_ScriptType);
      if (lookahead == '-') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_Collisions);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_Collisions);
      if (lookahead == '-') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_PlayResY);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_PlayResY);
      if (lookahead == '-') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_PlayResX);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_PlayResX);
      if (lookahead == '-') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_PlayDepth);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_PlayDepth);
      if (lookahead == '-') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_Timer);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_Timer);
      if (lookahead == '-') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_WrapStyle);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_WrapStyle);
      if (lookahead == '-') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_ScaledBorderAndShadow);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_ScaledBorderAndShadow);
      if (lookahead == '-') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_info_prop_value_token1);
      if (lookahead == '\n') ADVANCE(341);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(728);
      if (lookahead != 0) ADVANCE(730);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_info_prop_value_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(729);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(730);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_info_prop_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(730);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_Marked);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_Marked);
      if (lookahead == '-') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_event_dialogue_row_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(733);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_event_type_dialogue);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_event_type_dialogue);
      if (lookahead == '-') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_event_type_comment);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_event_type_comment);
      if (lookahead == '-') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_event_type_picture);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_event_type_picture);
      if (lookahead == '-') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_event_type_sound);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_event_type_sound);
      if (lookahead == '-') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_event_type_movie);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_event_type_movie);
      if (lookahead == '-') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_event_type_command);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_event_type_command);
      if (lookahead == '-') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == ':') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(387);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == ':') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(387);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_event_start_token1);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_event_start_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(750);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_event_style_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_aaa);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_aaa);
      if (lookahead == '-') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_bbb);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_bbb);
      if (lookahead == '-') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(677);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 336},
  [3] = {.lex_state = 336},
  [4] = {.lex_state = 336},
  [5] = {.lex_state = 336},
  [6] = {.lex_state = 336},
  [7] = {.lex_state = 336},
  [8] = {.lex_state = 336},
  [9] = {.lex_state = 336},
  [10] = {.lex_state = 336},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 336},
  [14] = {.lex_state = 336},
  [15] = {.lex_state = 336},
  [16] = {.lex_state = 336},
  [17] = {.lex_state = 336},
  [18] = {.lex_state = 336},
  [19] = {.lex_state = 336},
  [20] = {.lex_state = 336},
  [21] = {.lex_state = 336},
  [22] = {.lex_state = 336},
  [23] = {.lex_state = 336},
  [24] = {.lex_state = 336},
  [25] = {.lex_state = 336},
  [26] = {.lex_state = 336},
  [27] = {.lex_state = 336},
  [28] = {.lex_state = 336},
  [29] = {.lex_state = 336},
  [30] = {.lex_state = 336},
  [31] = {.lex_state = 336},
  [32] = {.lex_state = 336},
  [33] = {.lex_state = 336},
  [34] = {.lex_state = 336},
  [35] = {.lex_state = 336},
  [36] = {.lex_state = 336},
  [37] = {.lex_state = 336},
  [38] = {.lex_state = 336},
  [39] = {.lex_state = 336},
  [40] = {.lex_state = 336},
  [41] = {.lex_state = 336},
  [42] = {.lex_state = 336},
  [43] = {.lex_state = 336},
  [44] = {.lex_state = 336},
  [45] = {.lex_state = 336},
  [46] = {.lex_state = 336},
  [47] = {.lex_state = 336},
  [48] = {.lex_state = 336},
  [49] = {.lex_state = 336},
  [50] = {.lex_state = 336},
  [51] = {.lex_state = 336},
  [52] = {.lex_state = 336},
  [53] = {.lex_state = 336},
  [54] = {.lex_state = 336},
  [55] = {.lex_state = 336},
  [56] = {.lex_state = 336},
  [57] = {.lex_state = 336},
  [58] = {.lex_state = 336},
  [59] = {.lex_state = 336},
  [60] = {.lex_state = 336},
  [61] = {.lex_state = 10},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 10},
  [65] = {.lex_state = 10},
  [66] = {.lex_state = 10},
  [67] = {.lex_state = 10},
  [68] = {.lex_state = 10},
  [69] = {.lex_state = 10},
  [70] = {.lex_state = 10},
  [71] = {.lex_state = 10},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 10},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 10},
  [86] = {.lex_state = 336},
  [87] = {.lex_state = 336},
  [88] = {.lex_state = 336},
  [89] = {.lex_state = 336},
  [90] = {.lex_state = 336},
  [91] = {.lex_state = 336},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 10},
  [94] = {.lex_state = 10},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 10},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 10},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 10},
  [101] = {.lex_state = 10},
  [102] = {.lex_state = 10},
  [103] = {.lex_state = 10},
  [104] = {.lex_state = 10},
  [105] = {.lex_state = 10},
  [106] = {.lex_state = 10},
  [107] = {.lex_state = 10},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 10},
  [110] = {.lex_state = 10},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 10},
  [113] = {.lex_state = 10},
  [114] = {.lex_state = 10},
  [115] = {.lex_state = 2},
  [116] = {.lex_state = 10},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 10},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 10},
  [121] = {.lex_state = 10},
  [122] = {.lex_state = 10},
  [123] = {.lex_state = 10},
  [124] = {.lex_state = 2},
  [125] = {.lex_state = 10},
  [126] = {.lex_state = 2},
  [127] = {.lex_state = 10},
  [128] = {.lex_state = 327},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 330},
  [131] = {.lex_state = 330},
  [132] = {.lex_state = 336},
  [133] = {.lex_state = 327},
  [134] = {.lex_state = 336},
  [135] = {.lex_state = 327},
  [136] = {.lex_state = 330},
  [137] = {.lex_state = 327},
  [138] = {.lex_state = 330},
  [139] = {.lex_state = 327},
  [140] = {.lex_state = 327},
  [141] = {.lex_state = 330},
  [142] = {.lex_state = 327},
  [143] = {.lex_state = 327},
  [144] = {.lex_state = 327},
  [145] = {.lex_state = 336},
  [146] = {.lex_state = 327},
  [147] = {.lex_state = 327},
  [148] = {.lex_state = 330},
  [149] = {.lex_state = 330},
  [150] = {.lex_state = 327},
  [151] = {.lex_state = 330},
  [152] = {.lex_state = 336},
  [153] = {.lex_state = 330},
  [154] = {.lex_state = 327},
  [155] = {.lex_state = 330},
  [156] = {.lex_state = 330},
  [157] = {.lex_state = 327},
  [158] = {.lex_state = 327},
  [159] = {.lex_state = 327},
  [160] = {.lex_state = 336},
  [161] = {.lex_state = 327},
  [162] = {.lex_state = 327},
  [163] = {.lex_state = 327},
  [164] = {.lex_state = 327},
  [165] = {.lex_state = 327},
  [166] = {.lex_state = 327},
  [167] = {.lex_state = 327},
  [168] = {.lex_state = 327},
  [169] = {.lex_state = 327},
  [170] = {.lex_state = 327},
  [171] = {.lex_state = 327},
  [172] = {.lex_state = 327},
  [173] = {.lex_state = 330},
  [174] = {.lex_state = 327},
  [175] = {.lex_state = 327},
  [176] = {.lex_state = 336},
  [177] = {.lex_state = 327},
  [178] = {.lex_state = 327},
  [179] = {.lex_state = 327},
  [180] = {.lex_state = 327},
  [181] = {.lex_state = 327},
  [182] = {.lex_state = 336},
  [183] = {.lex_state = 327},
  [184] = {.lex_state = 327},
  [185] = {.lex_state = 327},
  [186] = {.lex_state = 327},
  [187] = {.lex_state = 327},
  [188] = {.lex_state = 336},
  [189] = {.lex_state = 327},
  [190] = {.lex_state = 327},
  [191] = {.lex_state = 327},
  [192] = {.lex_state = 336},
  [193] = {.lex_state = 327},
  [194] = {.lex_state = 327},
  [195] = {.lex_state = 327},
  [196] = {.lex_state = 327},
  [197] = {.lex_state = 327},
  [198] = {.lex_state = 327},
  [199] = {.lex_state = 327},
  [200] = {.lex_state = 327},
  [201] = {.lex_state = 327},
  [202] = {.lex_state = 327},
  [203] = {.lex_state = 327},
  [204] = {.lex_state = 327},
  [205] = {.lex_state = 327},
  [206] = {.lex_state = 327},
  [207] = {.lex_state = 327},
  [208] = {.lex_state = 327},
  [209] = {.lex_state = 327},
  [210] = {.lex_state = 327},
  [211] = {.lex_state = 327},
  [212] = {.lex_state = 327},
  [213] = {.lex_state = 327},
  [214] = {.lex_state = 327},
  [215] = {.lex_state = 327},
  [216] = {.lex_state = 327},
  [217] = {.lex_state = 327},
  [218] = {.lex_state = 327},
  [219] = {.lex_state = 327},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 4},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 336},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 336},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 336},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 336},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 336},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 4},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 336},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 336},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 336},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 4},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 336},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 4},
  [361] = {.lex_state = 4},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 336},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 4},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 4},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 4},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 4},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 336},
  [384] = {.lex_state = 336},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 4},
  [389] = {.lex_state = 328},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 4},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 4},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 4},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 4},
  [405] = {.lex_state = 336},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 4},
  [409] = {.lex_state = 336},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 336},
  [413] = {.lex_state = 336},
  [414] = {.lex_state = 4},
  [415] = {.lex_state = 336},
  [416] = {.lex_state = 336},
  [417] = {.lex_state = 4},
  [418] = {.lex_state = 336},
  [419] = {.lex_state = 336},
  [420] = {.lex_state = 4},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 329},
  [423] = {.lex_state = 4},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 4},
  [426] = {.lex_state = 4},
  [427] = {.lex_state = 4},
  [428] = {.lex_state = 336},
  [429] = {.lex_state = 4},
  [430] = {.lex_state = 336},
  [431] = {.lex_state = 336},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 336},
  [435] = {.lex_state = 4},
  [436] = {.lex_state = 336},
  [437] = {.lex_state = 4},
  [438] = {.lex_state = 336},
  [439] = {.lex_state = 4},
  [440] = {.lex_state = 336},
  [441] = {.lex_state = 4},
  [442] = {.lex_state = 336},
  [443] = {.lex_state = 4},
  [444] = {.lex_state = 336},
  [445] = {.lex_state = 4},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 336},
  [448] = {.lex_state = 336},
  [449] = {.lex_state = 336},
  [450] = {.lex_state = 4},
  [451] = {.lex_state = 4},
  [452] = {.lex_state = 4},
  [453] = {.lex_state = 4},
  [454] = {.lex_state = 4},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 4},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 336},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 336},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 4},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 4},
  [487] = {.lex_state = 4},
  [488] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_Events] = ACTIONS(1),
    [anon_sym_LBRACKFonts_RBRACK] = ACTIONS(1),
    [anon_sym_Graphics] = ACTIONS(1),
    [sym_styles_header_name] = ACTIONS(1),
    [sym_styles_header_font_name] = ACTIONS(1),
    [sym_styles_header_font_size] = ACTIONS(1),
    [sym_styles_header_primary_color] = ACTIONS(1),
    [sym_styles_header_secondary_color] = ACTIONS(1),
    [sym_styles_header_tertiary_color] = ACTIONS(1),
    [sym_styles_header_back_color] = ACTIONS(1),
    [sym_styles_header_bold] = ACTIONS(1),
    [sym_styles_header_italic] = ACTIONS(1),
    [sym_styles_header_border_style] = ACTIONS(1),
    [sym_styles_header_outline] = ACTIONS(1),
    [sym_styles_header_shadow] = ACTIONS(1),
    [sym_styles_header_alignment] = ACTIONS(1),
    [anon_sym_MarginL] = ACTIONS(1),
    [anon_sym_MarginR] = ACTIONS(1),
    [anon_sym_MarginV] = ACTIONS(1),
    [sym_styles_header_alpha_level] = ACTIONS(1),
    [sym_styles_header_encoding] = ACTIONS(1),
    [anon_sym_Style] = ACTIONS(1),
    [sym_style_name] = ACTIONS(1),
    [aux_sym_style_font_size_token1] = ACTIONS(1),
    [sym_events_header_format] = ACTIONS(1),
    [sym_events_header_start] = ACTIONS(1),
    [sym_events_header_end] = ACTIONS(1),
    [sym_events_header_name] = ACTIONS(1),
    [sym_events_header_effect] = ACTIONS(1),
    [sym_events_header_text] = ACTIONS(1),
    [sym__comma] = ACTIONS(1),
    [sym_info_comment] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_Title] = ACTIONS(1),
    [anon_sym_OriginalScript] = ACTIONS(1),
    [anon_sym_OriginalTranslation] = ACTIONS(1),
    [anon_sym_OriginalEditing] = ACTIONS(1),
    [anon_sym_OriginalTiming] = ACTIONS(1),
    [anon_sym_SynchPoint] = ACTIONS(1),
    [anon_sym_ScriptUpdatedBy] = ACTIONS(1),
    [anon_sym_UpdateDetails] = ACTIONS(1),
    [anon_sym_ScriptType] = ACTIONS(1),
    [anon_sym_Collisions] = ACTIONS(1),
    [anon_sym_PlayResY] = ACTIONS(1),
    [anon_sym_PlayResX] = ACTIONS(1),
    [anon_sym_PlayDepth] = ACTIONS(1),
    [anon_sym_Timer] = ACTIONS(1),
    [anon_sym_WrapStyle] = ACTIONS(1),
    [anon_sym_ScaledBorderAndShadow] = ACTIONS(1),
    [anon_sym_Marked] = ACTIONS(1),
    [aux_sym_event_dialogue_row_token1] = ACTIONS(1),
    [sym_event_type_dialogue] = ACTIONS(1),
    [sym_event_type_comment] = ACTIONS(1),
    [sym_event_type_picture] = ACTIONS(1),
    [sym_event_type_sound] = ACTIONS(1),
    [sym_event_type_movie] = ACTIONS(1),
    [sym_event_type_command] = ACTIONS(1),
    [anon_sym_0] = ACTIONS(1),
    [anon_sym_1] = ACTIONS(1),
    [aux_sym_event_start_token1] = ACTIONS(1),
    [aux_sym_event_style_token1] = ACTIONS(1),
    [anon_sym_aaa] = ACTIONS(1),
    [anon_sym_bbb] = ACTIONS(1),
  },
  [1] = {
    [sym_ssa] = STATE(488),
    [sym_section] = STATE(12),
    [sym_section_info] = STATE(63),
    [sym_section_info_name] = STATE(2),
    [sym_section_styles] = STATE(63),
    [sym_section_styles_name] = STATE(134),
    [sym_section_events] = STATE(63),
    [sym_section_events_name] = STATE(145),
    [sym_section_fonts] = STATE(63),
    [sym_section_fonts_name] = STATE(52),
    [sym_section_graphics] = STATE(63),
    [sym_section_graphics_name] = STATE(51),
    [aux_sym_ssa_repeat1] = STATE(12),
    [anon_sym_LBRACK] = ACTIONS(3),
    [anon_sym_LBRACKFonts_RBRACK] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      sym_info_comment,
    STATE(7), 1,
      sym_info_prop,
    STATE(466), 1,
      sym_info_prop_name,
    ACTIONS(7), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACKFonts_RBRACK,
    STATE(4), 2,
      sym_info_body_row,
      aux_sym_section_info_repeat1,
    ACTIONS(13), 16,
      anon_sym_Title,
      anon_sym_OriginalScript,
      anon_sym_OriginalTranslation,
      anon_sym_OriginalEditing,
      anon_sym_OriginalTiming,
      anon_sym_SynchPoint,
      anon_sym_ScriptUpdatedBy,
      anon_sym_UpdateDetails,
      anon_sym_ScriptType,
      anon_sym_Collisions,
      anon_sym_PlayResY,
      anon_sym_PlayResX,
      anon_sym_PlayDepth,
      anon_sym_Timer,
      anon_sym_WrapStyle,
      anon_sym_ScaledBorderAndShadow,
  [39] = 7,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_info_comment,
    STATE(7), 1,
      sym_info_prop,
    STATE(466), 1,
      sym_info_prop_name,
    ACTIONS(15), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACKFonts_RBRACK,
    STATE(3), 2,
      sym_info_body_row,
      aux_sym_section_info_repeat1,
    ACTIONS(22), 16,
      anon_sym_Title,
      anon_sym_OriginalScript,
      anon_sym_OriginalTranslation,
      anon_sym_OriginalEditing,
      anon_sym_OriginalTiming,
      anon_sym_SynchPoint,
      anon_sym_ScriptUpdatedBy,
      anon_sym_UpdateDetails,
      anon_sym_ScriptType,
      anon_sym_Collisions,
      anon_sym_PlayResY,
      anon_sym_PlayResX,
      anon_sym_PlayDepth,
      anon_sym_Timer,
      anon_sym_WrapStyle,
      anon_sym_ScaledBorderAndShadow,
  [78] = 7,
    ACTIONS(11), 1,
      sym_info_comment,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    STATE(7), 1,
      sym_info_prop,
    STATE(466), 1,
      sym_info_prop_name,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACKFonts_RBRACK,
    STATE(3), 2,
      sym_info_body_row,
      aux_sym_section_info_repeat1,
    ACTIONS(13), 16,
      anon_sym_Title,
      anon_sym_OriginalScript,
      anon_sym_OriginalTranslation,
      anon_sym_OriginalEditing,
      anon_sym_OriginalTiming,
      anon_sym_SynchPoint,
      anon_sym_ScriptUpdatedBy,
      anon_sym_UpdateDetails,
      anon_sym_ScriptType,
      anon_sym_Collisions,
      anon_sym_PlayResY,
      anon_sym_PlayResX,
      anon_sym_PlayDepth,
      anon_sym_Timer,
      anon_sym_WrapStyle,
      anon_sym_ScaledBorderAndShadow,
  [117] = 2,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 19,
      ts_builtin_sym_end,
      anon_sym_LBRACKFonts_RBRACK,
      sym_info_comment,
      anon_sym_Title,
      anon_sym_OriginalScript,
      anon_sym_OriginalTranslation,
      anon_sym_OriginalEditing,
      anon_sym_OriginalTiming,
      anon_sym_SynchPoint,
      anon_sym_ScriptUpdatedBy,
      anon_sym_UpdateDetails,
      anon_sym_ScriptType,
      anon_sym_Collisions,
      anon_sym_PlayResY,
      anon_sym_PlayResX,
      anon_sym_PlayDepth,
      anon_sym_Timer,
      anon_sym_WrapStyle,
      anon_sym_ScaledBorderAndShadow,
  [142] = 2,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 19,
      ts_builtin_sym_end,
      anon_sym_LBRACKFonts_RBRACK,
      sym_info_comment,
      anon_sym_Title,
      anon_sym_OriginalScript,
      anon_sym_OriginalTranslation,
      anon_sym_OriginalEditing,
      anon_sym_OriginalTiming,
      anon_sym_SynchPoint,
      anon_sym_ScriptUpdatedBy,
      anon_sym_UpdateDetails,
      anon_sym_ScriptType,
      anon_sym_Collisions,
      anon_sym_PlayResY,
      anon_sym_PlayResX,
      anon_sym_PlayDepth,
      anon_sym_Timer,
      anon_sym_WrapStyle,
      anon_sym_ScaledBorderAndShadow,
  [167] = 2,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 19,
      ts_builtin_sym_end,
      anon_sym_LBRACKFonts_RBRACK,
      sym_info_comment,
      anon_sym_Title,
      anon_sym_OriginalScript,
      anon_sym_OriginalTranslation,
      anon_sym_OriginalEditing,
      anon_sym_OriginalTiming,
      anon_sym_SynchPoint,
      anon_sym_ScriptUpdatedBy,
      anon_sym_UpdateDetails,
      anon_sym_ScriptType,
      anon_sym_Collisions,
      anon_sym_PlayResY,
      anon_sym_PlayResX,
      anon_sym_PlayDepth,
      anon_sym_Timer,
      anon_sym_WrapStyle,
      anon_sym_ScaledBorderAndShadow,
  [192] = 10,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      sym_event_type_dialogue,
    ACTIONS(47), 1,
      sym_event_type_comment,
    ACTIONS(49), 1,
      sym_event_type_picture,
    ACTIONS(51), 1,
      sym_event_type_sound,
    ACTIONS(53), 1,
      sym_event_type_movie,
    ACTIONS(55), 1,
      sym_event_type_command,
    ACTIONS(41), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACKFonts_RBRACK,
    STATE(9), 2,
      sym_events_body_row,
      aux_sym_section_events_repeat1,
    STATE(35), 6,
      sym_event_dialogue_row,
      sym_event_comment_row,
      sym_event_picture_row,
      sym_event_sound_row,
      sym_event_movie_row,
      sym_event_command_row,
  [230] = 10,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(61), 1,
      sym_event_type_dialogue,
    ACTIONS(64), 1,
      sym_event_type_comment,
    ACTIONS(67), 1,
      sym_event_type_picture,
    ACTIONS(70), 1,
      sym_event_type_sound,
    ACTIONS(73), 1,
      sym_event_type_movie,
    ACTIONS(76), 1,
      sym_event_type_command,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACKFonts_RBRACK,
    STATE(9), 2,
      sym_events_body_row,
      aux_sym_section_events_repeat1,
    STATE(35), 6,
      sym_event_dialogue_row,
      sym_event_comment_row,
      sym_event_picture_row,
      sym_event_sound_row,
      sym_event_movie_row,
      sym_event_command_row,
  [268] = 10,
    ACTIONS(45), 1,
      sym_event_type_dialogue,
    ACTIONS(47), 1,
      sym_event_type_comment,
    ACTIONS(49), 1,
      sym_event_type_picture,
    ACTIONS(51), 1,
      sym_event_type_sound,
    ACTIONS(53), 1,
      sym_event_type_movie,
    ACTIONS(55), 1,
      sym_event_type_command,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACKFonts_RBRACK,
    STATE(8), 2,
      sym_events_body_row,
      aux_sym_section_events_repeat1,
    STATE(35), 6,
      sym_event_dialogue_row,
      sym_event_comment_row,
      sym_event_picture_row,
      sym_event_sound_row,
      sym_event_movie_row,
      sym_event_command_row,
  [306] = 10,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    ACTIONS(88), 1,
      anon_sym_LBRACKFonts_RBRACK,
    STATE(2), 1,
      sym_section_info_name,
    STATE(51), 1,
      sym_section_graphics_name,
    STATE(52), 1,
      sym_section_fonts_name,
    STATE(134), 1,
      sym_section_styles_name,
    STATE(145), 1,
      sym_section_events_name,
    STATE(11), 2,
      sym_section,
      aux_sym_ssa_repeat1,
    STATE(63), 5,
      sym_section_info,
      sym_section_styles,
      sym_section_events,
      sym_section_fonts,
      sym_section_graphics,
  [342] = 10,
    ACTIONS(3), 1,
      anon_sym_LBRACK,
    ACTIONS(5), 1,
      anon_sym_LBRACKFonts_RBRACK,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_section_info_name,
    STATE(51), 1,
      sym_section_graphics_name,
    STATE(52), 1,
      sym_section_fonts_name,
    STATE(134), 1,
      sym_section_styles_name,
    STATE(145), 1,
      sym_section_events_name,
    STATE(11), 2,
      sym_section,
      aux_sym_ssa_repeat1,
    STATE(63), 5,
      sym_section_info,
      sym_section_styles,
      sym_section_events,
      sym_section_fonts,
      sym_section_graphics,
  [378] = 2,
    ACTIONS(95), 1,
      anon_sym_LBRACK,
    ACTIONS(93), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACKFonts_RBRACK,
      sym_event_type_dialogue,
      sym_event_type_comment,
      sym_event_type_picture,
      sym_event_type_sound,
      sym_event_type_movie,
      sym_event_type_command,
  [392] = 2,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(97), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACKFonts_RBRACK,
      sym_event_type_dialogue,
      sym_event_type_comment,
      sym_event_type_picture,
      sym_event_type_sound,
      sym_event_type_movie,
      sym_event_type_command,
  [406] = 2,
    ACTIONS(103), 1,
      anon_sym_LBRACK,
    ACTIONS(101), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACKFonts_RBRACK,
      sym_event_type_dialogue,
      sym_event_type_comment,
      sym_event_type_picture,
      sym_event_type_sound,
      sym_event_type_movie,
      sym_event_type_command,
  [420] = 2,
    ACTIONS(107), 1,
      anon_sym_LBRACK,
    ACTIONS(105), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACKFonts_RBRACK,
      sym_event_type_dialogue,
      sym_event_type_comment,
      sym_event_type_picture,
      sym_event_type_sound,
      sym_event_type_movie,
      sym_event_type_command,
  [434] = 2,
    ACTIONS(111), 1,
      anon_sym_LBRACK,
    ACTIONS(109), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACKFonts_RBRACK,
      sym_event_type_dialogue,
      sym_event_type_comment,
      sym_event_type_picture,
      sym_event_type_sound,
      sym_event_type_movie,
      sym_event_type_command,
  [448] = 2,
    ACTIONS(115), 1,
      anon_sym_LBRACK,
    ACTIONS(113), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACKFonts_RBRACK,
      sym_event_type_dialogue,
      sym_event_type_comment,
      sym_event_type_picture,
      sym_event_type_sound,
      sym_event_type_movie,
      sym_event_type_command,
  [462] = 2,
    ACTIONS(119), 1,
      anon_sym_LBRACK,
    ACTIONS(117), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACKFonts_RBRACK,
      sym_event_type_dialogue,
      sym_event_type_comment,
      sym_event_type_picture,
      sym_event_type_sound,
      sym_event_type_movie,
      sym_event_type_command,
  [476] = 2,
    ACTIONS(123), 1,
      anon_sym_LBRACK,
    ACTIONS(121), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACKFonts_RBRACK,
      sym_event_type_dialogue,
      sym_event_type_comment,
      sym_event_type_picture,
      sym_event_type_sound,
      sym_event_type_movie,
      sym_event_type_command,
  [490] = 2,
    ACTIONS(127), 1,
      anon_sym_LBRACK,
    ACTIONS(125), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACKFonts_RBRACK,
      sym_event_type_dialogue,
      sym_event_type_comment,
      sym_event_type_picture,
      sym_event_type_sound,
      sym_event_type_movie,
      sym_event_type_command,
  [504] = 2,
    ACTIONS(131), 1,
      anon_sym_LBRACK,
    ACTIONS(129), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACKFonts_RBRACK,
      sym_event_type_dialogue,
      sym_event_type_comment,
      sym_event_type_picture,
      sym_event_type_sound,
      sym_event_type_movie,
      sym_event_type_command,
  [518] = 2,
    ACTIONS(135), 1,
      anon_sym_LBRACK,
    ACTIONS(133), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACKFonts_RBRACK,
      sym_event_type_dialogue,
      sym_event_type_comment,
      sym_event_type_picture,
      sym_event_type_sound,
      sym_event_type_movie,
      sym_event_type_command,
  [532] = 2,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(137), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACKFonts_RBRACK,
      sym_event_type_dialogue,
      sym_event_type_comment,
      sym_event_type_picture,
      sym_event_type_sound,
      sym_event_type_movie,
      sym_event_type_command,
  [546] = 2,
    ACTIONS(143), 1,
      anon_sym_LBRACK,
    ACTIONS(141), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACKFonts_RBRACK,
      sym_event_type_dialogue,
      sym_event_type_comment,
      sym_event_type_picture,
      sym_event_type_sound,
      sym_event_type_movie,
      sym_event_type_command,
  [560] = 2,
    ACTIONS(147), 1,
      anon_sym_LBRACK,
    ACTIONS(145), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACKFonts_RBRACK,
      sym_event_type_dialogue,
      sym_event_type_comment,
      sym_event_type_picture,
      sym_event_type_sound,
      sym_event_type_movie,
      sym_event_type_command,
  [574] = 2,
    ACTIONS(151), 1,
      anon_sym_LBRACK,
    ACTIONS(149), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACKFonts_RBRACK,
      sym_event_type_dialogue,
      sym_event_type_comment,
      sym_event_type_picture,
      sym_event_type_sound,
      sym_event_type_movie,
      sym_event_type_command,
  [588] = 2,
    ACTIONS(155), 1,
      anon_sym_LBRACK,
    ACTIONS(153), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACKFonts_RBRACK,
      sym_event_type_dialogue,
      sym_event_type_comment,
      sym_event_type_picture,
      sym_event_type_sound,
      sym_event_type_movie,
      sym_event_type_command,
  [602] = 2,
    ACTIONS(159), 1,
      anon_sym_LBRACK,
    ACTIONS(157), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACKFonts_RBRACK,
      sym_event_type_dialogue,
      sym_event_type_comment,
      sym_event_type_picture,
      sym_event_type_sound,
      sym_event_type_movie,
      sym_event_type_command,
  [616] = 2,
    ACTIONS(163), 1,
      anon_sym_LBRACK,
    ACTIONS(161), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACKFonts_RBRACK,
      sym_event_type_dialogue,
      sym_event_type_comment,
      sym_event_type_picture,
      sym_event_type_sound,
      sym_event_type_movie,
      sym_event_type_command,
  [630] = 2,
    ACTIONS(167), 1,
      anon_sym_LBRACK,
    ACTIONS(165), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACKFonts_RBRACK,
      sym_event_type_dialogue,
      sym_event_type_comment,
      sym_event_type_picture,
      sym_event_type_sound,
      sym_event_type_movie,
      sym_event_type_command,
  [644] = 2,
    ACTIONS(171), 1,
      anon_sym_LBRACK,
    ACTIONS(169), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACKFonts_RBRACK,
      sym_event_type_dialogue,
      sym_event_type_comment,
      sym_event_type_picture,
      sym_event_type_sound,
      sym_event_type_movie,
      sym_event_type_command,
  [658] = 2,
    ACTIONS(175), 1,
      anon_sym_LBRACK,
    ACTIONS(173), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACKFonts_RBRACK,
      sym_event_type_dialogue,
      sym_event_type_comment,
      sym_event_type_picture,
      sym_event_type_sound,
      sym_event_type_movie,
      sym_event_type_command,
  [672] = 2,
    ACTIONS(179), 1,
      anon_sym_LBRACK,
    ACTIONS(177), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACKFonts_RBRACK,
      sym_event_type_dialogue,
      sym_event_type_comment,
      sym_event_type_picture,
      sym_event_type_sound,
      sym_event_type_movie,
      sym_event_type_command,
  [686] = 2,
    ACTIONS(183), 1,
      anon_sym_LBRACK,
    ACTIONS(181), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACKFonts_RBRACK,
      sym_event_type_dialogue,
      sym_event_type_comment,
      sym_event_type_picture,
      sym_event_type_sound,
      sym_event_type_movie,
      sym_event_type_command,
  [700] = 2,
    ACTIONS(187), 1,
      anon_sym_LBRACK,
    ACTIONS(185), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACKFonts_RBRACK,
      sym_event_type_dialogue,
      sym_event_type_comment,
      sym_event_type_picture,
      sym_event_type_sound,
      sym_event_type_movie,
      sym_event_type_command,
  [714] = 2,
    ACTIONS(191), 1,
      anon_sym_LBRACK,
    ACTIONS(189), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACKFonts_RBRACK,
      sym_event_type_dialogue,
      sym_event_type_comment,
      sym_event_type_picture,
      sym_event_type_sound,
      sym_event_type_movie,
      sym_event_type_command,
  [728] = 2,
    ACTIONS(195), 1,
      anon_sym_LBRACK,
    ACTIONS(193), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACKFonts_RBRACK,
      sym_event_type_dialogue,
      sym_event_type_comment,
      sym_event_type_picture,
      sym_event_type_sound,
      sym_event_type_movie,
      sym_event_type_command,
  [742] = 2,
    ACTIONS(199), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACKFonts_RBRACK,
      sym_event_type_dialogue,
      sym_event_type_comment,
      sym_event_type_picture,
      sym_event_type_sound,
      sym_event_type_movie,
      sym_event_type_command,
  [756] = 2,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(201), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACKFonts_RBRACK,
      sym_event_type_dialogue,
      sym_event_type_comment,
      sym_event_type_picture,
      sym_event_type_sound,
      sym_event_type_movie,
      sym_event_type_command,
  [770] = 2,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(205), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACKFonts_RBRACK,
      sym_event_type_dialogue,
      sym_event_type_comment,
      sym_event_type_picture,
      sym_event_type_sound,
      sym_event_type_movie,
      sym_event_type_command,
  [784] = 2,
    ACTIONS(211), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACKFonts_RBRACK,
      sym_event_type_dialogue,
      sym_event_type_comment,
      sym_event_type_picture,
      sym_event_type_sound,
      sym_event_type_movie,
      sym_event_type_command,
  [798] = 2,
    ACTIONS(215), 1,
      anon_sym_LBRACK,
    ACTIONS(213), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACKFonts_RBRACK,
      sym_event_type_dialogue,
      sym_event_type_comment,
      sym_event_type_picture,
      sym_event_type_sound,
      sym_event_type_movie,
      sym_event_type_command,
  [812] = 2,
    ACTIONS(219), 1,
      anon_sym_LBRACK,
    ACTIONS(217), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACKFonts_RBRACK,
      sym_event_type_dialogue,
      sym_event_type_comment,
      sym_event_type_picture,
      sym_event_type_sound,
      sym_event_type_movie,
      sym_event_type_command,
  [826] = 4,
    ACTIONS(223), 1,
      anon_sym_LBRACK,
    ACTIONS(225), 1,
      anon_sym_Style,
    ACTIONS(221), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACKFonts_RBRACK,
    STATE(53), 2,
      sym_styles_body_row,
      aux_sym_section_styles_repeat1,
  [841] = 4,
    ACTIONS(229), 1,
      anon_sym_LBRACK,
    ACTIONS(231), 1,
      anon_sym_aaa,
    ACTIONS(227), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACKFonts_RBRACK,
    STATE(46), 2,
      sym_fonts_body_row,
      aux_sym_section_fonts_repeat1,
  [856] = 4,
    ACTIONS(236), 1,
      anon_sym_LBRACK,
    ACTIONS(238), 1,
      anon_sym_bbb,
    ACTIONS(234), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACKFonts_RBRACK,
    STATE(47), 2,
      sym_graphics_body_row,
      aux_sym_section_graphics_repeat1,
  [871] = 4,
    ACTIONS(243), 1,
      anon_sym_LBRACK,
    ACTIONS(245), 1,
      anon_sym_bbb,
    ACTIONS(241), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACKFonts_RBRACK,
    STATE(47), 2,
      sym_graphics_body_row,
      aux_sym_section_graphics_repeat1,
  [886] = 4,
    ACTIONS(249), 1,
      anon_sym_LBRACK,
    ACTIONS(251), 1,
      anon_sym_aaa,
    ACTIONS(247), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACKFonts_RBRACK,
    STATE(46), 2,
      sym_fonts_body_row,
      aux_sym_section_fonts_repeat1,
  [901] = 4,
    ACTIONS(225), 1,
      anon_sym_Style,
    ACTIONS(255), 1,
      anon_sym_LBRACK,
    ACTIONS(253), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACKFonts_RBRACK,
    STATE(45), 2,
      sym_styles_body_row,
      aux_sym_section_styles_repeat1,
  [916] = 4,
    ACTIONS(245), 1,
      anon_sym_bbb,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(257), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACKFonts_RBRACK,
    STATE(48), 2,
      sym_graphics_body_row,
      aux_sym_section_graphics_repeat1,
  [931] = 4,
    ACTIONS(251), 1,
      anon_sym_aaa,
    ACTIONS(263), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACKFonts_RBRACK,
    STATE(49), 2,
      sym_fonts_body_row,
      aux_sym_section_fonts_repeat1,
  [946] = 4,
    ACTIONS(267), 1,
      anon_sym_LBRACK,
    ACTIONS(269), 1,
      anon_sym_Style,
    ACTIONS(265), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACKFonts_RBRACK,
    STATE(53), 2,
      sym_styles_body_row,
      aux_sym_section_styles_repeat1,
  [961] = 4,
    ACTIONS(272), 1,
      anon_sym_ScriptInfo,
    ACTIONS(274), 1,
      anon_sym_V4Styles,
    ACTIONS(276), 1,
      anon_sym_Events,
    ACTIONS(278), 1,
      anon_sym_Graphics,
  [974] = 2,
    ACTIONS(282), 1,
      anon_sym_LBRACK,
    ACTIONS(280), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACKFonts_RBRACK,
      anon_sym_Style,
  [983] = 2,
    ACTIONS(286), 1,
      anon_sym_LBRACK,
    ACTIONS(284), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACKFonts_RBRACK,
      anon_sym_aaa,
  [992] = 2,
    ACTIONS(290), 1,
      anon_sym_LBRACK,
    ACTIONS(288), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACKFonts_RBRACK,
      anon_sym_bbb,
  [1001] = 2,
    ACTIONS(294), 1,
      anon_sym_LBRACK,
    ACTIONS(292), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACKFonts_RBRACK,
      anon_sym_bbb,
  [1010] = 2,
    ACTIONS(298), 1,
      anon_sym_LBRACK,
    ACTIONS(296), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACKFonts_RBRACK,
      anon_sym_aaa,
  [1019] = 2,
    ACTIONS(302), 1,
      anon_sym_LBRACK,
    ACTIONS(300), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACKFonts_RBRACK,
      anon_sym_Style,
  [1028] = 3,
    ACTIONS(304), 1,
      sym__comma,
    ACTIONS(306), 1,
      aux_sym_event_style_token1,
    STATE(390), 1,
      sym_event_effect,
  [1038] = 3,
    ACTIONS(308), 1,
      anon_sym_LF,
    ACTIONS(310), 1,
      aux_sym_info_prop_value_token1,
    STATE(365), 1,
      sym_event_text,
  [1048] = 2,
    ACTIONS(314), 1,
      anon_sym_LBRACK,
    ACTIONS(312), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACKFonts_RBRACK,
  [1056] = 3,
    ACTIONS(316), 1,
      sym__comma,
    ACTIONS(318), 1,
      aux_sym_event_style_token1,
    STATE(223), 1,
      sym_event_name,
  [1066] = 3,
    ACTIONS(318), 1,
      aux_sym_event_style_token1,
    ACTIONS(320), 1,
      sym__comma,
    STATE(355), 1,
      sym_event_name,
  [1076] = 3,
    ACTIONS(318), 1,
      aux_sym_event_style_token1,
    ACTIONS(322), 1,
      sym__comma,
    STATE(243), 1,
      sym_event_name,
  [1086] = 3,
    ACTIONS(318), 1,
      aux_sym_event_style_token1,
    ACTIONS(324), 1,
      sym__comma,
    STATE(246), 1,
      sym_event_name,
  [1096] = 3,
    ACTIONS(318), 1,
      aux_sym_event_style_token1,
    ACTIONS(326), 1,
      sym__comma,
    STATE(252), 1,
      sym_event_name,
  [1106] = 3,
    ACTIONS(318), 1,
      aux_sym_event_style_token1,
    ACTIONS(328), 1,
      sym__comma,
    STATE(258), 1,
      sym_event_name,
  [1116] = 3,
    ACTIONS(318), 1,
      aux_sym_event_style_token1,
    ACTIONS(330), 1,
      sym__comma,
    STATE(268), 1,
      sym_event_name,
  [1126] = 3,
    ACTIONS(318), 1,
      aux_sym_event_style_token1,
    ACTIONS(332), 1,
      sym__comma,
    STATE(269), 1,
      sym_event_name,
  [1136] = 3,
    ACTIONS(310), 1,
      aux_sym_info_prop_value_token1,
    ACTIONS(334), 1,
      anon_sym_LF,
    STATE(445), 1,
      sym_event_text,
  [1146] = 3,
    ACTIONS(310), 1,
      aux_sym_info_prop_value_token1,
    ACTIONS(336), 1,
      anon_sym_LF,
    STATE(443), 1,
      sym_event_text,
  [1156] = 3,
    ACTIONS(310), 1,
      aux_sym_info_prop_value_token1,
    ACTIONS(338), 1,
      anon_sym_LF,
    STATE(441), 1,
      sym_event_text,
  [1166] = 3,
    ACTIONS(310), 1,
      aux_sym_info_prop_value_token1,
    ACTIONS(340), 1,
      anon_sym_LF,
    STATE(439), 1,
      sym_event_text,
  [1176] = 3,
    ACTIONS(310), 1,
      aux_sym_info_prop_value_token1,
    ACTIONS(342), 1,
      anon_sym_LF,
    STATE(437), 1,
      sym_event_text,
  [1186] = 3,
    ACTIONS(310), 1,
      aux_sym_info_prop_value_token1,
    ACTIONS(344), 1,
      anon_sym_LF,
    STATE(435), 1,
      sym_event_text,
  [1196] = 3,
    ACTIONS(318), 1,
      aux_sym_event_style_token1,
    ACTIONS(346), 1,
      sym__comma,
    STATE(271), 1,
      sym_event_name,
  [1206] = 3,
    ACTIONS(310), 1,
      aux_sym_info_prop_value_token1,
    ACTIONS(348), 1,
      anon_sym_LF,
    STATE(429), 1,
      sym_event_text,
  [1216] = 3,
    ACTIONS(310), 1,
      aux_sym_info_prop_value_token1,
    ACTIONS(350), 1,
      anon_sym_LF,
    STATE(426), 1,
      sym_event_text,
  [1226] = 3,
    ACTIONS(310), 1,
      aux_sym_info_prop_value_token1,
    ACTIONS(352), 1,
      anon_sym_LF,
    STATE(423), 1,
      sym_event_text,
  [1236] = 3,
    ACTIONS(310), 1,
      aux_sym_info_prop_value_token1,
    ACTIONS(354), 1,
      anon_sym_LF,
    STATE(420), 1,
      sym_event_text,
  [1246] = 3,
    ACTIONS(310), 1,
      aux_sym_info_prop_value_token1,
    ACTIONS(356), 1,
      anon_sym_LF,
    STATE(417), 1,
      sym_event_text,
  [1256] = 3,
    ACTIONS(310), 1,
      aux_sym_info_prop_value_token1,
    ACTIONS(358), 1,
      anon_sym_LF,
    STATE(414), 1,
      sym_event_text,
  [1266] = 3,
    ACTIONS(306), 1,
      aux_sym_event_style_token1,
    ACTIONS(360), 1,
      sym__comma,
    STATE(410), 1,
      sym_event_effect,
  [1276] = 2,
    STATE(378), 1,
      sym_event_is_marked,
    ACTIONS(362), 2,
      anon_sym_0,
      anon_sym_1,
  [1284] = 2,
    STATE(376), 1,
      sym_event_is_marked,
    ACTIONS(362), 2,
      anon_sym_0,
      anon_sym_1,
  [1292] = 2,
    STATE(374), 1,
      sym_event_is_marked,
    ACTIONS(362), 2,
      anon_sym_0,
      anon_sym_1,
  [1300] = 2,
    STATE(373), 1,
      sym_event_is_marked,
    ACTIONS(362), 2,
      anon_sym_0,
      anon_sym_1,
  [1308] = 2,
    STATE(371), 1,
      sym_event_is_marked,
    ACTIONS(362), 2,
      anon_sym_0,
      anon_sym_1,
  [1316] = 2,
    STATE(369), 1,
      sym_event_is_marked,
    ACTIONS(362), 2,
      anon_sym_0,
      anon_sym_1,
  [1324] = 3,
    ACTIONS(310), 1,
      aux_sym_info_prop_value_token1,
    ACTIONS(364), 1,
      anon_sym_LF,
    STATE(408), 1,
      sym_event_text,
  [1334] = 3,
    ACTIONS(318), 1,
      aux_sym_event_style_token1,
    ACTIONS(366), 1,
      sym__comma,
    STATE(272), 1,
      sym_event_name,
  [1344] = 3,
    ACTIONS(306), 1,
      aux_sym_event_style_token1,
    ACTIONS(368), 1,
      sym__comma,
    STATE(406), 1,
      sym_event_effect,
  [1354] = 3,
    ACTIONS(310), 1,
      aux_sym_info_prop_value_token1,
    ACTIONS(370), 1,
      anon_sym_LF,
    STATE(404), 1,
      sym_event_text,
  [1364] = 3,
    ACTIONS(306), 1,
      aux_sym_event_style_token1,
    ACTIONS(372), 1,
      sym__comma,
    STATE(402), 1,
      sym_event_effect,
  [1374] = 3,
    ACTIONS(310), 1,
      aux_sym_info_prop_value_token1,
    ACTIONS(374), 1,
      anon_sym_LF,
    STATE(400), 1,
      sym_event_text,
  [1384] = 3,
    ACTIONS(306), 1,
      aux_sym_event_style_token1,
    ACTIONS(376), 1,
      sym__comma,
    STATE(398), 1,
      sym_event_effect,
  [1394] = 3,
    ACTIONS(310), 1,
      aux_sym_info_prop_value_token1,
    ACTIONS(378), 1,
      anon_sym_LF,
    STATE(396), 1,
      sym_event_text,
  [1404] = 3,
    ACTIONS(318), 1,
      aux_sym_event_style_token1,
    ACTIONS(380), 1,
      sym__comma,
    STATE(274), 1,
      sym_event_name,
  [1414] = 3,
    ACTIONS(306), 1,
      aux_sym_event_style_token1,
    ACTIONS(382), 1,
      sym__comma,
    STATE(394), 1,
      sym_event_effect,
  [1424] = 3,
    ACTIONS(306), 1,
      aux_sym_event_style_token1,
    ACTIONS(384), 1,
      sym__comma,
    STATE(328), 1,
      sym_event_effect,
  [1434] = 3,
    ACTIONS(318), 1,
      aux_sym_event_style_token1,
    ACTIONS(386), 1,
      sym__comma,
    STATE(275), 1,
      sym_event_name,
  [1444] = 3,
    ACTIONS(306), 1,
      aux_sym_event_style_token1,
    ACTIONS(388), 1,
      sym__comma,
    STATE(332), 1,
      sym_event_effect,
  [1454] = 3,
    ACTIONS(306), 1,
      aux_sym_event_style_token1,
    ACTIONS(390), 1,
      sym__comma,
    STATE(336), 1,
      sym_event_effect,
  [1464] = 3,
    ACTIONS(392), 1,
      sym__comma,
    ACTIONS(394), 1,
      aux_sym_event_style_token1,
    STATE(293), 1,
      sym_event_style,
  [1474] = 3,
    ACTIONS(394), 1,
      aux_sym_event_style_token1,
    ACTIONS(396), 1,
      sym__comma,
    STATE(296), 1,
      sym_event_style,
  [1484] = 3,
    ACTIONS(310), 1,
      aux_sym_info_prop_value_token1,
    ACTIONS(398), 1,
      anon_sym_LF,
    STATE(392), 1,
      sym_event_text,
  [1494] = 3,
    ACTIONS(394), 1,
      aux_sym_event_style_token1,
    ACTIONS(400), 1,
      sym__comma,
    STATE(299), 1,
      sym_event_style,
  [1504] = 3,
    ACTIONS(394), 1,
      aux_sym_event_style_token1,
    ACTIONS(402), 1,
      sym__comma,
    STATE(302), 1,
      sym_event_style,
  [1514] = 3,
    ACTIONS(310), 1,
      aux_sym_info_prop_value_token1,
    ACTIONS(404), 1,
      anon_sym_LF,
    STATE(388), 1,
      sym_event_text,
  [1524] = 3,
    ACTIONS(394), 1,
      aux_sym_event_style_token1,
    ACTIONS(406), 1,
      sym__comma,
    STATE(304), 1,
      sym_event_style,
  [1534] = 3,
    ACTIONS(394), 1,
      aux_sym_event_style_token1,
    ACTIONS(408), 1,
      sym__comma,
    STATE(306), 1,
      sym_event_style,
  [1544] = 3,
    ACTIONS(306), 1,
      aux_sym_event_style_token1,
    ACTIONS(410), 1,
      sym__comma,
    STATE(382), 1,
      sym_event_effect,
  [1554] = 3,
    ACTIONS(310), 1,
      aux_sym_info_prop_value_token1,
    ACTIONS(412), 1,
      anon_sym_LF,
    STATE(380), 1,
      sym_event_text,
  [1564] = 3,
    ACTIONS(306), 1,
      aux_sym_event_style_token1,
    ACTIONS(414), 1,
      sym__comma,
    STATE(377), 1,
      sym_event_effect,
  [1574] = 3,
    ACTIONS(310), 1,
      aux_sym_info_prop_value_token1,
    ACTIONS(416), 1,
      anon_sym_LF,
    STATE(375), 1,
      sym_event_text,
  [1584] = 3,
    ACTIONS(306), 1,
      aux_sym_event_style_token1,
    ACTIONS(418), 1,
      sym__comma,
    STATE(372), 1,
      sym_event_effect,
  [1594] = 3,
    ACTIONS(310), 1,
      aux_sym_info_prop_value_token1,
    ACTIONS(420), 1,
      anon_sym_LF,
    STATE(370), 1,
      sym_event_text,
  [1604] = 3,
    ACTIONS(306), 1,
      aux_sym_event_style_token1,
    ACTIONS(422), 1,
      sym__comma,
    STATE(340), 1,
      sym_event_effect,
  [1614] = 3,
    ACTIONS(306), 1,
      aux_sym_event_style_token1,
    ACTIONS(424), 1,
      sym__comma,
    STATE(367), 1,
      sym_event_effect,
  [1624] = 3,
    ACTIONS(306), 1,
      aux_sym_event_style_token1,
    ACTIONS(426), 1,
      sym__comma,
    STATE(344), 1,
      sym_event_effect,
  [1634] = 3,
    ACTIONS(306), 1,
      aux_sym_event_style_token1,
    ACTIONS(428), 1,
      sym__comma,
    STATE(348), 1,
      sym_event_effect,
  [1644] = 3,
    ACTIONS(310), 1,
      aux_sym_info_prop_value_token1,
    ACTIONS(430), 1,
      anon_sym_LF,
    STATE(221), 1,
      sym_event_text,
  [1654] = 3,
    ACTIONS(306), 1,
      aux_sym_event_style_token1,
    ACTIONS(432), 1,
      sym__comma,
    STATE(362), 1,
      sym_event_effect,
  [1664] = 3,
    ACTIONS(310), 1,
      aux_sym_info_prop_value_token1,
    ACTIONS(434), 1,
      anon_sym_LF,
    STATE(360), 1,
      sym_event_text,
  [1674] = 3,
    ACTIONS(306), 1,
      aux_sym_event_style_token1,
    ACTIONS(436), 1,
      sym__comma,
    STATE(357), 1,
      sym_event_effect,
  [1684] = 2,
    ACTIONS(438), 1,
      aux_sym_style_font_size_token1,
    STATE(342), 1,
      sym_event_margin_v,
  [1691] = 2,
    ACTIONS(440), 1,
      aux_sym_info_prop_value_token1,
    STATE(425), 1,
      sym_info_prop_value,
  [1698] = 2,
    ACTIONS(442), 1,
      aux_sym_event_start_token1,
    STATE(319), 1,
      sym_event_end,
  [1705] = 2,
    ACTIONS(442), 1,
      aux_sym_event_start_token1,
    STATE(318), 1,
      sym_event_end,
  [1712] = 2,
    ACTIONS(444), 1,
      anon_sym_MarginL,
    STATE(313), 1,
      sym_events_header_margin_l,
  [1719] = 2,
    ACTIONS(446), 1,
      aux_sym_style_font_size_token1,
    STATE(479), 1,
      sym_style_margin_v,
  [1726] = 2,
    ACTIONS(448), 1,
      sym_styles_header_name,
    STATE(50), 1,
      sym_styles_header_row,
  [1733] = 2,
    ACTIONS(438), 1,
      aux_sym_style_font_size_token1,
    STATE(350), 1,
      sym_event_margin_v,
  [1740] = 2,
    ACTIONS(442), 1,
      aux_sym_event_start_token1,
    STATE(325), 1,
      sym_event_end,
  [1747] = 2,
    ACTIONS(438), 1,
      aux_sym_style_font_size_token1,
    STATE(346), 1,
      sym_event_margin_v,
  [1754] = 2,
    ACTIONS(442), 1,
      aux_sym_event_start_token1,
    STATE(326), 1,
      sym_event_end,
  [1761] = 2,
    ACTIONS(450), 1,
      aux_sym_style_font_size_token1,
    STATE(484), 1,
      sym_style_alpha_level,
  [1768] = 2,
    ACTIONS(452), 1,
      aux_sym_style_font_size_token1,
    STATE(309), 1,
      sym_style_secondary_color,
  [1775] = 2,
    ACTIONS(442), 1,
      aux_sym_event_start_token1,
    STATE(329), 1,
      sym_event_end,
  [1782] = 2,
    ACTIONS(438), 1,
      aux_sym_style_font_size_token1,
    STATE(338), 1,
      sym_event_margin_v,
  [1789] = 2,
    ACTIONS(454), 1,
      aux_sym_style_font_size_token1,
    STATE(333), 1,
      sym_style_primary_color,
  [1796] = 2,
    ACTIONS(456), 1,
      aux_sym_style_font_size_token1,
    STATE(386), 1,
      sym_style_border_style,
  [1803] = 2,
    ACTIONS(458), 1,
      sym_events_header_format,
    STATE(10), 1,
      sym_events_header_row,
  [1810] = 2,
    ACTIONS(460), 1,
      aux_sym_style_font_size_token1,
    STATE(251), 1,
      sym_event_margin_r,
  [1817] = 2,
    ACTIONS(462), 1,
      aux_sym_style_font_size_token1,
    STATE(487), 1,
      sym_style_encoding,
  [1824] = 2,
    ACTIONS(464), 1,
      aux_sym_event_start_token1,
    STATE(343), 1,
      sym_event_start,
  [1831] = 2,
    ACTIONS(464), 1,
      aux_sym_event_start_token1,
    STATE(345), 1,
      sym_event_start,
  [1838] = 2,
    ACTIONS(438), 1,
      aux_sym_style_font_size_token1,
    STATE(334), 1,
      sym_event_margin_v,
  [1845] = 2,
    ACTIONS(464), 1,
      aux_sym_event_start_token1,
    STATE(347), 1,
      sym_event_start,
  [1852] = 2,
    ACTIONS(466), 1,
      anon_sym_MarginR,
    STATE(284), 1,
      sym_events_header_margin_r,
  [1859] = 2,
    ACTIONS(464), 1,
      aux_sym_event_start_token1,
    STATE(349), 1,
      sym_event_start,
  [1866] = 2,
    ACTIONS(438), 1,
      aux_sym_style_font_size_token1,
    STATE(330), 1,
      sym_event_margin_v,
  [1873] = 2,
    ACTIONS(464), 1,
      aux_sym_event_start_token1,
    STATE(352), 1,
      sym_event_start,
  [1880] = 2,
    ACTIONS(464), 1,
      aux_sym_event_start_token1,
    STATE(353), 1,
      sym_event_start,
  [1887] = 2,
    ACTIONS(468), 1,
      aux_sym_style_font_size_token1,
    STATE(324), 1,
      sym_style_italic,
  [1894] = 2,
    ACTIONS(470), 1,
      aux_sym_style_font_size_token1,
    STATE(359), 1,
      sym_style_font_size,
  [1901] = 2,
    ACTIONS(438), 1,
      aux_sym_style_font_size_token1,
    STATE(320), 1,
      sym_event_margin_v,
  [1908] = 2,
    ACTIONS(472), 1,
      anon_sym_Style,
    STATE(364), 1,
      sym_events_header_style,
  [1915] = 2,
    ACTIONS(438), 1,
      aux_sym_style_font_size_token1,
    STATE(317), 1,
      sym_event_margin_v,
  [1922] = 2,
    ACTIONS(474), 1,
      aux_sym_style_font_size_token1,
    STATE(433), 1,
      sym_style_outline,
  [1929] = 2,
    ACTIONS(438), 1,
      aux_sym_style_font_size_token1,
    STATE(314), 1,
      sym_event_margin_v,
  [1936] = 2,
    ACTIONS(476), 1,
      aux_sym_style_font_size_token1,
    STATE(456), 1,
      sym_style_shadow,
  [1943] = 2,
    ACTIONS(438), 1,
      aux_sym_style_font_size_token1,
    STATE(311), 1,
      sym_event_margin_v,
  [1950] = 2,
    ACTIONS(438), 1,
      aux_sym_style_font_size_token1,
    STATE(308), 1,
      sym_event_margin_v,
  [1957] = 2,
    ACTIONS(478), 1,
      aux_sym_style_font_size_token1,
    STATE(263), 1,
      sym_style_tertiary_color,
  [1964] = 2,
    ACTIONS(438), 1,
      aux_sym_style_font_size_token1,
    STATE(305), 1,
      sym_event_margin_v,
  [1971] = 2,
    ACTIONS(460), 1,
      aux_sym_style_font_size_token1,
    STATE(300), 1,
      sym_event_margin_r,
  [1978] = 2,
    ACTIONS(480), 1,
      aux_sym_style_font_size_token1,
    STATE(260), 1,
      sym_event_margin_l,
  [1985] = 2,
    ACTIONS(438), 1,
      aux_sym_style_font_size_token1,
    STATE(298), 1,
      sym_event_margin_v,
  [1992] = 2,
    ACTIONS(460), 1,
      aux_sym_style_font_size_token1,
    STATE(297), 1,
      sym_event_margin_r,
  [1999] = 2,
    ACTIONS(442), 1,
      aux_sym_event_start_token1,
    STATE(321), 1,
      sym_event_end,
  [2006] = 2,
    ACTIONS(480), 1,
      aux_sym_style_font_size_token1,
    STATE(255), 1,
      sym_event_margin_l,
  [2013] = 2,
    ACTIONS(438), 1,
      aux_sym_style_font_size_token1,
    STATE(295), 1,
      sym_event_margin_v,
  [2020] = 2,
    ACTIONS(482), 1,
      anon_sym_MarginL,
    STATE(458), 1,
      sym_styles_header_margin_l,
  [2027] = 2,
    ACTIONS(480), 1,
      aux_sym_style_font_size_token1,
    STATE(249), 1,
      sym_event_margin_l,
  [2034] = 2,
    ACTIONS(460), 1,
      aux_sym_style_font_size_token1,
    STATE(294), 1,
      sym_event_margin_r,
  [2041] = 2,
    ACTIONS(484), 1,
      aux_sym_style_font_size_token1,
    STATE(462), 1,
      sym_style_alignment,
  [2048] = 2,
    ACTIONS(480), 1,
      aux_sym_style_font_size_token1,
    STATE(244), 1,
      sym_event_margin_l,
  [2055] = 2,
    ACTIONS(438), 1,
      aux_sym_style_font_size_token1,
    STATE(292), 1,
      sym_event_margin_v,
  [2062] = 2,
    ACTIONS(486), 1,
      anon_sym_MarginR,
    STATE(464), 1,
      sym_styles_header_margin_r,
  [2069] = 2,
    ACTIONS(480), 1,
      aux_sym_style_font_size_token1,
    STATE(240), 1,
      sym_event_margin_l,
  [2076] = 2,
    ACTIONS(460), 1,
      aux_sym_style_font_size_token1,
    STATE(291), 1,
      sym_event_margin_r,
  [2083] = 2,
    ACTIONS(488), 1,
      aux_sym_style_font_size_token1,
    STATE(468), 1,
      sym_style_margin_l,
  [2090] = 2,
    ACTIONS(480), 1,
      aux_sym_style_font_size_token1,
    STATE(222), 1,
      sym_event_margin_l,
  [2097] = 2,
    ACTIONS(438), 1,
      aux_sym_style_font_size_token1,
    STATE(289), 1,
      sym_event_margin_v,
  [2104] = 2,
    ACTIONS(490), 1,
      anon_sym_MarginV,
    STATE(470), 1,
      sym_styles_header_margin_v,
  [2111] = 2,
    ACTIONS(460), 1,
      aux_sym_style_font_size_token1,
    STATE(288), 1,
      sym_event_margin_r,
  [2118] = 2,
    ACTIONS(438), 1,
      aux_sym_style_font_size_token1,
    STATE(286), 1,
      sym_event_margin_v,
  [2125] = 2,
    ACTIONS(460), 1,
      aux_sym_style_font_size_token1,
    STATE(285), 1,
      sym_event_margin_r,
  [2132] = 2,
    ACTIONS(492), 1,
      anon_sym_MarginV,
    STATE(226), 1,
      sym_events_header_margin_v,
  [2139] = 2,
    ACTIONS(438), 1,
      aux_sym_style_font_size_token1,
    STATE(283), 1,
      sym_event_margin_v,
  [2146] = 2,
    ACTIONS(494), 1,
      aux_sym_style_font_size_token1,
    STATE(280), 1,
      sym_style_bold,
  [2153] = 2,
    ACTIONS(480), 1,
      aux_sym_style_font_size_token1,
    STATE(227), 1,
      sym_event_margin_l,
  [2160] = 2,
    ACTIONS(460), 1,
      aux_sym_style_font_size_token1,
    STATE(276), 1,
      sym_event_margin_r,
  [2167] = 2,
    ACTIONS(460), 1,
      aux_sym_style_font_size_token1,
    STATE(273), 1,
      sym_event_margin_r,
  [2174] = 2,
    ACTIONS(480), 1,
      aux_sym_style_font_size_token1,
    STATE(228), 1,
      sym_event_margin_l,
  [2181] = 2,
    ACTIONS(460), 1,
      aux_sym_style_font_size_token1,
    STATE(270), 1,
      sym_event_margin_r,
  [2188] = 2,
    ACTIONS(460), 1,
      aux_sym_style_font_size_token1,
    STATE(267), 1,
      sym_event_margin_r,
  [2195] = 2,
    ACTIONS(480), 1,
      aux_sym_style_font_size_token1,
    STATE(229), 1,
      sym_event_margin_l,
  [2202] = 2,
    ACTIONS(496), 1,
      aux_sym_style_font_size_token1,
    STATE(474), 1,
      sym_style_margin_r,
  [2209] = 2,
    ACTIONS(460), 1,
      aux_sym_style_font_size_token1,
    STATE(264), 1,
      sym_event_margin_r,
  [2216] = 2,
    ACTIONS(480), 1,
      aux_sym_style_font_size_token1,
    STATE(230), 1,
      sym_event_margin_l,
  [2223] = 2,
    ACTIONS(460), 1,
      aux_sym_style_font_size_token1,
    STATE(261), 1,
      sym_event_margin_r,
  [2230] = 2,
    ACTIONS(480), 1,
      aux_sym_style_font_size_token1,
    STATE(256), 1,
      sym_event_margin_l,
  [2237] = 2,
    ACTIONS(480), 1,
      aux_sym_style_font_size_token1,
    STATE(231), 1,
      sym_event_margin_l,
  [2244] = 2,
    ACTIONS(480), 1,
      aux_sym_style_font_size_token1,
    STATE(220), 1,
      sym_event_margin_l,
  [2251] = 2,
    ACTIONS(460), 1,
      aux_sym_style_font_size_token1,
    STATE(245), 1,
      sym_event_margin_r,
  [2258] = 2,
    ACTIONS(480), 1,
      aux_sym_style_font_size_token1,
    STATE(232), 1,
      sym_event_margin_l,
  [2265] = 2,
    ACTIONS(460), 1,
      aux_sym_style_font_size_token1,
    STATE(254), 1,
      sym_event_margin_r,
  [2272] = 2,
    ACTIONS(480), 1,
      aux_sym_style_font_size_token1,
    STATE(247), 1,
      sym_event_margin_l,
  [2279] = 2,
    ACTIONS(498), 1,
      aux_sym_style_font_size_token1,
    STATE(236), 1,
      sym_style_back_color,
  [2286] = 2,
    ACTIONS(460), 1,
      aux_sym_style_font_size_token1,
    STATE(248), 1,
      sym_event_margin_r,
  [2293] = 2,
    ACTIONS(480), 1,
      aux_sym_style_font_size_token1,
    STATE(253), 1,
      sym_event_margin_l,
  [2300] = 2,
    ACTIONS(460), 1,
      aux_sym_style_font_size_token1,
    STATE(239), 1,
      sym_event_margin_r,
  [2307] = 2,
    ACTIONS(480), 1,
      aux_sym_style_font_size_token1,
    STATE(250), 1,
      sym_event_margin_l,
  [2314] = 2,
    ACTIONS(480), 1,
      aux_sym_style_font_size_token1,
    STATE(241), 1,
      sym_event_margin_l,
  [2321] = 2,
    ACTIONS(460), 1,
      aux_sym_style_font_size_token1,
    STATE(242), 1,
      sym_event_margin_r,
  [2328] = 1,
    ACTIONS(500), 1,
      sym__comma,
  [2332] = 1,
    ACTIONS(502), 1,
      anon_sym_LF,
  [2336] = 1,
    ACTIONS(504), 1,
      sym__comma,
  [2340] = 1,
    ACTIONS(506), 1,
      sym__comma,
  [2344] = 1,
    ACTIONS(508), 1,
      sym__comma,
  [2348] = 1,
    ACTIONS(510), 1,
      sym__comma,
  [2352] = 1,
    ACTIONS(512), 1,
      sym__comma,
  [2356] = 1,
    ACTIONS(514), 1,
      sym__comma,
  [2360] = 1,
    ACTIONS(516), 1,
      sym__comma,
  [2364] = 1,
    ACTIONS(518), 1,
      sym__comma,
  [2368] = 1,
    ACTIONS(520), 1,
      sym__comma,
  [2372] = 1,
    ACTIONS(522), 1,
      sym__comma,
  [2376] = 1,
    ACTIONS(524), 1,
      sym__comma,
  [2380] = 1,
    ACTIONS(526), 1,
      sym__comma,
  [2384] = 1,
    ACTIONS(528), 1,
      sym_styles_header_italic,
  [2388] = 1,
    ACTIONS(530), 1,
      sym__comma,
  [2392] = 1,
    ACTIONS(532), 1,
      sym__comma,
  [2396] = 1,
    ACTIONS(534), 1,
      sym_events_header_effect,
  [2400] = 1,
    ACTIONS(536), 1,
      sym__comma,
  [2404] = 1,
    ACTIONS(538), 1,
      sym__comma,
  [2408] = 1,
    ACTIONS(540), 1,
      sym__comma,
  [2412] = 1,
    ACTIONS(542), 1,
      sym__comma,
  [2416] = 1,
    ACTIONS(544), 1,
      sym__comma,
  [2420] = 1,
    ACTIONS(546), 1,
      sym__comma,
  [2424] = 1,
    ACTIONS(548), 1,
      sym__comma,
  [2428] = 1,
    ACTIONS(550), 1,
      sym__comma,
  [2432] = 1,
    ACTIONS(552), 1,
      sym__comma,
  [2436] = 1,
    ACTIONS(554), 1,
      sym__comma,
  [2440] = 1,
    ACTIONS(556), 1,
      sym__comma,
  [2444] = 1,
    ACTIONS(558), 1,
      sym__comma,
  [2448] = 1,
    ACTIONS(560), 1,
      sym__comma,
  [2452] = 1,
    ACTIONS(562), 1,
      sym__comma,
  [2456] = 1,
    ACTIONS(564), 1,
      sym__comma,
  [2460] = 1,
    ACTIONS(566), 1,
      sym__comma,
  [2464] = 1,
    ACTIONS(568), 1,
      sym__comma,
  [2468] = 1,
    ACTIONS(570), 1,
      sym__comma,
  [2472] = 1,
    ACTIONS(572), 1,
      sym__comma,
  [2476] = 1,
    ACTIONS(574), 1,
      sym__comma,
  [2480] = 1,
    ACTIONS(576), 1,
      sym__comma,
  [2484] = 1,
    ACTIONS(578), 1,
      sym__comma,
  [2488] = 1,
    ACTIONS(580), 1,
      sym__comma,
  [2492] = 1,
    ACTIONS(582), 1,
      sym__comma,
  [2496] = 1,
    ACTIONS(584), 1,
      sym__comma,
  [2500] = 1,
    ACTIONS(586), 1,
      sym__comma,
  [2504] = 1,
    ACTIONS(588), 1,
      sym__comma,
  [2508] = 1,
    ACTIONS(590), 1,
      sym__comma,
  [2512] = 1,
    ACTIONS(592), 1,
      sym_styles_header_bold,
  [2516] = 1,
    ACTIONS(594), 1,
      sym__comma,
  [2520] = 1,
    ACTIONS(316), 1,
      sym__comma,
  [2524] = 1,
    ACTIONS(320), 1,
      sym__comma,
  [2528] = 1,
    ACTIONS(596), 1,
      sym__comma,
  [2532] = 1,
    ACTIONS(322), 1,
      sym__comma,
  [2536] = 1,
    ACTIONS(324), 1,
      sym__comma,
  [2540] = 1,
    ACTIONS(598), 1,
      sym__comma,
  [2544] = 1,
    ACTIONS(326), 1,
      sym__comma,
  [2548] = 1,
    ACTIONS(328), 1,
      sym__comma,
  [2552] = 1,
    ACTIONS(600), 1,
      sym__comma,
  [2556] = 1,
    ACTIONS(602), 1,
      sym__comma,
  [2560] = 1,
    ACTIONS(604), 1,
      sym_styles_header_border_style,
  [2564] = 1,
    ACTIONS(606), 1,
      sym__comma,
  [2568] = 1,
    ACTIONS(608), 1,
      sym__comma,
  [2572] = 1,
    ACTIONS(610), 1,
      sym_events_header_text,
  [2576] = 1,
    ACTIONS(612), 1,
      sym__comma,
  [2580] = 1,
    ACTIONS(614), 1,
      sym__comma,
  [2584] = 1,
    ACTIONS(616), 1,
      sym__comma,
  [2588] = 1,
    ACTIONS(618), 1,
      sym__comma,
  [2592] = 1,
    ACTIONS(620), 1,
      sym__comma,
  [2596] = 1,
    ACTIONS(622), 1,
      sym__comma,
  [2600] = 1,
    ACTIONS(624), 1,
      sym__comma,
  [2604] = 1,
    ACTIONS(626), 1,
      sym__comma,
  [2608] = 1,
    ACTIONS(628), 1,
      sym__comma,
  [2612] = 1,
    ACTIONS(630), 1,
      sym__comma,
  [2616] = 1,
    ACTIONS(632), 1,
      sym__comma,
  [2620] = 1,
    ACTIONS(634), 1,
      sym__comma,
  [2624] = 1,
    ACTIONS(636), 1,
      sym__comma,
  [2628] = 1,
    ACTIONS(638), 1,
      sym__comma,
  [2632] = 1,
    ACTIONS(640), 1,
      sym__comma,
  [2636] = 1,
    ACTIONS(642), 1,
      sym__comma,
  [2640] = 1,
    ACTIONS(644), 1,
      sym__comma,
  [2644] = 1,
    ACTIONS(646), 1,
      sym__comma,
  [2648] = 1,
    ACTIONS(648), 1,
      sym__comma,
  [2652] = 1,
    ACTIONS(650), 1,
      sym__comma,
  [2656] = 1,
    ACTIONS(652), 1,
      sym__comma,
  [2660] = 1,
    ACTIONS(654), 1,
      anon_sym_LF,
  [2664] = 1,
    ACTIONS(656), 1,
      sym__comma,
  [2668] = 1,
    ACTIONS(658), 1,
      sym__comma,
  [2672] = 1,
    ACTIONS(660), 1,
      sym__comma,
  [2676] = 1,
    ACTIONS(662), 1,
      sym__comma,
  [2680] = 1,
    ACTIONS(664), 1,
      sym__comma,
  [2684] = 1,
    ACTIONS(666), 1,
      sym__comma,
  [2688] = 1,
    ACTIONS(668), 1,
      sym__comma,
  [2692] = 1,
    ACTIONS(670), 1,
      sym__comma,
  [2696] = 1,
    ACTIONS(672), 1,
      sym_styles_header_back_color,
  [2700] = 1,
    ACTIONS(674), 1,
      sym__comma,
  [2704] = 1,
    ACTIONS(676), 1,
      sym__comma,
  [2708] = 1,
    ACTIONS(678), 1,
      sym__comma,
  [2712] = 1,
    ACTIONS(680), 1,
      sym__comma,
  [2716] = 1,
    ACTIONS(682), 1,
      sym__comma,
  [2720] = 1,
    ACTIONS(684), 1,
      sym__comma,
  [2724] = 1,
    ACTIONS(686), 1,
      sym__comma,
  [2728] = 1,
    ACTIONS(688), 1,
      sym__comma,
  [2732] = 1,
    ACTIONS(690), 1,
      sym__comma,
  [2736] = 1,
    ACTIONS(692), 1,
      sym_styles_header_outline,
  [2740] = 1,
    ACTIONS(694), 1,
      sym__comma,
  [2744] = 1,
    ACTIONS(696), 1,
      sym__comma,
  [2748] = 1,
    ACTIONS(698), 1,
      sym__comma,
  [2752] = 1,
    ACTIONS(700), 1,
      sym__comma,
  [2756] = 1,
    ACTIONS(702), 1,
      sym__comma,
  [2760] = 1,
    ACTIONS(436), 1,
      sym__comma,
  [2764] = 1,
    ACTIONS(704), 1,
      sym__comma,
  [2768] = 1,
    ACTIONS(706), 1,
      sym__comma,
  [2772] = 1,
    ACTIONS(708), 1,
      sym__comma,
  [2776] = 1,
    ACTIONS(432), 1,
      sym__comma,
  [2780] = 1,
    ACTIONS(710), 1,
      sym__comma,
  [2784] = 1,
    ACTIONS(712), 1,
      sym__comma,
  [2788] = 1,
    ACTIONS(714), 1,
      sym__comma,
  [2792] = 1,
    ACTIONS(424), 1,
      sym__comma,
  [2796] = 1,
    ACTIONS(716), 1,
      sym_styles_header_tertiary_color,
  [2800] = 1,
    ACTIONS(718), 1,
      sym__comma,
  [2804] = 1,
    ACTIONS(720), 1,
      sym__comma,
  [2808] = 1,
    ACTIONS(418), 1,
      sym__comma,
  [2812] = 1,
    ACTIONS(722), 1,
      sym__comma,
  [2816] = 1,
    ACTIONS(724), 1,
      sym__comma,
  [2820] = 1,
    ACTIONS(726), 1,
      sym__comma,
  [2824] = 1,
    ACTIONS(414), 1,
      sym__comma,
  [2828] = 1,
    ACTIONS(728), 1,
      sym__comma,
  [2832] = 1,
    ACTIONS(730), 1,
      sym__comma,
  [2836] = 1,
    ACTIONS(732), 1,
      sym__comma,
  [2840] = 1,
    ACTIONS(410), 1,
      sym__comma,
  [2844] = 1,
    ACTIONS(734), 1,
      sym__comma,
  [2848] = 1,
    ACTIONS(736), 1,
      sym__comma,
  [2852] = 1,
    ACTIONS(738), 1,
      sym__comma,
  [2856] = 1,
    ACTIONS(740), 1,
      sym__comma,
  [2860] = 1,
    ACTIONS(742), 1,
      sym__comma,
  [2864] = 1,
    ACTIONS(744), 1,
      anon_sym_LF,
  [2868] = 1,
    ACTIONS(746), 1,
      sym__comma,
  [2872] = 1,
    ACTIONS(748), 1,
      sym__comma,
  [2876] = 1,
    ACTIONS(304), 1,
      sym__comma,
  [2880] = 1,
    ACTIONS(750), 1,
      sym_events_header_name,
  [2884] = 1,
    ACTIONS(752), 1,
      sym__comma,
  [2888] = 1,
    ACTIONS(754), 1,
      anon_sym_LF,
  [2892] = 1,
    ACTIONS(756), 1,
      anon_sym_LF,
  [2896] = 1,
    ACTIONS(382), 1,
      sym__comma,
  [2900] = 1,
    ACTIONS(758), 1,
      sym_styles_header_secondary_color,
  [2904] = 1,
    ACTIONS(760), 1,
      sym__comma,
  [2908] = 1,
    ACTIONS(762), 1,
      anon_sym_LF,
  [2912] = 1,
    ACTIONS(764), 1,
      sym__comma,
  [2916] = 1,
    ACTIONS(376), 1,
      sym__comma,
  [2920] = 1,
    ACTIONS(766), 1,
      sym__comma,
  [2924] = 1,
    ACTIONS(768), 1,
      sym__comma,
  [2928] = 1,
    ACTIONS(770), 1,
      anon_sym_LF,
  [2932] = 1,
    ACTIONS(772), 1,
      sym__comma,
  [2936] = 1,
    ACTIONS(372), 1,
      sym__comma,
  [2940] = 1,
    ACTIONS(774), 1,
      sym__comma,
  [2944] = 1,
    ACTIONS(776), 1,
      sym__comma,
  [2948] = 1,
    ACTIONS(778), 1,
      anon_sym_LF,
  [2952] = 1,
    ACTIONS(780), 1,
      sym__comma,
  [2956] = 1,
    ACTIONS(368), 1,
      sym__comma,
  [2960] = 1,
    ACTIONS(782), 1,
      sym__comma,
  [2964] = 1,
    ACTIONS(784), 1,
      sym__comma,
  [2968] = 1,
    ACTIONS(786), 1,
      anon_sym_LF,
  [2972] = 1,
    ACTIONS(788), 1,
      sym__comma,
  [2976] = 1,
    ACTIONS(360), 1,
      sym__comma,
  [2980] = 1,
    ACTIONS(790), 1,
      sym_styles_header_primary_color,
  [2984] = 1,
    ACTIONS(792), 1,
      sym_styles_header_shadow,
  [2988] = 1,
    ACTIONS(794), 1,
      sym__comma,
  [2992] = 1,
    ACTIONS(796), 1,
      sym__comma,
  [2996] = 1,
    ACTIONS(798), 1,
      sym__comma,
  [3000] = 1,
    ACTIONS(800), 1,
      anon_sym_LF,
  [3004] = 1,
    ACTIONS(802), 1,
      sym_style_font_name,
  [3008] = 1,
    ACTIONS(804), 1,
      sym__comma,
  [3012] = 1,
    ACTIONS(806), 1,
      sym__comma,
  [3016] = 1,
    ACTIONS(808), 1,
      anon_sym_LF,
  [3020] = 1,
    ACTIONS(810), 1,
      aux_sym_event_dialogue_row_token1,
  [3024] = 1,
    ACTIONS(812), 1,
      sym__comma,
  [3028] = 1,
    ACTIONS(814), 1,
      aux_sym_event_dialogue_row_token1,
  [3032] = 1,
    ACTIONS(816), 1,
      anon_sym_LF,
  [3036] = 1,
    ACTIONS(818), 1,
      aux_sym_event_dialogue_row_token1,
  [3040] = 1,
    ACTIONS(820), 1,
      sym__comma,
  [3044] = 1,
    ACTIONS(822), 1,
      aux_sym_event_dialogue_row_token1,
  [3048] = 1,
    ACTIONS(824), 1,
      anon_sym_LF,
  [3052] = 1,
    ACTIONS(826), 1,
      aux_sym_event_dialogue_row_token1,
  [3056] = 1,
    ACTIONS(828), 1,
      sym__comma,
  [3060] = 1,
    ACTIONS(830), 1,
      aux_sym_event_dialogue_row_token1,
  [3064] = 1,
    ACTIONS(832), 1,
      anon_sym_LF,
  [3068] = 1,
    ACTIONS(834), 1,
      sym_events_header_end,
  [3072] = 1,
    ACTIONS(836), 1,
      sym__comma,
  [3076] = 1,
    ACTIONS(838), 1,
      sym__comma,
  [3080] = 1,
    ACTIONS(840), 1,
      anon_sym_LF,
  [3084] = 1,
    ACTIONS(842), 1,
      sym_styles_header_font_size,
  [3088] = 1,
    ACTIONS(844), 1,
      sym__comma,
  [3092] = 1,
    ACTIONS(846), 1,
      sym__comma,
  [3096] = 1,
    ACTIONS(848), 1,
      anon_sym_Marked,
  [3100] = 1,
    ACTIONS(850), 1,
      anon_sym_Marked,
  [3104] = 1,
    ACTIONS(852), 1,
      anon_sym_LF,
  [3108] = 1,
    ACTIONS(854), 1,
      anon_sym_Marked,
  [3112] = 1,
    ACTIONS(856), 1,
      anon_sym_Marked,
  [3116] = 1,
    ACTIONS(858), 1,
      anon_sym_LF,
  [3120] = 1,
    ACTIONS(860), 1,
      anon_sym_Marked,
  [3124] = 1,
    ACTIONS(862), 1,
      anon_sym_Marked,
  [3128] = 1,
    ACTIONS(864), 1,
      anon_sym_LF,
  [3132] = 1,
    ACTIONS(866), 1,
      sym__comma,
  [3136] = 1,
    ACTIONS(868), 1,
      sym_style_name,
  [3140] = 1,
    ACTIONS(870), 1,
      anon_sym_LF,
  [3144] = 1,
    ACTIONS(872), 1,
      sym__comma,
  [3148] = 1,
    ACTIONS(874), 1,
      anon_sym_LF,
  [3152] = 1,
    ACTIONS(876), 1,
      anon_sym_LF,
  [3156] = 1,
    ACTIONS(878), 1,
      anon_sym_LF,
  [3160] = 1,
    ACTIONS(880), 1,
      sym_events_header_format,
  [3164] = 1,
    ACTIONS(882), 1,
      anon_sym_LF,
  [3168] = 1,
    ACTIONS(884), 1,
      sym_styles_header_name,
  [3172] = 1,
    ACTIONS(886), 1,
      sym_styles_header_alignment,
  [3176] = 1,
    ACTIONS(888), 1,
      sym__comma,
  [3180] = 1,
    ACTIONS(890), 1,
      sym__comma,
  [3184] = 1,
    ACTIONS(892), 1,
      aux_sym_styles_body_row_token1,
  [3188] = 1,
    ACTIONS(894), 1,
      anon_sym_LF,
  [3192] = 1,
    ACTIONS(896), 1,
      aux_sym_styles_body_row_token1,
  [3196] = 1,
    ACTIONS(898), 1,
      anon_sym_LF,
  [3200] = 1,
    ACTIONS(900), 1,
      aux_sym_styles_body_row_token1,
  [3204] = 1,
    ACTIONS(902), 1,
      anon_sym_LF,
  [3208] = 1,
    ACTIONS(904), 1,
      aux_sym_styles_body_row_token1,
  [3212] = 1,
    ACTIONS(906), 1,
      anon_sym_LF,
  [3216] = 1,
    ACTIONS(908), 1,
      aux_sym_styles_body_row_token1,
  [3220] = 1,
    ACTIONS(910), 1,
      anon_sym_LF,
  [3224] = 1,
    ACTIONS(912), 1,
      aux_sym_styles_body_row_token1,
  [3228] = 1,
    ACTIONS(914), 1,
      anon_sym_LF,
  [3232] = 1,
    ACTIONS(916), 1,
      sym__comma,
  [3236] = 1,
    ACTIONS(918), 1,
      sym_events_header_start,
  [3240] = 1,
    ACTIONS(920), 1,
      aux_sym_styles_body_row_token1,
  [3244] = 1,
    ACTIONS(922), 1,
      sym_styles_header_font_name,
  [3248] = 1,
    ACTIONS(924), 1,
      anon_sym_LF,
  [3252] = 1,
    ACTIONS(926), 1,
      anon_sym_LF,
  [3256] = 1,
    ACTIONS(928), 1,
      anon_sym_LF,
  [3260] = 1,
    ACTIONS(930), 1,
      anon_sym_LF,
  [3264] = 1,
    ACTIONS(932), 1,
      anon_sym_LF,
  [3268] = 1,
    ACTIONS(934), 1,
      sym__comma,
  [3272] = 1,
    ACTIONS(936), 1,
      sym__comma,
  [3276] = 1,
    ACTIONS(938), 1,
      sym__comma,
  [3280] = 1,
    ACTIONS(940), 1,
      sym__comma,
  [3284] = 1,
    ACTIONS(942), 1,
      anon_sym_LF,
  [3288] = 1,
    ACTIONS(944), 1,
      sym__comma,
  [3292] = 1,
    ACTIONS(946), 1,
      sym__comma,
  [3296] = 1,
    ACTIONS(948), 1,
      sym__comma,
  [3300] = 1,
    ACTIONS(950), 1,
      sym__comma,
  [3304] = 1,
    ACTIONS(952), 1,
      sym__comma,
  [3308] = 1,
    ACTIONS(954), 1,
      sym__comma,
  [3312] = 1,
    ACTIONS(956), 1,
      anon_sym_COLON,
  [3316] = 1,
    ACTIONS(958), 1,
      sym__comma,
  [3320] = 1,
    ACTIONS(960), 1,
      sym__comma,
  [3324] = 1,
    ACTIONS(962), 1,
      sym__comma,
  [3328] = 1,
    ACTIONS(964), 1,
      sym__comma,
  [3332] = 1,
    ACTIONS(966), 1,
      anon_sym_COLON,
  [3336] = 1,
    ACTIONS(968), 1,
      sym_styles_header_alpha_level,
  [3340] = 1,
    ACTIONS(970), 1,
      sym__comma,
  [3344] = 1,
    ACTIONS(972), 1,
      sym__comma,
  [3348] = 1,
    ACTIONS(974), 1,
      sym__comma,
  [3352] = 1,
    ACTIONS(976), 1,
      anon_sym_RBRACK,
  [3356] = 1,
    ACTIONS(978), 1,
      sym_styles_header_encoding,
  [3360] = 1,
    ACTIONS(980), 1,
      sym__comma,
  [3364] = 1,
    ACTIONS(982), 1,
      sym__comma,
  [3368] = 1,
    ACTIONS(984), 1,
      anon_sym_LF,
  [3372] = 1,
    ACTIONS(986), 1,
      anon_sym_RBRACK,
  [3376] = 1,
    ACTIONS(988), 1,
      anon_sym_RBRACK,
  [3380] = 1,
    ACTIONS(990), 1,
      sym__comma,
  [3384] = 1,
    ACTIONS(992), 1,
      sym__comma,
  [3388] = 1,
    ACTIONS(994), 1,
      anon_sym_RBRACK,
  [3392] = 1,
    ACTIONS(996), 1,
      anon_sym_LF,
  [3396] = 1,
    ACTIONS(998), 1,
      anon_sym_LF,
  [3400] = 1,
    ACTIONS(1000), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 39,
  [SMALL_STATE(4)] = 78,
  [SMALL_STATE(5)] = 117,
  [SMALL_STATE(6)] = 142,
  [SMALL_STATE(7)] = 167,
  [SMALL_STATE(8)] = 192,
  [SMALL_STATE(9)] = 230,
  [SMALL_STATE(10)] = 268,
  [SMALL_STATE(11)] = 306,
  [SMALL_STATE(12)] = 342,
  [SMALL_STATE(13)] = 378,
  [SMALL_STATE(14)] = 392,
  [SMALL_STATE(15)] = 406,
  [SMALL_STATE(16)] = 420,
  [SMALL_STATE(17)] = 434,
  [SMALL_STATE(18)] = 448,
  [SMALL_STATE(19)] = 462,
  [SMALL_STATE(20)] = 476,
  [SMALL_STATE(21)] = 490,
  [SMALL_STATE(22)] = 504,
  [SMALL_STATE(23)] = 518,
  [SMALL_STATE(24)] = 532,
  [SMALL_STATE(25)] = 546,
  [SMALL_STATE(26)] = 560,
  [SMALL_STATE(27)] = 574,
  [SMALL_STATE(28)] = 588,
  [SMALL_STATE(29)] = 602,
  [SMALL_STATE(30)] = 616,
  [SMALL_STATE(31)] = 630,
  [SMALL_STATE(32)] = 644,
  [SMALL_STATE(33)] = 658,
  [SMALL_STATE(34)] = 672,
  [SMALL_STATE(35)] = 686,
  [SMALL_STATE(36)] = 700,
  [SMALL_STATE(37)] = 714,
  [SMALL_STATE(38)] = 728,
  [SMALL_STATE(39)] = 742,
  [SMALL_STATE(40)] = 756,
  [SMALL_STATE(41)] = 770,
  [SMALL_STATE(42)] = 784,
  [SMALL_STATE(43)] = 798,
  [SMALL_STATE(44)] = 812,
  [SMALL_STATE(45)] = 826,
  [SMALL_STATE(46)] = 841,
  [SMALL_STATE(47)] = 856,
  [SMALL_STATE(48)] = 871,
  [SMALL_STATE(49)] = 886,
  [SMALL_STATE(50)] = 901,
  [SMALL_STATE(51)] = 916,
  [SMALL_STATE(52)] = 931,
  [SMALL_STATE(53)] = 946,
  [SMALL_STATE(54)] = 961,
  [SMALL_STATE(55)] = 974,
  [SMALL_STATE(56)] = 983,
  [SMALL_STATE(57)] = 992,
  [SMALL_STATE(58)] = 1001,
  [SMALL_STATE(59)] = 1010,
  [SMALL_STATE(60)] = 1019,
  [SMALL_STATE(61)] = 1028,
  [SMALL_STATE(62)] = 1038,
  [SMALL_STATE(63)] = 1048,
  [SMALL_STATE(64)] = 1056,
  [SMALL_STATE(65)] = 1066,
  [SMALL_STATE(66)] = 1076,
  [SMALL_STATE(67)] = 1086,
  [SMALL_STATE(68)] = 1096,
  [SMALL_STATE(69)] = 1106,
  [SMALL_STATE(70)] = 1116,
  [SMALL_STATE(71)] = 1126,
  [SMALL_STATE(72)] = 1136,
  [SMALL_STATE(73)] = 1146,
  [SMALL_STATE(74)] = 1156,
  [SMALL_STATE(75)] = 1166,
  [SMALL_STATE(76)] = 1176,
  [SMALL_STATE(77)] = 1186,
  [SMALL_STATE(78)] = 1196,
  [SMALL_STATE(79)] = 1206,
  [SMALL_STATE(80)] = 1216,
  [SMALL_STATE(81)] = 1226,
  [SMALL_STATE(82)] = 1236,
  [SMALL_STATE(83)] = 1246,
  [SMALL_STATE(84)] = 1256,
  [SMALL_STATE(85)] = 1266,
  [SMALL_STATE(86)] = 1276,
  [SMALL_STATE(87)] = 1284,
  [SMALL_STATE(88)] = 1292,
  [SMALL_STATE(89)] = 1300,
  [SMALL_STATE(90)] = 1308,
  [SMALL_STATE(91)] = 1316,
  [SMALL_STATE(92)] = 1324,
  [SMALL_STATE(93)] = 1334,
  [SMALL_STATE(94)] = 1344,
  [SMALL_STATE(95)] = 1354,
  [SMALL_STATE(96)] = 1364,
  [SMALL_STATE(97)] = 1374,
  [SMALL_STATE(98)] = 1384,
  [SMALL_STATE(99)] = 1394,
  [SMALL_STATE(100)] = 1404,
  [SMALL_STATE(101)] = 1414,
  [SMALL_STATE(102)] = 1424,
  [SMALL_STATE(103)] = 1434,
  [SMALL_STATE(104)] = 1444,
  [SMALL_STATE(105)] = 1454,
  [SMALL_STATE(106)] = 1464,
  [SMALL_STATE(107)] = 1474,
  [SMALL_STATE(108)] = 1484,
  [SMALL_STATE(109)] = 1494,
  [SMALL_STATE(110)] = 1504,
  [SMALL_STATE(111)] = 1514,
  [SMALL_STATE(112)] = 1524,
  [SMALL_STATE(113)] = 1534,
  [SMALL_STATE(114)] = 1544,
  [SMALL_STATE(115)] = 1554,
  [SMALL_STATE(116)] = 1564,
  [SMALL_STATE(117)] = 1574,
  [SMALL_STATE(118)] = 1584,
  [SMALL_STATE(119)] = 1594,
  [SMALL_STATE(120)] = 1604,
  [SMALL_STATE(121)] = 1614,
  [SMALL_STATE(122)] = 1624,
  [SMALL_STATE(123)] = 1634,
  [SMALL_STATE(124)] = 1644,
  [SMALL_STATE(125)] = 1654,
  [SMALL_STATE(126)] = 1664,
  [SMALL_STATE(127)] = 1674,
  [SMALL_STATE(128)] = 1684,
  [SMALL_STATE(129)] = 1691,
  [SMALL_STATE(130)] = 1698,
  [SMALL_STATE(131)] = 1705,
  [SMALL_STATE(132)] = 1712,
  [SMALL_STATE(133)] = 1719,
  [SMALL_STATE(134)] = 1726,
  [SMALL_STATE(135)] = 1733,
  [SMALL_STATE(136)] = 1740,
  [SMALL_STATE(137)] = 1747,
  [SMALL_STATE(138)] = 1754,
  [SMALL_STATE(139)] = 1761,
  [SMALL_STATE(140)] = 1768,
  [SMALL_STATE(141)] = 1775,
  [SMALL_STATE(142)] = 1782,
  [SMALL_STATE(143)] = 1789,
  [SMALL_STATE(144)] = 1796,
  [SMALL_STATE(145)] = 1803,
  [SMALL_STATE(146)] = 1810,
  [SMALL_STATE(147)] = 1817,
  [SMALL_STATE(148)] = 1824,
  [SMALL_STATE(149)] = 1831,
  [SMALL_STATE(150)] = 1838,
  [SMALL_STATE(151)] = 1845,
  [SMALL_STATE(152)] = 1852,
  [SMALL_STATE(153)] = 1859,
  [SMALL_STATE(154)] = 1866,
  [SMALL_STATE(155)] = 1873,
  [SMALL_STATE(156)] = 1880,
  [SMALL_STATE(157)] = 1887,
  [SMALL_STATE(158)] = 1894,
  [SMALL_STATE(159)] = 1901,
  [SMALL_STATE(160)] = 1908,
  [SMALL_STATE(161)] = 1915,
  [SMALL_STATE(162)] = 1922,
  [SMALL_STATE(163)] = 1929,
  [SMALL_STATE(164)] = 1936,
  [SMALL_STATE(165)] = 1943,
  [SMALL_STATE(166)] = 1950,
  [SMALL_STATE(167)] = 1957,
  [SMALL_STATE(168)] = 1964,
  [SMALL_STATE(169)] = 1971,
  [SMALL_STATE(170)] = 1978,
  [SMALL_STATE(171)] = 1985,
  [SMALL_STATE(172)] = 1992,
  [SMALL_STATE(173)] = 1999,
  [SMALL_STATE(174)] = 2006,
  [SMALL_STATE(175)] = 2013,
  [SMALL_STATE(176)] = 2020,
  [SMALL_STATE(177)] = 2027,
  [SMALL_STATE(178)] = 2034,
  [SMALL_STATE(179)] = 2041,
  [SMALL_STATE(180)] = 2048,
  [SMALL_STATE(181)] = 2055,
  [SMALL_STATE(182)] = 2062,
  [SMALL_STATE(183)] = 2069,
  [SMALL_STATE(184)] = 2076,
  [SMALL_STATE(185)] = 2083,
  [SMALL_STATE(186)] = 2090,
  [SMALL_STATE(187)] = 2097,
  [SMALL_STATE(188)] = 2104,
  [SMALL_STATE(189)] = 2111,
  [SMALL_STATE(190)] = 2118,
  [SMALL_STATE(191)] = 2125,
  [SMALL_STATE(192)] = 2132,
  [SMALL_STATE(193)] = 2139,
  [SMALL_STATE(194)] = 2146,
  [SMALL_STATE(195)] = 2153,
  [SMALL_STATE(196)] = 2160,
  [SMALL_STATE(197)] = 2167,
  [SMALL_STATE(198)] = 2174,
  [SMALL_STATE(199)] = 2181,
  [SMALL_STATE(200)] = 2188,
  [SMALL_STATE(201)] = 2195,
  [SMALL_STATE(202)] = 2202,
  [SMALL_STATE(203)] = 2209,
  [SMALL_STATE(204)] = 2216,
  [SMALL_STATE(205)] = 2223,
  [SMALL_STATE(206)] = 2230,
  [SMALL_STATE(207)] = 2237,
  [SMALL_STATE(208)] = 2244,
  [SMALL_STATE(209)] = 2251,
  [SMALL_STATE(210)] = 2258,
  [SMALL_STATE(211)] = 2265,
  [SMALL_STATE(212)] = 2272,
  [SMALL_STATE(213)] = 2279,
  [SMALL_STATE(214)] = 2286,
  [SMALL_STATE(215)] = 2293,
  [SMALL_STATE(216)] = 2300,
  [SMALL_STATE(217)] = 2307,
  [SMALL_STATE(218)] = 2314,
  [SMALL_STATE(219)] = 2321,
  [SMALL_STATE(220)] = 2328,
  [SMALL_STATE(221)] = 2332,
  [SMALL_STATE(222)] = 2336,
  [SMALL_STATE(223)] = 2340,
  [SMALL_STATE(224)] = 2344,
  [SMALL_STATE(225)] = 2348,
  [SMALL_STATE(226)] = 2352,
  [SMALL_STATE(227)] = 2356,
  [SMALL_STATE(228)] = 2360,
  [SMALL_STATE(229)] = 2364,
  [SMALL_STATE(230)] = 2368,
  [SMALL_STATE(231)] = 2372,
  [SMALL_STATE(232)] = 2376,
  [SMALL_STATE(233)] = 2380,
  [SMALL_STATE(234)] = 2384,
  [SMALL_STATE(235)] = 2388,
  [SMALL_STATE(236)] = 2392,
  [SMALL_STATE(237)] = 2396,
  [SMALL_STATE(238)] = 2400,
  [SMALL_STATE(239)] = 2404,
  [SMALL_STATE(240)] = 2408,
  [SMALL_STATE(241)] = 2412,
  [SMALL_STATE(242)] = 2416,
  [SMALL_STATE(243)] = 2420,
  [SMALL_STATE(244)] = 2424,
  [SMALL_STATE(245)] = 2428,
  [SMALL_STATE(246)] = 2432,
  [SMALL_STATE(247)] = 2436,
  [SMALL_STATE(248)] = 2440,
  [SMALL_STATE(249)] = 2444,
  [SMALL_STATE(250)] = 2448,
  [SMALL_STATE(251)] = 2452,
  [SMALL_STATE(252)] = 2456,
  [SMALL_STATE(253)] = 2460,
  [SMALL_STATE(254)] = 2464,
  [SMALL_STATE(255)] = 2468,
  [SMALL_STATE(256)] = 2472,
  [SMALL_STATE(257)] = 2476,
  [SMALL_STATE(258)] = 2480,
  [SMALL_STATE(259)] = 2484,
  [SMALL_STATE(260)] = 2488,
  [SMALL_STATE(261)] = 2492,
  [SMALL_STATE(262)] = 2496,
  [SMALL_STATE(263)] = 2500,
  [SMALL_STATE(264)] = 2504,
  [SMALL_STATE(265)] = 2508,
  [SMALL_STATE(266)] = 2512,
  [SMALL_STATE(267)] = 2516,
  [SMALL_STATE(268)] = 2520,
  [SMALL_STATE(269)] = 2524,
  [SMALL_STATE(270)] = 2528,
  [SMALL_STATE(271)] = 2532,
  [SMALL_STATE(272)] = 2536,
  [SMALL_STATE(273)] = 2540,
  [SMALL_STATE(274)] = 2544,
  [SMALL_STATE(275)] = 2548,
  [SMALL_STATE(276)] = 2552,
  [SMALL_STATE(277)] = 2556,
  [SMALL_STATE(278)] = 2560,
  [SMALL_STATE(279)] = 2564,
  [SMALL_STATE(280)] = 2568,
  [SMALL_STATE(281)] = 2572,
  [SMALL_STATE(282)] = 2576,
  [SMALL_STATE(283)] = 2580,
  [SMALL_STATE(284)] = 2584,
  [SMALL_STATE(285)] = 2588,
  [SMALL_STATE(286)] = 2592,
  [SMALL_STATE(287)] = 2596,
  [SMALL_STATE(288)] = 2600,
  [SMALL_STATE(289)] = 2604,
  [SMALL_STATE(290)] = 2608,
  [SMALL_STATE(291)] = 2612,
  [SMALL_STATE(292)] = 2616,
  [SMALL_STATE(293)] = 2620,
  [SMALL_STATE(294)] = 2624,
  [SMALL_STATE(295)] = 2628,
  [SMALL_STATE(296)] = 2632,
  [SMALL_STATE(297)] = 2636,
  [SMALL_STATE(298)] = 2640,
  [SMALL_STATE(299)] = 2644,
  [SMALL_STATE(300)] = 2648,
  [SMALL_STATE(301)] = 2652,
  [SMALL_STATE(302)] = 2656,
  [SMALL_STATE(303)] = 2660,
  [SMALL_STATE(304)] = 2664,
  [SMALL_STATE(305)] = 2668,
  [SMALL_STATE(306)] = 2672,
  [SMALL_STATE(307)] = 2676,
  [SMALL_STATE(308)] = 2680,
  [SMALL_STATE(309)] = 2684,
  [SMALL_STATE(310)] = 2688,
  [SMALL_STATE(311)] = 2692,
  [SMALL_STATE(312)] = 2696,
  [SMALL_STATE(313)] = 2700,
  [SMALL_STATE(314)] = 2704,
  [SMALL_STATE(315)] = 2708,
  [SMALL_STATE(316)] = 2712,
  [SMALL_STATE(317)] = 2716,
  [SMALL_STATE(318)] = 2720,
  [SMALL_STATE(319)] = 2724,
  [SMALL_STATE(320)] = 2728,
  [SMALL_STATE(321)] = 2732,
  [SMALL_STATE(322)] = 2736,
  [SMALL_STATE(323)] = 2740,
  [SMALL_STATE(324)] = 2744,
  [SMALL_STATE(325)] = 2748,
  [SMALL_STATE(326)] = 2752,
  [SMALL_STATE(327)] = 2756,
  [SMALL_STATE(328)] = 2760,
  [SMALL_STATE(329)] = 2764,
  [SMALL_STATE(330)] = 2768,
  [SMALL_STATE(331)] = 2772,
  [SMALL_STATE(332)] = 2776,
  [SMALL_STATE(333)] = 2780,
  [SMALL_STATE(334)] = 2784,
  [SMALL_STATE(335)] = 2788,
  [SMALL_STATE(336)] = 2792,
  [SMALL_STATE(337)] = 2796,
  [SMALL_STATE(338)] = 2800,
  [SMALL_STATE(339)] = 2804,
  [SMALL_STATE(340)] = 2808,
  [SMALL_STATE(341)] = 2812,
  [SMALL_STATE(342)] = 2816,
  [SMALL_STATE(343)] = 2820,
  [SMALL_STATE(344)] = 2824,
  [SMALL_STATE(345)] = 2828,
  [SMALL_STATE(346)] = 2832,
  [SMALL_STATE(347)] = 2836,
  [SMALL_STATE(348)] = 2840,
  [SMALL_STATE(349)] = 2844,
  [SMALL_STATE(350)] = 2848,
  [SMALL_STATE(351)] = 2852,
  [SMALL_STATE(352)] = 2856,
  [SMALL_STATE(353)] = 2860,
  [SMALL_STATE(354)] = 2864,
  [SMALL_STATE(355)] = 2868,
  [SMALL_STATE(356)] = 2872,
  [SMALL_STATE(357)] = 2876,
  [SMALL_STATE(358)] = 2880,
  [SMALL_STATE(359)] = 2884,
  [SMALL_STATE(360)] = 2888,
  [SMALL_STATE(361)] = 2892,
  [SMALL_STATE(362)] = 2896,
  [SMALL_STATE(363)] = 2900,
  [SMALL_STATE(364)] = 2904,
  [SMALL_STATE(365)] = 2908,
  [SMALL_STATE(366)] = 2912,
  [SMALL_STATE(367)] = 2916,
  [SMALL_STATE(368)] = 2920,
  [SMALL_STATE(369)] = 2924,
  [SMALL_STATE(370)] = 2928,
  [SMALL_STATE(371)] = 2932,
  [SMALL_STATE(372)] = 2936,
  [SMALL_STATE(373)] = 2940,
  [SMALL_STATE(374)] = 2944,
  [SMALL_STATE(375)] = 2948,
  [SMALL_STATE(376)] = 2952,
  [SMALL_STATE(377)] = 2956,
  [SMALL_STATE(378)] = 2960,
  [SMALL_STATE(379)] = 2964,
  [SMALL_STATE(380)] = 2968,
  [SMALL_STATE(381)] = 2972,
  [SMALL_STATE(382)] = 2976,
  [SMALL_STATE(383)] = 2980,
  [SMALL_STATE(384)] = 2984,
  [SMALL_STATE(385)] = 2988,
  [SMALL_STATE(386)] = 2992,
  [SMALL_STATE(387)] = 2996,
  [SMALL_STATE(388)] = 3000,
  [SMALL_STATE(389)] = 3004,
  [SMALL_STATE(390)] = 3008,
  [SMALL_STATE(391)] = 3012,
  [SMALL_STATE(392)] = 3016,
  [SMALL_STATE(393)] = 3020,
  [SMALL_STATE(394)] = 3024,
  [SMALL_STATE(395)] = 3028,
  [SMALL_STATE(396)] = 3032,
  [SMALL_STATE(397)] = 3036,
  [SMALL_STATE(398)] = 3040,
  [SMALL_STATE(399)] = 3044,
  [SMALL_STATE(400)] = 3048,
  [SMALL_STATE(401)] = 3052,
  [SMALL_STATE(402)] = 3056,
  [SMALL_STATE(403)] = 3060,
  [SMALL_STATE(404)] = 3064,
  [SMALL_STATE(405)] = 3068,
  [SMALL_STATE(406)] = 3072,
  [SMALL_STATE(407)] = 3076,
  [SMALL_STATE(408)] = 3080,
  [SMALL_STATE(409)] = 3084,
  [SMALL_STATE(410)] = 3088,
  [SMALL_STATE(411)] = 3092,
  [SMALL_STATE(412)] = 3096,
  [SMALL_STATE(413)] = 3100,
  [SMALL_STATE(414)] = 3104,
  [SMALL_STATE(415)] = 3108,
  [SMALL_STATE(416)] = 3112,
  [SMALL_STATE(417)] = 3116,
  [SMALL_STATE(418)] = 3120,
  [SMALL_STATE(419)] = 3124,
  [SMALL_STATE(420)] = 3128,
  [SMALL_STATE(421)] = 3132,
  [SMALL_STATE(422)] = 3136,
  [SMALL_STATE(423)] = 3140,
  [SMALL_STATE(424)] = 3144,
  [SMALL_STATE(425)] = 3148,
  [SMALL_STATE(426)] = 3152,
  [SMALL_STATE(427)] = 3156,
  [SMALL_STATE(428)] = 3160,
  [SMALL_STATE(429)] = 3164,
  [SMALL_STATE(430)] = 3168,
  [SMALL_STATE(431)] = 3172,
  [SMALL_STATE(432)] = 3176,
  [SMALL_STATE(433)] = 3180,
  [SMALL_STATE(434)] = 3184,
  [SMALL_STATE(435)] = 3188,
  [SMALL_STATE(436)] = 3192,
  [SMALL_STATE(437)] = 3196,
  [SMALL_STATE(438)] = 3200,
  [SMALL_STATE(439)] = 3204,
  [SMALL_STATE(440)] = 3208,
  [SMALL_STATE(441)] = 3212,
  [SMALL_STATE(442)] = 3216,
  [SMALL_STATE(443)] = 3220,
  [SMALL_STATE(444)] = 3224,
  [SMALL_STATE(445)] = 3228,
  [SMALL_STATE(446)] = 3232,
  [SMALL_STATE(447)] = 3236,
  [SMALL_STATE(448)] = 3240,
  [SMALL_STATE(449)] = 3244,
  [SMALL_STATE(450)] = 3248,
  [SMALL_STATE(451)] = 3252,
  [SMALL_STATE(452)] = 3256,
  [SMALL_STATE(453)] = 3260,
  [SMALL_STATE(454)] = 3264,
  [SMALL_STATE(455)] = 3268,
  [SMALL_STATE(456)] = 3272,
  [SMALL_STATE(457)] = 3276,
  [SMALL_STATE(458)] = 3280,
  [SMALL_STATE(459)] = 3284,
  [SMALL_STATE(460)] = 3288,
  [SMALL_STATE(461)] = 3292,
  [SMALL_STATE(462)] = 3296,
  [SMALL_STATE(463)] = 3300,
  [SMALL_STATE(464)] = 3304,
  [SMALL_STATE(465)] = 3308,
  [SMALL_STATE(466)] = 3312,
  [SMALL_STATE(467)] = 3316,
  [SMALL_STATE(468)] = 3320,
  [SMALL_STATE(469)] = 3324,
  [SMALL_STATE(470)] = 3328,
  [SMALL_STATE(471)] = 3332,
  [SMALL_STATE(472)] = 3336,
  [SMALL_STATE(473)] = 3340,
  [SMALL_STATE(474)] = 3344,
  [SMALL_STATE(475)] = 3348,
  [SMALL_STATE(476)] = 3352,
  [SMALL_STATE(477)] = 3356,
  [SMALL_STATE(478)] = 3360,
  [SMALL_STATE(479)] = 3364,
  [SMALL_STATE(480)] = 3368,
  [SMALL_STATE(481)] = 3372,
  [SMALL_STATE(482)] = 3376,
  [SMALL_STATE(483)] = 3380,
  [SMALL_STATE(484)] = 3384,
  [SMALL_STATE(485)] = 3388,
  [SMALL_STATE(486)] = 3392,
  [SMALL_STATE(487)] = 3396,
  [SMALL_STATE(488)] = 3400,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_info, 1, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_info, 1, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_info_repeat1, 2, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_section_info_repeat1, 2, 0, 0),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_info_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_info_repeat1, 2, 0, 0), SHIFT_REPEAT(471),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_info, 2, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_info, 2, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_info_prop, 4, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_info_prop, 4, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_info_name, 4, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_info_name, 4, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_info_body_row, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_info_body_row, 1, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_events, 3, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_events, 3, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_events_repeat1, 2, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_section_events_repeat1, 2, 0, 0),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_events_repeat1, 2, 0, 0), SHIFT_REPEAT(444),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_events_repeat1, 2, 0, 0), SHIFT_REPEAT(442),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_events_repeat1, 2, 0, 0), SHIFT_REPEAT(440),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_events_repeat1, 2, 0, 0), SHIFT_REPEAT(438),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_events_repeat1, 2, 0, 0), SHIFT_REPEAT(436),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_events_repeat1, 2, 0, 0), SHIFT_REPEAT(434),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_events, 2, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_events, 2, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ssa_repeat1, 2, 0, 0),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ssa_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ssa_repeat1, 2, 0, 0), SHIFT_REPEAT(361),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ssa, 1, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_movie_row, 24, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_event_movie_row, 24, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_dialogue_row, 20, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_event_dialogue_row, 20, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_movie_row, 20, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_event_movie_row, 20, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_sound_row, 22, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_event_sound_row, 22, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_sound_row, 21, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_event_sound_row, 21, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_picture_row, 21, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_event_picture_row, 21, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_comment_row, 22, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_event_comment_row, 22, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_sound_row, 20, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_event_sound_row, 20, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_movie_row, 22, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_event_movie_row, 22, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_dialogue_row, 22, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_event_dialogue_row, 22, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_comment_row, 21, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_event_comment_row, 21, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_picture_row, 20, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_event_picture_row, 20, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_command_row, 20, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_event_command_row, 20, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_command_row, 22, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_event_command_row, 22, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_command_row, 24, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_event_command_row, 24, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_events_header_row, 20, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_events_header_row, 20, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_picture_row, 22, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_event_picture_row, 22, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_comment_row, 20, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_event_comment_row, 20, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_sound_row, 24, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_event_sound_row, 24, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_picture_row, 24, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_event_picture_row, 24, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_comment_row, 24, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_event_comment_row, 24, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_command_row, 21, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_event_command_row, 21, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_events_body_row, 1, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_events_body_row, 1, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_dialogue_row, 24, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_event_dialogue_row, 24, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_dialogue_row, 21, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_event_dialogue_row, 21, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_movie_row, 21, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_event_movie_row, 21, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_command_row, 23, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_event_command_row, 23, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_movie_row, 23, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_event_movie_row, 23, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_sound_row, 23, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_event_sound_row, 23, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_picture_row, 23, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_event_picture_row, 23, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_comment_row, 23, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_event_comment_row, 23, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_dialogue_row, 23, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_event_dialogue_row, 23, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_styles, 3, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_styles, 3, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_fonts_repeat1, 2, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_section_fonts_repeat1, 2, 0, 0),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_fonts_repeat1, 2, 0, 0), SHIFT_REPEAT(459),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_graphics_repeat1, 2, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_section_graphics_repeat1, 2, 0, 0),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_graphics_repeat1, 2, 0, 0), SHIFT_REPEAT(454),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_graphics, 2, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_graphics, 2, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_fonts, 2, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_fonts, 2, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_styles, 2, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_styles, 2, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_graphics, 1, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_graphics, 1, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_fonts, 1, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_fonts, 1, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_styles_repeat1, 2, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_section_styles_repeat1, 2, 0, 0),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_styles_repeat1, 2, 0, 0), SHIFT_REPEAT(448),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_styles_body_row, 38, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_styles_body_row, 38, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fonts_body_row, 2, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fonts_body_row, 2, 0, 0),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphics_body_row, 2, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graphics_body_row, 2, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_graphics_name, 4, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_graphics_name, 4, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_fonts_name, 2, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_fonts_name, 2, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_styles_header_row, 36, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_styles_header_row, 36, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 1, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_events_header_margin_v, 1, 0, 0),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_end, 1, 0, 0),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_back_color, 1, 0, 0),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_margin_r, 1, 0, 0),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_margin_l, 1, 0, 0),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_tertiary_color, 1, 0, 0),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_name, 1, 0, 0),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_bold, 1, 0, 0),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_margin_v, 1, 0, 0),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_events_header_margin_r, 1, 0, 0),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_style, 1, 0, 0),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_secondary_color, 1, 0, 0),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_events_header_margin_l, 1, 0, 0),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_italic, 1, 0, 0),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_effect, 1, 0, 0),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_font_size, 1, 0, 0),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_primary_color, 1, 0, 0),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_text, 1, 0, 0),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_start, 1, 0, 0),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_events_header_style, 1, 0, 0),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_is_marked, 1, 0, 0),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_border_style, 1, 0, 0),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_info_prop_value, 1, 0, 0),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_events_name, 4, 0, 0),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_styles_name, 4, 0, 0),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_outline, 1, 0, 0),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_shadow, 1, 0, 0),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_styles_header_margin_l, 1, 0, 0),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_alignment, 1, 0, 0),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_styles_header_margin_r, 1, 0, 0),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_margin_l, 1, 0, 0),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_styles_header_margin_v, 1, 0, 0),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_info_prop_name, 1, 0, 0),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_margin_r, 1, 0, 0),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_margin_v, 1, 0, 0),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_alpha_level, 1, 0, 0),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_encoding, 1, 0, 0),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1000] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_ssa(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
