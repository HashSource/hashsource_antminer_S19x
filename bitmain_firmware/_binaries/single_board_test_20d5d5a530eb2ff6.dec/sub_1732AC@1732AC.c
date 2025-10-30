int __fastcall sub_1732AC(unsigned int a1, int a2, const void *a3, int a4)
{
  _DWORD *v8; // r0
  int v9; // r4
  int v10; // r5
  int result; // r0

  v8 = (_DWORD *)sub_B2888();
  v9 = (int)v8;
  if ( v8 )
  {
    v10 = sub_173184(v8, a1, a2, a3, a4);
    result = v9;
    if ( !v10 )
    {
      X509_ALGOR_free(v9);
      return 0;
    }
  }
  else
  {
    sub_D0048(13, 202, 65, (int)"crypto/asn1/p5_pbe.c", 87);
    return 0;
  }
  return result;
}
