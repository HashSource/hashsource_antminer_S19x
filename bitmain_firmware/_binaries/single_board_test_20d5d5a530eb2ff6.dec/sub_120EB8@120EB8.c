_DWORD *__fastcall sub_120EB8(int a1, int a2, const char *a3)
{
  _DWORD *v4; // r4
  _BYTE *v5; // r5
  _DWORD *result; // r0
  int v7; // [sp+Ch] [bp-8h] BYREF

  v4 = (_DWORD *)sub_B2068();
  if ( v4 )
  {
    v5 = sub_E9FB4(a3, &v7);
    v4[2] = v5;
    if ( v5 )
    {
      result = v4;
      *v4 = v7;
    }
    else
    {
      j_ASN1_STRING_free(v4);
      return 0;
    }
  }
  else
  {
    sub_D0048(34, 112, 65, (int)"crypto/x509v3/v3_skey.c", 40);
    return 0;
  }
  return result;
}
