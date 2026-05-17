#pragma once

/**
 * SFX Hash Type (HT) constants for EuroSound Editor EngineX
 * Ice Age 2: The Meltdown v2.80
 * 
 * Comprehensive hash codes for all sound effects organized by category:
 * - Test/validation sounds
 * - Ambient sounds (nature, weather, locations)
 * - Character sounds (Diego, Scrat, etc.)
 * - Enemy sounds (all creature types)
 * - HUD/UI sounds
 * - Level-specific sounds
 * - Minigame sounds
 */

/* ===== TEST/VALIDATION SOUNDS ===== */
#define HT_Sound_SFX_AA_STREAM                          0x2D700001
#define HT_Sound_SFX_AA_TEST_1_SEC_INTER_DELAY          0x2D7001D0
#define HT_Sound_SFX_AA_TEST_1_SEC_INTER_DELAY_1_SEC_SAMPLE  0x2D7001D2
#define HT_Sound_SFX_AA_TEST_HALF_SEC_NEG_INTER_DELAY   0x2D7001D1

/* ===== AMBIENT SOUNDS - BIRDS ===== */
#define HT_Sound_SFX_AMB_BIRDS_1SHOT                    0x2D700090
#define HT_Sound_SFX_AMB_BIRDS_1SHOT_2                  0x2D7000A9
#define HT_Sound_SFX_AMB_BIRDS_LIVELY_1                 0x2D70008E
#define HT_Sound_SFX_AMB_BIRDS_LIVELY_2                 0x2D70008F
#define HT_Sound_SFX_AMB_BIRDS_LIVELY_3                 0x2D7000A8
#define HT_Sound_SFX_AMB_BIRDS_SWAMP_1SHOT_1            0x2D7000C9

/* ===== AMBIENT SOUNDS - WATER ===== */
#define HT_Sound_SFX_AMB_BROOK_LARGE_1                  0x2D700032
#define HT_Sound_SFX_AMB_BROOK_LARGE_1_3D               0x2D700083
#define HT_Sound_SFX_AMB_BROOK_SMALL_1                  0x2D700033
#define HT_Sound_SFX_AMB_BROOK_SMALL_1_3D               0x2D700084
#define HT_Sound_SFX_AMB_LAPPING_LAKE_1                 0x2D700031
#define HT_Sound_SFX_AMB_LAPPING_LAKE_1_3D              0x2D700085
#define HT_Sound_SFX_AMB_WATERFALL_CLOSE                0x2D700093
#define HT_Sound_SFX_AMB_WATERFALL_LARGE_CLOSE          0x2D700095
#define HT_Sound_SFX_AMB_WATERFALL_LARGE_CLOSE_LEV_1_3  0x2D7008EC
#define HT_Sound_SFX_AMB_WATERFALL_LARGE_CLOSE_LEV_1_3_SAMPLE  0x2D7008F6
#define HT_Sound_SFX_AMB_WATERFALL_LARGE_DISTANT        0x2D700094
#define HT_Sound_SFX_AMB_WATERFALL_LARGE_DISTANT_LEV_1_3  0x2D7008ED
#define HT_Sound_SFX_AMB_WATERFALL_MEDIUM_1             0x2D700034
#define HT_Sound_SFX_AMB_WATERFALL_MEDIUM_1_3D          0x2D700082
#define HT_Sound_SFX_AMB_WATERFALL_SMALL_CLOSE          0x2D700092
#define HT_Sound_SFX_AMB_WATERFALL_UNDERWATER           0x2D700116
#define HT_Sound_SFX_AMB_WATERFALL_BIRDS                0x2D700097
#define HT_Sound_SFX_AMB_WATER_CALM                     0x2D700096
#define HT_Sound_SFX_AMB_WATER_CALM_REVERB              0x2D7000EF
#define HT_Sound_SFX_AMB_WATER_STREAM                   0x2D7000A7
#define HT_Sound_SFX_AMB_WATER_CAVE_ENTRANCE            0x2D700209

