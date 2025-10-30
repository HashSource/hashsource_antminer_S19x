int __fastcall sub_39BC8(_DWORD *a1)
{
  double v2; // r0
  int v3; // r2
  int v4; // s15
  double v5; // d0
  __int64 v6; // r8
  unsigned int v8; // [sp+14h] [bp-10h] BYREF
  unsigned int v9; // [sp+18h] [bp-Ch]

  LODWORD(v2) = sub_633D8(a1[48], a1[49], a1[50], a1[51], 0, a1[58], a1 + 53, &v8);
  if ( LODWORD(v2) )
  {
    v4 = a1[52];
    v9 = 0;
    v5 = (double)v4 / 1000000000.0;
    LODWORD(v2) = 32;
    ldexp(v2, v3);
    if ( v5 < 0.0 )
      v6 = -sub_8C010(COERCE_UNSIGNED_INT64(-v5), HIDWORD(COERCE_UNSIGNED_INT64(-v5)));
    else
      v6 = sub_8C010(LODWORD(v5), HIDWORD(v5));
    v8 = (v6 + __PAIR64__(v8, v9)) >> 32;
    v9 += v6;
    sub_39A70(a1, v8, v9);
    LODWORD(v2) = 1;
  }
  return LODWORD(v2);
}
