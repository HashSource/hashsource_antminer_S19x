int __fastcall sub_336EC(int *a1, _DWORD *a2, unsigned int a3)
{
  bool v4; // cc
  _BOOL4 v5; // r2
  int v6; // r12
  unsigned int v7; // r2
  unsigned int v8; // r1
  unsigned int v9; // r2
  unsigned int v10; // r1
  int v11; // r12
  int v12; // r0
  bool v13; // zf
  int v14; // r2

  if ( a2[21] != 52 )
    return 0;
  v4 = a3 > 4;
  if ( a3 != 4 )
    v4 = a3 - 1 > 1;
  if ( v4 )
    return 1;
  v5 = a1 == 0;
  if ( a2[34] )
    v5 = 1;
  if ( v5 || !a1[31] && (a1[17] & 0x800) == 0 )
    return 1;
  v6 = a1[79];
  v7 = a2[28];
  v8 = a2[29];
  v9 = bswap32(v7);
  if ( v6 > 0 )
    a1 += 148;
  v10 = bswap32(v8);
  if ( v6 <= 0 )
    a1 += 146;
  if ( !(v9 | v10) )
    return 1;
  v11 = *a1;
  v12 = a1[1];
  v13 = v10 == v12;
  if ( v10 == v12 )
    v13 = v9 == v11;
  v14 = !v13;
  if ( !(v11 | v12) )
    v14 = 1;
  if ( v14 )
    return 1;
  else
    return 2;
}
