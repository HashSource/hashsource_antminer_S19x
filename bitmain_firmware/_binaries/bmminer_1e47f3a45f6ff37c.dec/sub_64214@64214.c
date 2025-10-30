__int64 __fastcall sub_64214(int a1)
{
  double v1; // r0
  double v3; // r2
  unsigned int v4; // r4
  __int64 v5; // r0
  unsigned int v6; // r2
  char v8[2048]; // [sp+10h] [bp-834h] BYREF
  unsigned __int8 v9[12]; // [sp+810h] [bp-34h] BYREF
  __int16 v10; // [sp+81Ch] [bp-28h]
  _DWORD v11[2]; // [sp+820h] [bp-24h] BYREF
  __int16 v12; // [sp+82Ah] [bp-1Ah]
  char v13; // [sp+82Dh] [bp-17h]
  char v14; // [sp+82Eh] [bp-16h]
  char v15; // [sp+82Fh] [bp-15h]
  int i; // [sp+830h] [bp-14h]
  int v17; // [sp+834h] [bp-10h]
  char vars0; // [sp+838h] [bp-Ch] BYREF

  v15 = 4;
  v14 = -118;
  v11[0] = -1979405739;
  memset(v9, 0, sizeof(v9));
  v10 = 0;
  v17 = -2147482880;
  v12 = 142;
  v11[1] = 142;
  v13 = 6;
  if ( a1 == 255 )
  {
    LODWORD(v1) = sub_61420((unsigned __int8 *)v11, 8u, v9, 0xEu);
    if ( LODWORD(v1) )
    {
LABEL_3:
      strcpy(v8, "clear power status failed\n");
      sub_3B6AC(0, v8, 0, (int)v8);
      return 2147484416LL;
    }
  }
  else
  {
    LODWORD(v1) = sub_615B0(a1, (unsigned __int8 *)v11, 8u, v9, 0xEu);
    if ( LODWORD(v1) )
      goto LABEL_3;
  }
  for ( i = 0; i <= 7; ++i )
  {
    LODWORD(v3) = &vars0;
    v4 = v9[i + 4];
    HIDWORD(v3) = 8 * i;
    pow(v1, v3);
    v5 = sub_8FE5C(COERCE_UNSIGNED_INT64(2.0), HIDWORD(COERCE_UNSIGNED_INT64(2.0)));
    v6 = v5;
    LODWORD(v1) = 0;
    HIDWORD(v1) = (__PAIR64__(HIDWORD(v5), v6) * v4) >> 32;
    v17 |= v4 * v6;
  }
  return v17;
}
