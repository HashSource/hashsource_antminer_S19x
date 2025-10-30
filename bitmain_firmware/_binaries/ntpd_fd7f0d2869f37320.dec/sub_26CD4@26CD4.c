int __fastcall sub_26CD4(unsigned __int8 *a1, unsigned __int8 *a2)
{
  int v2; // r2
  int v3; // lr
  int v5; // r2
  int v6; // r2
  int v7; // r2
  int v8; // r2
  int v9; // r2

  v2 = *(unsigned __int16 *)a1;
  v3 = *(unsigned __int16 *)a2;
  if ( v2 - v3 < 0 )
    return -1;
  if ( v2 != v3 )
    return 1;
  v5 = a2[4];
  if ( a1[4] - v5 < 0 )
    return -1;
  if ( a1[4] != v5 )
    return 1;
  v6 = a2[5];
  if ( a1[5] - v6 < 0 )
    return -1;
  if ( a1[5] != v6 )
    return 1;
  v7 = a2[6];
  if ( a1[6] - v7 < 0 )
    return -1;
  if ( a1[6] != v7 )
    return 1;
  v8 = a2[7];
  if ( a1[7] - v8 < 0 )
    return -1;
  if ( a1[7] != v8 )
    return 1;
  v9 = a2[8];
  if ( a1[8] - v9 < 0 )
    return -1;
  else
    return a1[8] != v9;
}
