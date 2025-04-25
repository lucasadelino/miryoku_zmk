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
XXX  K10  K11  K12  K13  K14                 K15  K16  K17  K18  K19  XXX \
XXX  K20  K21  K22  K23  K24  XXX       XXX  K25  K26  K27  K28  K29  XXX \
          XXX  XXX  K32  K33  K34       K35  K36  K37  XXX  XXX

#define MIRYOKU_ALTERNATIVES_SYM \
&kp AT,            &kp LBRC,          &kp PRCNT,         &kp RBRC,          &kp EXCL,          U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp COLON,         &kp LBKT,          &kp MINUS,         &kp RBKT,          &kp PLUS,          U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp TILDE,         &kp LPAR,          &kp ASTRK,         &kp RPAR,          &kp PIPE,          U_NA,              &u_to_U_SYM,       &u_to_U_MOUSE,     &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp DLLR,          &kp UNDER,         &kp CARET,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_KLUDGE_THUMBCOMBOS_LEFT 53 54
#define MIRYOKU_KLUDGE_THUMBCOMBOS_RIGHT 55 56

#endif
