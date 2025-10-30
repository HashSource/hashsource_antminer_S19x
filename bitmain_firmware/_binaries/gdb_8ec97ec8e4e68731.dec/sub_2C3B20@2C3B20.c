int __fastcall sub_2C3B20(int a1, int a2)
{
  _DWORD *v2; // r5
  int v4; // r1
  unsigned int v5; // r4
  int v6; // r12
  int v7; // r3
  unsigned int v8; // r2
  size_t v9; // r3
  void *v11; // r0
  __int64 v12; // r2
  unsigned int v13; // r4
  signed int v14; // r0
  char *v15; // r0
  char *v16; // r4
  char *v17; // r3
  _DWORD *v18; // r2
  unsigned int i; // r3

  v2 = *(_DWORD **)(a2 + 28);
  if ( v2[11] != 4 || v2[10] != 1 )
    return 0;
  v4 = *(_DWORD *)(a2 + 56);
  if ( v4 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      v7 = *(_DWORD *)(v4 + 100);
      ++v6;
      while ( v7 )
      {
        v8 = *(_DWORD *)(v7 + 4);
        v7 = *(_DWORD *)(v7 + 12);
        if ( v5 < v8 )
          v5 = v8;
      }
      v4 = *(_DWORD *)(v4 + 156);
    }
    while ( v4 );
    v9 = 8 * (v5 + 1);
  }
  else
  {
    v5 = 0;
    v9 = 8;
    v6 = 0;
  }
  v2[327] = v6;
  v11 = sub_2AB4EC(v9);
  v2[323] = v11;
  if ( !v11 )
    return -1;
  HIDWORD(v12) = *(_DWORD *)(a1 + 100);
  v2[326] = v5;
  if ( HIDWORD(v12) )
  {
    v13 = 0;
    do
    {
      v12 = *(_QWORD *)(HIDWORD(v12) + 8);
      if ( v13 < (unsigned int)v12 )
        v13 = v12;
    }
    while ( HIDWORD(v12) );
    v14 = 4 * (v13 + 1);
  }
  else
  {
    v13 = 0;
    v14 = 4;
  }
  v2[328] = v13;
  v15 = (char *)sub_2AB368(v14);
  v2[329] = v15;
  if ( !v15 )
    return -1;
  v16 = &v15[4 * v13];
  v17 = v16 + 4;
  do
  {
    *((_DWORD *)v17 - 1) = &off_470950;
    v17 -= 4;
  }
  while ( v17 != v15 );
  v18 = *(_DWORD **)(a1 + 100);
  for ( i = -((v16 - v17) & 0xFFFFFFFC); v18; v18 = (_DWORD *)v18[3] )
  {
    if ( (v18[5] & 0x10) != 0 )
      *(_DWORD *)&v16[4 * v18[2] + i] = 0;
  }
  return 1;
}