/* ===== AMBIENT SOUNDS - CAVE/MUD ===== */
#define HT_Sound_SFX_AMB_CAVE_1                         0x2D700098
#define HT_Sound_SFX_AMB_CAVE_DRIPS                     0x2D70013D
#define HT_Sound_SFX_AMB_CAVE_DRIPS2                    0x2D70064C
#define HT_Sound_SFX_AMB_CAVE_DRIPS2_3D                 0x2D700843
#define HT_Sound_SFX_AMB_CAVE_MUD                       0x2D700132
#define HT_Sound_SFX_AMB_CAVE_MUD_PIT                   0x2D700131
#define HT_Sound_SFX_AMB_DRIPS_SMALL_ON_GROUND_3D       0x2D700147
#define HT_Sound_SFX_AMB_DRIPS_SMALL_ON_GROUND_REVERB_3D  0x2D70014F
#define HT_Sound_SFX_AMB_DRIPS_SMALL_ON_WATER_3D        0x2D700148
#define HT_Sound_SFX_AMB_DRIPS_SMALL_ON_WATER_REVERB_3D  0x2D700150
#define HT_Sound_SFX_AMB_WATERY_CAVE                    0x2D700165
#define HT_Sound_SFX_AMB_WATERY_CAVE_3D                 0x2D700166
#define HT_Sound_SFX_AMB_MUD_BUBBLES_1                  0x2D7000CE
#define HT_Sound_SFX_AMB_MUD_WATERFALL_1                0x2D7000CF
#define HT_Sound_SFX_AMB_MUD_WATERFALL_2                0x2D7000D0
#define HT_Sound_SFX_AMB_MUD_WATERFALL_3                0x2D7000D1
#define HT_Sound_SFX_AMB_MUD_WATERFALL_4                0x2D7000D2

/* ===== AMBIENT SOUNDS - FIRE ===== */
#define HT_Sound_SFX_AMB_FIRE_CRACKLE                   0x2D700192
#define HT_Sound_SFX_AMB_FIRE_MEDIUM                    0x2D700099

/* ===== AMBIENT SOUNDS - WIND ===== */
#define HT_Sound_SFX_AMB_WIND_1                         0x2D7000BC
#define HT_Sound_SFX_AMB_WIND_2                         0x2D7000BD
#define HT_Sound_SFX_AMB_WIND_3                         0x2D7000BE
#define HT_Sound_SFX_AMB_WIND_ARCTIC_1                  0x2D700030
#define HT_Sound_SFX_AMB_WIND_CAVE_1                    0x2D7000BF
#define HT_Sound_SFX_AMB_WIND_CAVE_2                    0x2D7000C0
#define HT_Sound_SFX_AMB_WIND_HEAVY_1                   0x2D7000C1
#define HT_Sound_SFX_AMB_WIND_HEAVY_2                   0x2D7000C2
#define HT_Sound_SFX_AMB_WIND_HEAVY_3                   0x2D7000C3
#define HT_Sound_SFX_AMB_WIND_HEAVY_4                   0x2D7000C4

/* ===== AMBIENT SOUNDS - SWAMP ===== */
#define HT_Sound_SFX_AMB_SWAMP_1                        0x2D7000C5
#define HT_Sound_SFX_AMB_SWAMP_2                        0x2D7000C6
#define HT_Sound_SFX_AMB_SWAMP_QUIET_1                  0x2D7000C7
#define HT_Sound_SFX_AMB_SWAMP_QUIET_2                  0x2D7000C8

/* ===== AMBIENT SOUNDS - MAELSTROM ===== */
#define HT_Sound_SFX_AMB_MAELSTROM                      0x2D7000CA
#define HT_Sound_SFX_AMB_MAELSTROM_1SHOT                0x2D7000CB
#define HT_Sound_SFX_AMB_MAELSTROM_2                    0x2D7000CC
#define HT_Sound_SFX_AMB_MAELSTROM_3                    0x2D7000CD
#define HT_Sound_SFX_AMB_MAELSTROM_DISTANT              0x2D7000DA
#define HT_Sound_SFX_AMB_MAELSTROM_DISTANT_1SHOT        0x2D7000D9
#define HT_Sound_SFX_AMB_MAELSTROM_DISTANT_2            0x2D7000DB
#define HT_Sound_SFX_AMB_MAELSTROM_HEARTBEAT_CLOSE      0x2D7000DC
#define HT_Sound_SFX_AMB_MAELSTROM_MOUTH_WAVES          0x2D70081A

