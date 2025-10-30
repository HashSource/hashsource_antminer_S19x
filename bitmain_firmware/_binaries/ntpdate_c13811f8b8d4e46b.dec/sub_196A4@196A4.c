__int64 __fastcall sub_196A4(unsigned int *a1, unsigned int *a2)
{
  int v2; // r2
  unsigned int v3; // r6
  unsigned int v4; // r4
  unsigned __int64 v5; // r6
  unsigned __int64 v6; // r4

  v2 = (int)a2;
  if ( a2 )
    v2 = 1;
  if ( !a1 )
    v2 = 0;
  if ( !v2 )
    sub_1073C();
  v3 = a1[1];
  if ( v3 > 0x3B9AC9FF || (v4 = a2[1], v4 > 0x3B9AC9FF) )
    sub_1073C();
  v5 = 1000000000LL * *a1 + v3;
  v6 = 1000000000LL * *a2 + v4;
  if ( v5 > v6 )
    return sub_1C3E8((int)v5 - (int)v6, (v5 - v6) >> 32, 1000, 0);
  else
    return 0;
}
