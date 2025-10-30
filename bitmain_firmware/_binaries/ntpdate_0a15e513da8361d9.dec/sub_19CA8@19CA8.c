__int64 __fastcall sub_19CA8(unsigned int *a1, unsigned int *a2)
{
  bool v2; // zf
  unsigned int v3; // r2
  unsigned int v4; // lr
  unsigned __int64 v5; // r2
  unsigned __int64 v6; // r0

  v2 = a1 == 0;
  if ( a1 )
    v2 = a2 == 0;
  if ( v2 )
    sub_10C38();
  v3 = a1[1];
  if ( v3 > 0x3B9AC9FF || (v4 = a2[1], v4 > 0x3B9AC9FF) )
    sub_10C38();
  v5 = 1000000000LL * *a1 + v3;
  v6 = 1000000000LL * *a2 + v4;
  if ( v5 > v6 )
    return sub_1C980((int)v5 - (int)v6, (v5 - v6) >> 32, 1000, 0);
  else
    return 0;
}
