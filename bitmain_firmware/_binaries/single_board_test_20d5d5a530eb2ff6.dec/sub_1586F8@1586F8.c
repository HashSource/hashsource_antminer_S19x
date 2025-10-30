int __fastcall sub_1586F8(int *a1, int *a2)
{
  int v4; // r3
  int v5; // r0
  int v6; // r1
  int v7; // r3
  int v8; // r3
  int v9; // r1
  int v10; // r3

  if ( !sub_B89E4(a1[10], a2[10]) || !sub_B89E4(a1[17], a2[17]) || !sub_B89E4(a1[18], a2[18]) )
    return 0;
  v4 = a2[11];
  v5 = a1[17];
  a1[11] = v4;
  v6 = v4 + 126;
  v7 = v4 + 63;
  if ( v7 >= 0 )
    v6 = v7;
  a1[12] = a2[12];
  a1[13] = a2[13];
  a1[14] = a2[14];
  a1[15] = a2[15];
  a1[16] = a2[16];
  if ( !sub_B89D8(v5, v6 >> 6) )
    return 0;
  v8 = a1[11];
  v9 = v8 + 126;
  v10 = v8 + 63;
  if ( v10 >= 0 )
    v9 = v10;
  if ( !sub_B89D8(a1[18], v9 >> 6) )
    return 0;
  sub_133580((_DWORD *)a1[17]);
  sub_133580((_DWORD *)a1[18]);
  return 1;
}
