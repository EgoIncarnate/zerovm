/* trusted/validator/x86/decoder/gen/ncopcode_prefix.h
 * THIS FILE IS AUTO_GENERATED DO NOT EDIT.
 *
 * This file was auto-generated by enum_gen.py
 * from file ncopcode_prefix.enum
 */

#ifndef NATIVE_CLIENT_SRC_TRUSTED_VALIDATOR_X86_DECODER_GEN_NCOPCODE_PREFIX_H__
#define NATIVE_CLIENT_SRC_TRUSTED_VALIDATOR_X86_DECODER_GEN_NCOPCODE_PREFIX_H__

#include "include/portability.h"

EXTERN_C_BEGIN
typedef enum NaClInstPrefix {
  NoPrefix = 0,
  Prefix0F = 1,
  PrefixF20F = 2,
  PrefixF30F = 3,
  Prefix660F = 4,
  Prefix0F0F = 5,
  Prefix0F38 = 6,
  Prefix660F38 = 7,
  PrefixF20F38 = 8,
  Prefix0F3A = 9,
  Prefix660F3A = 10,
  PrefixD8 = 11,
  PrefixD9 = 12,
  PrefixDA = 13,
  PrefixDB = 14,
  PrefixDC = 15,
  PrefixDD = 16,
  PrefixDE = 17,
  PrefixDF = 18,
  NaClInstPrefixEnumSize = 19 /* special size marker */
} NaClInstPrefix;

/* Returns the name of an NaClInstPrefix constant. */
extern const char* NaClInstPrefixName(NaClInstPrefix name);

EXTERN_C_END

#endif /* NATIVE_CLIENT_SRC_TRUSTED_VALIDATOR_X86_DECODER_GEN_NCOPCODE_PREFIX_H__ */
