int __fastcall sub_304724(_DWORD *a1, int a2)
{
  _DWORD *v2; // r9
  Elf32_Dyn **v4; // r10
  unsigned int v5; // lr
  int v6; // r0
  __int16 v7; // r3
  unsigned int v8; // r3
  _DWORD *v9; // r2
  Elf32_Dyn *v10; // r2
  int v11; // r3
  unsigned int v12; // r1
  int v13; // r0
  _BOOL4 v14; // r12
  unsigned int v15; // r3
  unsigned int v16; // r3
  int v17; // r2
  __int64 v18; // r6
  int v19; // r1
  int v20; // t1
  int v21; // r4
  int v22; // r0
  int v23; // r12
  int v24; // r3
  int v25; // r2
  unsigned int v26; // r1
  unsigned int v27; // r0
  int v28; // r2
  int v29; // r6
  int v30; // r1
  int v31; // r12
  int v32; // r3
  _BOOL4 v33; // r3
  int v34; // r2
  int v35; // r2
  int v36; // r1
  int v37; // r0
  unsigned int v39; // r1
  int v40; // r8
  int v41; // r4
  int v42; // r0
  int v43; // r5
  unsigned int v44; // r12
  int v45; // r2
  int v46; // r10
  int v47; // t1
  unsigned int v48; // r3
  int v49; // r0
  int v50; // r2
  int v51; // r0
  int v52; // r2
  int v53; // r0
  int v54; // [sp+0h] [bp-1Ch]
  Elf32_Dyn **v56; // [sp+14h] [bp-8h]

  v2 = a1 + 1024;
  v4 = &GLOBAL_OFFSET_TABLE_;
LABEL_2:
  v5 = a1[29];
  while ( 1 )
  {
    if ( v5 <= 0x105 )
    {
      sub_303F08(a1);
      v39 = a1[29];
      if ( v39 <= 0x105 )
        break;
    }
    v21 = a1[27];
LABEL_13:
    v22 = a1[17];
    v23 = a1[16];
    v24 = (*(unsigned __int8 *)(a1[14] + v21 + 2) ^ (a1[18] << a1[22])) & a1[21];
    v25 = 2 * (a1[13] & v21);
    a1[18] = v24;
    v26 = *(unsigned __int16 *)(v22 + 2 * v24);
    *(_WORD *)(v23 + v25) = v26;
    *(_WORD *)(v22 + 2 * v24) = v21;
    if ( v26 && v21 - v26 <= a1[11] - 262 )
    {
      v27 = sub_303BD4(a1, v26);
      v21 = a1[27];
      a1[24] = v27;
      goto LABEL_16;
    }
LABEL_15:
    v27 = a1[24];
LABEL_16:
    v28 = v2[424];
    v29 = v2[425];
    v30 = v2[422];
    v31 = v28 + 1;
    if ( v27 > 2 )
    {
      v6 = (unsigned __int8)(v27 - 3);
      v7 = v21 - a1[28];
      *(_WORD *)(v29 + 2 * v28) = v7;
      v2[424] = v31;
      v8 = (unsigned __int16)(v7 - 1);
      *(_BYTE *)(v30 + v28) = v6;
      v9 = &a1[*((unsigned __int8 *)&v4[351]->d_tag + v6)];
      ++*((_WORD *)v9 + 588);
      v10 = v4[355];
      if ( v8 > 0xFF )
        v11 = *((unsigned __int8 *)&v10[32].d_tag + (v8 >> 7));
      else
        v11 = *((unsigned __int8 *)&v10->d_tag + v8);
      ++LOWORD(a1[v11 + 610]);
      v12 = a1[24];
      v5 = a1[29] - v12;
      v13 = a1[27];
      v14 = v12 <= a1[32];
      if ( v5 <= 2 )
        v14 = 0;
      v15 = __clz(v2[423] - 1 - v2[424]);
      a1[29] = v5;
      v16 = v15 >> 5;
      v54 = v13;
      v17 = a1[14];
      v18 = *(_QWORD *)(a1 + 21);
      if ( v14 )
      {
        v40 = v17 + v13 + 2;
        v41 = a1[17];
        v42 = v13 + 1;
        v43 = a1[16];
        v44 = v12 - 1;
        v45 = a1[18];
        v56 = v4;
        v46 = a1[13];
        a1[24] = v12 - 1;
        do
        {
          a1[27] = v42;
          --v44;
          v47 = *(unsigned __int8 *)++v40;
          v45 = (v47 ^ (v45 << SBYTE4(v18))) & v18;
          a1[18] = v45;
          *(_WORD *)(v43 + 2 * (v46 & v42)) = *(_WORD *)(v41 + 2 * v45);
          *(_WORD *)(v41 + 2 * v45) = v42++;
          a1[24] = v44;
        }
        while ( v44 );
        v4 = v56;
        a1[27] = v12 + v54;
      }
      else
      {
        a1[24] = 0;
        v19 = v12 + v13;
        a1[27] = v19;
        v20 = *(unsigned __int8 *)(v17 + v19);
        a1[18] = v20;
        a1[18] = v18 & (*(unsigned __int8 *)(v17 + v19 + 1) ^ (v20 << SBYTE4(v18)));
      }
      if ( v16 )
      {
LABEL_18:
        v35 = a1[23];
        if ( v35 < 0 )
          v36 = 0;
        else
          v36 = a1[14];
        if ( v35 >= 0 )
          v36 += v35;
        sub_30B4F8(a1, v36, a1[27] - v35, 0);
        v37 = *a1;
        a1[23] = a1[27];
        sub_304148(v37);
        if ( !*(_DWORD *)(*a1 + 16) )
          return 0;
        goto LABEL_2;
      }
    }
    else
    {
      v32 = *(unsigned __int8 *)(a1[14] + v21);
      *(_WORD *)(v29 + 2 * v28) = 0;
      v2[424] = v31;
      *(_BYTE *)(v30 + v28) = v32;
      ++LOWORD(a1[v32 + 37]);
      v5 = a1[29] - 1;
      v33 = v2[423] - 1 == v2[424];
      v34 = a1[27] + 1;
      a1[29] = v5;
      a1[27] = v34;
      if ( v33 )
        goto LABEL_18;
    }
  }
  if ( !a2 )
    return 0;
  if ( v39 )
  {
    v21 = a1[27];
    if ( v39 <= 2 )
      goto LABEL_15;
    goto LABEL_13;
  }
  v48 = a1[27];
  if ( v48 >= 2 )
    v49 = 2;
  else
    v49 = a1[27];
  a1[1453] = v49;
  if ( a2 == 4 )
  {
    v52 = a1[23];
    if ( v52 >= 0 )
      v39 = a1[14] + v52;
    sub_30B4F8(a1, v39, v48 - v52, 1);
    v53 = *a1;
    a1[23] = a1[27];
    sub_304148(v53);
    if ( *(_DWORD *)(*a1 + 16) )
      return 3;
    else
      return 2;
  }
  else if ( a1[1448] )
  {
    v50 = a1[23];
    if ( v50 >= 0 )
      v39 = a1[14] + v50;
    sub_30B4F8(a1, v39, v48 - v50, 0);
    v51 = *a1;
    a1[23] = a1[27];
    sub_304148(v51);
    return *(_DWORD *)(*a1 + 16) != 0;
  }
  else
  {
    return 1;
  }
}
