/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {
    enum class effect_RecordSubType : __int32
    {
		effect_record_sub_none = 0,
		effect_record_sub_accumulated_damage_to_anyone = 1,
		effect_record_sub_accumulated_damage_from_1 = 2,
		effect_record_sub_accumulated_damage_from_2 = 3,
		effect_record_sub_accumulated_damage_from_3 = 4,
		effect_record_sub_melee_physical_attack = 5,
		effect_record_sub_melee_physical_attack_hate = 6,
		effect_record_sub_melee_physical_attack_drain = 7,
		effect_record_sub_force_attack_hp_drain = 8,
		effect_record_sub_force_attack_sp_drain = 9,
		effect_record_sub_melee_physical_attack_sp_drain = 10,
		effect_record_sub_melee_physical_attack_hp_sp_drain = 11,
		effect_record_sub_force_attack_hp_sp_drain = 12,
		effect_record_sub_range_physical_attack = 13,
		effect_record_sub_force_attack = 14,
		effect_record_sub_force_attack_hate = 15,
		effect_record_sub_speed_physical_attack = 16,
		effect_record_sub_part_attack = 17,
		effect_record_sub_stance = 18,
		effect_record_sub_hp_heal = 19,
		effect_record_sub_hp_heal_attack_power = 20,
		effect_record_sub_hp_damage = 21,
		effect_record_sub_hp_set_fixed_value = 22,
		effect_record_sub_hp_set_max_hp_fixed_percent = 23,
		effect_record_sub_guard_gauge_heal = 24,
		effect_record_sub_guard_gauge_damage = 25,
		effect_record_sub_food_interval_hp_heal = 26,
		effect_record_sub_set_immune_breaker = 27,
		effect_record_sub_sp_heal = 28,
		effect_record_sub_sp_damage = 29,
		effect_record_sub_desire_increase = 30,
		effect_record_sub_set_min_hate = 31,
		effect_record_sub_set_max_hate = 32,
		effect_record_sub_ruin_phantom = 33,
		effect_record_sub_shout_physical_attack = 34,
		effect_record_sub_resurrection = 35,
		effect_record_sub_hp_drain = 36,
		effect_record_sub_hp_transfer = 37,
		effect_record_sub_cast_cancel = 38,
		effect_record_sub_unlink = 39,
		effect_record_sub_extend_link = 40,
		effect_record_sub_extend_effect = 41,
		effect_record_sub_fluctuation_time_effect = 42,
		effect_record_sub_dispel_type = 43,
		effect_record_sub_dispel_attribute = 44,
		effect_record_sub_dispel_buff = 45,
		effect_record_sub_dispel_debuff = 46,
		effect_record_sub_transit = 47,
		effect_record_sub_return = 48,
		effect_record_sub_return_to_basecamp = 49,
		effect_record_sub_return_sim_skill = 50,
		effect_record_sub_instantaneous_death = 51,
		effect_record_sub_internal_force_attack = 52,
		effect_record_sub_refill_vitality = 53,
		effect_record_sub_recovery_content_quota = 54,
		effect_record_sub_increase_special_skill_gauge = 55,
		effect_record_sub_increase_caster_special_skill_gauge = 56,
		effect_record_sub_modify_break_gauge = 57,
		effect_record_sub_additional_hp_heal = 58,
		effect_record_sub_bound = 59,
		effect_record_sub_link = 60,
		effect_record_sub_knockback = 61,
		effect_record_sub_tumbling = 62,
		effect_record_sub_detection = 63,
		effect_record_sub_put_in_sword = 64,
		effect_record_sub_bind_phantom = 65,
		effect_record_sub_bleeding = 66,
		effect_record_sub_buff_max_hp = 67,
		effect_record_sub_buff_max_sp = 68,
		effect_record_sub_additional_hp = 69,
		effect_record_sub_additional_hp2 = 70,
		effect_record_sub_additional_hp3 = 71,
		effect_record_sub_stun = 72,
		effect_record_sub_immune_attribute = 73,
		effect_record_sub_immune_debuff = 74,
		effect_record_sub_invincible = 75,
		effect_record_sub_silent = 76,
		effect_record_sub_seal_military_arts = 77,
		effect_record_sub_provocation = 78,
		effect_record_sub_increase_defence_power = 79,
		effect_record_sub_interval_hp_heal = 80,
		effect_record_sub_interval_hp_heal_2 = 81,
		effect_record_sub_interval_hp_heal_3 = 82,
		effect_record_sub_item_interval_hp_heal = 83,
		effect_record_sub_item_interval_hp_heal_2 = 84,
		effect_record_sub_item_interval_hp_heal_3 = 85,
		effect_record_sub_interval_hp_damage = 86,
		effect_record_sub_interval_hp_damage_2 = 87,
		effect_record_sub_interval_hp_damage_3 = 88,
		effect_record_sub_interval_sp_heal = 89,
		effect_record_sub_interval_sp_heal_2 = 90,
		effect_record_sub_interval_sp_heal_3 = 91,
		effect_record_sub_interval_sp_heal_4 = 92,
		effect_record_sub_item_interval_sp_heal_1 = 93,
		effect_record_sub_item_interval_sp_heal_2 = 94,
		effect_record_sub_item_interval_sp_heal_3 = 95,
		effect_record_sub_item_interval_sp_heal_4 = 96,
		effect_record_sub_interval_sp_damage = 97,
		effect_record_sub_interval_guard_gauge_heal = 98,
		effect_record_sub_stagger = 99,
		effect_record_sub_flash = 100,
		effect_record_sub_internal_injury = 101,
		effect_record_sub_midair_1 = 102,
		effect_record_sub_midair_2 = 103,
		effect_record_sub_midair_3 = 104,
		effect_record_sub_down = 105,
		effect_record_sub_swoon = 106,
		effect_record_sub_kneel = 107,
		effect_record_sub_knob_attack = 108,
		effect_record_sub_buff_parry = 109,
		effect_record_sub_buff_bounce = 110,
		effect_record_sub_opening_eyes = 111,
		effect_record_sub_immediately_exec = 112,
		effect_record_sub_increase_force_damage = 113,
		effect_record_sub_increase_heal = 114,
		effect_record_sub_force_amplification = 115,
		effect_record_sub_concentration = 116,
		effect_record_sub_special_deification = 117,
		effect_record_sub_marking = 118,
		effect_record_sub_vital_attacked = 119,
		effect_record_sub_infinity_shot = 120,
		effect_record_sub_external_injury = 121,
		effect_record_sub_external_injury_damage = 122,
		effect_record_sub_embers = 123,
		effect_record_sub_embers_explosion = 124,
		effect_record_sub_force_seed = 125,
		effect_record_sub_frostbite = 126,
		effect_record_sub_frostbite_drain = 127,
		effect_record_sub_magnetic_seal = 128,
		effect_record_sub_fast_freezing = 129,
		effect_record_sub_rupture = 130,
		effect_record_sub_impregnability = 131,
		effect_record_sub_prickblood = 132,
		effect_record_sub_defence = 133,
		effect_record_sub_wildfire_1 = 134,
		effect_record_sub_wildfire_2 = 135,
		effect_record_sub_wildfire_3 = 136,
		effect_record_sub_wildfire_1_explosion = 137,
		effect_record_sub_wildfire_2_explosion = 138,
		effect_record_sub_wildfire_3_explosion = 139,
		effect_record_sub_hide = 140,
		effect_record_sub_burrow = 141,
		effect_record_sub_burrow_scan = 142,
		effect_record_sub_smokescreen = 143,
		effect_record_sub_detect_hiding = 144,
		effect_record_sub_poison_fog = 145,
		effect_record_sub_struggle = 146,
		effect_record_sub_modify_ability_1 = 147,
		effect_record_sub_modify_ability_2 = 148,
		effect_record_sub_modify_ability_3 = 149,
		effect_record_sub_modify_ability_4 = 150,
		effect_record_sub_modify_ability_5 = 151,
		effect_record_sub_modify_ability_6 = 152,
		effect_record_sub_modify_ability_7 = 153,
		effect_record_sub_modify_ability_8 = 154,
		effect_record_sub_modify_ability_9 = 155,
		effect_record_sub_modify_ability_10 = 156,
		effect_record_sub_modify_ability_11 = 157,
		effect_record_sub_modify_ability_12 = 158,
		effect_record_sub_modify_ability_13 = 159,
		effect_record_sub_modify_ability_14 = 160,
		effect_record_sub_modify_ability_15 = 161,
		effect_record_sub_modify_ability_16 = 162,
		effect_record_sub_modify_ability_17 = 163,
		effect_record_sub_modify_ability_18 = 164,
		effect_record_sub_modify_ability_19 = 165,
		effect_record_sub_modify_ability_20 = 166,
		effect_record_sub_modify_ability_21 = 167,
		effect_record_sub_modify_ability_22 = 168,
		effect_record_sub_modify_ability_23 = 169,
		effect_record_sub_modify_ability_24 = 170,
		effect_record_sub_modify_ability_25 = 171,
		effect_record_sub_modify_ability_26 = 172,
		effect_record_sub_modify_ability_27 = 173,
		effect_record_sub_modify_ability_28 = 174,
		effect_record_sub_modify_ability_29 = 175,
		effect_record_sub_modify_ability_30 = 176,
		effect_record_sub_modify_ability_31 = 177,
		effect_record_sub_modify_ability_32 = 178,
		effect_record_sub_modify_ability_33 = 179,
		effect_record_sub_modify_ability_34 = 180,
		effect_record_sub_modify_ability_35 = 181,
		effect_record_sub_modify_ability_36 = 182,
		effect_record_sub_modify_ability_37 = 183,
		effect_record_sub_modify_ability_38 = 184,
		effect_record_sub_modify_ability_39 = 185,
		effect_record_sub_modify_ability_40 = 186,
		effect_record_sub_modify_ability_41 = 187,
		effect_record_sub_modify_ability_42 = 188,
		effect_record_sub_modify_ability_43 = 189,
		effect_record_sub_modify_ability_44 = 190,
		effect_record_sub_modify_ability_45 = 191,
		effect_record_sub_modify_ability_46 = 192,
		effect_record_sub_modify_ability_47 = 193,
		effect_record_sub_modify_ability_48 = 194,
		effect_record_sub_modify_ability_49 = 195,
		effect_record_sub_modify_ability_50 = 196,
		effect_record_sub_modify_ability_51 = 197,
		effect_record_sub_modify_ability_52 = 198,
		effect_record_sub_modify_ability_53 = 199,
		effect_record_sub_modify_ability_54 = 200,
		effect_record_sub_modify_ability_55 = 201,
		effect_record_sub_modify_ability_56 = 202,
		effect_record_sub_modify_ability_57 = 203,
		effect_record_sub_modify_ability_58 = 204,
		effect_record_sub_modify_ability_59 = 205,
		effect_record_sub_modify_ability_60 = 206,
		effect_record_sub_modify_ability_61 = 207,
		effect_record_sub_modify_ability_62 = 208,
		effect_record_sub_modify_ability_63 = 209,
		effect_record_sub_modify_ability_64 = 210,
		effect_record_sub_modify_ability_65 = 211,
		effect_record_sub_modify_ability_66 = 212,
		effect_record_sub_modify_ability_67 = 213,
		effect_record_sub_modify_ability_68 = 214,
		effect_record_sub_modify_ability_69 = 215,
		effect_record_sub_modify_ability_70 = 216,
		effect_record_sub_modify_ability_71 = 217,
		effect_record_sub_modify_ability_72 = 218,
		effect_record_sub_modify_ability_73 = 219,
		effect_record_sub_modify_ability_74 = 220,
		effect_record_sub_modify_ability_75 = 221,
		effect_record_sub_modify_ability_76 = 222,
		effect_record_sub_modify_ability_77 = 223,
		effect_record_sub_modify_ability_78 = 224,
		effect_record_sub_modify_ability_79 = 225,
		effect_record_sub_modify_ability_80 = 226,
		effect_record_sub_modify_ability_81 = 227,
		effect_record_sub_modify_ability_82 = 228,
		effect_record_sub_modify_ability_83 = 229,
		effect_record_sub_modify_ability_84 = 230,
		effect_record_sub_modify_ability_85 = 231,
		effect_record_sub_modify_ability_86 = 232,
		effect_record_sub_modify_ability_87 = 233,
		effect_record_sub_modify_ability_88 = 234,
		effect_record_sub_modify_ability_89 = 235,
		effect_record_sub_modify_ability_90 = 236,
		effect_record_sub_modify_ability_91 = 237,
		effect_record_sub_modify_ability_92 = 238,
		effect_record_sub_modify_ability_93 = 239,
		effect_record_sub_modify_ability_94 = 240,
		effect_record_sub_modify_ability_95 = 241,
		effect_record_sub_modify_ability_96 = 242,
		effect_record_sub_modify_ability_97 = 243,
		effect_record_sub_modify_ability_98 = 244,
		effect_record_sub_modify_ability_99 = 245,
		effect_record_sub_modify_ability_100 = 246,
		effect_record_sub_modify_ability_101 = 247,
		effect_record_sub_modify_ability_102 = 248,
		effect_record_sub_modify_ability_103 = 249,
		effect_record_sub_modify_ability_104 = 250,
		effect_record_sub_modify_ability_105 = 251,
		effect_record_sub_modify_ability_106 = 252,
		effect_record_sub_modify_ability_107 = 253,
		effect_record_sub_modify_ability_108 = 254,
		effect_record_sub_modify_ability_109 = 255,
		effect_record_sub_modify_ability_110 = 256,
		effect_record_sub_modify_ability_111 = 257,
		effect_record_sub_modify_ability_112 = 258,
		effect_record_sub_modify_ability_113 = 259,
		effect_record_sub_modify_ability_114 = 260,
		effect_record_sub_modify_ability_115 = 261,
		effect_record_sub_modify_ability_116 = 262,
		effect_record_sub_modify_ability_117 = 263,
		effect_record_sub_modify_ability_118 = 264,
		effect_record_sub_modify_ability_119 = 265,
		effect_record_sub_modify_ability_120 = 266,
		effect_record_sub_modify_ability_121 = 267,
		effect_record_sub_modify_ability_122 = 268,
		effect_record_sub_modify_ability_123 = 269,
		effect_record_sub_modify_ability_124 = 270,
		effect_record_sub_modify_ability_125 = 271,
		effect_record_sub_modify_ability_126 = 272,
		effect_record_sub_modify_ability_127 = 273,
		effect_record_sub_modify_ability_128 = 274,
		effect_record_sub_modify_ability_129 = 275,
		effect_record_sub_modify_ability_130 = 276,
		effect_record_sub_modify_ability_131 = 277,
		effect_record_sub_modify_ability_132 = 278,
		effect_record_sub_modify_ability_133 = 279,
		effect_record_sub_modify_ability_134 = 280,
		effect_record_sub_modify_ability_135 = 281,
		effect_record_sub_modify_ability_136 = 282,
		effect_record_sub_modify_ability_137 = 283,
		effect_record_sub_modify_ability_138 = 284,
		effect_record_sub_modify_ability_139 = 285,
		effect_record_sub_modify_ability_140 = 286,
		effect_record_sub_modify_ability_141 = 287,
		effect_record_sub_modify_ability_142 = 288,
		effect_record_sub_modify_ability_143 = 289,
		effect_record_sub_modify_ability_144 = 290,
		effect_record_sub_modify_ability_145 = 291,
		effect_record_sub_modify_ability_146 = 292,
		effect_record_sub_modify_ability_147 = 293,
		effect_record_sub_modify_ability_148 = 294,
		effect_record_sub_modify_ability_149 = 295,
		effect_record_sub_modify_ability_150 = 296,
		effect_record_sub_modify_ability_151 = 297,
		effect_record_sub_modify_ability_152 = 298,
		effect_record_sub_modify_ability_153 = 299,
		effect_record_sub_modify_ability_154 = 300,
		effect_record_sub_modify_ability_155 = 301,
		effect_record_sub_modify_ability_156 = 302,
		effect_record_sub_modify_ability_157 = 303,
		effect_record_sub_modify_ability_158 = 304,
		effect_record_sub_modify_ability_159 = 305,
		effect_record_sub_modify_ability_160 = 306,
		effect_record_sub_modify_ability_161 = 307,
		effect_record_sub_modify_ability_162 = 308,
		effect_record_sub_modify_ability_163 = 309,
		effect_record_sub_modify_ability_164 = 310,
		effect_record_sub_modify_ability_165 = 311,
		effect_record_sub_modify_ability_166 = 312,
		effect_record_sub_modify_ability_167 = 313,
		effect_record_sub_modify_ability_168 = 314,
		effect_record_sub_modify_ability_169 = 315,
		effect_record_sub_modify_ability_170 = 316,
		effect_record_sub_modify_ability_171 = 317,
		effect_record_sub_modify_ability_172 = 318,
		effect_record_sub_modify_ability_173 = 319,
		effect_record_sub_modify_ability_174 = 320,
		effect_record_sub_modify_ability_175 = 321,
		effect_record_sub_modify_ability_176 = 322,
		effect_record_sub_modify_ability_177 = 323,
		effect_record_sub_modify_ability_178 = 324,
		effect_record_sub_modify_ability_179 = 325,
		effect_record_sub_modify_ability_180 = 326,
		effect_record_sub_modify_ability_181 = 327,
		effect_record_sub_modify_ability_182 = 328,
		effect_record_sub_modify_ability_183 = 329,
		effect_record_sub_modify_ability_184 = 330,
		effect_record_sub_modify_ability_185 = 331,
		effect_record_sub_modify_ability_186 = 332,
		effect_record_sub_modify_ability_187 = 333,
		effect_record_sub_modify_ability_188 = 334,
		effect_record_sub_modify_ability_189 = 335,
		effect_record_sub_modify_ability_190 = 336,
		effect_record_sub_modify_ability_191 = 337,
		effect_record_sub_modify_ability_192 = 338,
		effect_record_sub_modify_ability_193 = 339,
		effect_record_sub_modify_ability_194 = 340,
		effect_record_sub_modify_ability_195 = 341,
		effect_record_sub_modify_ability_196 = 342,
		effect_record_sub_modify_ability_197 = 343,
		effect_record_sub_modify_ability_198 = 344,
		effect_record_sub_modify_ability_199 = 345,
		effect_record_sub_modify_ability_200 = 346,
		effect_record_sub_modify_ability_201 = 347,
		effect_record_sub_modify_ability_202 = 348,
		effect_record_sub_modify_ability_203 = 349,
		effect_record_sub_modify_ability_204 = 350,
		effect_record_sub_modify_ability_205 = 351,
		effect_record_sub_modify_ability_206 = 352,
		effect_record_sub_modify_ability_207 = 353,
		effect_record_sub_modify_ability_208 = 354,
		effect_record_sub_modify_ability_209 = 355,
		effect_record_sub_modify_ability_210 = 356,
		effect_record_sub_modify_ability_211 = 357,
		effect_record_sub_modify_ability_212 = 358,
		effect_record_sub_modify_ability_213 = 359,
		effect_record_sub_modify_ability_214 = 360,
		effect_record_sub_modify_ability_215 = 361,
		effect_record_sub_modify_ability_216 = 362,
		effect_record_sub_modify_ability_217 = 363,
		effect_record_sub_modify_ability_218 = 364,
		effect_record_sub_modify_ability_219 = 365,
		effect_record_sub_modify_ability_220 = 366,
		effect_record_sub_modify_ability_221 = 367,
		effect_record_sub_modify_ability_222 = 368,
		effect_record_sub_modify_ability_223 = 369,
		effect_record_sub_modify_ability_224 = 370,
		effect_record_sub_modify_ability_225 = 371,
		effect_record_sub_modify_ability_226 = 372,
		effect_record_sub_modify_ability_227 = 373,
		effect_record_sub_modify_ability_228 = 374,
		effect_record_sub_modify_ability_229 = 375,
		effect_record_sub_modify_ability_230 = 376,
		effect_record_sub_modify_ability_231 = 377,
		effect_record_sub_modify_ability_232 = 378,
		effect_record_sub_modify_ability_233 = 379,
		effect_record_sub_modify_ability_234 = 380,
		effect_record_sub_modify_ability_235 = 381,
		effect_record_sub_modify_ability_236 = 382,
		effect_record_sub_modify_ability_237 = 383,
		effect_record_sub_modify_ability_238 = 384,
		effect_record_sub_modify_ability_239 = 385,
		effect_record_sub_modify_ability_240 = 386,
		effect_record_sub_modify_ability_241 = 387,
		effect_record_sub_modify_ability_242 = 388,
		effect_record_sub_modify_ability_243 = 389,
		effect_record_sub_modify_ability_244 = 390,
		effect_record_sub_modify_ability_245 = 391,
		effect_record_sub_modify_ability_246 = 392,
		effect_record_sub_modify_ability_247 = 393,
		effect_record_sub_modify_ability_248 = 394,
		effect_record_sub_modify_ability_249 = 395,
		effect_record_sub_modify_ability_250 = 396,
		effect_record_sub_modify_ability_251 = 397,
		effect_record_sub_modify_ability_252 = 398,
		effect_record_sub_modify_ability_253 = 399,
		effect_record_sub_modify_ability_254 = 400,
		effect_record_sub_modify_ability_255 = 401,
		effect_record_sub_modify_ability_256 = 402,
		effect_record_sub_modify_ability_257 = 403,
		effect_record_sub_modify_ability_258 = 404,
		effect_record_sub_modify_ability_259 = 405,
		effect_record_sub_modify_ability_260 = 406,
		effect_record_sub_modify_ability_261 = 407,
		effect_record_sub_modify_ability_262 = 408,
		effect_record_sub_modify_ability_263 = 409,
		effect_record_sub_modify_ability_264 = 410,
		effect_record_sub_modify_ability_265 = 411,
		effect_record_sub_modify_ability_266 = 412,
		effect_record_sub_modify_ability_267 = 413,
		effect_record_sub_modify_ability_268 = 414,
		effect_record_sub_modify_ability_269 = 415,
		effect_record_sub_modify_ability_270 = 416,
		effect_record_sub_modify_ability_271 = 417,
		effect_record_sub_modify_ability_272 = 418,
		effect_record_sub_modify_ability_273 = 419,
		effect_record_sub_modify_ability_274 = 420,
		effect_record_sub_modify_ability_275 = 421,
		effect_record_sub_modify_ability_276 = 422,
		effect_record_sub_modify_ability_277 = 423,
		effect_record_sub_modify_ability_278 = 424,
		effect_record_sub_modify_ability_279 = 425,
		effect_record_sub_modify_ability_280 = 426,
		effect_record_sub_modify_ability_281 = 427,
		effect_record_sub_modify_ability_282 = 428,
		effect_record_sub_modify_ability_283 = 429,
		effect_record_sub_modify_ability_284 = 430,
		effect_record_sub_modify_ability_285 = 431,
		effect_record_sub_modify_ability_286 = 432,
		effect_record_sub_modify_ability_287 = 433,
		effect_record_sub_modify_ability_288 = 434,
		effect_record_sub_modify_ability_289 = 435,
		effect_record_sub_modify_ability_290 = 436,
		effect_record_sub_modify_ability_291 = 437,
		effect_record_sub_modify_ability_292 = 438,
		effect_record_sub_modify_ability_293 = 439,
		effect_record_sub_modify_ability_294 = 440,
		effect_record_sub_modify_ability_295 = 441,
		effect_record_sub_modify_ability_296 = 442,
		effect_record_sub_modify_ability_297 = 443,
		effect_record_sub_modify_ability_298 = 444,
		effect_record_sub_modify_ability_299 = 445,
		effect_record_sub_modify_ability_300 = 446,
		effect_record_sub_modify_ability_301 = 447,
		effect_record_sub_modify_ability_302 = 448,
		effect_record_sub_modify_ability_303 = 449,
		effect_record_sub_modify_ability_304 = 450,
		effect_record_sub_modify_ability_305 = 451,
		effect_record_sub_modify_ability_306 = 452,
		effect_record_sub_modify_ability_307 = 453,
		effect_record_sub_modify_ability_308 = 454,
		effect_record_sub_modify_ability_309 = 455,
		effect_record_sub_modify_ability_310 = 456,
		effect_record_sub_modify_ability_311 = 457,
		effect_record_sub_modify_ability_312 = 458,
		effect_record_sub_modify_ability_313 = 459,
		effect_record_sub_modify_ability_314 = 460,
		effect_record_sub_modify_ability_315 = 461,
		effect_record_sub_modify_ability_316 = 462,
		effect_record_sub_modify_ability_317 = 463,
		effect_record_sub_modify_ability_318 = 464,
		effect_record_sub_modify_ability_319 = 465,
		effect_record_sub_modify_ability_320 = 466,
		effect_record_sub_modify_ability_321 = 467,
		effect_record_sub_modify_ability_322 = 468,
		effect_record_sub_modify_ability_323 = 469,
		effect_record_sub_modify_ability_324 = 470,
		effect_record_sub_modify_ability_325 = 471,
		effect_record_sub_modify_ability_326 = 472,
		effect_record_sub_modify_ability_327 = 473,
		effect_record_sub_modify_ability_328 = 474,
		effect_record_sub_modify_ability_329 = 475,
		effect_record_sub_modify_ability_330 = 476,
		effect_record_sub_modify_ability_331 = 477,
		effect_record_sub_modify_ability_332 = 478,
		effect_record_sub_modify_ability_333 = 479,
		effect_record_sub_modify_ability_334 = 480,
		effect_record_sub_modify_ability_335 = 481,
		effect_record_sub_modify_ability_336 = 482,
		effect_record_sub_modify_ability_337 = 483,
		effect_record_sub_modify_ability_338 = 484,
		effect_record_sub_modify_ability_339 = 485,
		effect_record_sub_modify_ability_340 = 486,
		effect_record_sub_modify_ability_341 = 487,
		effect_record_sub_modify_ability_342 = 488,
		effect_record_sub_modify_ability_343 = 489,
		effect_record_sub_modify_ability_344 = 490,
		effect_record_sub_modify_ability_345 = 491,
		effect_record_sub_modify_ability_346 = 492,
		effect_record_sub_modify_ability_347 = 493,
		effect_record_sub_modify_ability_348 = 494,
		effect_record_sub_modify_ability_349 = 495,
		effect_record_sub_modify_ability_350 = 496,
		effect_record_sub_modify_ability_351 = 497,
		effect_record_sub_modify_ability_352 = 498,
		effect_record_sub_modify_ability_353 = 499,
		effect_record_sub_modify_ability_354 = 500,
		effect_record_sub_modify_ability_355 = 501,
		effect_record_sub_modify_ability_356 = 502,
		effect_record_sub_modify_ability_357 = 503,
		effect_record_sub_modify_ability_358 = 504,
		effect_record_sub_modify_ability_359 = 505,
		effect_record_sub_modify_ability_360 = 506,
		effect_record_sub_modify_ability_361 = 507,
		effect_record_sub_modify_ability_362 = 508,
		effect_record_sub_modify_ability_363 = 509,
		effect_record_sub_modify_ability_364 = 510,
		effect_record_sub_modify_ability_365 = 511,
		effect_record_sub_modify_ability_366 = 512,
		effect_record_sub_modify_ability_367 = 513,
		effect_record_sub_modify_ability_368 = 514,
		effect_record_sub_modify_ability_369 = 515,
		effect_record_sub_modify_ability_370 = 516,
		effect_record_sub_modify_ability_371 = 517,
		effect_record_sub_modify_ability_372 = 518,
		effect_record_sub_modify_ability_373 = 519,
		effect_record_sub_modify_ability_374 = 520,
		effect_record_sub_modify_ability_375 = 521,
		effect_record_sub_modify_ability_376 = 522,
		effect_record_sub_modify_ability_377 = 523,
		effect_record_sub_modify_ability_378 = 524,
		effect_record_sub_modify_ability_379 = 525,
		effect_record_sub_modify_ability_380 = 526,
		effect_record_sub_modify_ability_381 = 527,
		effect_record_sub_modify_ability_382 = 528,
		effect_record_sub_modify_ability_383 = 529,
		effect_record_sub_modify_ability_384 = 530,
		effect_record_sub_modify_ability_385 = 531,
		effect_record_sub_modify_ability_386 = 532,
		effect_record_sub_modify_ability_387 = 533,
		effect_record_sub_modify_ability_388 = 534,
		effect_record_sub_modify_ability_389 = 535,
		effect_record_sub_modify_ability_390 = 536,
		effect_record_sub_modify_ability_391 = 537,
		effect_record_sub_modify_ability_392 = 538,
		effect_record_sub_modify_ability_393 = 539,
		effect_record_sub_modify_ability_394 = 540,
		effect_record_sub_modify_ability_395 = 541,
		effect_record_sub_modify_ability_396 = 542,
		effect_record_sub_modify_ability_397 = 543,
		effect_record_sub_modify_ability_398 = 544,
		effect_record_sub_modify_ability_399 = 545,
		effect_record_sub_modify_ability_400 = 546,
		effect_record_sub_modify_ability_401 = 547,
		effect_record_sub_modify_ability_402 = 548,
		effect_record_sub_modify_ability_403 = 549,
		effect_record_sub_modify_ability_404 = 550,
		effect_record_sub_modify_ability_405 = 551,
		effect_record_sub_modify_ability_406 = 552,
		effect_record_sub_modify_ability_407 = 553,
		effect_record_sub_modify_ability_408 = 554,
		effect_record_sub_modify_ability_409 = 555,
		effect_record_sub_modify_ability_410 = 556,
		effect_record_sub_modify_ability_411 = 557,
		effect_record_sub_modify_ability_412 = 558,
		effect_record_sub_modify_ability_413 = 559,
		effect_record_sub_modify_ability_414 = 560,
		effect_record_sub_modify_ability_415 = 561,
		effect_record_sub_modify_ability_416 = 562,
		effect_record_sub_modify_ability_417 = 563,
		effect_record_sub_modify_ability_418 = 564,
		effect_record_sub_modify_ability_419 = 565,
		effect_record_sub_modify_ability_420 = 566,
		effect_record_sub_modify_ability_421 = 567,
		effect_record_sub_modify_ability_422 = 568,
		effect_record_sub_modify_ability_423 = 569,
		effect_record_sub_modify_ability_424 = 570,
		effect_record_sub_modify_ability_425 = 571,
		effect_record_sub_modify_ability_426 = 572,
		effect_record_sub_modify_ability_427 = 573,
		effect_record_sub_modify_ability_428 = 574,
		effect_record_sub_modify_ability_429 = 575,
		effect_record_sub_modify_ability_430 = 576,
		effect_record_sub_modify_ability_431 = 577,
		effect_record_sub_modify_ability_432 = 578,
		effect_record_sub_modify_ability_433 = 579,
		effect_record_sub_modify_ability_434 = 580,
		effect_record_sub_modify_ability_435 = 581,
		effect_record_sub_modify_ability_436 = 582,
		effect_record_sub_modify_ability_437 = 583,
		effect_record_sub_modify_ability_438 = 584,
		effect_record_sub_modify_ability_439 = 585,
		effect_record_sub_modify_ability_440 = 586,
		effect_record_sub_modify_ability_441 = 587,
		effect_record_sub_modify_ability_442 = 588,
		effect_record_sub_modify_ability_443 = 589,
		effect_record_sub_modify_ability_444 = 590,
		effect_record_sub_modify_ability_445 = 591,
		effect_record_sub_modify_ability_446 = 592,
		effect_record_sub_modify_ability_447 = 593,
		effect_record_sub_modify_ability_448 = 594,
		effect_record_sub_modify_ability_449 = 595,
		effect_record_sub_modify_ability_450 = 596,
		effect_record_sub_modify_ability_451 = 597,
		effect_record_sub_modify_ability_452 = 598,
		effect_record_sub_modify_ability_453 = 599,
		effect_record_sub_modify_ability_454 = 600,
		effect_record_sub_modify_ability_455 = 601,
		effect_record_sub_modify_ability_456 = 602,
		effect_record_sub_modify_ability_457 = 603,
		effect_record_sub_modify_ability_458 = 604,
		effect_record_sub_modify_ability_459 = 605,
		effect_record_sub_modify_ability_460 = 606,
		effect_record_sub_modify_ability_461 = 607,
		effect_record_sub_modify_ability_462 = 608,
		effect_record_sub_modify_ability_463 = 609,
		effect_record_sub_modify_ability_464 = 610,
		effect_record_sub_modify_ability_465 = 611,
		effect_record_sub_modify_ability_466 = 612,
		effect_record_sub_modify_ability_467 = 613,
		effect_record_sub_modify_ability_468 = 614,
		effect_record_sub_modify_ability_469 = 615,
		effect_record_sub_modify_ability_470 = 616,
		effect_record_sub_modify_ability_471 = 617,
		effect_record_sub_modify_ability_472 = 618,
		effect_record_sub_modify_ability_473 = 619,
		effect_record_sub_modify_ability_474 = 620,
		effect_record_sub_modify_ability_475 = 621,
		effect_record_sub_modify_ability_476 = 622,
		effect_record_sub_modify_ability_477 = 623,
		effect_record_sub_modify_ability_478 = 624,
		effect_record_sub_modify_ability_479 = 625,
		effect_record_sub_modify_ability_480 = 626,
		effect_record_sub_modify_ability_481 = 627,
		effect_record_sub_modify_ability_482 = 628,
		effect_record_sub_modify_ability_483 = 629,
		effect_record_sub_modify_ability_484 = 630,
		effect_record_sub_modify_ability_485 = 631,
		effect_record_sub_modify_ability_486 = 632,
		effect_record_sub_modify_ability_487 = 633,
		effect_record_sub_modify_ability_488 = 634,
		effect_record_sub_modify_ability_489 = 635,
		effect_record_sub_modify_ability_490 = 636,
		effect_record_sub_modify_ability_491 = 637,
		effect_record_sub_modify_ability_492 = 638,
		effect_record_sub_modify_ability_493 = 639,
		effect_record_sub_modify_ability_494 = 640,
		effect_record_sub_modify_ability_495 = 641,
		effect_record_sub_modify_ability_496 = 642,
		effect_record_sub_modify_ability_497 = 643,
		effect_record_sub_modify_ability_498 = 644,
		effect_record_sub_modify_ability_499 = 645,
		effect_record_sub_modify_ability_500 = 646,
		effect_record_sub_modify_ability_501 = 647,
		effect_record_sub_modify_ability_502 = 648,
		effect_record_sub_modify_ability_503 = 649,
		effect_record_sub_modify_ability_504 = 650,
		effect_record_sub_modify_ability_505 = 651,
		effect_record_sub_modify_ability_506 = 652,
		effect_record_sub_modify_ability_507 = 653,
		effect_record_sub_modify_ability_508 = 654,
		effect_record_sub_modify_ability_509 = 655,
		effect_record_sub_modify_ability_510 = 656,
		effect_record_sub_modify_ability_511 = 657,
		effect_record_sub_modify_ability_512 = 658,
		effect_record_sub_modify_ability_513 = 659,
		effect_record_sub_modify_ability_514 = 660,
		effect_record_sub_modify_ability_515 = 661,
		effect_record_sub_modify_ability_516 = 662,
		effect_record_sub_modify_ability_517 = 663,
		effect_record_sub_modify_ability_518 = 664,
		effect_record_sub_modify_ability_519 = 665,
		effect_record_sub_modify_ability_520 = 666,
		effect_record_sub_modify_ability_521 = 667,
		effect_record_sub_modify_ability_522 = 668,
		effect_record_sub_modify_ability_523 = 669,
		effect_record_sub_modify_ability_524 = 670,
		effect_record_sub_modify_ability_525 = 671,
		effect_record_sub_modify_ability_526 = 672,
		effect_record_sub_modify_ability_527 = 673,
		effect_record_sub_modify_ability_528 = 674,
		effect_record_sub_modify_ability_529 = 675,
		effect_record_sub_modify_ability_530 = 676,
		effect_record_sub_modify_ability_531 = 677,
		effect_record_sub_modify_ability_532 = 678,
		effect_record_sub_modify_ability_533 = 679,
		effect_record_sub_modify_ability_534 = 680,
		effect_record_sub_modify_ability_535 = 681,
		effect_record_sub_modify_ability_536 = 682,
		effect_record_sub_modify_ability_537 = 683,
		effect_record_sub_modify_ability_538 = 684,
		effect_record_sub_modify_ability_539 = 685,
		effect_record_sub_modify_ability_540 = 686,
		effect_record_sub_glyph_condition_event_1 = 687,
		effect_record_sub_glyph_condition_event_2 = 688,
		effect_record_sub_glyph_condition_event_3 = 689,
		effect_record_sub_glyph_condition_event_4 = 690,
		effect_record_sub_glyph_condition_event_5 = 691,
		effect_record_sub_glyph_condition_event_6 = 692,
		effect_record_sub_glyph_condition_event_7 = 693,
		effect_record_sub_glyph_condition_event_8 = 694,
		effect_record_sub_glyph_condition_event_9 = 695,
		effect_record_sub_glyph_condition_event_10 = 696,
		effect_record_sub_glyph_condition_event_11 = 697,
		effect_record_sub_glyph_condition_event_12 = 698,
		effect_record_sub_glyph_condition_event_13 = 699,
		effect_record_sub_glyph_condition_event_14 = 700,
		effect_record_sub_glyph_condition_event_15 = 701,
		effect_record_sub_glyph_condition_event_16 = 702,
		effect_record_sub_glyph_condition_event_17 = 703,
		effect_record_sub_glyph_condition_event_18 = 704,
		effect_record_sub_glyph_condition_event_19 = 705,
		effect_record_sub_glyph_condition_event_20 = 706,
		effect_record_sub_glyph_condition_event_21 = 707,
		effect_record_sub_glyph_condition_event_22 = 708,
		effect_record_sub_glyph_condition_event_23 = 709,
		effect_record_sub_glyph_condition_event_24 = 710,
		effect_record_sub_glyph_condition_event_25 = 711,
		effect_record_sub_glyph_condition_event_26 = 712,
		effect_record_sub_glyph_condition_event_27 = 713,
		effect_record_sub_glyph_condition_event_28 = 714,
		effect_record_sub_glyph_condition_event_29 = 715,
		effect_record_sub_glyph_condition_event_30 = 716,
		effect_record_sub_glyph_condition_event_31 = 717,
		effect_record_sub_glyph_condition_event_32 = 718,
		effect_record_sub_glyph_condition_event_33 = 719,
		effect_record_sub_glyph_condition_event_34 = 720,
		effect_record_sub_glyph_condition_event_35 = 721,
		effect_record_sub_glyph_condition_event_36 = 722,
		effect_record_sub_glyph_condition_event_37 = 723,
		effect_record_sub_glyph_condition_event_38 = 724,
		effect_record_sub_glyph_condition_event_39 = 725,
		effect_record_sub_glyph_condition_event_40 = 726,
		effect_record_sub_glyph_condition_event_41 = 727,
		effect_record_sub_glyph_condition_event_42 = 728,
		effect_record_sub_glyph_condition_event_43 = 729,
		effect_record_sub_glyph_condition_event_44 = 730,
		effect_record_sub_glyph_condition_event_45 = 731,
		effect_record_sub_glyph_condition_event_46 = 732,
		effect_record_sub_glyph_condition_event_47 = 733,
		effect_record_sub_glyph_condition_event_48 = 734,
		effect_record_sub_glyph_condition_event_49 = 735,
		effect_record_sub_glyph_condition_event_50 = 736,
		effect_record_sub_glyph_condition_event_51 = 737,
		effect_record_sub_glyph_condition_event_52 = 738,
		effect_record_sub_glyph_condition_event_53 = 739,
		effect_record_sub_glyph_condition_event_54 = 740,
		effect_record_sub_glyph_condition_event_55 = 741,
		effect_record_sub_glyph_condition_event_56 = 742,
		effect_record_sub_glyph_condition_event_57 = 743,
		effect_record_sub_glyph_condition_event_58 = 744,
		effect_record_sub_glyph_condition_event_59 = 745,
		effect_record_sub_glyph_condition_event_60 = 746,
		effect_record_sub_glyph_condition_event_61 = 747,
		effect_record_sub_glyph_condition_event_62 = 748,
		effect_record_sub_glyph_condition_event_63 = 749,
		effect_record_sub_glyph_condition_event_64 = 750,
		effect_record_sub_glyph_condition_event_65 = 751,
		effect_record_sub_glyph_condition_event_66 = 752,
		effect_record_sub_glyph_condition_event_67 = 753,
		effect_record_sub_glyph_condition_event_68 = 754,
		effect_record_sub_glyph_condition_event_69 = 755,
		effect_record_sub_glyph_condition_event_70 = 756,
		effect_record_sub_glyph_condition_event_71 = 757,
		effect_record_sub_glyph_condition_event_72 = 758,
		effect_record_sub_glyph_condition_event_73 = 759,
		effect_record_sub_glyph_condition_event_74 = 760,
		effect_record_sub_glyph_condition_event_75 = 761,
		effect_record_sub_glyph_condition_event_76 = 762,
		effect_record_sub_glyph_condition_event_77 = 763,
		effect_record_sub_glyph_condition_event_78 = 764,
		effect_record_sub_glyph_condition_event_79 = 765,
		effect_record_sub_glyph_condition_event_80 = 766,
		effect_record_sub_glyph_condition_event_81 = 767,
		effect_record_sub_glyph_condition_event_82 = 768,
		effect_record_sub_glyph_condition_event_83 = 769,
		effect_record_sub_glyph_condition_event_84 = 770,
		effect_record_sub_glyph_condition_event_85 = 771,
		effect_record_sub_glyph_condition_event_86 = 772,
		effect_record_sub_glyph_condition_event_87 = 773,
		effect_record_sub_glyph_condition_event_88 = 774,
		effect_record_sub_glyph_condition_event_89 = 775,
		effect_record_sub_glyph_condition_event_90 = 776,
		effect_record_sub_glyph_condition_event_91 = 777,
		effect_record_sub_glyph_condition_event_92 = 778,
		effect_record_sub_glyph_condition_event_93 = 779,
		effect_record_sub_glyph_condition_event_94 = 780,
		effect_record_sub_glyph_condition_event_95 = 781,
		effect_record_sub_glyph_condition_event_96 = 782,
		effect_record_sub_glyph_condition_event_97 = 783,
		effect_record_sub_glyph_condition_event_98 = 784,
		effect_record_sub_glyph_condition_event_99 = 785,
		effect_record_sub_glyph_condition_event_100 = 786,
		effect_record_sub_common_condition_event_1 = 787,
		effect_record_sub_common_condition_event_2 = 788,
		effect_record_sub_common_condition_event_3 = 789,
		effect_record_sub_common_condition_event_4 = 790,
		effect_record_sub_common_condition_event_5 = 791,
		effect_record_sub_common_condition_event_6 = 792,
		effect_record_sub_common_condition_event_7 = 793,
		effect_record_sub_common_condition_event_8 = 794,
		effect_record_sub_common_condition_event_9 = 795,
		effect_record_sub_common_condition_event_10 = 796,
		effect_record_sub_common_condition_event_11 = 797,
		effect_record_sub_common_condition_event_12 = 798,
		effect_record_sub_common_condition_event_13 = 799,
		effect_record_sub_common_condition_event_14 = 800,
		effect_record_sub_common_condition_event_15 = 801,
		effect_record_sub_common_condition_event_16 = 802,
		effect_record_sub_common_condition_event_17 = 803,
		effect_record_sub_common_condition_event_18 = 804,
		effect_record_sub_common_condition_event_19 = 805,
		effect_record_sub_common_condition_event_20 = 806,
		effect_record_sub_equip = 807,
		effect_record_sub_modify_move_speed = 808,
		effect_record_sub_modify_cast_speed = 809,
		effect_record_sub_dull = 810,
		effect_record_sub_initialize_recycle_group = 811,
		effect_record_sub_modify_recycle_time = 812,
		effect_record_sub_set_recycle_time = 813,
		effect_record_sub_initialize_condition_event_recycle_group = 814,
		effect_record_sub_interval_melee_physical_damage = 815,
		effect_record_sub_interval_range_physical_damage = 816,
		effect_record_sub_interval_force_damage = 817,
		effect_record_sub_burn = 818,
		effect_record_sub_binding_skill_step = 819,
		effect_record_sub_recall_to_caster = 820,
		effect_record_sub_recall_to_position = 821,
		effect_record_sub_embers_explosion_timer = 822,
		effect_record_sub_replace_position = 823,
		effect_record_sub_poison = 824,
		effect_record_sub_poison2 = 825,
		effect_record_sub_poison_explosion = 826,
		effect_record_sub_poison2_explosion = 827,
		effect_record_sub_applied_poison = 828,
		effect_record_sub_spider_web = 829,
		effect_record_sub_time_bomb = 830,
		effect_record_sub_defence_block = 831,
		effect_record_sub_dash_block = 832,
		effect_record_sub_dexterity = 833,
		effect_record_sub_help_restoration = 834,
		effect_record_sub_grade = 835,
		effect_record_sub_recharge_heart_count = 836,
		effect_record_sub_safety_area = 837,
		effect_record_sub_recharge_guild_battle_field = 838,
		effect_record_sub_enable_guild_battle_field = 839,
		effect_record_sub_debuff_guild_battle_field = 840,
		effect_record_sub_duel_interference = 841,
		effect_record_sub_break_state = 842,
		effect_record_sub_break_gauge_block = 843,
		effect_record_sub_modify_damage_systematization = 844,
		effect_record_sub_dash = 845,
		effect_record_sub_fall_damage = 846,
		effect_record_sub_airdash = 847,
		effect_record_sub_exhaustion = 848,
		effect_record_sub_revive_except_rule = 849,
		effect_record_sub_use_heart_count = 850,
		effect_record_sub_item_ability = 851,
		effect_record_sub_achievement_ability = 852,
		effect_record_sub_completed_achievement = 853,
		effect_record_sub_changed_property = 854,
		effect_record_sub_oceanic = 855,
		effect_record_sub_fall_death = 856,
		effect_record_sub_air_knockback = 857,
		effect_record_sub_set_ghost_type = 858,
		effect_record_sub_duel_fighter_change = 859,
		effect_record_sub_duel_fighter_time_limit = 860,
		effect_record_sub_mastery_stat_equip = 861,
		effect_record_sub_shooter_lock_on = 862,
		effect_record_sub_attack_glide = 863,
		effect_record_sub_second_gauge_point = 864,
		effect_record_sub_interval_second_gauge_point = 865,
		effect_record_sub_stop_second_gauge_point = 866,
		effect_record_sub_set_second_gauge_point = 867,
		effect_record_sub_particle_socket = 868,
		effect_record_sub_set_appearance = 869,
		effect_record_sub_boutique_free = 870,
		effect_record_sub_difficulty_type_dispel_attribute_hp_damage = 871,
		effect_record_sub_sealed_dungeon_dispel_attribute_hp_damage = 872,
		effect_record_sub_soul_mask_1 = 873,
		effect_record_sub_soul_mask_2 = 874,
		effect_record_sub_npc_change_appearance = 875,
		effect_record_sub_modify_hyper_energy = 876,
		effect_record_sub_modify_ability_by_caster = 877,
		effect_record_sub_count = 878,
    };
#pragma pack(push, 1)
	struct effect_Record : DrEl
	{
	private:
		static std::wstring Get_buff_type_EnumValue(__int8 value);
		static std::wstring Get_binding_skill_step_type_EnumValue(__int8 value);
		static std::wstring Get_immune_breaker_attribute_EnumValue(__int16 value);
		static std::wstring Get_attribute_EnumValue(__int16 value);
		static std::wstring Get_immune_attribute_EnumValue(__int16 value);
		static std::wstring Get_flag_EnumValue(__int16 value);
		static std::wstring Get_max_stack_flag_EnumValue(__int16 value);
		static std::wstring Get_function_EnumValue(__int8 value);
		static std::wstring Get_detach_slot_EnumValue(__int8 value);
		static std::wstring Get_inhalation_linker_EnumValue(__int8 value);
		static std::wstring Get_inhalation_linked_EnumValue(__int8 value);
		static std::wstring Get_mount_linker_EnumValue(__int8 value);
		static std::wstring Get_mount_linked_EnumValue(__int8 value);
		static std::wstring Get_catch_linker_EnumValue(__int8 value);
		static std::wstring Get_catch_linked_EnumValue(__int8 value);
		static std::wstring Get_event_effect_target_EnumValue(__int8 value);
		static std::wstring Get_second_slot_event_effect_target_EnumValue(__int8 value);
		static std::wstring Get_third_slot_event_effect_target_EnumValue(__int8 value);
		static std::wstring Get_fourth_slot_event_effect_target_EnumValue(__int8 value);
		static std::wstring Get_modify_ability_EnumValue(__int16 value);
		static std::wstring Get_passive_moveanim_idle_EnumValue(__int8 value);
		static std::wstring Get_ui_slot_EnumValue(__int8 value);
		static std::wstring Get_ui_category_EnumValue(__int8 value);
		static std::wstring Get_combat_job_EnumValue(__int8 value);
		static std::wstring Get_item_type_EnumValue(__int8 value);
		static std::wstring Get_battle_royal_field_effect_pouch_group_EnumValue(__int8 value);
		static std::wstring Get_grocery_effect_type_EnumValue(__int8 value);
		static std::wstring Get_description2_arg_type_EnumValue(__int8 value);
		static std::wstring Get_battle_message_type_EnumValue(__int8 value);
		static std::wstring Get_duel_warp_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"name2") == 0) return name2;
			if (wcscmp(fieldName, L"name3") == 0) return name3;
			if (wcscmp(fieldName, L"level") == 0) return level;
			if (wcscmp(fieldName, L"show_icon") == 0) return show_icon;
			if (wcscmp(fieldName, L"show_left_time") == 0) return show_left_time;
			if (wcscmp(fieldName, L"show_linkbar") == 0) return show_linkbar;
			if (wcscmp(fieldName, L"target_indicator_icon") == 0) return target_indicator_icon;
			if (wcscmp(fieldName, L"target_indicator_show") == 0) return target_indicator_show;
			if (wcscmp(fieldName, L"show_job_indicator") == 0) return show_job_indicator;
			if (wcscmp(fieldName, L"save_db") == 0) return save_db;
			if (wcscmp(fieldName, L"miss_probability") == 0) return miss_probability;
			if (wcscmp(fieldName, L"passive_duration") == 0) return passive_duration;
			if (wcscmp(fieldName, L"passive_interval") == 0) return passive_interval;
			if (wcscmp(fieldName, L"expiration_duration_sec") == 0) return expiration_duration_sec;
			if (wcscmp(fieldName, L"stack_amount") == 0) return stack_amount;
			if (wcscmp(fieldName, L"stack_count") == 0) return stack_count;
			if (wcscmp(fieldName, L"reattach_effect_after_changing_stack_count") == 0) return reattach_effect_after_changing_stack_count;
			if (wcscmp(fieldName, L"transform_effect") == 0) return transform_effect;
			if (wcscmp(fieldName, L"buff_type") == 0) return buff_type;
			if (wcscmp(fieldName, L"binding_skill_step_type") == 0) return binding_skill_step_type;
			if (wcscmp(fieldName, L"immune_breaker_attribute") == 0) return immune_breaker_attribute;
			if (wcscmp(fieldName, L"attribute") == 0) return attribute;
			if (wcscmp(fieldName, L"attribute_1") == 0) return attribute[0];
			if (wcscmp(fieldName, L"attribute_2") == 0) return attribute[1];
			if (wcscmp(fieldName, L"attribute_3") == 0) return attribute[2];
			if (wcscmp(fieldName, L"attribute_4") == 0) return attribute[3];
			if (wcscmp(fieldName, L"attribute_5") == 0) return attribute[4];
			if (wcscmp(fieldName, L"attribute_6") == 0) return attribute[5];
			if (wcscmp(fieldName, L"attribute_7") == 0) return attribute[6];
			if (wcscmp(fieldName, L"attribute_8") == 0) return attribute[7];
			if (wcscmp(fieldName, L"attribute_value") == 0) return attribute_value;
			if (wcscmp(fieldName, L"attribute_value_2") == 0) return attribute_value_2;
			if (wcscmp(fieldName, L"attribute_value_3") == 0) return attribute_value_3;
			if (wcscmp(fieldName, L"immune_attribute") == 0) return immune_attribute;
			if (wcscmp(fieldName, L"immune_attribute_1") == 0) return immune_attribute[0];
			if (wcscmp(fieldName, L"immune_attribute_2") == 0) return immune_attribute[1];
			if (wcscmp(fieldName, L"immune_attribute_3") == 0) return immune_attribute[2];
			if (wcscmp(fieldName, L"immune_attribute_4") == 0) return immune_attribute[3];
			if (wcscmp(fieldName, L"immune_attribute_5") == 0) return immune_attribute[4];
			if (wcscmp(fieldName, L"immune_attribute_6") == 0) return immune_attribute[5];
			if (wcscmp(fieldName, L"immune_attribute_7") == 0) return immune_attribute[6];
			if (wcscmp(fieldName, L"immune_attribute_8") == 0) return immune_attribute[7];
			if (wcscmp(fieldName, L"immune_attribute_value") == 0) return immune_attribute_value;
			if (wcscmp(fieldName, L"immune_attribute_value_2") == 0) return immune_attribute_value_2;
			if (wcscmp(fieldName, L"immune_attribute_value_3") == 0) return immune_attribute_value_3;
			if (wcscmp(fieldName, L"flag") == 0) return flag;
			if (wcscmp(fieldName, L"flag_1") == 0) return flag[0];
			if (wcscmp(fieldName, L"flag_2") == 0) return flag[1];
			if (wcscmp(fieldName, L"flag_3") == 0) return flag[2];
			if (wcscmp(fieldName, L"flag_4") == 0) return flag[3];
			if (wcscmp(fieldName, L"max_stack_flag") == 0) return max_stack_flag;
			if (wcscmp(fieldName, L"function") == 0) return function;
			if (wcscmp(fieldName, L"function_1") == 0) return function[0];
			if (wcscmp(fieldName, L"function_2") == 0) return function[1];
			if (wcscmp(fieldName, L"function_3") == 0) return function[2];
			if (wcscmp(fieldName, L"function_4") == 0) return function[3];
			if (wcscmp(fieldName, L"function_5") == 0) return function[4];
			if (wcscmp(fieldName, L"function_6") == 0) return function[5];
			if (wcscmp(fieldName, L"function_7") == 0) return function[6];
			if (wcscmp(fieldName, L"function_8") == 0) return function[7];
			if (wcscmp(fieldName, L"function_9") == 0) return function[8];
			if (wcscmp(fieldName, L"function_10") == 0) return function[9];
			if (wcscmp(fieldName, L"drop_field_item") == 0) return drop_field_item;
			if (wcscmp(fieldName, L"drop_weapon_field_item") == 0) return drop_weapon_field_item;
			if (wcscmp(fieldName, L"detach_count") == 0) return detach_count;
			if (wcscmp(fieldName, L"detach_slot") == 0) return detach_slot;
			if (wcscmp(fieldName, L"detach_slot_1") == 0) return detach_slot[0];
			if (wcscmp(fieldName, L"detach_slot_2") == 0) return detach_slot[1];
			if (wcscmp(fieldName, L"detach_slot_3") == 0) return detach_slot[2];
			if (wcscmp(fieldName, L"detach_slot_4") == 0) return detach_slot[3];
			if (wcscmp(fieldName, L"apply_duration_formula") == 0) return apply_duration_formula;
			if (wcscmp(fieldName, L"change_default_stance_by_detach_timeout") == 0) return change_default_stance_by_detach_timeout;
			if (wcscmp(fieldName, L"target_combat_mode") == 0) return target_combat_mode;
			if (wcscmp(fieldName, L"aoe_damage") == 0) return aoe_damage;
			if (wcscmp(fieldName, L"attack_attribute_coefficient_percent") == 0) return attack_attribute_coefficient_percent;
			if (wcscmp(fieldName, L"inhalation_linker") == 0) return inhalation_linker;
			if (wcscmp(fieldName, L"inhalation_linked") == 0) return inhalation_linked;
			if (wcscmp(fieldName, L"mount_linker") == 0) return mount_linker;
			if (wcscmp(fieldName, L"mount_linked") == 0) return mount_linked;
			if (wcscmp(fieldName, L"catch_linker") == 0) return catch_linker;
			if (wcscmp(fieldName, L"catch_linked") == 0) return catch_linked;
			if (wcscmp(fieldName, L"faction_score_min") == 0) return faction_score_min;
			if (wcscmp(fieldName, L"faction_score_max") == 0) return faction_score_max;
			if (wcscmp(fieldName, L"leave_zone_detach") == 0) return leave_zone_detach;
			if (wcscmp(fieldName, L"not_dead_to_exhaustion_detach") == 0) return not_dead_to_exhaustion_detach;
			if (wcscmp(fieldName, L"effect_region_leaved_detach") == 0) return effect_region_leaved_detach;
			if (wcscmp(fieldName, L"invoked_by_effect") == 0) return invoked_by_effect;
			if (wcscmp(fieldName, L"event_effect_target") == 0) return event_effect_target;
			if (wcscmp(fieldName, L"event_effect_target_1") == 0) return event_effect_target[0];
			if (wcscmp(fieldName, L"event_effect_target_2") == 0) return event_effect_target[1];
			if (wcscmp(fieldName, L"event_effect_target_3") == 0) return event_effect_target[2];
			if (wcscmp(fieldName, L"event_effect_target_4") == 0) return event_effect_target[3];
			if (wcscmp(fieldName, L"event_effect") == 0) return event_effect;
			if (wcscmp(fieldName, L"event_effect_1") == 0) return event_effect[0];
			if (wcscmp(fieldName, L"event_effect_2") == 0) return event_effect[1];
			if (wcscmp(fieldName, L"event_effect_3") == 0) return event_effect[2];
			if (wcscmp(fieldName, L"event_effect_4") == 0) return event_effect[3];
			if (wcscmp(fieldName, L"second_slot_event_effect_target") == 0) return second_slot_event_effect_target;
			if (wcscmp(fieldName, L"second_slot_event_effect_target_1") == 0) return second_slot_event_effect_target[0];
			if (wcscmp(fieldName, L"second_slot_event_effect_target_2") == 0) return second_slot_event_effect_target[1];
			if (wcscmp(fieldName, L"second_slot_event_effect_target_3") == 0) return second_slot_event_effect_target[2];
			if (wcscmp(fieldName, L"second_slot_event_effect_target_4") == 0) return second_slot_event_effect_target[3];
			if (wcscmp(fieldName, L"second_slot_event_effect") == 0) return second_slot_event_effect;
			if (wcscmp(fieldName, L"second_slot_event_effect_1") == 0) return second_slot_event_effect[0];
			if (wcscmp(fieldName, L"second_slot_event_effect_2") == 0) return second_slot_event_effect[1];
			if (wcscmp(fieldName, L"second_slot_event_effect_3") == 0) return second_slot_event_effect[2];
			if (wcscmp(fieldName, L"second_slot_event_effect_4") == 0) return second_slot_event_effect[3];
			if (wcscmp(fieldName, L"third_slot_event_effect_target") == 0) return third_slot_event_effect_target;
			if (wcscmp(fieldName, L"third_slot_event_effect_target_1") == 0) return third_slot_event_effect_target[0];
			if (wcscmp(fieldName, L"third_slot_event_effect_target_2") == 0) return third_slot_event_effect_target[1];
			if (wcscmp(fieldName, L"third_slot_event_effect_target_3") == 0) return third_slot_event_effect_target[2];
			if (wcscmp(fieldName, L"third_slot_event_effect_target_4") == 0) return third_slot_event_effect_target[3];
			if (wcscmp(fieldName, L"third_slot_event_effect") == 0) return third_slot_event_effect;
			if (wcscmp(fieldName, L"third_slot_event_effect_1") == 0) return third_slot_event_effect[0];
			if (wcscmp(fieldName, L"third_slot_event_effect_2") == 0) return third_slot_event_effect[1];
			if (wcscmp(fieldName, L"third_slot_event_effect_3") == 0) return third_slot_event_effect[2];
			if (wcscmp(fieldName, L"third_slot_event_effect_4") == 0) return third_slot_event_effect[3];
			if (wcscmp(fieldName, L"fourth_slot_event_effect_target") == 0) return fourth_slot_event_effect_target;
			if (wcscmp(fieldName, L"fourth_slot_event_effect_target_1") == 0) return fourth_slot_event_effect_target[0];
			if (wcscmp(fieldName, L"fourth_slot_event_effect_target_2") == 0) return fourth_slot_event_effect_target[1];
			if (wcscmp(fieldName, L"fourth_slot_event_effect_target_3") == 0) return fourth_slot_event_effect_target[2];
			if (wcscmp(fieldName, L"fourth_slot_event_effect_target_4") == 0) return fourth_slot_event_effect_target[3];
			if (wcscmp(fieldName, L"fourth_slot_event_effect") == 0) return fourth_slot_event_effect;
			if (wcscmp(fieldName, L"fourth_slot_event_effect_1") == 0) return fourth_slot_event_effect[0];
			if (wcscmp(fieldName, L"fourth_slot_event_effect_2") == 0) return fourth_slot_event_effect[1];
			if (wcscmp(fieldName, L"fourth_slot_event_effect_3") == 0) return fourth_slot_event_effect[2];
			if (wcscmp(fieldName, L"fourth_slot_event_effect_4") == 0) return fourth_slot_event_effect[3];
			if (wcscmp(fieldName, L"modify_ability") == 0) return modify_ability;
			if (wcscmp(fieldName, L"modify_ability_1") == 0) return modify_ability[0];
			if (wcscmp(fieldName, L"modify_ability_2") == 0) return modify_ability[1];
			if (wcscmp(fieldName, L"modify_ability_3") == 0) return modify_ability[2];
			if (wcscmp(fieldName, L"modify_ability_4") == 0) return modify_ability[3];
			if (wcscmp(fieldName, L"modify_ability_5") == 0) return modify_ability[4];
			if (wcscmp(fieldName, L"modify_ability_6") == 0) return modify_ability[5];
			if (wcscmp(fieldName, L"modify_ability_7") == 0) return modify_ability[6];
			if (wcscmp(fieldName, L"modify_ability_8") == 0) return modify_ability[7];
			if (wcscmp(fieldName, L"modify_ability_diff") == 0) return modify_ability_diff;
			if (wcscmp(fieldName, L"modify_ability_diff_1") == 0) return modify_ability_diff[0];
			if (wcscmp(fieldName, L"modify_ability_diff_2") == 0) return modify_ability_diff[1];
			if (wcscmp(fieldName, L"modify_ability_diff_3") == 0) return modify_ability_diff[2];
			if (wcscmp(fieldName, L"modify_ability_diff_4") == 0) return modify_ability_diff[3];
			if (wcscmp(fieldName, L"modify_ability_diff_5") == 0) return modify_ability_diff[4];
			if (wcscmp(fieldName, L"modify_ability_diff_6") == 0) return modify_ability_diff[5];
			if (wcscmp(fieldName, L"modify_ability_diff_7") == 0) return modify_ability_diff[6];
			if (wcscmp(fieldName, L"modify_ability_diff_8") == 0) return modify_ability_diff[7];
			if (wcscmp(fieldName, L"modify_ability_percent") == 0) return modify_ability_percent;
			if (wcscmp(fieldName, L"modify_ability_percent_1") == 0) return modify_ability_percent[0];
			if (wcscmp(fieldName, L"modify_ability_percent_2") == 0) return modify_ability_percent[1];
			if (wcscmp(fieldName, L"modify_ability_percent_3") == 0) return modify_ability_percent[2];
			if (wcscmp(fieldName, L"modify_ability_percent_4") == 0) return modify_ability_percent[3];
			if (wcscmp(fieldName, L"modify_ability_percent_5") == 0) return modify_ability_percent[4];
			if (wcscmp(fieldName, L"modify_ability_percent_6") == 0) return modify_ability_percent[5];
			if (wcscmp(fieldName, L"modify_ability_percent_7") == 0) return modify_ability_percent[6];
			if (wcscmp(fieldName, L"modify_ability_percent_8") == 0) return modify_ability_percent[7];
			if (wcscmp(fieldName, L"passive_moveanim_idle") == 0) return passive_moveanim_idle;
			if (wcscmp(fieldName, L"pause_auto_targeting") == 0) return pause_auto_targeting;
			if (wcscmp(fieldName, L"not_targetable") == 0) return not_targetable;
			if (wcscmp(fieldName, L"is_dot_effect") == 0) return is_dot_effect;
			if (wcscmp(fieldName, L"no_critical_hit") == 0) return no_critical_hit;
			if (wcscmp(fieldName, L"party_broadcast") == 0) return party_broadcast;
			if (wcscmp(fieldName, L"ui_slot") == 0) return ui_slot;
			if (wcscmp(fieldName, L"ui_category") == 0) return ui_category;
			if (wcscmp(fieldName, L"use_extra_skill_stack_count") == 0) return use_extra_skill_stack_count;
			if (wcscmp(fieldName, L"combat_job") == 0) return combat_job;
			if (wcscmp(fieldName, L"combat_job_1") == 0) return combat_job[0];
			if (wcscmp(fieldName, L"combat_job_2") == 0) return combat_job[1];
			if (wcscmp(fieldName, L"ui_difficult") == 0) return ui_difficult;
			if (wcscmp(fieldName, L"is_transform_effect") == 0) return is_transform_effect;
			if (wcscmp(fieldName, L"is_reuse_standby_effect") == 0) return is_reuse_standby_effect;
			if (wcscmp(fieldName, L"item_type") == 0) return item_type;
			if (wcscmp(fieldName, L"is_powergauge_effect") == 0) return is_powergauge_effect;
			if (wcscmp(fieldName, L"ignore_hide_buff_graph_effect") == 0) return ignore_hide_buff_graph_effect;
			if (wcscmp(fieldName, L"is_battle_royal_field_pc_info") == 0) return is_battle_royal_field_pc_info;
			if (wcscmp(fieldName, L"battle_royal_field_effect_pouch_group") == 0) return battle_royal_field_effect_pouch_group;
			if (wcscmp(fieldName, L"grocery_effect_type") == 0) return grocery_effect_type;
			if (wcscmp(fieldName, L"grocery_effect_level") == 0) return grocery_effect_level;
			if (wcscmp(fieldName, L"knockback_jump") == 0) return knockback_jump;
			if (wcscmp(fieldName, L"idleanimpriority") == 0) return idleanimpriority;
			if (wcscmp(fieldName, L"normal_component") == 0) return normal_component;
			if (wcscmp(fieldName, L"critical_component") == 0) return critical_component;
			if (wcscmp(fieldName, L"back_normal_component") == 0) return back_normal_component;
			if (wcscmp(fieldName, L"back_critical_component") == 0) return back_critical_component;
			if (wcscmp(fieldName, L"buff_continuance_component") == 0) return buff_continuance_component;
			if (wcscmp(fieldName, L"immune_buff_component") == 0) return immune_buff_component;
			if (wcscmp(fieldName, L"detach_show") == 0) return detach_show;
			if (wcscmp(fieldName, L"dispel_show") == 0) return dispel_show;
			if (wcscmp(fieldName, L"play_detach_show_hide") == 0) return play_detach_show_hide;
			if (wcscmp(fieldName, L"die_show") == 0) return die_show;
			if (wcscmp(fieldName, L"additional_die_show") == 0) return additional_die_show;
			if (wcscmp(fieldName, L"exhaustion_show") == 0) return exhaustion_show;
			if (wcscmp(fieldName, L"immuned_show") == 0) return immuned_show;
			if (wcscmp(fieldName, L"caster_show") == 0) return caster_show;
			if (wcscmp(fieldName, L"fire_show") == 0) return fire_show;
			if (wcscmp(fieldName, L"animation_freeze") == 0) return animation_freeze;
			if (wcscmp(fieldName, L"icon_texture") == 0) return icon_texture;
			if (wcscmp(fieldName, L"icon_index") == 0) return icon_index;
			if (wcscmp(fieldName, L"icon") == 0) return icon;
			if (wcscmp(fieldName, L"description2") == 0) return description2;
			if (wcscmp(fieldName, L"description3") == 0) return description3;
			if (wcscmp(fieldName, L"description4") == 0) return description4;
			if (wcscmp(fieldName, L"description5") == 0) return description5;
			if (wcscmp(fieldName, L"description_constellation") == 0) return description_constellation;
			if (wcscmp(fieldName, L"description2_arg_type") == 0) return description2_arg_type;
			if (wcscmp(fieldName, L"description2_arg_type_1") == 0) return description2_arg_type[0];
			if (wcscmp(fieldName, L"description2_arg_type_2") == 0) return description2_arg_type[1];
			if (wcscmp(fieldName, L"description2_arg_type_3") == 0) return description2_arg_type[2];
			if (wcscmp(fieldName, L"description2_arg_type_4") == 0) return description2_arg_type[3];
			if (wcscmp(fieldName, L"description2_arg_value") == 0) return description2_arg_value;
			if (wcscmp(fieldName, L"description2_arg_value_1") == 0) return description2_arg_value[0];
			if (wcscmp(fieldName, L"description2_arg_value_2") == 0) return description2_arg_value[1];
			if (wcscmp(fieldName, L"description2_arg_value_3") == 0) return description2_arg_value[2];
			if (wcscmp(fieldName, L"description2_arg_value_4") == 0) return description2_arg_value[3];
			if (wcscmp(fieldName, L"mount_attach_duration") == 0) return mount_attach_duration;
			if (wcscmp(fieldName, L"mount_detach_duration") == 0) return mount_detach_duration;
			if (wcscmp(fieldName, L"linker_abnormal") == 0) return linker_abnormal;
			if (wcscmp(fieldName, L"linkee_abnormal") == 0) return linkee_abnormal;
			if (wcscmp(fieldName, L"link_attach_duration") == 0) return link_attach_duration;
			if (wcscmp(fieldName, L"link_detach_duration") == 0) return link_detach_duration;
			if (wcscmp(fieldName, L"catch_legs_physics") == 0) return catch_legs_physics;
			if (wcscmp(fieldName, L"catch_arms_physics") == 0) return catch_arms_physics;
			if (wcscmp(fieldName, L"catch_body_physics") == 0) return catch_body_physics;
			if (wcscmp(fieldName, L"camera_block") == 0) return camera_block;
			if (wcscmp(fieldName, L"battle_message_type") == 0) return battle_message_type;
			if (wcscmp(fieldName, L"flash_sound_mode") == 0) return flash_sound_mode;
			if (wcscmp(fieldName, L"skillresultpriority") == 0) return skillresultpriority;
			if (wcscmp(fieldName, L"hit_show") == 0) return hit_show;
			if (wcscmp(fieldName, L"miss_show") == 0) return miss_show;
			if (wcscmp(fieldName, L"dodge_show") == 0) return dodge_show;
			if (wcscmp(fieldName, L"parry_show") == 0) return parry_show;
			if (wcscmp(fieldName, L"perfect_parry_show") == 0) return perfect_parry_show;
			if (wcscmp(fieldName, L"bounce_show") == 0) return bounce_show;
			if (wcscmp(fieldName, L"conter_show") == 0) return conter_show;
			if (wcscmp(fieldName, L"critical_hit_show") == 0) return critical_hit_show;
			if (wcscmp(fieldName, L"damagesignal") == 0) return damagesignal;
			if (wcscmp(fieldName, L"play_despawn_show") == 0) return play_despawn_show;
			if (wcscmp(fieldName, L"play_transit") == 0) return play_transit;
			if (wcscmp(fieldName, L"transit_time") == 0) return transit_time;
			if (wcscmp(fieldName, L"duel_warp") == 0) return duel_warp;
			if (wcscmp(fieldName, L"attach_notify_message") == 0) return attach_notify_message;
			if (wcscmp(fieldName, L"description_item_random_option") == 0) return description_item_random_option;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"name2") == 0) return Data::AnyFieldToStringConverter::ToString(&name2);
			if (wcscmp(fieldName, L"name3") == 0) return Data::AnyFieldToStringConverter::ToString(&name3);
			if (wcscmp(fieldName, L"level") == 0) return Data::AnyFieldToStringConverter::ToString(&level);
			if (wcscmp(fieldName, L"show_icon") == 0) return Data::AnyFieldToStringConverter::ToString(&show_icon);
			if (wcscmp(fieldName, L"show_left_time") == 0) return Data::AnyFieldToStringConverter::ToString(&show_left_time);
			if (wcscmp(fieldName, L"show_linkbar") == 0) return Data::AnyFieldToStringConverter::ToString(&show_linkbar);
			if (wcscmp(fieldName, L"target_indicator_icon") == 0) return Data::AnyFieldToStringConverter::ToString(&target_indicator_icon);
			if (wcscmp(fieldName, L"target_indicator_show") == 0) return Data::AnyFieldToStringConverter::ToString(&target_indicator_show);
			if (wcscmp(fieldName, L"show_job_indicator") == 0) return Data::AnyFieldToStringConverter::ToString(&show_job_indicator);
			if (wcscmp(fieldName, L"save_db") == 0) return Data::AnyFieldToStringConverter::ToString(&save_db);
			if (wcscmp(fieldName, L"miss_probability") == 0) return Data::AnyFieldToStringConverter::ToString(&miss_probability);
			if (wcscmp(fieldName, L"passive_duration") == 0) return Data::AnyFieldToStringConverter::ToString(&passive_duration);
			if (wcscmp(fieldName, L"passive_interval") == 0) return Data::AnyFieldToStringConverter::ToString(&passive_interval);
			if (wcscmp(fieldName, L"expiration_duration_sec") == 0) return Data::AnyFieldToStringConverter::ToString(&expiration_duration_sec);
			if (wcscmp(fieldName, L"stack_amount") == 0) return Data::AnyFieldToStringConverter::ToString(&stack_amount);
			if (wcscmp(fieldName, L"stack_count") == 0) return Data::AnyFieldToStringConverter::ToString(&stack_count);
			if (wcscmp(fieldName, L"reattach_effect_after_changing_stack_count") == 0) return Data::AnyFieldToStringConverter::ToString(&reattach_effect_after_changing_stack_count);
			if (wcscmp(fieldName, L"transform_effect") == 0) return Data::AnyFieldToStringConverter::ToString(&transform_effect);
			if (wcscmp(fieldName, L"buff_type") == 0) return Data::AnyFieldToStringConverter::ToString(&buff_type);
			if (wcscmp(fieldName, L"binding_skill_step_type") == 0) return Data::AnyFieldToStringConverter::ToString(&binding_skill_step_type);
			if (wcscmp(fieldName, L"immune_breaker_attribute") == 0) return Data::AnyFieldToStringConverter::ToString(&immune_breaker_attribute);
			if (wcscmp(fieldName, L"attribute_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(attribute[0]));
			if (wcscmp(fieldName, L"attribute_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(attribute[1]));
			if (wcscmp(fieldName, L"attribute_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(attribute[2]));
			if (wcscmp(fieldName, L"attribute_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(attribute[3]));
			if (wcscmp(fieldName, L"attribute_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(attribute[4]));
			if (wcscmp(fieldName, L"attribute_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(attribute[5]));
			if (wcscmp(fieldName, L"attribute_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(attribute[6]));
			if (wcscmp(fieldName, L"attribute_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(attribute[7]));
			if (wcscmp(fieldName, L"attribute_value") == 0) return Data::AnyFieldToStringConverter::ToString(&attribute_value);
			if (wcscmp(fieldName, L"attribute_value_2") == 0) return Data::AnyFieldToStringConverter::ToString(&attribute_value_2);
			if (wcscmp(fieldName, L"attribute_value_3") == 0) return Data::AnyFieldToStringConverter::ToString(&attribute_value_3);
			if (wcscmp(fieldName, L"immune_attribute_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(immune_attribute[0]));
			if (wcscmp(fieldName, L"immune_attribute_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(immune_attribute[1]));
			if (wcscmp(fieldName, L"immune_attribute_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(immune_attribute[2]));
			if (wcscmp(fieldName, L"immune_attribute_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(immune_attribute[3]));
			if (wcscmp(fieldName, L"immune_attribute_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(immune_attribute[4]));
			if (wcscmp(fieldName, L"immune_attribute_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(immune_attribute[5]));
			if (wcscmp(fieldName, L"immune_attribute_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(immune_attribute[6]));
			if (wcscmp(fieldName, L"immune_attribute_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(immune_attribute[7]));
			if (wcscmp(fieldName, L"immune_attribute_value") == 0) return Data::AnyFieldToStringConverter::ToString(&immune_attribute_value);
			if (wcscmp(fieldName, L"immune_attribute_value_2") == 0) return Data::AnyFieldToStringConverter::ToString(&immune_attribute_value_2);
			if (wcscmp(fieldName, L"immune_attribute_value_3") == 0) return Data::AnyFieldToStringConverter::ToString(&immune_attribute_value_3);
			if (wcscmp(fieldName, L"flag_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(flag[0]));
			if (wcscmp(fieldName, L"flag_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(flag[1]));
			if (wcscmp(fieldName, L"flag_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(flag[2]));
			if (wcscmp(fieldName, L"flag_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(flag[3]));
			if (wcscmp(fieldName, L"max_stack_flag") == 0) return Data::AnyFieldToStringConverter::ToString(&max_stack_flag);
			if (wcscmp(fieldName, L"function_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(function[0]));
			if (wcscmp(fieldName, L"function_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(function[1]));
			if (wcscmp(fieldName, L"function_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(function[2]));
			if (wcscmp(fieldName, L"function_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(function[3]));
			if (wcscmp(fieldName, L"function_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(function[4]));
			if (wcscmp(fieldName, L"function_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(function[5]));
			if (wcscmp(fieldName, L"function_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(function[6]));
			if (wcscmp(fieldName, L"function_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(function[7]));
			if (wcscmp(fieldName, L"function_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(function[8]));
			if (wcscmp(fieldName, L"function_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(function[9]));
			if (wcscmp(fieldName, L"drop_field_item") == 0) return Data::AnyFieldToStringConverter::ToString(&drop_field_item);
			if (wcscmp(fieldName, L"drop_weapon_field_item") == 0) return Data::AnyFieldToStringConverter::ToString(&drop_weapon_field_item);
			if (wcscmp(fieldName, L"detach_count") == 0) return Data::AnyFieldToStringConverter::ToString(&detach_count);
			if (wcscmp(fieldName, L"detach_slot_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(detach_slot[0]));
			if (wcscmp(fieldName, L"detach_slot_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(detach_slot[1]));
			if (wcscmp(fieldName, L"detach_slot_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(detach_slot[2]));
			if (wcscmp(fieldName, L"detach_slot_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(detach_slot[3]));
			if (wcscmp(fieldName, L"apply_duration_formula") == 0) return Data::AnyFieldToStringConverter::ToString(&apply_duration_formula);
			if (wcscmp(fieldName, L"change_default_stance_by_detach_timeout") == 0) return Data::AnyFieldToStringConverter::ToString(&change_default_stance_by_detach_timeout);
			if (wcscmp(fieldName, L"target_combat_mode") == 0) return Data::AnyFieldToStringConverter::ToString(&target_combat_mode);
			if (wcscmp(fieldName, L"aoe_damage") == 0) return Data::AnyFieldToStringConverter::ToString(&aoe_damage);
			if (wcscmp(fieldName, L"attack_attribute_coefficient_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_attribute_coefficient_percent);
			if (wcscmp(fieldName, L"inhalation_linker") == 0) return Data::AnyFieldToStringConverter::ToString(&inhalation_linker);
			if (wcscmp(fieldName, L"inhalation_linked") == 0) return Data::AnyFieldToStringConverter::ToString(&inhalation_linked);
			if (wcscmp(fieldName, L"mount_linker") == 0) return Data::AnyFieldToStringConverter::ToString(&mount_linker);
			if (wcscmp(fieldName, L"mount_linked") == 0) return Data::AnyFieldToStringConverter::ToString(&mount_linked);
			if (wcscmp(fieldName, L"catch_linker") == 0) return Data::AnyFieldToStringConverter::ToString(&catch_linker);
			if (wcscmp(fieldName, L"catch_linked") == 0) return Data::AnyFieldToStringConverter::ToString(&catch_linked);
			if (wcscmp(fieldName, L"faction_score_min") == 0) return Data::AnyFieldToStringConverter::ToString(&faction_score_min);
			if (wcscmp(fieldName, L"faction_score_max") == 0) return Data::AnyFieldToStringConverter::ToString(&faction_score_max);
			if (wcscmp(fieldName, L"leave_zone_detach") == 0) return Data::AnyFieldToStringConverter::ToString(&leave_zone_detach);
			if (wcscmp(fieldName, L"not_dead_to_exhaustion_detach") == 0) return Data::AnyFieldToStringConverter::ToString(&not_dead_to_exhaustion_detach);
			if (wcscmp(fieldName, L"effect_region_leaved_detach") == 0) return Data::AnyFieldToStringConverter::ToString(&effect_region_leaved_detach);
			if (wcscmp(fieldName, L"invoked_by_effect") == 0) return Data::AnyFieldToStringConverter::ToString(&invoked_by_effect);
			if (wcscmp(fieldName, L"event_effect_target_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(event_effect_target[0]));
			if (wcscmp(fieldName, L"event_effect_target_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(event_effect_target[1]));
			if (wcscmp(fieldName, L"event_effect_target_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(event_effect_target[2]));
			if (wcscmp(fieldName, L"event_effect_target_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(event_effect_target[3]));
			if (wcscmp(fieldName, L"event_effect_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(event_effect[0]));
			if (wcscmp(fieldName, L"event_effect_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(event_effect[1]));
			if (wcscmp(fieldName, L"event_effect_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(event_effect[2]));
			if (wcscmp(fieldName, L"event_effect_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(event_effect[3]));
			if (wcscmp(fieldName, L"second_slot_event_effect_target_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(second_slot_event_effect_target[0]));
			if (wcscmp(fieldName, L"second_slot_event_effect_target_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(second_slot_event_effect_target[1]));
			if (wcscmp(fieldName, L"second_slot_event_effect_target_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(second_slot_event_effect_target[2]));
			if (wcscmp(fieldName, L"second_slot_event_effect_target_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(second_slot_event_effect_target[3]));
			if (wcscmp(fieldName, L"second_slot_event_effect_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(second_slot_event_effect[0]));
			if (wcscmp(fieldName, L"second_slot_event_effect_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(second_slot_event_effect[1]));
			if (wcscmp(fieldName, L"second_slot_event_effect_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(second_slot_event_effect[2]));
			if (wcscmp(fieldName, L"second_slot_event_effect_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(second_slot_event_effect[3]));
			if (wcscmp(fieldName, L"third_slot_event_effect_target_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(third_slot_event_effect_target[0]));
			if (wcscmp(fieldName, L"third_slot_event_effect_target_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(third_slot_event_effect_target[1]));
			if (wcscmp(fieldName, L"third_slot_event_effect_target_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(third_slot_event_effect_target[2]));
			if (wcscmp(fieldName, L"third_slot_event_effect_target_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(third_slot_event_effect_target[3]));
			if (wcscmp(fieldName, L"third_slot_event_effect_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(third_slot_event_effect[0]));
			if (wcscmp(fieldName, L"third_slot_event_effect_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(third_slot_event_effect[1]));
			if (wcscmp(fieldName, L"third_slot_event_effect_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(third_slot_event_effect[2]));
			if (wcscmp(fieldName, L"third_slot_event_effect_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(third_slot_event_effect[3]));
			if (wcscmp(fieldName, L"fourth_slot_event_effect_target_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(fourth_slot_event_effect_target[0]));
			if (wcscmp(fieldName, L"fourth_slot_event_effect_target_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(fourth_slot_event_effect_target[1]));
			if (wcscmp(fieldName, L"fourth_slot_event_effect_target_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(fourth_slot_event_effect_target[2]));
			if (wcscmp(fieldName, L"fourth_slot_event_effect_target_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(fourth_slot_event_effect_target[3]));
			if (wcscmp(fieldName, L"fourth_slot_event_effect_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(fourth_slot_event_effect[0]));
			if (wcscmp(fieldName, L"fourth_slot_event_effect_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(fourth_slot_event_effect[1]));
			if (wcscmp(fieldName, L"fourth_slot_event_effect_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(fourth_slot_event_effect[2]));
			if (wcscmp(fieldName, L"fourth_slot_event_effect_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(fourth_slot_event_effect[3]));
			if (wcscmp(fieldName, L"modify_ability_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability[0]));
			if (wcscmp(fieldName, L"modify_ability_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability[1]));
			if (wcscmp(fieldName, L"modify_ability_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability[2]));
			if (wcscmp(fieldName, L"modify_ability_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability[3]));
			if (wcscmp(fieldName, L"modify_ability_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability[4]));
			if (wcscmp(fieldName, L"modify_ability_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability[5]));
			if (wcscmp(fieldName, L"modify_ability_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability[6]));
			if (wcscmp(fieldName, L"modify_ability_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability[7]));
			if (wcscmp(fieldName, L"modify_ability_diff_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability_diff[0]));
			if (wcscmp(fieldName, L"modify_ability_diff_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability_diff[1]));
			if (wcscmp(fieldName, L"modify_ability_diff_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability_diff[2]));
			if (wcscmp(fieldName, L"modify_ability_diff_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability_diff[3]));
			if (wcscmp(fieldName, L"modify_ability_diff_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability_diff[4]));
			if (wcscmp(fieldName, L"modify_ability_diff_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability_diff[5]));
			if (wcscmp(fieldName, L"modify_ability_diff_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability_diff[6]));
			if (wcscmp(fieldName, L"modify_ability_diff_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability_diff[7]));
			if (wcscmp(fieldName, L"modify_ability_percent_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability_percent[0]));
			if (wcscmp(fieldName, L"modify_ability_percent_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability_percent[1]));
			if (wcscmp(fieldName, L"modify_ability_percent_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability_percent[2]));
			if (wcscmp(fieldName, L"modify_ability_percent_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability_percent[3]));
			if (wcscmp(fieldName, L"modify_ability_percent_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability_percent[4]));
			if (wcscmp(fieldName, L"modify_ability_percent_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability_percent[5]));
			if (wcscmp(fieldName, L"modify_ability_percent_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability_percent[6]));
			if (wcscmp(fieldName, L"modify_ability_percent_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability_percent[7]));
			if (wcscmp(fieldName, L"passive_moveanim_idle") == 0) return Data::AnyFieldToStringConverter::ToString(&passive_moveanim_idle);
			if (wcscmp(fieldName, L"pause_auto_targeting") == 0) return Data::AnyFieldToStringConverter::ToString(&pause_auto_targeting);
			if (wcscmp(fieldName, L"not_targetable") == 0) return Data::AnyFieldToStringConverter::ToString(&not_targetable);
			if (wcscmp(fieldName, L"is_dot_effect") == 0) return Data::AnyFieldToStringConverter::ToString(&is_dot_effect);
			if (wcscmp(fieldName, L"no_critical_hit") == 0) return Data::AnyFieldToStringConverter::ToString(&no_critical_hit);
			if (wcscmp(fieldName, L"party_broadcast") == 0) return Data::AnyFieldToStringConverter::ToString(&party_broadcast);
			if (wcscmp(fieldName, L"ui_slot") == 0) return Data::AnyFieldToStringConverter::ToString(&ui_slot);
			if (wcscmp(fieldName, L"ui_category") == 0) return Data::AnyFieldToStringConverter::ToString(&ui_category);
			if (wcscmp(fieldName, L"use_extra_skill_stack_count") == 0) return Data::AnyFieldToStringConverter::ToString(&use_extra_skill_stack_count);
			if (wcscmp(fieldName, L"combat_job_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(combat_job[0]));
			if (wcscmp(fieldName, L"combat_job_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(combat_job[1]));
			if (wcscmp(fieldName, L"ui_difficult") == 0) return Data::AnyFieldToStringConverter::ToString(&ui_difficult);
			if (wcscmp(fieldName, L"is_transform_effect") == 0) return Data::AnyFieldToStringConverter::ToString(&is_transform_effect);
			if (wcscmp(fieldName, L"is_reuse_standby_effect") == 0) return Data::AnyFieldToStringConverter::ToString(&is_reuse_standby_effect);
			if (wcscmp(fieldName, L"item_type") == 0) return Data::AnyFieldToStringConverter::ToString(&item_type);
			if (wcscmp(fieldName, L"is_powergauge_effect") == 0) return Data::AnyFieldToStringConverter::ToString(&is_powergauge_effect);
			if (wcscmp(fieldName, L"ignore_hide_buff_graph_effect") == 0) return Data::AnyFieldToStringConverter::ToString(&ignore_hide_buff_graph_effect);
			if (wcscmp(fieldName, L"is_battle_royal_field_pc_info") == 0) return Data::AnyFieldToStringConverter::ToString(&is_battle_royal_field_pc_info);
			if (wcscmp(fieldName, L"battle_royal_field_effect_pouch_group") == 0) return Data::AnyFieldToStringConverter::ToString(&battle_royal_field_effect_pouch_group);
			if (wcscmp(fieldName, L"grocery_effect_type") == 0) return Data::AnyFieldToStringConverter::ToString(&grocery_effect_type);
			if (wcscmp(fieldName, L"grocery_effect_level") == 0) return Data::AnyFieldToStringConverter::ToString(&grocery_effect_level);
			if (wcscmp(fieldName, L"knockback_jump") == 0) return Data::AnyFieldToStringConverter::ToString(&knockback_jump);
			if (wcscmp(fieldName, L"idleanimpriority") == 0) return Data::AnyFieldToStringConverter::ToString(&idleanimpriority);
			if (wcscmp(fieldName, L"normal_component") == 0) return Data::AnyFieldToStringConverter::ToString(&normal_component);
			if (wcscmp(fieldName, L"critical_component") == 0) return Data::AnyFieldToStringConverter::ToString(&critical_component);
			if (wcscmp(fieldName, L"back_normal_component") == 0) return Data::AnyFieldToStringConverter::ToString(&back_normal_component);
			if (wcscmp(fieldName, L"back_critical_component") == 0) return Data::AnyFieldToStringConverter::ToString(&back_critical_component);
			if (wcscmp(fieldName, L"buff_continuance_component") == 0) return Data::AnyFieldToStringConverter::ToString(&buff_continuance_component);
			if (wcscmp(fieldName, L"immune_buff_component") == 0) return Data::AnyFieldToStringConverter::ToString(&immune_buff_component);
			if (wcscmp(fieldName, L"detach_show") == 0) return Data::AnyFieldToStringConverter::ToString(&detach_show);
			if (wcscmp(fieldName, L"dispel_show") == 0) return Data::AnyFieldToStringConverter::ToString(&dispel_show);
			if (wcscmp(fieldName, L"play_detach_show_hide") == 0) return Data::AnyFieldToStringConverter::ToString(&play_detach_show_hide);
			if (wcscmp(fieldName, L"die_show") == 0) return Data::AnyFieldToStringConverter::ToString(&die_show);
			if (wcscmp(fieldName, L"additional_die_show") == 0) return Data::AnyFieldToStringConverter::ToString(&additional_die_show);
			if (wcscmp(fieldName, L"exhaustion_show") == 0) return Data::AnyFieldToStringConverter::ToString(&exhaustion_show);
			if (wcscmp(fieldName, L"immuned_show") == 0) return Data::AnyFieldToStringConverter::ToString(&immuned_show);
			if (wcscmp(fieldName, L"caster_show") == 0) return Data::AnyFieldToStringConverter::ToString(&caster_show);
			if (wcscmp(fieldName, L"fire_show") == 0) return Data::AnyFieldToStringConverter::ToString(&fire_show);
			if (wcscmp(fieldName, L"animation_freeze") == 0) return Data::AnyFieldToStringConverter::ToString(&animation_freeze);
			if (wcscmp(fieldName, L"icon_texture") == 0) return Data::AnyFieldToStringConverter::ToString(&icon_texture);
			if (wcscmp(fieldName, L"icon_index") == 0) return Data::AnyFieldToStringConverter::ToString(&icon_index);
			if (wcscmp(fieldName, L"icon") == 0) return Data::AnyFieldToStringConverter::ToString(&icon);
			if (wcscmp(fieldName, L"description2") == 0) return Data::AnyFieldToStringConverter::ToString(&description2);
			if (wcscmp(fieldName, L"description3") == 0) return Data::AnyFieldToStringConverter::ToString(&description3);
			if (wcscmp(fieldName, L"description4") == 0) return Data::AnyFieldToStringConverter::ToString(&description4);
			if (wcscmp(fieldName, L"description5") == 0) return Data::AnyFieldToStringConverter::ToString(&description5);
			if (wcscmp(fieldName, L"description_constellation") == 0) return Data::AnyFieldToStringConverter::ToString(&description_constellation);
			if (wcscmp(fieldName, L"description2_arg_type_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(description2_arg_type[0]));
			if (wcscmp(fieldName, L"description2_arg_type_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(description2_arg_type[1]));
			if (wcscmp(fieldName, L"description2_arg_type_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(description2_arg_type[2]));
			if (wcscmp(fieldName, L"description2_arg_type_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(description2_arg_type[3]));
			if (wcscmp(fieldName, L"description2_arg_value_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(description2_arg_value[0]));
			if (wcscmp(fieldName, L"description2_arg_value_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(description2_arg_value[1]));
			if (wcscmp(fieldName, L"description2_arg_value_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(description2_arg_value[2]));
			if (wcscmp(fieldName, L"description2_arg_value_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(description2_arg_value[3]));
			if (wcscmp(fieldName, L"mount_attach_duration") == 0) return Data::AnyFieldToStringConverter::ToString(&mount_attach_duration);
			if (wcscmp(fieldName, L"mount_detach_duration") == 0) return Data::AnyFieldToStringConverter::ToString(&mount_detach_duration);
			if (wcscmp(fieldName, L"linker_abnormal") == 0) return Data::AnyFieldToStringConverter::ToString(&linker_abnormal);
			if (wcscmp(fieldName, L"linkee_abnormal") == 0) return Data::AnyFieldToStringConverter::ToString(&linkee_abnormal);
			if (wcscmp(fieldName, L"link_attach_duration") == 0) return Data::AnyFieldToStringConverter::ToString(&link_attach_duration);
			if (wcscmp(fieldName, L"link_detach_duration") == 0) return Data::AnyFieldToStringConverter::ToString(&link_detach_duration);
			if (wcscmp(fieldName, L"catch_legs_physics") == 0) return Data::AnyFieldToStringConverter::ToString(&catch_legs_physics);
			if (wcscmp(fieldName, L"catch_arms_physics") == 0) return Data::AnyFieldToStringConverter::ToString(&catch_arms_physics);
			if (wcscmp(fieldName, L"catch_body_physics") == 0) return Data::AnyFieldToStringConverter::ToString(&catch_body_physics);
			if (wcscmp(fieldName, L"camera_block") == 0) return Data::AnyFieldToStringConverter::ToString(&camera_block);
			if (wcscmp(fieldName, L"battle_message_type") == 0) return Data::AnyFieldToStringConverter::ToString(&battle_message_type);
			if (wcscmp(fieldName, L"flash_sound_mode") == 0) return Data::AnyFieldToStringConverter::ToString(&flash_sound_mode);
			if (wcscmp(fieldName, L"skillresultpriority") == 0) return Data::AnyFieldToStringConverter::ToString(&skillresultpriority);
			if (wcscmp(fieldName, L"hit_show") == 0) return Data::AnyFieldToStringConverter::ToString(&hit_show);
			if (wcscmp(fieldName, L"miss_show") == 0) return Data::AnyFieldToStringConverter::ToString(&miss_show);
			if (wcscmp(fieldName, L"dodge_show") == 0) return Data::AnyFieldToStringConverter::ToString(&dodge_show);
			if (wcscmp(fieldName, L"parry_show") == 0) return Data::AnyFieldToStringConverter::ToString(&parry_show);
			if (wcscmp(fieldName, L"perfect_parry_show") == 0) return Data::AnyFieldToStringConverter::ToString(&perfect_parry_show);
			if (wcscmp(fieldName, L"bounce_show") == 0) return Data::AnyFieldToStringConverter::ToString(&bounce_show);
			if (wcscmp(fieldName, L"conter_show") == 0) return Data::AnyFieldToStringConverter::ToString(&conter_show);
			if (wcscmp(fieldName, L"critical_hit_show") == 0) return Data::AnyFieldToStringConverter::ToString(&critical_hit_show);
			if (wcscmp(fieldName, L"damagesignal") == 0) return Data::AnyFieldToStringConverter::ToString(&damagesignal);
			if (wcscmp(fieldName, L"play_despawn_show") == 0) return Data::AnyFieldToStringConverter::ToString(&play_despawn_show);
			if (wcscmp(fieldName, L"play_transit") == 0) return Data::AnyFieldToStringConverter::ToString(&play_transit);
			if (wcscmp(fieldName, L"transit_time") == 0) return Data::AnyFieldToStringConverter::ToString(&transit_time);
			if (wcscmp(fieldName, L"duel_warp") == 0) return Data::AnyFieldToStringConverter::ToString(&duel_warp);
			if (wcscmp(fieldName, L"attach_notify_message") == 0) return Data::AnyFieldToStringConverter::ToString(&attach_notify_message);
			if (wcscmp(fieldName, L"description_item_random_option") == 0) return Data::AnyFieldToStringConverter::ToString(&description_item_random_option);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			if (reinterpret_cast<std::uintptr_t>(target_indicator_icon) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) target_indicator_icon = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(target_indicator_icon));
			if (reinterpret_cast<std::uintptr_t>(normal_component) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) normal_component = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(normal_component));
			if (reinterpret_cast<std::uintptr_t>(critical_component) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) critical_component = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(critical_component));
			if (reinterpret_cast<std::uintptr_t>(back_normal_component) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) back_normal_component = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(back_normal_component));
			if (reinterpret_cast<std::uintptr_t>(back_critical_component) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) back_critical_component = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(back_critical_component));
			if (reinterpret_cast<std::uintptr_t>(buff_continuance_component) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) buff_continuance_component = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(buff_continuance_component));
			if (reinterpret_cast<std::uintptr_t>(immune_buff_component) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) immune_buff_component = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(immune_buff_component));
			if (reinterpret_cast<std::uintptr_t>(detach_show) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) detach_show = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(detach_show));
			if (reinterpret_cast<std::uintptr_t>(dispel_show) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) dispel_show = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(dispel_show));
			if (reinterpret_cast<std::uintptr_t>(die_show) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) die_show = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(die_show));
			if (reinterpret_cast<std::uintptr_t>(additional_die_show) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) additional_die_show = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(additional_die_show));
			if (reinterpret_cast<std::uintptr_t>(exhaustion_show) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) exhaustion_show = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(exhaustion_show));
			if (reinterpret_cast<std::uintptr_t>(immuned_show) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) immuned_show = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(immuned_show));
			if (reinterpret_cast<std::uintptr_t>(caster_show) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) caster_show = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(caster_show));
			if (reinterpret_cast<std::uintptr_t>(fire_show) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) fire_show = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(fire_show));
			for (int i = 0; i < 4; i++) {
				if (reinterpret_cast<std::uintptr_t>(description2_arg_value[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) description2_arg_value[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(description2_arg_value[i]));
			}
			if (reinterpret_cast<std::uintptr_t>(flash_sound_mode) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) flash_sound_mode = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(flash_sound_mode));
			if (reinterpret_cast<std::uintptr_t>(hit_show) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) hit_show = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(hit_show));
			if (reinterpret_cast<std::uintptr_t>(miss_show) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) miss_show = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(miss_show));
			if (reinterpret_cast<std::uintptr_t>(dodge_show) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) dodge_show = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(dodge_show));
			if (reinterpret_cast<std::uintptr_t>(parry_show) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) parry_show = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(parry_show));
			if (reinterpret_cast<std::uintptr_t>(perfect_parry_show) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) perfect_parry_show = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(perfect_parry_show));
			if (reinterpret_cast<std::uintptr_t>(bounce_show) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) bounce_show = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(bounce_show));
			if (reinterpret_cast<std::uintptr_t>(conter_show) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) conter_show = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(conter_show));
			if (reinterpret_cast<std::uintptr_t>(critical_hit_show) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) critical_hit_show = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(critical_hit_show));
		}
		union Key
		{
            struct {
                __int32 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::TableRef name2;
int name2_tableId(){return 405;};
Data::TableRef name3;
int name3_tableId(){return 405;};
__int16 level;
bool show_icon;
bool show_left_time;
bool show_linkbar;
char Pad0[3];
wchar_t* target_indicator_icon;
bool target_indicator_show;
bool show_job_indicator;
bool save_db;
__int8 miss_probability;
__int32 passive_duration;
__int32 passive_interval;
__int32 expiration_duration_sec;
__int8 stack_amount;
__int8 stack_count;
bool reattach_effect_after_changing_stack_count;
char Pad1[1];
Data::TableRef transform_effect;
int transform_effect_tableId(){return 111;};
__int8 buff_type;
std::wstring buff_type_EnumValue() const {return Get_buff_type_EnumValue(buff_type);};
__int8 binding_skill_step_type;
std::wstring binding_skill_step_type_EnumValue() const {return Get_binding_skill_step_type_EnumValue(binding_skill_step_type);};
__int16 immune_breaker_attribute;
std::wstring immune_breaker_attribute_EnumValue() const {return Get_immune_breaker_attribute_EnumValue(immune_breaker_attribute);};
__int16 attribute[8];
std::wstring attribute_EnumValue(int index) const {return Get_attribute_EnumValue(attribute[index]);};
__int64 attribute_value;
__int64 attribute_value_2;
__int64 attribute_value_3;
__int16 immune_attribute[8];
std::wstring immune_attribute_EnumValue(int index) const {return Get_immune_attribute_EnumValue(immune_attribute[index]);};
__int64 immune_attribute_value;
__int64 immune_attribute_value_2;
__int64 immune_attribute_value_3;
__int16 flag[4];
std::wstring flag_EnumValue(int index) const {return Get_flag_EnumValue(flag[index]);};
__int16 max_stack_flag;
std::wstring max_stack_flag_EnumValue() const {return Get_max_stack_flag_EnumValue(max_stack_flag);};
__int8 function[10];
std::wstring function_EnumValue(int index) const {return Get_function_EnumValue(function[index]);};
bool drop_field_item;
bool drop_weapon_field_item;
__int8 detach_count;
__int8 detach_slot[4];
std::wstring detach_slot_EnumValue(int index) const {return Get_detach_slot_EnumValue(detach_slot[index]);};
bool apply_duration_formula;
bool change_default_stance_by_detach_timeout;
bool target_combat_mode;
bool aoe_damage;
char Pad2[1];
__int16 attack_attribute_coefficient_percent;
__int8 inhalation_linker;
std::wstring inhalation_linker_EnumValue() const {return Get_inhalation_linker_EnumValue(inhalation_linker);};
__int8 inhalation_linked;
std::wstring inhalation_linked_EnumValue() const {return Get_inhalation_linked_EnumValue(inhalation_linked);};
__int8 mount_linker;
std::wstring mount_linker_EnumValue() const {return Get_mount_linker_EnumValue(mount_linker);};
__int8 mount_linked;
std::wstring mount_linked_EnumValue() const {return Get_mount_linked_EnumValue(mount_linked);};
__int8 catch_linker;
std::wstring catch_linker_EnumValue() const {return Get_catch_linker_EnumValue(catch_linker);};
__int8 catch_linked;
std::wstring catch_linked_EnumValue() const {return Get_catch_linked_EnumValue(catch_linked);};
__int32 faction_score_min;
__int32 faction_score_max;
bool leave_zone_detach;
bool not_dead_to_exhaustion_detach;
bool effect_region_leaved_detach;
bool invoked_by_effect;
__int8 event_effect_target[4];
std::wstring event_effect_target_EnumValue(int index) const {return Get_event_effect_target_EnumValue(event_effect_target[index]);};
Data::TableRef event_effect[4];
int event_effect_tableId(){return 111;};
__int8 second_slot_event_effect_target[4];
std::wstring second_slot_event_effect_target_EnumValue(int index) const {return Get_second_slot_event_effect_target_EnumValue(second_slot_event_effect_target[index]);};
Data::TableRef second_slot_event_effect[4];
int second_slot_event_effect_tableId(){return 111;};
__int8 third_slot_event_effect_target[4];
std::wstring third_slot_event_effect_target_EnumValue(int index) const {return Get_third_slot_event_effect_target_EnumValue(third_slot_event_effect_target[index]);};
Data::TableRef third_slot_event_effect[4];
int third_slot_event_effect_tableId(){return 111;};
__int8 fourth_slot_event_effect_target[4];
std::wstring fourth_slot_event_effect_target_EnumValue(int index) const {return Get_fourth_slot_event_effect_target_EnumValue(fourth_slot_event_effect_target[index]);};
Data::TableRef fourth_slot_event_effect[4];
int fourth_slot_event_effect_tableId(){return 111;};
__int16 modify_ability[8];
std::wstring modify_ability_EnumValue(int index) const {return Get_modify_ability_EnumValue(modify_ability[index]);};
__int64 modify_ability_diff[8];
__int16 modify_ability_percent[8];
__int8 passive_moveanim_idle;
std::wstring passive_moveanim_idle_EnumValue() const {return Get_passive_moveanim_idle_EnumValue(passive_moveanim_idle);};
bool pause_auto_targeting;
bool not_targetable;
bool is_dot_effect;
bool no_critical_hit;
bool party_broadcast;
__int8 ui_slot;
std::wstring ui_slot_EnumValue() const {return Get_ui_slot_EnumValue(ui_slot);};
__int8 ui_category;
std::wstring ui_category_EnumValue() const {return Get_ui_category_EnumValue(ui_category);};
bool use_extra_skill_stack_count;
__int8 combat_job[2];
std::wstring combat_job_EnumValue(int index) const {return Get_combat_job_EnumValue(combat_job[index]);};
bool ui_difficult;
bool is_transform_effect;
bool is_reuse_standby_effect;
__int8 item_type;
std::wstring item_type_EnumValue() const {return Get_item_type_EnumValue(item_type);};
bool is_powergauge_effect;
bool ignore_hide_buff_graph_effect;
bool is_battle_royal_field_pc_info;
__int8 battle_royal_field_effect_pouch_group;
std::wstring battle_royal_field_effect_pouch_group_EnumValue() const {return Get_battle_royal_field_effect_pouch_group_EnumValue(battle_royal_field_effect_pouch_group);};
__int8 grocery_effect_type;
std::wstring grocery_effect_type_EnumValue() const {return Get_grocery_effect_type_EnumValue(grocery_effect_type);};
__int16 grocery_effect_level;
bool knockback_jump;
__int8 idleanimpriority;
wchar_t* normal_component;
wchar_t* critical_component;
wchar_t* back_normal_component;
wchar_t* back_critical_component;
wchar_t* buff_continuance_component;
wchar_t* immune_buff_component;
wchar_t* detach_show;
wchar_t* dispel_show;
bool play_detach_show_hide;
char Pad3[3];
wchar_t* die_show;
wchar_t* additional_die_show;
wchar_t* exhaustion_show;
wchar_t* immuned_show;
wchar_t* caster_show;
wchar_t* fire_show;
bool animation_freeze;
char Pad4[3];
Data::TableRef icon_texture;
int icon_texture_tableId(){return 178;};
__int16 icon_index;
char Pad5[2];
Data::IconRef icon;
Data::TableRef description2;
int description2_tableId(){return 405;};
Data::TableRef description3;
int description3_tableId(){return 405;};
Data::TableRef description4;
int description4_tableId(){return 405;};
Data::TableRef description5;
int description5_tableId(){return 405;};
Data::TableRef description_constellation;
int description_constellation_tableId(){return 405;};
__int8 description2_arg_type[4];
std::wstring description2_arg_type_EnumValue(int index) const {return Get_description2_arg_type_EnumValue(description2_arg_type[index]);};
wchar_t* description2_arg_value[4];
__int32 mount_attach_duration;
__int32 mount_detach_duration;
Data::TableRef linker_abnormal;
int linker_abnormal_tableId(){return 233;};
Data::TableRef linkee_abnormal;
int linkee_abnormal_tableId(){return 233;};
__int32 link_attach_duration;
__int32 link_detach_duration;
bool catch_legs_physics;
bool catch_arms_physics;
bool catch_body_physics;
bool camera_block;
__int8 battle_message_type;
std::wstring battle_message_type_EnumValue() const {return Get_battle_message_type_EnumValue(battle_message_type);};
char Pad6[3];
wchar_t* flash_sound_mode;
__int8 skillresultpriority;
char Pad7[3];
wchar_t* hit_show;
wchar_t* miss_show;
wchar_t* dodge_show;
wchar_t* parry_show;
wchar_t* perfect_parry_show;
wchar_t* bounce_show;
wchar_t* conter_show;
wchar_t* critical_hit_show;
bool damagesignal;
bool play_despawn_show;
bool play_transit;
char Pad8[1];
__int32 transit_time;
__int8 duel_warp;
std::wstring duel_warp_EnumValue() const {return Get_duel_warp_EnumValue(duel_warp);};
char Pad9[3];
Data::TableRef attach_notify_message;
int attach_notify_message_tableId(){return 151;};
Data::TableRef description_item_random_option;
int description_item_random_option_tableId(){return 405;};

		static TableVersion Version() { return TableVersion(34, 0); }
		static __int16 TableId() { return 111; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) effect_RecordPtr // : DrRecordPtr
	{
		effect_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::effect_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}