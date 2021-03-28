
// Layers
PyModule_AddIntConstant(pMario, "LAYER_FORCE", LAYER_FORCE);
PyModule_AddIntConstant(pMario, "LAYER_OPAQUE", LAYER_OPAQUE);
PyModule_AddIntConstant(pMario, "LAYER_OPAQUE_DECAL", LAYER_OPAQUE_DECAL);
PyModule_AddIntConstant(pMario, "LAYER_OPAQUE_INTER", LAYER_OPAQUE_INTER);
PyModule_AddIntConstant(pMario, "LAYER_ALPHA", LAYER_ALPHA);
PyModule_AddIntConstant(pMario, "LAYER_TRANSPARENT", LAYER_TRANSPARENT);
PyModule_AddIntConstant(pMario, "LAYER_TRANSPARENT_DECAL", LAYER_TRANSPARENT_DECAL);
PyModule_AddIntConstant(pMario, "LAYER_TRANSPARENT_INTER", LAYER_TRANSPARENT_INTER);

PyModule_AddIntConstant(pMario, "INPUT_NONZERO_ANALOG", INPUT_NONZERO_ANALOG);
PyModule_AddIntConstant(pMario, "INPUT_A_PRESSED", INPUT_A_PRESSED);
PyModule_AddIntConstant(pMario, "INPUT_OFF_FLOOR", INPUT_OFF_FLOOR);
PyModule_AddIntConstant(pMario, "INPUT_ABOVE_SLIDE", INPUT_ABOVE_SLIDE);
PyModule_AddIntConstant(pMario, "INPUT_FIRST_PERSON", INPUT_FIRST_PERSON);
PyModule_AddIntConstant(pMario, "INPUT_UNKNOWN_5", INPUT_UNKNOWN_5);
PyModule_AddIntConstant(pMario, "INPUT_SQUISHED", INPUT_SQUISHED);
PyModule_AddIntConstant(pMario, "INPUT_A_DOWN", INPUT_A_DOWN);
PyModule_AddIntConstant(pMario, "INPUT_IN_POISON_GAS", INPUT_IN_POISON_GAS);
PyModule_AddIntConstant(pMario, "INPUT_IN_WATER", INPUT_IN_WATER);
PyModule_AddIntConstant(pMario, "INPUT_UNKNOWN_10", INPUT_UNKNOWN_10);
PyModule_AddIntConstant(pMario, "INPUT_INTERACT_OBJ_GRABBABLE", INPUT_INTERACT_OBJ_GRABBABLE);
PyModule_AddIntConstant(pMario, "INPUT_UNKNOWN_12", INPUT_UNKNOWN_12);
PyModule_AddIntConstant(pMario, "INPUT_B_PRESSED", INPUT_B_PRESSED);
PyModule_AddIntConstant(pMario, "INPUT_Z_DOWN", INPUT_Z_DOWN);
PyModule_AddIntConstant(pMario, "INPUT_Z_PRESSED", INPUT_Z_PRESSED);

PyModule_AddIntConstant(pMario, "GROUND_STEP_LEFT_GROUND", GROUND_STEP_LEFT_GROUND);
PyModule_AddIntConstant(pMario, "GROUND_STEP_NONE", GROUND_STEP_NONE);
PyModule_AddIntConstant(pMario, "GROUND_STEP_HIT_WALL", GROUND_STEP_HIT_WALL);
PyModule_AddIntConstant(pMario, "GROUND_STEP_HIT_WALL_STOP_QSTEPS", GROUND_STEP_HIT_WALL_STOP_QSTEPS);
PyModule_AddIntConstant(pMario, "GROUND_STEP_HIT_WALL_CONTINUE_QSTEPS", GROUND_STEP_HIT_WALL_CONTINUE_QSTEPS);

PyModule_AddIntConstant(pMario, "AIR_STEP_CHECK_LEDGE_GRAB", AIR_STEP_CHECK_LEDGE_GRAB);
PyModule_AddIntConstant(pMario, "AIR_STEP_CHECK_HANG", AIR_STEP_CHECK_HANG);

PyModule_AddIntConstant(pMario, "AIR_STEP_NONE", AIR_STEP_NONE);
PyModule_AddIntConstant(pMario, "AIR_STEP_LANDED", AIR_STEP_LANDED);
PyModule_AddIntConstant(pMario, "AIR_STEP_HIT_WALL", AIR_STEP_HIT_WALL);
PyModule_AddIntConstant(pMario, "AIR_STEP_GRABBED_LEDGE", AIR_STEP_GRABBED_LEDGE);
PyModule_AddIntConstant(pMario, "AIR_STEP_GRABBED_CEILING", AIR_STEP_GRABBED_CEILING);
PyModule_AddIntConstant(pMario, "AIR_STEP_HIT_LAVA_WALL", AIR_STEP_HIT_LAVA_WALL);

PyModule_AddIntConstant(pMario, "WATER_STEP_NONE", WATER_STEP_NONE);
PyModule_AddIntConstant(pMario, "WATER_STEP_HIT_FLOOR", WATER_STEP_HIT_FLOOR);
PyModule_AddIntConstant(pMario, "WATER_STEP_HIT_CEILING", WATER_STEP_HIT_CEILING);
PyModule_AddIntConstant(pMario, "WATER_STEP_CANCELLED", WATER_STEP_CANCELLED);
PyModule_AddIntConstant(pMario, "WATER_STEP_HIT_WALL", WATER_STEP_HIT_WALL);

