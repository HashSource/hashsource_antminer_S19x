int __fastcall sub_15D958(int a1, int a2, unsigned __int8 *a3, int a4)
{
  unsigned __int8 *v4; // r7
  int v5; // r0
  unsigned __int8 *v6; // r0
  int v7; // r4
  int v8; // t1
  int v9; // r0
  int v10; // r4
  unsigned __int8 *v11; // r5
  bool v12; // zf
  int v13; // t1
  unsigned __int8 *v14; // r2
  int v15; // r6
  int v16; // lr
  int v17; // r5
  int v18; // r8
  int v19; // r5
  char v20; // r3
  int v21; // r4
  int v22; // r3
  int v23; // r4
  int v24; // r3
  int result; // r0
  int v26; // r12
  int v27; // r3

  if ( a1 )
  {
    if ( (*(_DWORD *)(a1 + 92) & 2) != 0 )
      v4 = (unsigned __int8 *)&unk_1DC220;
    else
      v4 = (unsigned __int8 *)&unk_1DC1A0;
  }
  else
  {
    v4 = (unsigned __int8 *)&unk_1DC1A0;
  }
  if ( a4 > 0 )
  {
    v5 = *a3;
    if ( (v5 & 0x80) == 0 && v4[v5] == 224 )
    {
      v6 = a3 + 1;
      do
      {
        --a4;
        a3 = v6;
        if ( !a4 )
          return a4;
        v8 = *v6++;
        v7 = v8;
      }
      while ( (v8 & 0x80) == 0 && v4[v7] == 224 );
    }
    if ( a4 > 3 )
    {
      v9 = a4 - 1;
      v10 = a3[a4 - 1];
      v11 = &a3[a4 - 1];
      if ( (v10 & 0x80) == 0 )
      {
        do
        {
          if ( (v4[v10] | 0x13) != 0xF3 )
            break;
          v12 = v9 == 3;
          a4 = v9--;
          if ( v12 )
            return -1;
          v13 = *--v11;
          v10 = v13;
        }
        while ( (v13 & 0x80) == 0 );
      }
    }
    if ( !(a4 << 30) )
    {
      v14 = a3 + 4;
      v15 = a2 + 3;
      v16 = 3 * ((unsigned int)(a4 - 1) >> 2) + 6 + a2;
      while ( 1 )
      {
        v22 = *(v14 - 4);
        v23 = (v22 & 0x80) != 0 ? 255 : v4[v22];
        v24 = *(v14 - 3);
        result = v15 - a2;
        v26 = (v24 & 0x80) != 0 ? 255 : v4[v24];
        v27 = *(v14 - 2);
        if ( (v27 & 0x80) != 0 )
          break;
        v17 = *(v14 - 1);
        v14 += 4;
        v18 = v4[v27];
        if ( (v17 & 0x80) != 0 )
          break;
        v19 = v4[v17];
        v20 = v18 | v26 | v19 | v23;
        v21 = v19 | (v23 << 18) | (v26 << 12) | (v18 << 6);
        if ( v20 < 0 )
          break;
        *(_BYTE *)(v15 - 1) = v21;
        *(_BYTE *)(v15 - 3) = BYTE2(v21);
        v15 += 3;
        *(_BYTE *)(v15 - 5) = BYTE1(v21);
        if ( v16 == v15 )
          return result;
      }
    }
    return -1;
  }
  a4 &= 3u;
  if ( a4 )
    return -1;
  return a4;
}
