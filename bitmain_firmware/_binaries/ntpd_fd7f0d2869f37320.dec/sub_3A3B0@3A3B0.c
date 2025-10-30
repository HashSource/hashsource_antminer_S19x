int __fastcall sub_3A3B0(_DWORD *a1)
{
  __int64 v1; // r8
  double v3; // r0
  int v4; // r2
  int v5; // s15
  double v6; // d0
  bool v7; // nf
  unsigned int v8; // r12
  __int64 v9; // r6
  __int64 v10; // r0
  int v11; // r2
  int v13; // [sp+1Ch] [bp-10h] BYREF
  unsigned int v14; // [sp+20h] [bp-Ch]

  LODWORD(v3) = sub_64318(a1[48], a1[49], a1[50], a1[51], 0, a1[58], a1 + 53, &v13);
  if ( LODWORD(v3) )
  {
    v5 = a1[52];
    LODWORD(v3) = 32;
    v14 = 0;
    HIDWORD(v1) = 0;
    v6 = (double)v5 / 1000000000.0;
    v7 = v6 < 0.0;
    if ( v6 >= 0.0 )
      LODWORD(v1) = 0;
    else
      v6 = -v6;
    if ( v7 )
      LODWORD(v1) = 1;
    ldexp(v3, v4);
    v10 = sub_8D558(LODWORD(v6), HIDWORD(v6));
    v8 = v14;
    v9 = v10 ^ -v1;
    LODWORD(v10) = a1;
    v11 = v13 + ((unsigned __int64)(v9 + v1) >> 32);
    v14 += v9 + v1;
    if ( v8 > v14 )
      ++v11;
    v13 = v11;
    HIDWORD(v10) = v11;
    sub_3A258(v10, v14);
    LODWORD(v3) = 1;
  }
  return LODWORD(v3);
}