PyModule_AddIntConstant(pMario, "PARTICLE_DUST", PARTICLE_DUST);
PyModule_AddIntConstant(pMario, "PARTICLE_VERTICAL_STAR", PARTICLE_VERTICAL_STAR);
PyModule_AddIntConstant(pMario, "PARTICLE_2", PARTICLE_2);
PyModule_AddIntConstant(pMario, "PARTICLE_SPARKLES", PARTICLE_SPARKLES);
PyModule_AddIntConstant(pMario, "PARTICLE_HORIZONTAL_STAR", PARTICLE_HORIZONTAL_STAR);
PyModule_AddIntConstant(pMario, "PARTICLE_BUBBLE", PARTICLE_BUBBLE);
PyModule_AddIntConstant(pMario, "PARTICLE_WATER_SPLASH", PARTICLE_WATER_SPLASH);
PyModule_AddIntConstant(pMario, "PARTICLE_IDLE_WATER_WAVE", PARTICLE_IDLE_WATER_WAVE);
PyModule_AddIntConstant(pMario, "PARTICLE_SHALLOW_WATER_WAVE", PARTICLE_SHALLOW_WATER_WAVE);
PyModule_AddIntConstant(pMario, "PARTICLE_PLUNGE_BUBBLE", PARTICLE_PLUNGE_BUBBLE);
PyModule_AddIntConstant(pMario, "PARTICLE_WAVE_TRAIL", PARTICLE_WAVE_TRAIL);
PyModule_AddIntConstant(pMario, "PARTICLE_FIRE", PARTICLE_FIRE);
PyModule_AddIntConstant(pMario, "PARTICLE_SHALLOW_WATER_SPLASH", PARTICLE_SHALLOW_WATER_SPLASH);
PyModule_AddIntConstant(pMario, "PARTICLE_LEAF", PARTICLE_LEAF);
PyModule_AddIntConstant(pMario, "PARTICLE_SNOW", PARTICLE_SNOW);
PyModule_AddIntConstant(pMario, "PARTICLE_DIRT", PARTICLE_DIRT);
PyModule_AddIntConstant(pMario, "PARTICLE_MIST_CIRCLE", PARTICLE_MIST_CIRCLE);
PyModule_AddIntConstant(pMario, "PARTICLE_BREATH", PARTICLE_BREATH);
PyModule_AddIntConstant(pMario, "PARTICLE_TRIANGLE", PARTICLE_TRIANGLE);
PyModule_AddIntConstant(pMario, "PARTICLE_19", PARTICLE_19);

PyModule_AddIntConstant(pMario, "MODEL_STATE_NOISE_ALPHA", MODEL_STATE_NOISE_ALPHA);
PyModule_AddIntConstant(pMario, "MODEL_STATE_METAL", MODEL_STATE_METAL);

PyModule_AddIntConstant(pMario, "MARIO_NORMAL_CAP", MARIO_NORMAL_CAP);
PyModule_AddIntConstant(pMario, "MARIO_VANISH_CAP", MARIO_VANISH_CAP);
PyModule_AddIntConstant(pMario, "MARIO_METAL_CAP", MARIO_METAL_CAP);
PyModule_AddIntConstant(pMario, "MARIO_WING_CAP", MARIO_WING_CAP);
PyModule_AddIntConstant(pMario, "MARIO_CAP_ON_HEAD", MARIO_CAP_ON_HEAD);
PyModule_AddIntConstant(pMario, "MARIO_CAP_IN_HAND", MARIO_CAP_IN_HAND);
PyModule_AddIntConstant(pMario, "MARIO_METAL_SHOCK", MARIO_METAL_SHOCK);
PyModule_AddIntConstant(pMario, "MARIO_TELEPORTING", MARIO_TELEPORTING);
PyModule_AddIntConstant(pMario, "MARIO_UNKNOWN_08", MARIO_UNKNOWN_08);
PyModule_AddIntConstant(pMario, "MARIO_UNKNOWN_13", MARIO_UNKNOWN_13);
PyModule_AddIntConstant(pMario, "MARIO_ACTION_SOUND_PLAYED", MARIO_ACTION_SOUND_PLAYED);
PyModule_AddIntConstant(pMario, "MARIO_MARIO_SOUND_PLAYED", MARIO_MARIO_SOUND_PLAYED);
PyModule_AddIntConstant(pMario, "MARIO_UNKNOWN_18", MARIO_UNKNOWN_18);
PyModule_AddIntConstant(pMario, "MARIO_PUNCHING", MARIO_PUNCHING);
PyModule_AddIntConstant(pMario, "MARIO_KICKING", MARIO_KICKING);
PyModule_AddIntConstant(pMario, "MARIO_TRIPPING", MARIO_TRIPPING);
PyModule_AddIntConstant(pMario, "MARIO_UNKNOWN_25", MARIO_UNKNOWN_25);
PyModule_AddIntConstant(pMario, "MARIO_UNKNOWN_30", MARIO_UNKNOWN_30);
PyModule_AddIntConstant(pMario, "MARIO_UNKNOWN_31", MARIO_UNKNOWN_31);

PyModule_AddIntConstant(pMario, "MARIO_CAP_FLAGS", MARIO_CAP_FLAGS);

PyModule_AddIntConstant(pMario, "ACT_ID_MASK", ACT_ID_MASK);

PyModule_AddIntConstant(pMario, "ACT_GROUP_MASK", ACT_GROUP_MASK);
PyModule_AddIntConstant(pMario, "ACT_GROUP_STATIONARY", ACT_GROUP_STATIONARY);
PyModule_AddIntConstant(pMario, "ACT_GROUP_MOVING", ACT_GROUP_MOVING);
PyModule_AddIntConstant(pMario, "ACT_GROUP_AIRBORNE", ACT_GROUP_AIRBORNE);
PyModule_AddIntConstant(pMario, "ACT_GROUP_SUBMERGED", ACT_GROUP_SUBMERGED);
PyModule_AddIntConstant(pMario, "ACT_GROUP_CUTSCENE", ACT_GROUP_CUTSCENE);
PyModule_AddIntConstant(pMario, "ACT_GROUP_AUTOMATIC", ACT_GROUP_AUTOMATIC);
PyModule_AddIntConstant(pMario, "ACT_GROUP_OBJECT", ACT_GROUP_OBJECT);

