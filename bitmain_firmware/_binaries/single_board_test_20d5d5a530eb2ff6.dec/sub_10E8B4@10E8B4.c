bool __fastcall sub_10E8B4(int a1, _DWORD *a2)
{
  _DWORD *v3; // r0
  int v4; // r0

  v3 = (_DWORD *)sub_10E89C(a1);
  if ( !v3 )
  {
LABEL_8:
    sub_D0048(11, 128, 117, (int)"crypto/x509/x509_cmp.c", 309);
    return 0;
  }
  v4 = sub_D9B60(v3, a2);
  if ( v4 != -1 )
  {
    if ( !v4 )
    {
      sub_D0048(11, 128, 116, (int)"crypto/x509/x509_cmp.c", 303);
      return 0;
    }
    if ( v4 != -2 )
      return v4 > 0;
    goto LABEL_8;
  }
  sub_D0048(11, 128, 115, (int)"crypto/x509/x509_cmp.c", 306);
  return 0;
}
