_DWORD *__fastcall sub_12290C(int a1, int a2)
{
  _DWORD *v4; // r6
  int v5; // r0
  signed int v6; // r4
  int v7; // r3
  int v8; // r0
  _DWORD *v9; // r10
  int v11; // kr00_4
  int v12; // r11
  int v13; // r8
  int v14; // r1
  int v15; // r2
  char v16; // r0
  _DWORD *v17; // r5
  _DWORD *v18; // r2
  int v19; // r12
  bool v20; // zf
  int v21; // r2
  char v22; // r1
  int v23; // r3
  int v24; // r0
  int v25; // r3
  _DWORD *v26; // r2
  _DWORD *v27; // r3
  int v28; // r12
  bool v29; // zf
  int v30; // r3
  int v31; // r3
  int v32; // r2
  int v33; // r0
  int v34; // r3
  char *v35; // r0
  int v36; // r1
  char *v37; // r7
  int v38; // r0
  _BYTE v39[40]; // [sp+18h] [bp-3Ch] BYREF
  int v40; // [sp+40h] [bp-14h]
  signed int v41; // [sp+44h] [bp-10h]

  v4 = (_DWORD *)dword_4872D8;
  v5 = *(_DWORD *)(dword_4872D8 + 368);
  if ( !v5 )
  {
    v33 = sub_323980(3, sub_11C39C, sub_11C3B4, 0, *(_DWORD *)(dword_4872D8 + 344) + 48, sub_25AEEC, nullsub_44);
    v34 = dword_4872D8;
    v4[92] = v33;
    v5 = *(_DWORD *)(v34 + 368);
  }
  if ( a2 )
  {
    v6 = *(_DWORD *)(a2 + 8);
    ++v4[96];
  }
  else
  {
    v11 = v4[97];
    v4[97] = v11 + 1;
    v6 = (v11 / 10) | 0x80000000;
  }
  v7 = *(_DWORD *)(a1 + 172);
  v41 = v6;
  v40 = v7;
  v8 = sub_324030(v5, v39, 1);
  v9 = (_DWORD *)v8;
  if ( *(_DWORD *)v8 )
    return *(_DWORD **)v8;
  v12 = dword_4872D8;
  v13 = *(_DWORD *)(dword_4872D8 + 344);
  v14 = *(_DWORD *)(v13 + 64);
  v15 = *(_DWORD *)(v13 + 60);
  v16 = v14 - v15;
  if ( (unsigned int)(v14 - v15) <= 0x37 )
  {
    obstack_newchunk((struct obstack *)(v13 + 48), 56);
    v12 = dword_4872D8;
    v15 = *(_DWORD *)(v13 + 60);
    v14 = *(_DWORD *)(v13 + 64);
  }
  v17 = *(_DWORD **)(v13 + 56);
  v18 = (_DWORD *)(v15 + 56);
  v19 = *(_DWORD *)(v13 + 72);
  *(_DWORD *)(v13 + 60) = v18;
  v20 = v18 == v17;
  if ( v18 == v17 )
    v16 = *(_BYTE *)(v13 + 88);
  v21 = ((unsigned int)v18 + v19) & ~v19;
  *(_DWORD *)(v13 + 60) = v21;
  if ( v20 )
    *(_BYTE *)(v13 + 88) = v16 | 2;
  if ( v21 - *(_DWORD *)(v13 + 52) > (unsigned int)(v14 - *(_DWORD *)(v13 + 52)) )
  {
    v21 = v14;
    *(_DWORD *)(v13 + 60) = v14;
  }
  *(_DWORD *)(v13 + 56) = v21;
  memset(v17, 0, 0x38u);
  v23 = *(unsigned __int8 *)(v12 + 417);
  v17[5] = v13;
  if ( v23 )
  {
    v24 = *(_DWORD *)(v13 + 64);
    v25 = *(_DWORD *)(v13 + 60);
    if ( (unsigned int)(v24 - v25) <= 0xB )
    {
      obstack_newchunk((struct obstack *)(v13 + 48), 12);
      v25 = *(_DWORD *)(v13 + 60);
      v24 = *(_DWORD *)(v13 + 64);
    }
    v26 = *(_DWORD **)(v13 + 56);
    v27 = (_DWORD *)(v25 + 12);
    v28 = *(_DWORD *)(v13 + 72);
    *(_DWORD *)(v13 + 60) = v27;
    v29 = v27 == v26;
    if ( v27 == v26 )
      v22 = *(_BYTE *)(v13 + 88);
    v30 = ((unsigned int)v27 + v28) & ~v28;
    *(_DWORD *)(v13 + 60) = v30;
    if ( v29 )
      *(_BYTE *)(v13 + 88) = v22 | 2;
    if ( v30 - *(_DWORD *)(v13 + 52) > (unsigned int)(v24 - *(_DWORD *)(v13 + 52)) )
    {
      v30 = v24;
      *(_DWORD *)(v13 + 60) = v24;
    }
    *(_DWORD *)(v13 + 56) = v30;
    *v26 = 0;
    v26[1] = 0;
    v26[2] = 0;
    v17[6] = v26;
  }
  else
  {
    if ( v6 >= 0 )
      LOWORD(v35) = 6684;
    else
      LOWORD(v35) = 6668;
    if ( v6 >= 0 )
      v36 = v6;
    else
      v36 = v6 & 0x7FFFFFFF;
    HIWORD(v35) = 58;
    v37 = sub_93140(v35, v36);
    v38 = sub_1D070C(v17[5], v37, 0, v17[5] + 108, v17[5] + 120);
    *(_DWORD *)(v38 + 64) = v17;
    *(_DWORD *)(v38 + 60) = sub_148108;
    *(_BYTE *)(v38 + 53) = 1;
    v17[6] = v38;
    *(_BYTE *)(v38 + 54) = 1;
    if ( v37 )
      free(v37);
  }
  v31 = v4[95];
  v32 = *(_DWORD *)(a1 + 172);
  v17[11] = v6;
  v17[10] = v32;
  *v9 = v17;
  v4[95] = v31 + 1;
  return v17;
}