PyModule_AddIntConstant(pMario, "ACT_FLAG_STATIONARY", ACT_FLAG_STATIONARY);
PyModule_AddIntConstant(pMario, "ACT_FLAG_MOVING", ACT_FLAG_MOVING);
PyModule_AddIntConstant(pMario, "ACT_FLAG_AIR", ACT_FLAG_AIR);
PyModule_AddIntConstant(pMario, "ACT_FLAG_INTANGIBLE", ACT_FLAG_INTANGIBLE);
PyModule_AddIntConstant(pMario, "ACT_FLAG_SWIMMING", ACT_FLAG_SWIMMING);
PyModule_AddIntConstant(pMario, "ACT_FLAG_METAL_WATER", ACT_FLAG_METAL_WATER);
PyModule_AddIntConstant(pMario, "ACT_FLAG_SHORT_HITBOX", ACT_FLAG_SHORT_HITBOX);
PyModule_AddIntConstant(pMario, "ACT_FLAG_RIDING_SHELL", ACT_FLAG_RIDING_SHELL);
PyModule_AddIntConstant(pMario, "ACT_FLAG_INVULNERABLE", ACT_FLAG_INVULNERABLE);
PyModule_AddIntConstant(pMario, "ACT_FLAG_BUTT_OR_STOMACH_SLIDE", ACT_FLAG_BUTT_OR_STOMACH_SLIDE);
PyModule_AddIntConstant(pMario, "ACT_FLAG_DIVING", ACT_FLAG_DIVING);
PyModule_AddIntConstant(pMario, "ACT_FLAG_ON_POLE", ACT_FLAG_ON_POLE);
PyModule_AddIntConstant(pMario, "ACT_FLAG_HANGING", ACT_FLAG_HANGING);
PyModule_AddIntConstant(pMario, "ACT_FLAG_IDLE", ACT_FLAG_IDLE);
PyModule_AddIntConstant(pMario, "ACT_FLAG_ATTACKING", ACT_FLAG_ATTACKING);
PyModule_AddIntConstant(pMario, "ACT_FLAG_ALLOW_VERTICAL_WIND_ACTION", ACT_FLAG_ALLOW_VERTICAL_WIND_ACTION);
PyModule_AddIntConstant(pMario, "ACT_FLAG_CONTROL_JUMP_HEIGHT", ACT_FLAG_CONTROL_JUMP_HEIGHT);
PyModule_AddIntConstant(pMario, "ACT_FLAG_ALLOW_FIRST_PERSON", ACT_FLAG_ALLOW_FIRST_PERSON);
PyModule_AddIntConstant(pMario, "ACT_FLAG_PAUSE_EXIT", ACT_FLAG_PAUSE_EXIT);
PyModule_AddIntConstant(pMario, "ACT_FLAG_SWIMMING_OR_FLYING", ACT_FLAG_SWIMMING_OR_FLYING);
PyModule_AddIntConstant(pMario, "ACT_FLAG_WATER_OR_TEXT", ACT_FLAG_WATER_OR_TEXT);
PyModule_AddIntConstant(pMario, "ACT_FLAG_THROWING", ACT_FLAG_THROWING);

PyModule_AddIntConstant(pMario, "ACT_UNINITIALIZED", ACT_UNINITIALIZED);

// group 0x000: stationary actions
PyModule_AddIntConstant(pMario, "ACT_IDLE", ACT_IDLE);
PyModule_AddIntConstant(pMario, "ACT_START_SLEEPING", ACT_START_SLEEPING);
PyModule_AddIntConstant(pMario, "ACT_SLEEPING", ACT_SLEEPING);
PyModule_AddIntConstant(pMario, "ACT_WAKING_UP", ACT_WAKING_UP);
PyModule_AddIntConstant(pMario, "ACT_PANTING", ACT_PANTING);
PyModule_AddIntConstant(pMario, "ACT_HOLD_PANTING_UNUSED", ACT_HOLD_PANTING_UNUSED);
PyModule_AddIntConstant(pMario, "ACT_HOLD_IDLE", ACT_HOLD_IDLE);
PyModule_AddIntConstant(pMario, "ACT_HOLD_HEAVY_IDLE", ACT_HOLD_HEAVY_IDLE);
PyModule_AddIntConstant(pMario, "ACT_STANDING_AGAINST_WALL", ACT_STANDING_AGAINST_WALL);
PyModule_AddIntConstant(pMario, "ACT_COUGHING", ACT_COUGHING);
PyModule_AddIntConstant(pMario, "ACT_SHIVERING", ACT_SHIVERING);
PyModule_AddIntConstant(pMario, "ACT_IN_QUICKSAND", ACT_IN_QUICKSAND);
PyModule_AddIntConstant(pMario, "ACT_CROUCHING", ACT_CROUCHING);
PyModule_AddIntConstant(pMario, "ACT_START_CROUCHING", ACT_START_CROUCHING);
PyModule_AddIntConstant(pMario, "ACT_STOP_CROUCHING", ACT_STOP_CROUCHING);
PyModule_AddIntConstant(pMario, "ACT_START_CRAWLING", ACT_START_CRAWLING);
PyModule_AddIntConstant(pMario, "ACT_STOP_CRAWLING", ACT_STOP_CRAWLING);
PyModule_AddIntConstant(pMario, "ACT_SLIDE_KICK_SLIDE_STOP", ACT_SLIDE_KICK_SLIDE_STOP);
PyModule_AddIntConstant(pMario, "ACT_SHOCKWAVE_BOUNCE", ACT_SHOCKWAVE_BOUNCE);
PyModule_AddIntConstant(pMario, "ACT_FIRST_PERSON", ACT_FIRST_PERSON);
PyModule_AddIntConstant(pMario, "ACT_BACKFLIP_LAND_STOP", ACT_BACKFLIP_LAND_STOP);
PyModule_AddIntConstant(pMario, "ACT_JUMP_LAND_STOP", ACT_JUMP_LAND_STOP);
PyModule_AddIntConstant(pMario, "ACT_DOUBLE_JUMP_LAND_STOP", ACT_DOUBLE_JUMP_LAND_STOP);
PyModule_AddIntConstant(pMario, "ACT_FREEFALL_LAND_STOP", ACT_FREEFALL_LAND_STOP);
PyModule_AddIntConstant(pMario, "ACT_SIDE_FLIP_LAND_STOP", ACT_SIDE_FLIP_LAND_STOP);
PyModule_AddIntConstant(pMario, "ACT_HOLD_JUMP_LAND_STOP", ACT_HOLD_JUMP_LAND_STOP);
PyModule_AddIntConstant(pMario, "ACT_HOLD_FREEFALL_LAND_STOP", ACT_HOLD_FREEFALL_LAND_STOP);
PyModule_AddIntConstant(pMario, "ACT_AIR_THROW_LAND", ACT_AIR_THROW_LAND);
PyModule_AddIntConstant(pMario, "ACT_TWIRL_LAND", ACT_TWIRL_LAND);
PyModule_AddIntConstant(pMario, "ACT_LAVA_BOOST_LAND", ACT_LAVA_BOOST_LAND);
PyModule_AddIntConstant(pMario, "ACT_TRIPLE_JUMP_LAND_STOP", ACT_TRIPLE_JUMP_LAND_STOP);
PyModule_AddIntConstant(pMario, "ACT_LONG_JUMP_LAND_STOP", ACT_LONG_JUMP_LAND_STOP);
PyModule_AddIntConstant(pMario, "ACT_GROUND_POUND_LAND", ACT_GROUND_POUND_LAND);
PyModule_AddIntConstant(pMario, "ACT_BRAKING_STOP", ACT_BRAKING_STOP);
PyModule_AddIntConstant(pMario, "ACT_BUTT_SLIDE_STOP", ACT_BUTT_SLIDE_STOP);
PyModule_AddIntConstant(pMario, "ACT_HOLD_BUTT_SLIDE_STOP", ACT_HOLD_BUTT_SLIDE_STOP);

