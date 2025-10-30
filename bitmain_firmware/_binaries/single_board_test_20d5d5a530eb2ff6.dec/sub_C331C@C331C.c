int __fastcall sub_C331C(_DWORD *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  int v8; // r0
  int v9; // r3

  if ( !a1 )
    return 0;
  v8 = sub_C620C(a1, a2);
  if ( sub_C6210(v8) != 407 || !a1[11] || !a1[12] || !a1[13] || (v9 = a1[14]) == 0 || a1[15] )
  {
    sub_D0048(16, 193, 66, "crypto/ec/ec_asn1.c", 74);
    return 0;
  }
  if ( a2 )
    *a2 = v9;
  if ( a3 )
    *a3 = a1[13];
  if ( a4 )
    *a4 = a1[12];
  return 1;
}
