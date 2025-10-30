int *__fastcall sub_BC610(int a1, int a2)
{
  int *v4; // r4
  int v5; // r0
  int v6; // r1
  int *result; // r0
  int v8; // [sp+Ch] [bp-8h] BYREF

  v4 = (int *)sub_E0740(40, "crypto/ct/ct_log.c", 239);
  if ( !v4 )
  {
    sub_D0048(50, 117, 65, "crypto/ct/ct_log.c", 242);
    return 0;
  }
  v5 = sub_E9E3C(a2, "crypto/ct/ct_log.c", 246);
  *v4 = v5;
  if ( !v5 )
  {
    sub_D0048(50, 117, 65, "crypto/ct/ct_log.c", 248);
    goto LABEL_7;
  }
  v8 = 0;
  v6 = i2d_PUBKEY(a1, &v8);
  if ( v6 <= 0 )
  {
    sub_D0048(50, 125, 113, "crypto/ct/ct_log.c", 81);
    CRYPTO_free(v8, "crypto/ct/ct_log.c", 88);
LABEL_7:
    CTLOG_free(v4);
    return 0;
  }
  sub_100A04(v8, v6, v4 + 1);
  CRYPTO_free(v8, "crypto/ct/ct_log.c", 88);
  result = v4;
  v4[9] = a1;
  return result;
}