// group 0x040: moving (ground) actions
PyModule_AddIntConstant(pMario, "ACT_WALKING", ACT_WALKING);
PyModule_AddIntConstant(pMario, "ACT_HOLD_WALKING", ACT_HOLD_WALKING);
PyModule_AddIntConstant(pMario, "ACT_TURNING_AROUND", ACT_TURNING_AROUND);
PyModule_AddIntConstant(pMario, "ACT_FINISH_TURNING_AROUND", ACT_FINISH_TURNING_AROUND);
PyModule_AddIntConstant(pMario, "ACT_BRAKING", ACT_BRAKING);
PyModule_AddIntConstant(pMario, "ACT_RIDING_SHELL_GROUND", ACT_RIDING_SHELL_GROUND);
PyModule_AddIntConstant(pMario, "ACT_HOLD_HEAVY_WALKING", ACT_HOLD_HEAVY_WALKING);
PyModule_AddIntConstant(pMario, "ACT_CRAWLING", ACT_CRAWLING);
PyModule_AddIntConstant(pMario, "ACT_BURNING_GROUND", ACT_BURNING_GROUND);
PyModule_AddIntConstant(pMario, "ACT_DECELERATING", ACT_DECELERATING);
PyModule_AddIntConstant(pMario, "ACT_HOLD_DECELERATING", ACT_HOLD_DECELERATING);
PyModule_AddIntConstant(pMario, "ACT_BEGIN_SLIDING", ACT_BEGIN_SLIDING);
PyModule_AddIntConstant(pMario, "ACT_HOLD_BEGIN_SLIDING", ACT_HOLD_BEGIN_SLIDING);
PyModule_AddIntConstant(pMario, "ACT_BUTT_SLIDE", ACT_BUTT_SLIDE);
PyModule_AddIntConstant(pMario, "ACT_STOMACH_SLIDE", ACT_STOMACH_SLIDE);
PyModule_AddIntConstant(pMario, "ACT_HOLD_BUTT_SLIDE", ACT_HOLD_BUTT_SLIDE);
PyModule_AddIntConstant(pMario, "ACT_HOLD_STOMACH_SLIDE", ACT_HOLD_STOMACH_SLIDE);
PyModule_AddIntConstant(pMario, "ACT_DIVE_SLIDE", ACT_DIVE_SLIDE);
PyModule_AddIntConstant(pMario, "ACT_MOVE_PUNCHING", ACT_MOVE_PUNCHING);
PyModule_AddIntConstant(pMario, "ACT_CROUCH_SLIDE", ACT_CROUCH_SLIDE);
PyModule_AddIntConstant(pMario, "ACT_SLIDE_KICK_SLIDE", ACT_SLIDE_KICK_SLIDE);
PyModule_AddIntConstant(pMario, "ACT_HARD_BACKWARD_GROUND_KB", ACT_HARD_BACKWARD_GROUND_KB);
PyModule_AddIntConstant(pMario, "ACT_HARD_FORWARD_GROUND_KB", ACT_HARD_FORWARD_GROUND_KB);
PyModule_AddIntConstant(pMario, "ACT_BACKWARD_GROUND_KB", ACT_BACKWARD_GROUND_KB);
PyModule_AddIntConstant(pMario, "ACT_FORWARD_GROUND_KB", ACT_FORWARD_GROUND_KB);
PyModule_AddIntConstant(pMario, "ACT_SOFT_BACKWARD_GROUND_KB", ACT_SOFT_BACKWARD_GROUND_KB);
PyModule_AddIntConstant(pMario, "ACT_SOFT_FORWARD_GROUND_KB", ACT_SOFT_FORWARD_GROUND_KB);
PyModule_AddIntConstant(pMario, "ACT_GROUND_BONK", ACT_GROUND_BONK);
PyModule_AddIntConstant(pMario, "ACT_DEATH_EXIT_LAND", ACT_DEATH_EXIT_LAND);
PyModule_AddIntConstant(pMario, "ACT_JUMP_LAND", ACT_JUMP_LAND);
PyModule_AddIntConstant(pMario, "ACT_FREEFALL_LAND", ACT_FREEFALL_LAND);
PyModule_AddIntConstant(pMario, "ACT_DOUBLE_JUMP_LAND", ACT_DOUBLE_JUMP_LAND);
PyModule_AddIntConstant(pMario, "ACT_SIDE_FLIP_LAND", ACT_SIDE_FLIP_LAND);
PyModule_AddIntConstant(pMario, "ACT_HOLD_JUMP_LAND", ACT_HOLD_JUMP_LAND);
PyModule_AddIntConstant(pMario, "ACT_HOLD_FREEFALL_LAND", ACT_HOLD_FREEFALL_LAND);
PyModule_AddIntConstant(pMario, "ACT_QUICKSAND_JUMP_LAND", ACT_QUICKSAND_JUMP_LAND);
PyModule_AddIntConstant(pMario, "ACT_HOLD_QUICKSAND_JUMP_LAND", ACT_HOLD_QUICKSAND_JUMP_LAND);
PyModule_AddIntConstant(pMario, "ACT_TRIPLE_JUMP_LAND", ACT_TRIPLE_JUMP_LAND);
PyModule_AddIntConstant(pMario, "ACT_LONG_JUMP_LAND", ACT_LONG_JUMP_LAND);
PyModule_AddIntConstant(pMario, "ACT_BACKFLIP_LAND", ACT_BACKFLIP_LAND);

