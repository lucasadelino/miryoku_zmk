// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#if !defined (MIRYOKU_LAYOUTMAPPING_SOFLE)

#define XXX &none

#define MIRYOKU_LAYOUTMAPPING_SOFLE( \
     K00, K01, K02, K03, K04,                K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                K35, K36, K37, N38, N39 \
) \
&kp GRAVE &kp N1  &kp N2  &kp N3  &kp N4  &kp N5                 &kp N6  &kp N7  &kp N8 &kp N9 &kp N0  &kp MINUS \
XXX  K00  K01  K02  K03  K04                 K05  K06  K07  K08  K09  XXX \
&kp LG(COMMA)  K10  K11  K12  K13  K14                 K15  K16  K17  K18  K19  &kp LG(DOT)\
&kp INS  K20  K21  K22  K23  K24  XXX       XXX  K25  K26  K27  K28  K29  &kp INS \
          &kp LEFT  &kp RIGHT  K32  K33  K34       K35  K36  K37  &kp DOWN  &kp UP

#define MIRYOKU_LAYER_BASE \
&kp B,             &kp L,             &kp D,             &kp C,             &kp V,             &kp Z,             &kp Y,             &kp O,             &kp U,             &kp SLASH,           \
U_MT(LGUI, N),     U_MT(LALT, R),     U_LT(U_NAV, T),    U_MT(LSHFT, S),    &kp G,             &kp P,             U_MT(LSHFT, H),    U_LT(U_SYM, A),    U_MT(LALT, E),     U_MT(LGUI, I),     \
U_LT(U_BUTTON, X), U_MT(RALT, Q),     &kp M,             &kp W,             &kp J,             &kp K,             U_MT(U_NUM, F),    &kp SQT,           U_MT(RALT, COMMA), U_LT(U_BUTTON, DOT),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_MT(LCTRL, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_NUM, RET),  U_MT(LCTRL, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

#define MIRYOKU_LAYER_NAV \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &kp LC(C),         &kp LC(V),              &kp LC(Z),         &kp LC(Y),         &kp LC(O),         &kp LC(U),         &kp LC(U),             \
&kp LGUI,          &kp LALT,          U_NA,              &kp LSHFT,         U_NA,              &kp LEFT,          &kp DOWN,          &kp UP,            &kp RIGHT,         &u_caps_word,      \
&kp LC(X),         &kp LC(X),         U_NA,              &u_to_U_NAV,       U_PST,             &kp HOME,          &kp PG_DN,         &kp PG_UP,         &kp END,           &kp INS,           \
U_NP,              U_NP,              U_NA,              &kp LCTRL,         U_NA,              &kp RET,           &kp INS,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_LAYER_SYM \
&kp PIPE,          &kp LBRC,          &kp PRCNT,         &kp RBRC,          &kp EXCL,          U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp COLON,         &kp LBKT,          &kp EQUAL,         &kp RBKT,          &kp PLUS,          U_NA,              &kp LSHFT,         U_NA,              &kp LALT,          &kp LGUI,          \
&kp TILDE,         &kp LPAR,          &kp MINUS,         &kp RPAR,          &kp QMARK,         U_NA,              &u_to_U_SYM,       &u_to_U_MOUSE,     &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp DLLR,          &kp UNDER,         &kp CARET,         U_NA,              &kp LCTRL,         U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_MEDIA \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_RGB_EFF,         U_RGB_HUI,         U_RGB_SAI,         U_RGB_BRI,         U_RGB_TOG,         \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &kp C_PREV,        &kp C_VOL_DN,      &kp C_VOL_UP,      &kp C_NEXT,        U_EP_TOG,          \
U_NA,              &kp RALT,          &u_to_U_FUN,       &u_to_U_MEDIA,     U_NA,              &u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       &u_out_tog,        \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp C_STOP,        &kp C_PP,          &kp C_MUTE,        U_NP,              U_NP

#define MIRYOKU_LAYER_NUM \
&kp LBKT,          &kp N7,            &kp N8,            &kp N9,            &kp RBKT,          U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp SEMI,          &kp N4,            &kp N5,            &kp N6,            &kp EQUAL,         U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp GRAVE,         &kp N1,            &kp N2,            &kp N3,            &kp BSLH,          U_NA,              U_NA,              U_NA,              &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp DOT,           &kp N0,            &kp MINUS,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP


#define MIRYOKU_KLUDGE_THUMBCOMBOS_LEFT 53 54
#define MIRYOKU_KLUDGE_THUMBCOMBOS_RIGHT 55 56

#endif