/* ===== AMBIENT SOUNDS - RAIN ===== */
#define HT_Sound_SFX_AMB_RAIN_3D_DRIPS_FAST             0x2D700069
#define HT_Sound_SFX_AMB_RAIN_3D_DRIPS_SLOW             0x2D700068
#define HT_Sound_SFX_AMB_RAIN_FOLIAGE_HEAVY             0x2D700067
#define HT_Sound_SFX_AMB_RAIN_FOLIAGE_LIGHT             0x2D700066

/* ===== AMBIENT SOUNDS - UNDERWATER ===== */
#define HT_Sound_SFX_AMB_UNDERWATER_IN                  0x2D700105
#define HT_Sound_SFX_AMB_UNDERWATER_LOOP                0x2D700047
#define HT_Sound_SFX_AMB_UNDERWATER_OUT                 0x2D700106

/* ===== AMBIENT SOUNDS - SLOTH VILLAGE ===== */
#define HT_Sound_SFX_AMB_SLOTH_VILLAGE_1SHOTS           0x2D700194
#define HT_Sound_SFX_AMB_SLOTH_VILLAGE_LAVA             0x2D700195
#define HT_Sound_SFX_AMB_SLOTH_VILLAGE_NIGHT            0x2D700193

/* ===== AMBIENT SOUNDS - SPECIAL LOCATIONS ===== */
#define HT_Sound_SFX_AMB_UFO                            0x2D70018D
#define HT_Sound_SFX_AMB_RAM_UFO                        0x2D7008E1
#define HT_Sound_SFX_AMB_RAM_WATERFALL_LARGE_CLOSE      0x2D7008DE
#define HT_Sound_SFX_AMB_RAM_WATERFALL_LARGE_DISTANT    0x2D7008F4
#define HT_Sound_SFX_AMB_VOLCANO_VENTS                  0x2D7008F3
#define HT_Sound_SFX_AMB_SCURRY_HOLE_SUN                0x2D70088F
#define HT_Sound_SFX_AMB_SCURRY_HOLE_WIND               0x2D700890
#define HT_Sound_SFX_AMB_LEV_7_05                       0x2D7008E6

/* ===== AMBIENT SOUNDS - SLIDES ===== */
#define HT_Sound_SFX_AMB_SLIDE_BIRDS                    0x2D70085A
#define HT_Sound_SFX_AMB_SLIDE_CAVERN_1                 0x2D70021B
#define HT_Sound_SFX_AMB_SLIDE_CAVERN_2                 0x2D700221
#define HT_Sound_SFX_AMB_SLIDE_CAVERN_3                 0x2D700222
#define HT_Sound_SFX_AMB_SLIDE_CAVERN_4                 0x2D700223
#define HT_Sound_SFX_AMB_SLIDE_CAVERN_WATERFALLS        0x2D70021E
#define HT_Sound_SFX_AMB_SLIDE_CAVERN_WATER_1           0x2D70021C
#define HT_Sound_SFX_AMB_SLIDE_OUTSIDE_1                0x2D700217
#define HT_Sound_SFX_AMB_SLIDE_OUTSIDE_2                0x2D700218
#define HT_Sound_SFX_AMB_SLIDE_OUTSIDE_3                0x2D700219
#define HT_Sound_SFX_AMB_SLIDE_OUTSIDE_4                0x2D70021A
#define HT_Sound_SFX_AMB_SLIDE_OUTSIDE_FINAL_SECTION    0x2D700220
#define HT_Sound_SFX_AMB_SLIDE_OUTSIDE_OVER_WATER       0x2D70021F
#define HT_Sound_SFX_AMB_SLIDE_WATERFALLS               0x2D70021D

/* ===== AMBIENT SOUNDS - MUDBOG ===== */
#define HT_Sound_SFX_AMB_MUDBOG_3_1ST_SECTION           0x2D70020A
#define HT_Sound_SFX_AMB_MUDBOG_3_2ND_SECTION           0x2D70020B
#define HT_Sound_SFX_AMB_MUDBOG_3_3RD_SECTION           0x2D70020C
#define HT_Sound_SFX_AMB_MUDBOG_WIND                    0x2D70020D

