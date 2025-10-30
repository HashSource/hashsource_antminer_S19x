int *__fastcall sub_10B108(char *a1)
{
  int *v2; // r0
  int *v3; // r4
  int v4; // r0
  int v5; // r0
  char *v6; // r6

  v2 = (int *)CRYPTO_malloc((void *)0x14);
  v3 = v2;
  if ( !v2 )
    return 0;
  v4 = sub_10BFCC(v2);
  *v3 = v4;
  if ( !v4 || (v5 = sub_10BFCC(v4), (v3[1] = v5) == 0) )
  {
    CRYPTO_free(v3);
    return 0;
  }
  v3[3] = 0;
  v3[4] = 0;
  v3[2] = 0;
  if ( !a1 )
    return v3;
  v6 = sub_E9E3C(a1);
  v3[2] = (int)v6;
  if ( v6 )
    return v3;
  sub_10BDB4(*v3);
  sub_10BDB4(v3[1]);
  CRYPTO_free(v3);
  return 0;
}
