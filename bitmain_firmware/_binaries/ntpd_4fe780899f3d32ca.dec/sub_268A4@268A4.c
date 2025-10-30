int __fastcall sub_268A4(unsigned __int8 *a1, unsigned __int8 *a2)
{
  int v2; // lr
  int v4; // r2
  int v5; // r2
  int v6; // r2
  int v7; // r2
  int v8; // r2

  v2 = *(unsigned __int16 *)a2;
  if ( *(unsigned __int16 *)a1 - v2 < 0 )
    return -1;
  if ( *(unsigned __int16 *)a1 != v2 )
    return 1;
  v4 = a2[4];
  if ( a1[4] - v4 < 0 )
    return -1;
  if ( a1[4] != v4 )
    return 1;
  v5 = a2[5];
  if ( a1[5] - v5 < 0 )
    return -1;
  if ( a1[5] != v5 )
    return 1;
  v6 = a2[6];
  if ( a1[6] - v6 < 0 )
    return -1;
  if ( a1[6] != v6 )
    return 1;
  v7 = a2[7];
  if ( a1[7] - v7 < 0 )
    return -1;
  if ( a1[7] != v7 )
    return 1;
  v8 = a2[8];
  if ( a1[8] - v8 < 0 )
    return -1;
  else
    return a1[8] != v8;
}