/* ===== CHARACTER SOUNDS - DIEGO ===== */
#define HT_Sound_SFX_DIEGO_EXPRESS_PLAYDEAD_SNARL       0x2D700239
#define HT_Sound_SFX_DIEGO_EXPRESS_PLAYDEAD_STRIKE      0x2D700237
#define HT_Sound_SFX_DIEGO_EXPRESS_PLAYDEAD_TAKEHIT     0x2D700238
#define HT_Sound_SFX_DIEGO_EXPRESS_STRIKE               0x2D70019F
#define HT_Sound_SFX_DIEGO_EXPRESS_TAKEHIT              0x2D70019E
#define HT_Sound_SFX_DIEGO_MOVE_LAND                    0x2D70019D
#define HT_Sound_SFX_DIEGO_MOVE_ROLL                    0x2D7001A0

/* ===== ENEMY SOUNDS - BAT ===== */
#define HT_Sound_SFX_ENEMY_BAT_FLY_SQUEAK               0x2D700101
#define HT_Sound_SFX_ENEMY_BAT_FLY_SQUEAK_LOOP          0x2D7001B9
#define HT_Sound_SFX_ENEMY_BAT_SWOOP                    0x2D700102
#define HT_Sound_SFX_ENEMY_BAT_TAKEHIT                  0x2D700117
#define HT_Sound_SFX_ENEMY_BAT_WING_FLAP                0x2D700100
#define HT_Sound_SFX_ENEMY_BAT_WING_FLAP_LOOP           0x2D70016E

/* ===== ENEMY SOUNDS - BEAR ===== */
#define HT_Sound_SFX_ENEMY_BEAR_ATTACK                  0x2D700862
#define HT_Sound_SFX_ENEMY_BEAR_BREATHE_IN              0x2D700866
#define HT_Sound_SFX_ENEMY_BEAR_BREATHE_OUT             0x2D700867
#define HT_Sound_SFX_ENEMY_BEAR_FALL_THUD               0x2D700865
#define HT_Sound_SFX_ENEMY_BEAR_IDLE_LOOK               0x2D70086B
#define HT_Sound_SFX_ENEMY_BEAR_IDLE_SCRATCH            0x2D700864
#define HT_Sound_SFX_ENEMY_BEAR_IDLE_SHAKE_L            0x2D700868
#define HT_Sound_SFX_ENEMY_BEAR_IDLE_SHAKE_R            0x2D700869
#define HT_Sound_SFX_ENEMY_BEAR_IDLE_TAUNT              0x2D700863
#define HT_Sound_SFX_ENEMY_BEAR_STEP_L                  0x2D700860
#define HT_Sound_SFX_ENEMY_BEAR_STEP_R                  0x2D700861
#define HT_Sound_SFX_ENEMY_BEAR_TAKEHIT                 0x2D70086A

/* ===== ENEMY SOUNDS - BEAVER ===== */
#define HT_Sound_SFX_ENEMY_BEAVER_ATTACK                0x2D700151
#define HT_Sound_SFX_ENEMY_BEAVER_FALLTHUD_1            0x2D700230
#define HT_Sound_SFX_ENEMY_BEAVER_FALLTHUD_2            0x2D700231
#define HT_Sound_SFX_ENEMY_BEAVER_GROUNDSTOMP_1         0x2D700152
#define HT_Sound_SFX_ENEMY_BEAVER_GROUNDSTOMP_2         0x2D700153
#define HT_Sound_SFX_ENEMY_BEAVER_IDLE                  0x2D700154
#define HT_Sound_SFX_ENEMY_BEAVER_SHRUG                 0x2D700157
#define HT_Sound_SFX_ENEMY_BEAVER_STEP_L                0x2D700232
#define HT_Sound_SFX_ENEMY_BEAVER_STEP_R                0x2D700233
#define HT_Sound_SFX_ENEMY_BEAVER_TAKEHIT               0x2D700156
#define HT_Sound_SFX_ENEMY_BEAVER_TAUNT                 0x2D700155
#define HT_Sound_SFX_ENEMY_BEAVER_THROW_SWISH           0x2D70022F

