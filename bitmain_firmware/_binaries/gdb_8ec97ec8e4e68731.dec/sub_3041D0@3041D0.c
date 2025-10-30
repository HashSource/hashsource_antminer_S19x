int __fastcall sub_3041D0(int *a1, int a2)
{
  _DWORD *v3; // r5
  unsigned int v4; // r12
  int v5; // r2
  unsigned int v6; // r3
  int v7; // r12
  int v8; // lr
  int v9; // r7
  int v10; // r1
  int v11; // r0
  int v12; // r8
  unsigned int v13; // r1
  int v14; // r1
  int v15; // r3
  int v16; // r12
  int v17; // r0
  int v18; // r2
  int v19; // r0
  int v20; // r2
  unsigned int v22; // r12
  unsigned int v23; // r3
  bool v24; // cc
  int v25; // r6
  int v26; // r3
  int v27; // r7
  __int16 v28; // r1
  int v29; // lr
  unsigned int v30; // lr
  unsigned int v31; // r1
  int *v32; // r3
  Elf32_Dyn **v33; // r2
  int v34; // r3
  int v35; // r3
  int v36; // r9
  int v37; // r8
  unsigned int v38; // r2
  int v39; // r10
  unsigned int v40; // r12
  int v41; // r1
  int v42; // r0
  int v43; // r7
  int v44; // r3
  int v45; // r12
  int v46; // r8
  int v47; // r2
  int v48; // r0
  unsigned int v49; // r0
  unsigned int v50; // r2
  int v51; // r3
  int v52; // r3
  unsigned int v53; // r2
  int v54; // r1
  int v55; // r0
  int v56; // r0
  int v57; // lr
  int v58; // r2
  int v59; // r3
  unsigned int v60; // r2
  int v61; // r1
  int v62; // r0
  int v63; // [sp+0h] [bp-14h]
  unsigned int v64; // [sp+4h] [bp-10h]

  v3 = a1 + 1024;
  v4 = a1[29];
LABEL_2:
  if ( v4 > 0x105 )
  {
LABEL_3:
    v5 = a1[27];
    v6 = a1[24];
    v7 = a1[28];
    goto LABEL_4;
  }
  while ( 1 )
  {
    sub_303F08(a1);
    v23 = a1[29];
    if ( v23 > 0x105 )
      goto LABEL_3;
    if ( !a2 )
      return 0;
    if ( !v23 )
      break;
    v24 = v23 > 2;
    v5 = a1[27];
    v6 = a1[24];
    v7 = a1[28];
    if ( v24 )
    {
LABEL_4:
      v8 = a1[17];
      v9 = a1[16];
      v10 = (*(unsigned __int8 *)(a1[14] + v5 + 2) ^ (a1[18] << a1[22])) & a1[21];
      v11 = 2 * (a1[13] & v5);
      v12 = 2 * v10;
      a1[18] = v10;
      v13 = *(unsigned __int16 *)(v8 + 2 * v10);
      *(_WORD *)(v9 + v11) = v13;
      *(_WORD *)(v8 + v12) = v5;
      a1[30] = v6;
      a1[25] = v7;
      a1[24] = 2;
      if ( v13 && a1[32] > v6 && v5 - v13 <= a1[11] - 262 )
      {
        v49 = sub_303BD4(a1, v13);
        a1[24] = v49;
        if ( v49 > 5 )
        {
          v6 = a1[30];
          v5 = a1[27];
          goto LABEL_7;
        }
        v5 = a1[27];
        v6 = a1[30];
        if ( a1[34] == 1 || v49 == 3 && (unsigned int)(v5 - a1[28]) > 0x1000 )
        {
          a1[24] = 2;
          if ( v6 > 2 )
            goto LABEL_26;
          goto LABEL_9;
        }
      }
    }
    else
    {
      a1[30] = v6;
      a1[25] = v7;
      a1[24] = 2;
    }
LABEL_7:
    if ( v6 > 2 && a1[24] <= v6 )
    {
LABEL_26:
      v25 = v3[424];
      v26 = (unsigned __int8)(v6 - 3);
      v27 = v3[422];
      v28 = v5 - a1[25];
      v29 = a1[29];
      *(_WORD *)(v3[425] + 2 * v25) = v28 - 1;
      v3[424] = v25 + 1;
      *(_BYTE *)(v27 + v25) = v26;
      v30 = v29 - 3 + v5;
      v31 = (unsigned __int16)(v28 - 2);
      v32 = &a1[length_code[v26]];
      v33 = (Elf32_Dyn **)(*((unsigned __int16 *)v32 + 588) + 1);
      *((_WORD *)v32 + 588) = (_WORD)v33;
      v34 = 1420;
      if ( v31 <= 0xFF )
        v34 = (int)&dist_code;
      else
        v33 = &GLOBAL_OFFSET_TABLE_;
      if ( v31 <= 0xFF )
        v35 = *(unsigned __int8 *)(v34 + v31);
      else
        v35 = *(int *)((char *)v33 + v34);
      if ( v31 > 0xFF )
        v35 = *(unsigned __int8 *)(v35 + (v31 >> 7) + 256);
      ++LOWORD(a1[v35 + 610]);
      v36 = a1[27];
      v37 = a1[30];
      v38 = v36 + 1;
      v39 = v3[424];
      v40 = a1[29] + 1 - v37;
      v41 = v37 - 2;
      v63 = v3[423] - 1;
      a1[29] = v40;
      a1[30] = v37 - 2;
      v64 = v40;
      do
      {
        --v41;
        a1[27] = v38;
        if ( v30 >= v38 )
        {
          v42 = a1[17];
          v43 = 2 * (a1[13] & v38);
          v44 = (*(unsigned __int8 *)(a1[14] + v38 + 2) ^ (a1[18] << a1[22])) & a1[21];
          v45 = a1[16];
          a1[18] = v44;
          *(_WORD *)(v45 + v43) = *(_WORD *)(v42 + 2 * v44);
          *(_WORD *)(v42 + 2 * v44) = v38;
        }
        a1[30] = v41;
        ++v38;
      }
      while ( v41 );
      v46 = v37 + v36 - 1;
      v4 = v64;
      a1[27] = v46;
      a1[26] = 0;
      a1[24] = 2;
      if ( v39 == v63 )
      {
        v47 = a1[23];
        if ( v47 >= 0 )
          v41 = a1[14] + v47;
        sub_30B4F8(a1, v41, v46 - v47, 0);
        v48 = *a1;
        a1[23] = a1[27];
        sub_304148(v48);
        if ( !*(_DWORD *)(*a1 + 16) )
          return 0;
        v4 = a1[29];
      }
      goto LABEL_2;
    }
LABEL_9:
    if ( a1[26] )
    {
      v14 = 0;
      v15 = v3[424];
      v16 = v3[422];
      v17 = *(unsigned __int8 *)(a1[14] + v5 - 1);
      *(_WORD *)(v3[425] + 2 * v15) = 0;
      v3[424] = v15 + 1;
      *(_BYTE *)(v16 + v15) = v17;
      ++LOWORD(a1[v17 + 37]);
      if ( v3[424] == v3[423] - 1 )
      {
        v18 = a1[23];
        if ( v18 >= 0 )
          v14 = a1[14] + v18;
        sub_30B4F8(a1, v14, a1[27] - v18, 0);
        v19 = *a1;
        a1[23] = a1[27];
        sub_304148(v19);
      }
      v20 = *(_DWORD *)(*a1 + 16);
      v4 = a1[29] - 1;
      ++a1[27];
      a1[29] = v4;
      if ( !v20 )
        return 0;
      goto LABEL_2;
    }
    v22 = a1[29];
    a1[27] = v5 + 1;
    a1[26] = 1;
    a1[29] = --v22;
    if ( v22 > 0x105 )
      goto LABEL_3;
  }
  v50 = a1[27];
  if ( a1[26] )
  {
    v56 = a1[1448];
    v57 = a1[1446];
    v58 = *(unsigned __int8 *)(a1[14] + v50 - 1);
    *(_WORD *)(a1[1449] + 2 * v56) = 0;
    a1[1448] = v56 + 1;
    *(_BYTE *)(v57 + v56) = v58;
    ++LOWORD(a1[v58 + 37]);
    a1[26] = 0;
    v50 = a1[27];
  }
  if ( v50 >= 2 )
    v51 = 2;
  else
    v51 = v50;
  a1[1453] = v51;
  if ( a2 == 4 )
  {
    v59 = a1[23];
    v60 = v50 - v59;
    if ( v59 < 0 )
      v61 = 0;
    else
      v61 = a1[14];
    if ( v59 >= 0 )
      v61 += v59;
    sub_30B4F8(a1, v61, v60, 1);
    v62 = *a1;
    a1[23] = a1[27];
    sub_304148(v62);
    if ( *(_DWORD *)(*a1 + 16) )
      return 3;
    else
      return 2;
  }
  else if ( a1[1448] )
  {
    v52 = a1[23];
    v53 = v50 - v52;
    if ( v52 < 0 )
      v54 = 0;
    else
      v54 = a1[14];
    if ( v52 >= 0 )
      v54 += v52;
    sub_30B4F8(a1, v54, v53, 0);
    v55 = *a1;
    a1[23] = a1[27];
    sub_304148(v55);
    return *(_DWORD *)(*a1 + 16) != 0;
  }
  else
  {
    return 1;
  }
}