// group 0x080: airborne actions
PyModule_AddIntConstant(pMario, "ACT_JUMP", ACT_JUMP);
PyModule_AddIntConstant(pMario, "ACT_DOUBLE_JUMP", ACT_DOUBLE_JUMP);
PyModule_AddIntConstant(pMario, "ACT_TRIPLE_JUMP", ACT_TRIPLE_JUMP);
PyModule_AddIntConstant(pMario, "ACT_BACKFLIP", ACT_BACKFLIP);
PyModule_AddIntConstant(pMario, "ACT_STEEP_JUMP", ACT_STEEP_JUMP);
PyModule_AddIntConstant(pMario, "ACT_WALL_KICK_AIR", ACT_WALL_KICK_AIR);
PyModule_AddIntConstant(pMario, "ACT_SIDE_FLIP", ACT_SIDE_FLIP);
PyModule_AddIntConstant(pMario, "ACT_LONG_JUMP", ACT_LONG_JUMP);
PyModule_AddIntConstant(pMario, "ACT_WATER_JUMP", ACT_WATER_JUMP);
PyModule_AddIntConstant(pMario, "ACT_DIVE", ACT_DIVE);
PyModule_AddIntConstant(pMario, "ACT_FREEFALL", ACT_FREEFALL);
PyModule_AddIntConstant(pMario, "ACT_TOP_OF_POLE_JUMP", ACT_TOP_OF_POLE_JUMP);
PyModule_AddIntConstant(pMario, "ACT_BUTT_SLIDE_AIR", ACT_BUTT_SLIDE_AIR);
PyModule_AddIntConstant(pMario, "ACT_FLYING_TRIPLE_JUMP", ACT_FLYING_TRIPLE_JUMP);
PyModule_AddIntConstant(pMario, "ACT_SHOT_FROM_CANNON", ACT_SHOT_FROM_CANNON);
PyModule_AddIntConstant(pMario, "ACT_FLYING", ACT_FLYING);
PyModule_AddIntConstant(pMario, "ACT_RIDING_SHELL_JUMP", ACT_RIDING_SHELL_JUMP);
PyModule_AddIntConstant(pMario, "ACT_RIDING_SHELL_FALL", ACT_RIDING_SHELL_FALL);
PyModule_AddIntConstant(pMario, "ACT_VERTICAL_WIND", ACT_VERTICAL_WIND);
PyModule_AddIntConstant(pMario, "ACT_HOLD_JUMP", ACT_HOLD_JUMP);
PyModule_AddIntConstant(pMario, "ACT_HOLD_FREEFALL", ACT_HOLD_FREEFALL);
PyModule_AddIntConstant(pMario, "ACT_HOLD_BUTT_SLIDE_AIR", ACT_HOLD_BUTT_SLIDE_AIR);
PyModule_AddIntConstant(pMario, "ACT_HOLD_WATER_JUMP", ACT_HOLD_WATER_JUMP);
PyModule_AddIntConstant(pMario, "ACT_TWIRLING", ACT_TWIRLING);
PyModule_AddIntConstant(pMario, "ACT_FORWARD_ROLLOUT", ACT_FORWARD_ROLLOUT);
PyModule_AddIntConstant(pMario, "ACT_AIR_HIT_WALL", ACT_AIR_HIT_WALL);
PyModule_AddIntConstant(pMario, "ACT_RIDING_HOOT", ACT_RIDING_HOOT);
PyModule_AddIntConstant(pMario, "ACT_GROUND_POUND", ACT_GROUND_POUND);
PyModule_AddIntConstant(pMario, "ACT_SLIDE_KICK", ACT_SLIDE_KICK);
PyModule_AddIntConstant(pMario, "ACT_AIR_THROW", ACT_AIR_THROW);
PyModule_AddIntConstant(pMario, "ACT_JUMP_KICK", ACT_JUMP_KICK);
PyModule_AddIntConstant(pMario, "ACT_BACKWARD_ROLLOUT", ACT_BACKWARD_ROLLOUT);
PyModule_AddIntConstant(pMario, "ACT_CRAZY_BOX_BOUNCE", ACT_CRAZY_BOX_BOUNCE);
PyModule_AddIntConstant(pMario, "ACT_SPECIAL_TRIPLE_JUMP", ACT_SPECIAL_TRIPLE_JUMP);
PyModule_AddIntConstant(pMario, "ACT_BACKWARD_AIR_KB", ACT_BACKWARD_AIR_KB);
PyModule_AddIntConstant(pMario, "ACT_FORWARD_AIR_KB", ACT_FORWARD_AIR_KB);
PyModule_AddIntConstant(pMario, "ACT_HARD_FORWARD_AIR_KB", ACT_HARD_FORWARD_AIR_KB);
PyModule_AddIntConstant(pMario, "ACT_HARD_BACKWARD_AIR_KB", ACT_HARD_BACKWARD_AIR_KB);
PyModule_AddIntConstant(pMario, "ACT_BURNING_JUMP", ACT_BURNING_JUMP);
PyModule_AddIntConstant(pMario, "ACT_BURNING_FALL", ACT_BURNING_FALL);
PyModule_AddIntConstant(pMario, "ACT_SOFT_BONK", ACT_SOFT_BONK);
PyModule_AddIntConstant(pMario, "ACT_LAVA_BOOST", ACT_LAVA_BOOST);
PyModule_AddIntConstant(pMario, "ACT_GETTING_BLOWN", ACT_GETTING_BLOWN);
PyModule_AddIntConstant(pMario, "ACT_THROWN_FORWARD", ACT_THROWN_FORWARD);
PyModule_AddIntConstant(pMario, "ACT_THROWN_BACKWARD", ACT_THROWN_BACKWARD);

