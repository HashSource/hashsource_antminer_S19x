int __fastcall sub_BD288(_DWORD *a1, int a2, int a3)
{
  int result; // r0
  bool v7; // zf
  int v8; // r0

  result = CRYPTO_free(a1[11], "crypto/ct/ct_sct.c", 179);
  v7 = a2 == 0;
  if ( a2 )
    v7 = a3 == 0;
  a1[11] = 0;
  a1[12] = 0;
  if ( v7 )
    result = 1;
  a1[15] = 0;
  if ( !v7 )
  {
    v8 = sub_E9E68(a2, a3, "crypto/ct/ct_sct.c", 185);
    a1[11] = v8;
    if ( v8 )
    {
      a1[12] = a3;
      return 1;
    }
    else
    {
      sub_D0048(50, 116, 65, "crypto/ct/ct_sct.c", 187);
      return 0;
    }
  }
  return result;
}