/* ===== ENEMY SOUNDS - BOAR ===== */
#define HT_Sound_SFX_ENEMY_BOAR_ATTACK                  0x2D700107
#define HT_Sound_SFX_ENEMY_BOAR_FALL                    0x2D700837
#define HT_Sound_SFX_ENEMY_BOAR_MOVE_GRUNT              0x2D700108
#define HT_Sound_SFX_ENEMY_BOAR_STEP_L                  0x2D7000F2
#define HT_Sound_SFX_ENEMY_BOAR_STEP_R                  0x2D7000F1
#define HT_Sound_SFX_ENEMY_BOAR_TAKEHIT                 0x2D700109
#define HT_Sound_SFX_ENEMY_BOAR_WARN                    0x2D700146

/* ===== ENEMY SOUNDS - DIVING BIRD ===== */
#define HT_Sound_SFX_ENEMY_DIVING_BIRD_ATTACK           0x2D700206
#define HT_Sound_SFX_ENEMY_DIVING_BIRD_BEAK_PULL        0x2D700891
#define HT_Sound_SFX_ENEMY_DIVING_BIRD_BEAK_PULLOUT     0x2D700892
#define HT_Sound_SFX_ENEMY_DIVING_BIRD_BEAK_SNAP        0x2D7000E2
#define HT_Sound_SFX_ENEMY_DIVING_BIRD_BEAK_STUCK       0x2D700893
#define HT_Sound_SFX_ENEMY_DIVING_BIRD_FALL_1           0x2D7000E4
#define HT_Sound_SFX_ENEMY_DIVING_BIRD_FALL_2           0x2D7000E5
#define HT_Sound_SFX_ENEMY_DIVING_BIRD_IDLE             0x2D700208
#define HT_Sound_SFX_ENEMY_DIVING_BIRD_STEP_L           0x2D7000E0
#define HT_Sound_SFX_ENEMY_DIVING_BIRD_STEP_R           0x2D7000E1
#define HT_Sound_SFX_ENEMY_DIVING_BIRD_TAUNT            0x2D700207

/* ===== ENEMY SOUNDS - DODO ===== */
#define HT_Sound_SFX_ENEMY_DODO_FALL                    0x2D700834
#define HT_Sound_SFX_ENEMY_DODO_SQUAWK                  0x2D700079
#define HT_Sound_SFX_ENEMY_DODO_SQUAWK_LONG             0x2D70007B
#define HT_Sound_SFX_ENEMY_DODO_SQUAWK_SHORT            0x2D70007A
#define HT_Sound_SFX_ENEMY_DODO_STEP_L                  0x2D70007C
#define HT_Sound_SFX_ENEMY_DODO_STEP_R                  0x2D70007D

/* ===== ENEMY SOUNDS - DUNG BEETLE ===== */
#define HT_Sound_SFX_ENEMY_DUNGBEETLE_ATTACK            0x2D7000BB
#define HT_Sound_SFX_ENEMY_DUNGBEETLE_DIE               0x2D7000B9
#define HT_Sound_SFX_ENEMY_DUNGBEETLE_DIE_LAND          0x2D7000BA
#define HT_Sound_SFX_ENEMY_DUNGBEETLE_FALL_THUD         0x2D70018B
#define HT_Sound_SFX_ENEMY_DUNGBEETLE_RUN_L             0x2D7000B5
#define HT_Sound_SFX_ENEMY_DUNGBEETLE_RUN_R             0x2D7000B6
#define HT_Sound_SFX_ENEMY_DUNGBEETLE_SHELL_RATTLE      0x2D70018C
#define HT_Sound_SFX_ENEMY_DUNGBEETLE_TAKEHIT           0x2D7000B7
#define HT_Sound_SFX_ENEMY_DUNGBEETLE_TAUNT             0x2D70018A
#define HT_Sound_SFX_ENEMY_DUNGBEETLE_THROW             0x2D7000B8
#define HT_Sound_SFX_ENEMY_DUNGBEETLE_THROW_SPLAT       0x2D700197
#define HT_Sound_SFX_ENEMY_DUNGBEETLE_THROW_WHOOSH      0x2D700196

