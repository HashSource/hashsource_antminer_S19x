int __fastcall sub_5A628(unsigned int *a1, char *src, size_t a3)
{
  unsigned int v4; // r3
  char *v6; // r8
  unsigned int v7; // r0
  unsigned int v8; // r3
  unsigned int v9; // r5
  bool v10; // cc
  int v11; // r6
  char *v12; // r11
  int v13; // r6
  int v14; // r4
  char *v15; // r12
  int v16; // r0
  int v17; // r2
  int v18; // lr
  unsigned int v20; // r6
  unsigned int v21; // r1
  int v22; // r0
  int v23; // t2
  unsigned int v24; // r4
  char *v25; // [sp+4h] [bp-2Ch]

  if ( !src )
    return 1;
  v4 = *a1;
  v25 = &src[a3];
  v6 = src;
  v7 = a1[10];
  v8 = v4 + a3;
  v9 = a1[1];
  v10 = v8 > 0xF;
  if ( v8 <= 0xF )
    v10 = a3 > 0xF;
  *a1 = v8;
  v11 = v10;
  a1[1] = v9 | v11;
  if ( a3 + v7 <= 0xF )
  {
    memcpy((char *)a1 + v7 + 24, src, a3);
    a1[10] += a3;
    return 0;
  }
  else
  {
    if ( v7 )
    {
      memcpy((char *)a1 + v7 + 24, src, 16 - v7);
      v20 = a1[9];
      v21 = a1[5];
      v22 = __ROR4__(a1[3] - 2048144777 * a1[7], 19);
      v23 = __ROR4__(a1[4] - 2048144777 * a1[8], 19);
      a1[2] = -1640531535 * __ROR4__(a1[2] - 2048144777 * a1[6], 19);
      v24 = a1[10];
      a1[3] = -1640531535 * v22;
      a1[10] = 0;
      a1[4] = -1640531535 * v23;
      v6 += 16 - v24;
      a1[5] = -1640531535 * __ROR4__(v21 - 2048144777 * v20, 19);
    }
    v12 = v25 - 16;
    if ( v25 - 16 >= v6 )
    {
      v13 = a1[2];
      v14 = a1[3];
      v15 = v6;
      v16 = a1[4];
      v17 = a1[5];
      do
      {
        v18 = *(_DWORD *)v15;
        v15 += 16;
        v13 = -1640531535 * __ROR4__(v13 - 2048144777 * v18, 19);
        v16 = -1640531535 * __ROR4__(v16 - 2048144777 * *((_DWORD *)v15 - 2), 19);
        v17 = -1640531535 * __ROR4__(v17 - 2048144777 * *((_DWORD *)v15 - 1), 19);
        v14 = -1640531535 * __ROR4__(v14 - 2048144777 * *((_DWORD *)v15 - 3), 19);
      }
      while ( v12 >= v15 );
      a1[2] = v13;
      a1[3] = v14;
      a1[4] = v16;
      v6 += ((v12 - v6) & 0xFFFFFFF0) + 16;
      a1[5] = v17;
    }
    if ( v25 > v6 )
    {
      memcpy(a1 + 6, v6, v25 - v6);
      a1[10] = v25 - v6;
    }
    return 0;
  }
}
