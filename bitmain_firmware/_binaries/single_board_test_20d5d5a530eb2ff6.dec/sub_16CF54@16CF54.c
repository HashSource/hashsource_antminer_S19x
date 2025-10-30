int __fastcall sub_16CF54(int a1, char *a2, char *a3, char *a4, char *a5, int a6, int a7)
{
  char *v10; // r6
  char *v11; // r0
  int v12; // r2
  char *s; // r0

  if ( a2 )
  {
    v10 = sub_E9E3C(a2);
    if ( !v10 )
    {
      sub_D0048(40, 110, 65, (int)"crypto/ui/ui_lib.c", 274);
      a4 = 0;
      a3 = 0;
      goto LABEL_14;
    }
  }
  else
  {
    v10 = 0;
  }
  if ( a3 && (a3 = sub_E9E3C(a3)) == 0 )
  {
    sub_D0048(40, 110, 65, (int)"crypto/ui/ui_lib.c", 282);
    a4 = 0;
  }
  else
  {
    if ( !a4 || (v11 = sub_E9E3C(a4), v12 = 290, (a4 = v11) != 0) )
    {
      if ( !a5 )
      {
        s = 0;
        return sub_16C730(a1, (int)v10, (int)a3, a4, s, 1, a6, a7);
      }
      s = sub_E9E3C(a5);
      if ( s )
        return sub_16C730(a1, (int)v10, (int)a3, a4, s, 1, a6, a7);
      v12 = 298;
    }
    sub_D0048(40, 110, 65, (int)"crypto/ui/ui_lib.c", v12);
  }
LABEL_14:
  CRYPTO_free(v10);
  CRYPTO_free(a3);
  CRYPTO_free(a4);
  CRYPTO_free(0);
  return -1;
}