// group 0x0C0: submerged actions
PyModule_AddIntConstant(pMario, "ACT_WATER_IDLE", ACT_WATER_IDLE);
PyModule_AddIntConstant(pMario, "ACT_HOLD_WATER_IDLE", ACT_HOLD_WATER_IDLE);
PyModule_AddIntConstant(pMario, "ACT_WATER_ACTION_END", ACT_WATER_ACTION_END);
PyModule_AddIntConstant(pMario, "ACT_HOLD_WATER_ACTION_END", ACT_HOLD_WATER_ACTION_END);
PyModule_AddIntConstant(pMario, "ACT_DROWNING", ACT_DROWNING);
PyModule_AddIntConstant(pMario, "ACT_BACKWARD_WATER_KB", ACT_BACKWARD_WATER_KB);
PyModule_AddIntConstant(pMario, "ACT_FORWARD_WATER_KB", ACT_FORWARD_WATER_KB);
PyModule_AddIntConstant(pMario, "ACT_WATER_DEATH", ACT_WATER_DEATH);
PyModule_AddIntConstant(pMario, "ACT_WATER_SHOCKED", ACT_WATER_SHOCKED);
PyModule_AddIntConstant(pMario, "ACT_BREASTSTROKE", ACT_BREASTSTROKE);
PyModule_AddIntConstant(pMario, "ACT_SWIMMING_END", ACT_SWIMMING_END);
PyModule_AddIntConstant(pMario, "ACT_FLUTTER_KICK", ACT_FLUTTER_KICK);
PyModule_AddIntConstant(pMario, "ACT_HOLD_BREASTSTROKE", ACT_HOLD_BREASTSTROKE);
PyModule_AddIntConstant(pMario, "ACT_HOLD_SWIMMING_END", ACT_HOLD_SWIMMING_END);
PyModule_AddIntConstant(pMario, "ACT_HOLD_FLUTTER_KICK", ACT_HOLD_FLUTTER_KICK);
PyModule_AddIntConstant(pMario, "ACT_WATER_SHELL_SWIMMING", ACT_WATER_SHELL_SWIMMING);
PyModule_AddIntConstant(pMario, "ACT_WATER_THROW", ACT_WATER_THROW);
PyModule_AddIntConstant(pMario, "ACT_WATER_PUNCH", ACT_WATER_PUNCH);
PyModule_AddIntConstant(pMario, "ACT_WATER_PLUNGE", ACT_WATER_PLUNGE);
PyModule_AddIntConstant(pMario, "ACT_CAUGHT_IN_WHIRLPOOL", ACT_CAUGHT_IN_WHIRLPOOL);
PyModule_AddIntConstant(pMario, "ACT_METAL_WATER_STANDING", ACT_METAL_WATER_STANDING);
PyModule_AddIntConstant(pMario, "ACT_HOLD_METAL_WATER_STANDING", ACT_HOLD_METAL_WATER_STANDING);
PyModule_AddIntConstant(pMario, "ACT_METAL_WATER_WALKING", ACT_METAL_WATER_WALKING);
PyModule_AddIntConstant(pMario, "ACT_HOLD_METAL_WATER_WALKING", ACT_HOLD_METAL_WATER_WALKING);
PyModule_AddIntConstant(pMario, "ACT_METAL_WATER_FALLING", ACT_METAL_WATER_FALLING);
PyModule_AddIntConstant(pMario, "ACT_HOLD_METAL_WATER_FALLING", ACT_HOLD_METAL_WATER_FALLING);
PyModule_AddIntConstant(pMario, "ACT_METAL_WATER_FALL_LAND", ACT_METAL_WATER_FALL_LAND);
PyModule_AddIntConstant(pMario, "ACT_HOLD_METAL_WATER_FALL_LAND", ACT_HOLD_METAL_WATER_FALL_LAND);
PyModule_AddIntConstant(pMario, "ACT_METAL_WATER_JUMP", ACT_METAL_WATER_JUMP);
PyModule_AddIntConstant(pMario, "ACT_HOLD_METAL_WATER_JUMP", ACT_HOLD_METAL_WATER_JUMP);
PyModule_AddIntConstant(pMario, "ACT_METAL_WATER_JUMP_LAND", ACT_METAL_WATER_JUMP_LAND);
PyModule_AddIntConstant(pMario, "ACT_HOLD_METAL_WATER_JUMP_LAND", ACT_HOLD_METAL_WATER_JUMP_LAND);