/* ===== ENEMY SOUNDS - ELECTRIC FISH ===== */
#define HT_Sound_SFX_ENEMY_EFISH_LAND                   0x2D700850
#define HT_Sound_SFX_ENEMY_EFISH_SCREAM                 0x2D700806
#define HT_Sound_SFX_ENEMY_EFISH_SPIT                   0x2D700805
#define HT_Sound_SFX_ENEMY_EFISH_SPLAT                  0x2D700826
#define HT_Sound_SFX_ENEMY_EFISH_STEP_L                 0x2D700803
#define HT_Sound_SFX_ENEMY_EFISH_STEP_R                 0x2D700804
#define HT_Sound_SFX_ENEMY_EFISH_TAUNT                  0x2D700807

/* ===== ENEMY SOUNDS - GENERIC ===== */
#define HT_Sound_SFX_ENEMY_GENERIC_DAZED                0x2D7001A1
#define HT_Sound_SFX_ENEMY_GENERIC_EXPLODE              0x2D70017E

/* ===== ENEMY SOUNDS - INSECTS (COCKROACH) ===== */
#define HT_Sound_SFX_ENEMY_INSECT_COCKROACH_MOVE_LOOP   0x2D70004A
#define HT_Sound_SFX_ENEMY_INSECT_COCKROACH_MOVE_LOOP1  0x2D700048
#define HT_Sound_SFX_ENEMY_INSECT_COCKROACH_MOVE_LOOP2  0x2D700049
#define HT_Sound_SFX_ENEMY_INSECT_COCKROACH_SCREAM      0x2D70006F
#define HT_Sound_SFX_ENEMY_INSECT_COCKROACH_SQUISH      0x2D70006E
#define HT_Sound_SFX_ENEMY_INSECT_COCKROACH_TAKEHIT     0x2D70004B

/* ===== ENEMY SOUNDS - INSECTS (FIREFLY) ===== */
#define HT_Sound_SFX_ENEMY_INSECT_FIREFLY_BUZZ_LOOP     0x2D700141
#define HT_Sound_SFX_ENEMY_INSECT_FIREFLY_TAKEHIT       0x2D7000F0

/* ===== ENEMY SOUNDS - INSECTS (SPIDER) ===== */
#define HT_Sound_SFX_ENEMY_INSECT_SPIDER_ATTACK         0x2D7000B2
#define HT_Sound_SFX_ENEMY_INSECT_SPIDER_FALL           0x2D700821
#define HT_Sound_SFX_ENEMY_INSECT_SPIDER_STEP           0x2D7000B3
#define HT_Sound_SFX_ENEMY_INSECT_SPIDER_TAKEHIT        0x2D7000B4
#define HT_Sound_SFX_ENEMY_INSECT_SPIDER_TALKLOOP       0x2D7000B1
#define HT_Sound_SFX_ENEMY_INSECT_SPIDER_WEB_BURST      0x2D70018F
#define HT_Sound_SFX_ENEMY_INSECT_SPIDER_WEB_SPIT       0x2D700190
#define HT_Sound_SFX_ENEMY_INSECT_SPIDER_WEB_SPLAT      0x2D700191

/* ===== ENEMY SOUNDS - INSECTS (TREE BEETLE) ===== */
#define HT_Sound_SFX_ENEMY_INSECT_TREEBEETLE_IDLE       0x2D700836
#define HT_Sound_SFX_ENEMY_INSECT_TREEBEETLE_STEP       0x2D70017F
#define HT_Sound_SFX_ENEMY_INSECT_TREEBEETLE_TAKEHIT    0x2D700180

/* ===== ENEMY SOUNDS - INSECTS (WASP) ===== */
#define HT_Sound_SFX_ENEMY_INSECT_WASP_BUZZ_LOOP        0x2D700149
#define HT_Sound_SFX_ENEMY_INSECT_WASP_STING            0x2D70022E
#define HT_Sound_SFX_ENEMY_INSECT_WASP_STING_BUZZ       0x2D700234
#define HT_Sound_SFX_ENEMY_INSECT_WASP_STING_PLUCK      0x2D700235
#define HT_Sound_SFX_ENEMY_INSECT_WASP_TAKEHIT          0x2D7001F2

