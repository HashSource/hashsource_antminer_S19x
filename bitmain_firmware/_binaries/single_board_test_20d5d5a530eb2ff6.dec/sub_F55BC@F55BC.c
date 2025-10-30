_DWORD *__fastcall sub_F55BC(char *a1, int a2, char *a3, int a4)
{
  int v4; // lr
  int v5; // r10
  int v6; // r11
  int v7; // r4
  int v8; // r3
  bool v9; // cf
  char v10; // r5
  int v11; // r5
  unsigned int v12; // r5
  unsigned int v13; // r8
  unsigned int v14; // r5
  int v15; // r12
  unsigned int v16; // r6
  _BYTE *v17; // r7
  _BYTE *v18; // r5
  unsigned int v19; // r6
  int v20; // r9
  int v21; // r3
  char *v22; // r7
  char *v23; // r5
  char *v24; // r5
  int v25; // t1
  int v26; // r5
  int v27; // r12
  unsigned __int8 *v28; // r5
  unsigned __int8 v29; // r2
  char *v30; // r6
  char v31; // t1
  int v32; // r4
  char *v33; // r3
  char *v34; // r4
  int v35; // r2
  int v36; // t1
  _DWORD *v37; // r12
  unsigned __int8 *v38; // r3
  int v39; // r7
  int v40; // r1
  int v41; // lr
  int v42; // r5
  _DWORD *v43; // r2
  int v44; // r4
  unsigned __int8 *v45; // r1
  unsigned __int8 *v46; // r4
  _DWORD *result; // r0
  int v48; // r2
  char *v49; // r5
  char *v50; // r7
  char v51; // t1
  char *v52; // [sp+4h] [bp-10h]
  char *v53; // [sp+8h] [bp-Ch]
  int v54; // [sp+Ch] [bp-8h]

  if ( a2 >= 128 )
    a2 = 128;
  v4 = 0;
  *a1 = 0;
  if ( a4 <= 0 )
  {
    LOBYTE(v5) = -1;
    v6 = 0;
    v8 = -1;
    v7 = 128;
  }
  else if ( a4 <= 1024 )
  {
    v7 = (a4 + 7) >> 3;
    v6 = 128 - v7;
    v5 = 255 >> (-(char)a4 & 7);
    v4 = 128 - v7;
    v8 = 127 - v7;
  }
  else
  {
    LOBYTE(v5) = -1;
    v6 = 0;
    v7 = 128;
    v8 = -1;
  }
  if ( a2 <= 0 )
  {
    v28 = (unsigned __int8 *)&a1[a2];
    v29 = a1[a2 - 1];
LABEL_28:
    v30 = a1 - 1;
    do
    {
      v31 = *++v30;
      v29 = byte_1C38B8[(unsigned __int8)(v29 + v31)];
      *v28++ = v29;
    }
    while ( v28 != (unsigned __int8 *)(a1 + 128) );
    goto LABEL_30;
  }
  v9 = a3 >= a1 + 4;
  if ( a3 < a1 + 4 )
    v9 = a1 >= a3 + 4;
  v10 = v9;
  if ( (unsigned int)a2 <= 9 )
    v10 = 0;
  v11 = v10 & 1;
  if ( (((unsigned __int8)a1 | (unsigned __int8)a3) & 3) != 0 )
    v11 = 0;
  if ( v11 )
  {
    v12 = (unsigned int)(a2 - 4) >> 2;
    v13 = v12 + 1;
    v14 = v12 - 8;
    v15 = 4 * v13;
    if ( v14 > 0xFFFFFFF6 )
    {
      v22 = a1;
      v23 = a3;
      v19 = 0;
    }
    else
    {
      v16 = v14 & 0xFFFFFFF8;
      v17 = a1 + 32;
      v18 = a3 + 32;
      v19 = v16 + 8;
      v20 = 0;
      v54 = v8;
      do
      {
        v21 = *((_DWORD *)v18 - 8);
        v20 += 8;
        __pld(v18 + 84);
        v52 = v18;
        v18 += 32;
        *((_DWORD *)v17 - 8) = v21;
        v53 = v17;
        v17 += 32;
        *((_DWORD *)v17 - 15) = *((_DWORD *)v18 - 15);
        *((_DWORD *)v17 - 14) = *((_DWORD *)v18 - 14);
        *((_DWORD *)v17 - 13) = *((_DWORD *)v18 - 13);
        *((_DWORD *)v17 - 12) = *((_DWORD *)v18 - 12);
        *((_DWORD *)v17 - 11) = *((_DWORD *)v18 - 11);
        *((_DWORD *)v17 - 10) = *((_DWORD *)v18 - 10);
        *((_DWORD *)v17 - 9) = *((_DWORD *)v18 - 9);
      }
      while ( v19 != v20 );
      v8 = v54;
      v22 = v53;
      v23 = v52;
    }
    v24 = v23 - 4;
    do
    {
      v25 = *((_DWORD *)v24 + 1);
      v24 += 4;
      ++v19;
      *(_DWORD *)v22 = v25;
      v22 += 4;
    }
    while ( v13 > v19 );
    if ( v15 != a2 )
    {
      v26 = v15 + 1;
      a1[4 * v13] = a3[4 * v13];
      if ( a2 > v15 + 1 )
      {
        v27 = v15 + 2;
        a1[v26] = a3[v26];
        if ( a2 > v27 )
          a1[v27] = a3[v27];
      }
    }
  }
  else
  {
    v49 = a1 - 1;
    v50 = &a3[a2];
    do
    {
      v51 = *a3++;
      *++v49 = v51;
    }
    while ( a3 != v50 );
  }
  v28 = (unsigned __int8 *)&a1[a2];
  v29 = a1[a2 - 1];
  if ( a2 != 128 )
    goto LABEL_28;
LABEL_30:
  v32 = v7 + v8;
  v33 = &a1[v8];
  v34 = &a1[v32];
  v35 = byte_1C38B8[(unsigned __int8)(a1[v4] & v5)];
  a1[v4] = v35;
  if ( v6 )
  {
    do
    {
      v36 = (unsigned __int8)*v34--;
      LOBYTE(v35) = byte_1C38B8[v35 ^ v36];
      *v33-- = v35;
    }
    while ( a1 - 1 != v33 );
  }
  v37 = a1 + 220;
  v38 = (unsigned __int8 *)(a1 + 94);
  v39 = 64;
  v40 = 127;
  do
  {
    v41 = v38[33];
    v42 = v38[32];
    v39 -= 8;
    __pld(v38);
    __pld(v37 - 8);
    v43 = v37;
    v44 = v40;
    v38 -= 16;
    v40 -= 16;
    v37[8] = v42 | (v41 << 8);
    v37[7] = v38[46] | (v38[47] << 8);
    v37[6] = v38[44] | (v38[45] << 8);
    v37[5] = v38[42] | (v38[43] << 8);
    v37[4] = v38[40] | (v38[41] << 8);
    v37[3] = v38[38] | (v38[39] << 8);
    v37[2] = v38[36] | (v38[37] << 8);
    v37[1] = v38[34] | (v38[35] << 8);
    v37 -= 8;
  }
  while ( v39 != 8 );
  v45 = (unsigned __int8 *)&a1[v40];
  v46 = (unsigned __int8 *)&a1[v44 - 32];
  result = v43 + 1;
  do
  {
    v48 = *v45;
    v45 -= 2;
    *--result = v45[1] | (v48 << 8);
  }
  while ( v46 != v45 );
  return result;
}
