int __fastcall sub_BD0E0(_DWORD *a1, int a2, int a3)
{
  _BOOL4 v3; // r4
  int result; // r0
  bool v8; // zf
  int v9; // r0

  v3 = *a1 == 0;
  if ( a3 == 32 )
    v3 = 0;
  if ( v3 )
  {
    sub_D0048(50, 115, 100, "crypto/ct/ct_sct.c", 97);
    return 0;
  }
  else
  {
    result = CRYPTO_free(a1[3], "crypto/ct/ct_sct.c", 101);
    v8 = a2 == 0;
    if ( a2 )
      v8 = a3 == 0;
    a1[3] = 0;
    a1[4] = 0;
    if ( v8 )
      result = 1;
    a1[15] = 0;
    if ( !v8 )
    {
      v9 = sub_E9E68(a2, a3, "crypto/ct/ct_sct.c", 107);
      a1[3] = v9;
      if ( v9 )
      {
        a1[4] = a3;
        return 1;
      }
      else
      {
        sub_D0048(50, 115, 65, "crypto/ct/ct_sct.c", 109);
        return 0;
      }
    }
  }
  return result;
}
