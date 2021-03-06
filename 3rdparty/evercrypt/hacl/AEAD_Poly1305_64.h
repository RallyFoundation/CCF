/* This file was generated by KreMLin <https://github.com/FStarLang/kremlin>
 * KreMLin invocation: /mnt/e/everest/verify/kremlin/krml -I /mnt/e/everest/verify/hacl-star/code/old/lib/kremlin -I /mnt/e/everest/verify/kremlin/kremlib/compat -I /mnt/e/everest/verify/hacl-star/specs -I /mnt/e/everest/verify/hacl-star/specs/old -I . -fparentheses -fcurly-braces -fno-shadow -ccopt -march=native -verbose -ldopt -flto -I ../bignum -fparentheses -skip-compilation -tmpdir poly-c -add-include "kremlib.h" -minimal -bundle AEAD.Poly1305_64=* poly-c/out.krml -o poly-c/AEAD_Poly1305_64.c
 * F* version: ebf0a2cc
 * KreMLin version: e9a42a80
 */


#ifndef __AEAD_Poly1305_64_H
#define __AEAD_Poly1305_64_H


#include "kremlib.h"

typedef struct Hacl_Impl_Poly1305_64_State_poly1305_state_s
{
  uint64_t *r;
  uint64_t *h;
}
Hacl_Impl_Poly1305_64_State_poly1305_state;

typedef uint8_t *AEAD_Poly1305_64_uint8_p;

typedef uint8_t *AEAD_Poly1305_64_key;

typedef Hacl_Impl_Poly1305_64_State_poly1305_state AEAD_Poly1305_64_state;

Hacl_Impl_Poly1305_64_State_poly1305_state
AEAD_Poly1305_64_mk_state(uint64_t *r, uint64_t *acc);

void
AEAD_Poly1305_64_poly1305_blocks_init(
  Hacl_Impl_Poly1305_64_State_poly1305_state st,
  uint8_t *input,
  uint32_t len1,
  uint8_t *k1
);

void
AEAD_Poly1305_64_poly1305_blocks_continue(
  Hacl_Impl_Poly1305_64_State_poly1305_state st,
  uint8_t *input,
  uint32_t len1
);

void
AEAD_Poly1305_64_poly1305_blocks_finish(
  Hacl_Impl_Poly1305_64_State_poly1305_state st,
  uint8_t *input,
  uint8_t *mac,
  uint8_t *key_s
);

#define __AEAD_Poly1305_64_H_DEFINED
#endif
