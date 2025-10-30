int __fastcall sub_2F3E24(int a1, int a2, int a3, unsigned int a4)
{
  unsigned int v5; // r1
  unsigned int *v6; // r5
  unsigned int v7; // r1
  unsigned int v8; // r0
  unsigned int v9; // r4
  unsigned int *v10; // r12
  unsigned int v11; // r2
  unsigned int v12; // r2
  char v13; // r1
  int v15; // r4
  unsigned int *v16; // r12
  unsigned int v17; // r0
  unsigned int *v18; // r2
  unsigned int *v19; // r1
  unsigned int v20; // r2
  unsigned int v21; // r6
  _DWORD *v22; // r1
  int v23; // r12
  int v24; // t1
  _DWORD *v25; // r2
  unsigned int *v26; // r5
  _DWORD *v27; // r4
  unsigned int v28; // r1
  bool v29; // zf
  unsigned int v30; // r3
  int v31; // r1
  unsigned int v32; // [sp+4h] [bp-14h]

  if ( (*(_WORD *)(a3 + 24) & 0x380) != 0x180 )
    return a4;
  v5 = *(_DWORD *)(a3 + 40);
  if ( v5 > a4 )
  {
    v6 = *(unsigned int **)(*(_DWORD *)(a3 + 140) + 136);
    v7 = *v6;
    if ( *v6 )
    {
      v8 = 0;
      do
      {
        while ( 1 )
        {
          v9 = (v7 + v8) >> 1;
          v10 = &v6[8 * v9];
          v11 = v10[6];
          if ( v11 <= a4 )
            break;
          v7 = (v7 + v8) >> 1;
          if ( v9 <= v8 )
            goto LABEL_10;
        }
        v8 = v9 + 1;
        if ( v11 + v10[5] > a4 )
          goto LABEL_11;
      }
      while ( v7 > v8 );
    }
    else
    {
      v9 = 0;
    }
LABEL_10:
    v32 = a4;
    sub_2A6BBC("elf-eh-frame.c", 1777);
    a4 = v32;
LABEL_11:
    v12 = v9 + 1;
    v13 = HIBYTE(v6[8 * v9 + 8]);
    if ( (v13 & 2) != 0 )
      return -1;
    v15 = 8 * v9;
    v16 = &v6[v15];
    v17 = v6[v15 + 6];
    if ( (v13 & 1) != 0 )
    {
      if ( (*((_BYTE *)v16 + 14) & 4) != 0 && *((unsigned __int8 *)v16 + 12) + v17 + 8 == a4 )
        return -2;
    }
    else if ( (v13 & 8) != 0 && v17 + 8 == a4
           || (*(_BYTE *)(v6[v15 + 2] + 6) & 2) != 0 && BYTE2(v6[8 * v12]) + v17 + 8 == a4 )
    {
      return -2;
    }
    v18 = &v6[8 * v12];
    v19 = (unsigned int *)v18[1];
    if ( v19 )
    {
      if ( (*((_BYTE *)v18 + 3) & 8) != 0 )
      {
        v20 = v17 + 8 + v19[1];
        if ( v20 <= a4 )
        {
          v21 = *v19;
          if ( *v19 )
          {
            if ( v20 == a4 )
              return -2;
            v22 = v19 + 1;
            v23 = 1;
            while ( ++v23 <= v21 )
            {
              v24 = v22[1];
              ++v22;
              if ( v17 + 8 + v24 == a4 )
                return -2;
            }
          }
        }
      }
    }
    v25 = v6 + 2;
    v26 = &v6[v15];
    v27 = &v25[v15];
    v28 = *((unsigned __int8 *)v27 + 27);
    v29 = (v28 & 1) == 0;
    v30 = a4 + v26[7] - v17;
    v31 = (v28 >> 2) & 1;
    if ( !v29 )
    {
      if ( (*((_BYTE *)v27 + 6) & 0x20) != 0 )
        ++v31;
      v30 += v31;
    }
    return v31 + v30;
  }
  return a4 + *(_DWORD *)(a3 + 36) - v5;
}