/* ===== ENEMY SOUNDS - MONKEY ===== */
#define HT_Sound_SFX_ENEMY_MONKEY_BREATHE               0x2D70008A
#define HT_Sound_SFX_ENEMY_MONKEY_EFFORT                0x2D70008B
#define HT_Sound_SFX_ENEMY_MONKEY_FALL_THUD             0x2D700838
#define HT_Sound_SFX_ENEMY_MONKEY_LOOK                  0x2D70008C
#define HT_Sound_SFX_ENEMY_MONKEY_PROJECTILE_SMASH      0x2D7001A5
#define HT_Sound_SFX_ENEMY_MONKEY_STEP_L                0x2D700086
#define HT_Sound_SFX_ENEMY_MONKEY_STEP_R                0x2D700087
#define HT_Sound_SFX_ENEMY_MONKEY_TAKEHIT               0x2D700089
#define HT_Sound_SFX_ENEMY_MONKEY_THROW_WHOOSH          0x2D70089B

/* ===== ENEMY SOUNDS - PIRANHA ===== */
#define HT_Sound_SFX_ENEMY_PIRANHA_BITE                 0x2D700081

/* ===== ENEMY SOUNDS - RAT ===== */
#define HT_Sound_SFX_ENEMY_RAT_ATTACK                   0x2D7000D8
#define HT_Sound_SFX_ENEMY_RAT_STEP                     0x2D7000D6
#define HT_Sound_SFX_ENEMY_RAT_TAKEHIT                  0x2D7000D7

/* ===== ENEMY SOUNDS - SPIDER MOTHER ===== */
#define HT_Sound_SFX_ENEMY_SPIDERMOTHER_BREATHE         0x2D70088E
#define HT_Sound_SFX_ENEMY_SPIDERMOTHER_LAND_THUD       0x2D70088D
#define HT_Sound_SFX_ENEMY_SPIDERMOTHER_SCREAM          0x2D700674
#define HT_Sound_SFX_ENEMY_SPIDERMOTHER_SPIT            0x2D700673
#define HT_Sound_SFX_ENEMY_SPIDERMOTHER_STEP_L          0x2D700671
#define HT_Sound_SFX_ENEMY_SPIDERMOTHER_STEP_R          0x2D700672

/* ===== ENEMY SOUNDS - STOMACH BLOB ===== */
#define HT_Sound_SFX_ENEMY_STOMACHBLOB_MOVE_DOWN        0x2D7001B1
#define HT_Sound_SFX_ENEMY_STOMACHBLOB_MOVE_UP          0x2D7001B0
#define HT_Sound_SFX_ENEMY_STOMACHBLOB_MOVE_WIGGLE_L    0x2D7001B2
#define HT_Sound_SFX_ENEMY_STOMACHBLOB_MOVE_WIGGLE_R    0x2D7001B3
#define HT_Sound_SFX_ENEMY_STOMACHBLOB_SPLAT            0x2D7001AF

/* ===== ENEMY SOUNDS - TOAD ===== */
#define HT_Sound_SFX_ENEMY_TOAD_CROAK                   0x2D7000AF
#define HT_Sound_SFX_ENEMY_TOAD_CROAK_D                 0x2D7000AB
#define HT_Sound_SFX_ENEMY_TOAD_CROAK_U                 0x2D7000AA
#define HT_Sound_SFX_ENEMY_TOAD_FALL                    0x2D700802
#define HT_Sound_SFX_ENEMY_TOAD_STEP_D                  0x2D7000AC
#define HT_Sound_SFX_ENEMY_TOAD_STEP_U                  0x2D7000AD
#define HT_Sound_SFX_ENEMY_TOAD_TAKEHIT                 0x2D7000B0
#define HT_Sound_SFX_ENEMY_TOAD_TONGUE                  0x2D7000AE

/* ===== ENEMY SOUNDS - WOLF ===== */
#define HT_Sound_SFX_ENEMY_WOLF_BARK                    0x2D700854
#define HT_Sound_SFX_ENEMY_WOLF_BREATHE_IN              0x2D700855
#define HT_Sound_SFX_ENEMY_WOLF_BREATHE_OUT             0x2D700856
#define HT_Sound_SFX_ENEMY_WOLF_FALL                    0x2D700857
#define HT_Sound_SFX_ENEMY_WOLF_HOWL                    0x2D700859
#define HT_Sound_SFX_ENEMY_WOLF_SNIFF                   0x2D700858
#define HT_Sound_SFX_ENEMY_WOLF_STEP_L                  0x2D700851
#define HT_Sound_SFX_ENEMY_WOLF_STEP_R                  0x2D700852
#define HT_Sound_SFX_ENEMY_WOLF_TAKEHIT                 0x2D700853

