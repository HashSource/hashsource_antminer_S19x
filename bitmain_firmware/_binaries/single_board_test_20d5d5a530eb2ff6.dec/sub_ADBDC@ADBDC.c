int __fastcall sub_ADBDC(int a1, int a2, int a3, int a4)
{
  _DWORD *v8; // r0
  int v9; // r4
  int v10; // r0
  int v11; // r0

  v8 = (_DWORD *)sub_E0740(144, "crypto/asn1/ameth_lib.c", 220);
  v9 = (int)v8;
  if ( !v8 )
    return v9;
  *v8 = a1;
  v8[2] = a2 | 2;
  v8[1] = a1;
  if ( !a4 || (v10 = sub_E9E3C(a4, "crypto/asn1/ameth_lib.c", 230), (*(_DWORD *)(v9 + 16) = v10) != 0) )
  {
    if ( !a3 )
      return v9;
    v11 = sub_E9E3C(a3, "crypto/asn1/ameth_lib.c", 236);
    *(_DWORD *)(v9 + 12) = v11;
    if ( v11 )
      return v9;
  }
  sub_ADB9C(v9);
  return 0;
}