// group 0x100: cutscene actions
PyModule_AddIntConstant(pMario, "ACT_DISAPPEARED", ACT_DISAPPEARED);
PyModule_AddIntConstant(pMario, "ACT_INTRO_CUTSCENE", ACT_INTRO_CUTSCENE);
PyModule_AddIntConstant(pMario, "ACT_STAR_DANCE_EXIT", ACT_STAR_DANCE_EXIT);
PyModule_AddIntConstant(pMario, "ACT_STAR_DANCE_WATER", ACT_STAR_DANCE_WATER);
PyModule_AddIntConstant(pMario, "ACT_FALL_AFTER_STAR_GRAB", ACT_FALL_AFTER_STAR_GRAB);
PyModule_AddIntConstant(pMario, "ACT_READING_AUTOMATIC_DIALOG", ACT_READING_AUTOMATIC_DIALOG);
PyModule_AddIntConstant(pMario, "ACT_READING_NPC_DIALOG", ACT_READING_NPC_DIALOG);
PyModule_AddIntConstant(pMario, "ACT_STAR_DANCE_NO_EXIT", ACT_STAR_DANCE_NO_EXIT);
PyModule_AddIntConstant(pMario, "ACT_READING_SIGN", ACT_READING_SIGN);
PyModule_AddIntConstant(pMario, "ACT_JUMBO_STAR_CUTSCENE", ACT_JUMBO_STAR_CUTSCENE);
PyModule_AddIntConstant(pMario, "ACT_WAITING_FOR_DIALOG", ACT_WAITING_FOR_DIALOG);
PyModule_AddIntConstant(pMario, "ACT_DEBUG_FREE_MOVE", ACT_DEBUG_FREE_MOVE);
PyModule_AddIntConstant(pMario, "ACT_STANDING_DEATH", ACT_STANDING_DEATH);
PyModule_AddIntConstant(pMario, "ACT_QUICKSAND_DEATH", ACT_QUICKSAND_DEATH);
PyModule_AddIntConstant(pMario, "ACT_ELECTROCUTION", ACT_ELECTROCUTION);
PyModule_AddIntConstant(pMario, "ACT_SUFFOCATION", ACT_SUFFOCATION);
PyModule_AddIntConstant(pMario, "ACT_DEATH_ON_STOMACH", ACT_DEATH_ON_STOMACH);
PyModule_AddIntConstant(pMario, "ACT_DEATH_ON_BACK", ACT_DEATH_ON_BACK);
PyModule_AddIntConstant(pMario, "ACT_EATEN_BY_BUBBA", ACT_EATEN_BY_BUBBA);
PyModule_AddIntConstant(pMario, "ACT_END_PEACH_CUTSCENE", ACT_END_PEACH_CUTSCENE);
PyModule_AddIntConstant(pMario, "ACT_CREDITS_CUTSCENE", ACT_CREDITS_CUTSCENE);
PyModule_AddIntConstant(pMario, "ACT_END_WAVING_CUTSCENE", ACT_END_WAVING_CUTSCENE);
PyModule_AddIntConstant(pMario, "ACT_PULLING_DOOR", ACT_PULLING_DOOR);
PyModule_AddIntConstant(pMario, "ACT_PUSHING_DOOR", ACT_PUSHING_DOOR);
PyModule_AddIntConstant(pMario, "ACT_WARP_DOOR_SPAWN", ACT_WARP_DOOR_SPAWN);
PyModule_AddIntConstant(pMario, "ACT_EMERGE_FROM_PIPE", ACT_EMERGE_FROM_PIPE);
PyModule_AddIntConstant(pMario, "ACT_SPAWN_SPIN_AIRBORNE", ACT_SPAWN_SPIN_AIRBORNE);
PyModule_AddIntConstant(pMario, "ACT_SPAWN_SPIN_LANDING", ACT_SPAWN_SPIN_LANDING);
PyModule_AddIntConstant(pMario, "ACT_EXIT_AIRBORNE", ACT_EXIT_AIRBORNE);
PyModule_AddIntConstant(pMario, "ACT_EXIT_LAND_SAVE_DIALOG", ACT_EXIT_LAND_SAVE_DIALOG);
PyModule_AddIntConstant(pMario, "ACT_DEATH_EXIT", ACT_DEATH_EXIT);
PyModule_AddIntConstant(pMario, "ACT_UNUSED_DEATH_EXIT", ACT_UNUSED_DEATH_EXIT);
PyModule_AddIntConstant(pMario, "ACT_FALLING_DEATH_EXIT", ACT_FALLING_DEATH_EXIT);
PyModule_AddIntConstant(pMario, "ACT_SPECIAL_EXIT_AIRBORNE", ACT_SPECIAL_EXIT_AIRBORNE);
PyModule_AddIntConstant(pMario, "ACT_SPECIAL_DEATH_EXIT", ACT_SPECIAL_DEATH_EXIT);
PyModule_AddIntConstant(pMario, "ACT_FALLING_EXIT_AIRBORNE", ACT_FALLING_EXIT_AIRBORNE);
PyModule_AddIntConstant(pMario, "ACT_UNLOCKING_KEY_DOOR", ACT_UNLOCKING_KEY_DOOR);
PyModule_AddIntConstant(pMario, "ACT_UNLOCKING_STAR_DOOR", ACT_UNLOCKING_STAR_DOOR);
PyModule_AddIntConstant(pMario, "ACT_ENTERING_STAR_DOOR", ACT_ENTERING_STAR_DOOR);
PyModule_AddIntConstant(pMario, "ACT_SPAWN_NO_SPIN_AIRBORNE", ACT_SPAWN_NO_SPIN_AIRBORNE);
PyModule_AddIntConstant(pMario, "ACT_SPAWN_NO_SPIN_LANDING", ACT_SPAWN_NO_SPIN_LANDING);
PyModule_AddIntConstant(pMario, "ACT_BBH_ENTER_JUMP", ACT_BBH_ENTER_JUMP);
PyModule_AddIntConstant(pMario, "ACT_BBH_ENTER_SPIN", ACT_BBH_ENTER_SPIN);
PyModule_AddIntConstant(pMario, "ACT_TELEPORT_FADE_OUT", ACT_TELEPORT_FADE_OUT);
PyModule_AddIntConstant(pMario, "ACT_TELEPORT_FADE_IN", ACT_TELEPORT_FADE_IN);
PyModule_AddIntConstant(pMario, "ACT_SHOCKED", ACT_SHOCKED);
PyModule_AddIntConstant(pMario, "ACT_SQUISHED", ACT_SQUISHED);
PyModule_AddIntConstant(pMario, "ACT_HEAD_STUCK_IN_GROUND", ACT_HEAD_STUCK_IN_GROUND);
PyModule_AddIntConstant(pMario, "ACT_BUTT_STUCK_IN_GROUND", ACT_BUTT_STUCK_IN_GROUND);
PyModule_AddIntConstant(pMario, "ACT_FEET_STUCK_IN_GROUND", ACT_FEET_STUCK_IN_GROUND);
PyModule_AddIntConstant(pMario, "ACT_PUTTING_ON_CAP", ACT_PUTTING_ON_CAP);