/* ===== HUD/UI SOUNDS - GENERAL ===== */
#define HT_Sound_SFX_HUD_ALTER                          0x2D7000D3
#define HT_Sound_SFX_HUD_CHANGE                         0x2D700057
#define HT_Sound_SFX_HUD_FIRSTPERSON                    0x2D70016F
#define HT_Sound_SFX_HUD_IN                             0x2D700055
#define HT_Sound_SFX_HUD_LOCKED                         0x2D7001C8
#define HT_Sound_SFX_HUD_LOGO_APPEAR                    0x2D7008EB
#define HT_Sound_SFX_HUD_MOVE                           0x2D700054
#define HT_Sound_SFX_HUD_OUT                            0x2D700056
#define HT_Sound_SFX_HUD_PAUSE                          0x2D700058
#define HT_Sound_SFX_HUD_PROMPT                         0x2D700091
#define HT_Sound_SFX_HUD_SCREEN_WIPE_OFF                0x2D700163
#define HT_Sound_SFX_HUD_SCREEN_WIPE_ON                 0x2D700162
#define HT_Sound_SFX_HUD_TEXT_APPEAR                    0x2D7000F4
#define HT_Sound_SFX_HUD_TEXT_BUTTON                    0x2D7000F3
#define HT_Sound_SFX_HUD_TEXT_DISAPPEAR                 0x2D7000F5
#define HT_Sound_SFX_HUD_UNLOCK_BONUS                   0x2D7001FF

/* ===== HUD - MINIGAME CLOCK ===== */
#define HT_Sound_SFX_HUD_MINIGAME_CLOCK_TICK            0x2D700174
#define HT_Sound_SFX_HUD_MINIGAME_CLOCK_TOCK            0x2D700175
#define HT_Sound_SFX_HUD_MINIGAME_CLOCK_URGENT_TICK_TOCK  0x2D70017A

/* ===== HUD - MINIGAME GENERIC ===== */
#define HT_Sound_SFX_HUD_MINIGAME_NO                    0x2D700104
#define HT_Sound_SFX_HUD_MINIGAME_YES                   0x2D700103
#define HT_Sound_SFX_HUD_MINIGAME_REVEAL                0x2D700111

/* ===== HUD - MINIGAME SIMON ===== */
#define HT_Sound_SFX_HUD_MINIGAME_SIMON_BEAVER_1        0x2D700185
#define HT_Sound_SFX_HUD_MINIGAME_SIMON_BEAVER_2        0x2D700186
#define HT_Sound_SFX_HUD_MINIGAME_SIMON_BEAVER_3        0x2D700187
#define HT_Sound_SFX_HUD_MINIGAME_SIMON_BEAVER_4        0x2D700188
#define HT_Sound_SFX_HUD_MINIGAME_SIMON_BEAVER_5        0x2D700189

/* ===== HUD - MINIGAME WHACK ===== */
#define HT_Sound_SFX_HUD_MINIGAME_WHACK_DIEGO_SNARL     0x2D70083C
#define HT_Sound_SFX_HUD_MINIGAME_WHACK_HIT_BEAVER      0x2D700179
#define HT_Sound_SFX_HUD_MINIGAME_WHACK_HIT_PORCUPINE   0x2D700176
#define HT_Sound_SFX_HUD_MINIGAME_WHACK_HIT_SKUNK       0x2D700177
#define HT_Sound_SFX_HUD_MINIGAME_WHACK_PEA_SHOOTER     0x2D70083D
#define HT_Sound_SFX_HUD_MINIGAME_WHACK_POISON_GAS      0x2D70083B
#define HT_Sound_SFX_HUD_MINIGAME_WHACK_POPUP           0x2D700178

/* ===== HUD - MISC ===== */
#define HT_Sound_SFX_HUD_MISC_SCORE_POINT               0x2D7001E6
#define HT_Sound_SFX_HUD_MISC_SCORE_POINT_WIN           0x2D7001E7

#endif // HT_SOUND_SFX_H
