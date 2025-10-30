unsigned int __fastcall sub_14FA24(_DWORD *a1, unsigned int a2, int a3)
{
  char v3; // r4
  unsigned int v5; // r9
  int v6; // r0
  int v7; // lr
  int v8; // r12
  __int64 v9; // r2
  int v10; // r8
  int v11; // r4
  __int64 v12; // r6
  _DWORD *v13; // r11
  unsigned int v14; // r1
  unsigned int v15; // r0
  int v16; // r1
  unsigned int v17; // lr
  _DWORD *v18; // r6
  unsigned int v19; // r2
  _DWORD *v20; // r3
  int v21; // r9
  int v22; // r0
  int v23; // r1
  _DWORD *v24; // r8
  _DWORD *v25; // r11
  _DWORD *v26; // r12
  int v27; // r0
  int v28; // r1
  _DWORD *v29; // r7
  int v30; // r1
  int v31; // r1
  _DWORD *v32; // r3
  _DWORD *v33; // r4
  int v34; // r1
  int v37; // [sp+4h] [bp-8h]

  v3 = a3 + 1;
  v12 = a2;
  v5 = 1;
  v6 = sub_189090(446, a3 + 1);
  LODWORD(v9) = *(unsigned __int16 *)v12;
  v7 = 1 << v3;
  a1[2 * v6 + 4] = -1;
  v37 = v6 + 3;
  v8 = 0;
  v9 = (unsigned int)v9;
  v10 = (1 << v3) - 1;
  v11 = v6 + 1;
  LODWORD(v12) = 0xFFFF;
  a1[2 * v6 + 5] = 0;
  do
  {
    if ( v5 <= 0x1B )
      v9 += (unsigned int)(*(_DWORD *)(a2 + 4 * (v5 >> 1)) >> (16 * (v5 & 1)) << 16);
    if ( (v9 & v12) != 0 )
    {
      v13 = &a1[2 * v11];
      do
      {
        v14 = __clz(__rbit32(v9));
        v13 -= 2;
        a1[2 * v11--] = v14 + v8;
        v15 = v10 & ((unsigned int)v9 >> v14);
        if ( (((unsigned int)v9 >> v14) & v7) != 0 )
          v15 -= v7;
        v13[3] = v15;
        v9 -= (int)(v15 << v14);
      }
      while ( (v9 & v12) != 0 );
    }
    ++v5;
    v16 = v9 >> 16;
    v8 += 16;
    HIDWORD(v9) >>= 16;
    LODWORD(v9) = v16;
  }
  while ( v5 != 30 );
  v17 = v37 - (v11 + 1);
  if ( v37 != v11 + 1 )
  {
    if ( v17 <= 4 )
    {
      v19 = 0;
    }
    else
    {
      v18 = &a1[2 * v11];
      v19 = ((v17 - 5) & 0xFFFFFFFC) + 4;
      v20 = a1;
      v21 = 0;
      do
      {
        v22 = v18[2];
        v23 = v18[3];
        v24 = v20 + 2;
        __pld(v18 + 36);
        v25 = v18 + 6;
        v26 = v20 + 4;
        *v20 = v22;
        v20[1] = v23;
        v21 += 4;
        v27 = v18[4];
        v28 = v18[5];
        v29 = v20 + 6;
        v18 += 8;
        v20 += 8;
        *v24 = v27;
        v24[1] = v28;
        v30 = v25[1];
        *v26 = *v25;
        v26[1] = v30;
        v31 = v18[1];
        *v29 = *v18;
        v29[1] = v31;
      }
      while ( v19 != v21 );
    }
    v32 = &a1[2 * v11 + 2 * v19];
    do
    {
      v32 += 2;
      v33 = &a1[2 * v19];
      v34 = v32[1];
      ++v19;
      *v33 = *v32;
      v33[1] = v34;
    }
    while ( v17 > v19 );
  }
  return v17 - 1;
}