// group 0x140: "automatic" actions
PyModule_AddIntConstant(pMario, "ACT_HOLDING_POLE", ACT_HOLDING_POLE);
PyModule_AddIntConstant(pMario, "ACT_GRAB_POLE_SLOW", ACT_GRAB_POLE_SLOW);
PyModule_AddIntConstant(pMario, "ACT_GRAB_POLE_FAST", ACT_GRAB_POLE_FAST);
PyModule_AddIntConstant(pMario, "ACT_CLIMBING_POLE", ACT_CLIMBING_POLE);
PyModule_AddIntConstant(pMario, "ACT_TOP_OF_POLE_TRANSITION", ACT_TOP_OF_POLE_TRANSITION);
PyModule_AddIntConstant(pMario, "ACT_TOP_OF_POLE", ACT_TOP_OF_POLE);
PyModule_AddIntConstant(pMario, "ACT_START_HANGING", ACT_START_HANGING);
PyModule_AddIntConstant(pMario, "ACT_HANGING", ACT_HANGING);
PyModule_AddIntConstant(pMario, "ACT_HANG_MOVING", ACT_HANG_MOVING);
PyModule_AddIntConstant(pMario, "ACT_LEDGE_GRAB", ACT_LEDGE_GRAB);
PyModule_AddIntConstant(pMario, "ACT_LEDGE_CLIMB_SLOW_1", ACT_LEDGE_CLIMB_SLOW_1);
PyModule_AddIntConstant(pMario, "ACT_LEDGE_CLIMB_SLOW_2", ACT_LEDGE_CLIMB_SLOW_2);
PyModule_AddIntConstant(pMario, "ACT_LEDGE_CLIMB_DOWN", ACT_LEDGE_CLIMB_DOWN);
PyModule_AddIntConstant(pMario, "ACT_LEDGE_CLIMB_FAST", ACT_LEDGE_CLIMB_FAST);
PyModule_AddIntConstant(pMario, "ACT_GRABBED", ACT_GRABBED);
PyModule_AddIntConstant(pMario, "ACT_IN_CANNON", ACT_IN_CANNON);
PyModule_AddIntConstant(pMario, "ACT_TORNADO_TWIRLING", ACT_TORNADO_TWIRLING);

// group 0x180: object actions
PyModule_AddIntConstant(pMario, "ACT_PUNCHING", ACT_PUNCHING);
PyModule_AddIntConstant(pMario, "ACT_PICKING_UP", ACT_PICKING_UP);
PyModule_AddIntConstant(pMario, "ACT_DIVE_PICKING_UP", ACT_DIVE_PICKING_UP);
PyModule_AddIntConstant(pMario, "ACT_STOMACH_SLIDE_STOP", ACT_STOMACH_SLIDE_STOP);
PyModule_AddIntConstant(pMario, "ACT_PLACING_DOWN", ACT_PLACING_DOWN);
PyModule_AddIntConstant(pMario, "ACT_THROWING", ACT_THROWING);
PyModule_AddIntConstant(pMario, "ACT_HEAVY_THROW", ACT_HEAVY_THROW);
PyModule_AddIntConstant(pMario, "ACT_PICKING_UP_BOWSER", ACT_PICKING_UP_BOWSER);
PyModule_AddIntConstant(pMario, "ACT_HOLDING_BOWSER", ACT_HOLDING_BOWSER);
PyModule_AddIntConstant(pMario, "ACT_RELEASING_BOWSER", ACT_RELEASING_BOWSER);

#define INT_GROUND_POUND_OR_TWIRL (1 << 0) // 0x01
#define INT_PUNCH                 (1 << 1) // 0x02
#define INT_KICK                  (1 << 2) // 0x04
#define INT_TRIP                  (1 << 3) // 0x08
#define INT_SLIDE_KICK            (1 << 4) // 0x10
#define INT_FAST_ATTACK_OR_SHELL  (1 << 5) // 0x20
#define INT_HIT_FROM_ABOVE        (1 << 6) // 0x40
#define INT_HIT_FROM_BELOW        (1 << 7) // 0x80

PyModule_AddIntConstant(pMario, "INT_GROUND_POUND_OR_TWIRL",    INT_GROUND_POUND_OR_TWIRL);
PyModule_AddIntConstant(pMario, "INT_PUNCH",                    INT_PUNCH                );
PyModule_AddIntConstant(pMario, "INT_KICK",                     INT_KICK                 );
PyModule_AddIntConstant(pMario, "INT_TRIP",                     INT_TRIP                 );
PyModule_AddIntConstant(pMario, "INT_SLIDE_KICK",               INT_SLIDE_KICK           );
PyModule_AddIntConstant(pMario, "INT_FAST_ATTACK_OR_SHELL",     INT_FAST_ATTACK_OR_SHELL );
PyModule_AddIntConstant(pMario, "INT_HIT_FROM_ABOVE",           INT_HIT_FROM_ABOVE       );
PyModule_AddIntConstant(pMario, "INT_HIT_FROM_BELOW",           INT_HIT_FROM_BELOW       );

PyModule_AddIntConstant(pMario, "INT_ATTACK_NOT_FROM_BELOW",
    (INT_GROUND_POUND_OR_TWIRL | INT_PUNCH | INT_KICK | INT_TRIP | INT_SLIDE_KICK
     | INT_FAST_ATTACK_OR_SHELL | INT_HIT_FROM_ABOVE));

PyModule_AddIntConstant(pMario, "INT_ANY_ATTACK",
    (INT_GROUND_POUND_OR_TWIRL | INT_PUNCH | INT_KICK | INT_TRIP | INT_SLIDE_KICK
     | INT_FAST_ATTACK_OR_SHELL | INT_HIT_FROM_ABOVE | INT_HIT_FROM_BELOW));

PyModule_AddIntConstant(pMario, "INT_ATTACK_NOT_WEAK_FROM_ABOVE",
    (INT_GROUND_POUND_OR_TWIRL | INT_PUNCH | INT_KICK | INT_TRIP | INT_HIT_FROM_BELOW));
