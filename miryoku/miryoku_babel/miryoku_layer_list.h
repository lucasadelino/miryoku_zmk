// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku
// generated -*- buffer-read-only: t -*-

#pragma once

#if !defined (MIRYOKU_LAYER_LIST)

#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base",   sensor-bindings = < &inc_dec_kp RIGHT LEFT &inc_dec_kp UP DOWN> ;) \
MIRYOKU_X(EXTRA,  "Extra",  sensor-bindings = < &inc_dec_kp RIGHT LEFT &inc_dec_kp UP DOWN> ;) \
MIRYOKU_X(TAP,    "Tap",    ) \
MIRYOKU_X(BUTTON, "Button", ) \
MIRYOKU_X(NAV,    "Nav",    sensor-bindings = <&inc_dec_kp PG_UP PG_DN &inc_dec_kp PG_UP PG_DN> ;) \
MIRYOKU_X(MOUSE,  "Mouse",  ) \
MIRYOKU_X(MEDIA,  "Media",  sensor-bindings = <&inc_dec_kp C_VOL_UP C_VOL_DN &inc_dec_kp C_VOL_UP C_VOL_DN> ;) \
MIRYOKU_X(NUM,    "Num",    ) \
MIRYOKU_X(SYM,    "Sym",    ) \
MIRYOKU_X(FUN,    "Fun",    )

#define U_BASE   0
#define U_EXTRA  1
#define U_TAP    2
#define U_BUTTON 3
#define U_NAV    4
#define U_MOUSE  5
#define U_MEDIA  6
#define U_NUM    7
#define U_SYM    8
#define U_FUN    9

#endif
