int __fastcall sub_2D46FC(int a1)
{
  _DWORD *v2; // r9
  int v3; // r3
  int v4; // r1
  _DWORD *v6; // r2
  int v7; // r8
  int v8; // r1
  int v9; // r2
  int *v10; // r5
  unsigned int v11; // r8
  __int64 v12; // r10
  int v13; // r4
  int v14; // t1
  int v15; // r3
  int v16; // r6
  bool v17; // zf
  unsigned int v18; // r2
  unsigned int v19; // r1
  bool v20; // cc
  int v21; // r4
  int v22; // r0
  unsigned int v23; // r3
  int v24; // r2
  bool v25; // cf
  int v26; // r10
  int v27; // r3
  int v28; // r4
  int v29; // r0
  int v30; // lr
  __int64 v31; // r10
  int v32; // r1
  int v33; // r0
  int v34; // r10
  __int64 v35; // r2
  unsigned int v36; // r5
  _DWORD *v37; // r6
  int v38; // r8
  int *v39; // t1
  int v40; // r0
  void (__fastcall *v41)(int, _DWORD); // r3
  int v42; // r3
  int v43; // r4
  void (__fastcall *v44)(int, _DWORD); // r3
  int (__fastcall *v45)(int); // r3
  char *v46; // r9
  int v47; // r0
  int v48; // r3
  int *v49; // r1
  int *v50; // r1
  int v51; // r3
  int v52; // [sp+8h] [bp-1Ch]
  _DWORD *v53; // [sp+Ch] [bp-18h]
  int v54; // [sp+10h] [bp-14h]
  _DWORD *v55; // [sp+14h] [bp-10h]
  int v56; // [sp+1Ch] [bp-8h] BYREF

  v2 = *(_DWORD **)(*(_DWORD *)(a1 + 4) + 444);
  if ( (*(_BYTE *)(a1 + 43) & 0x40) == 0 && !sub_2D1584(a1, *(_BYTE *)(a1 + 43) & 0x40) )
    return 0;
  v3 = *(_DWORD *)(a1 + 160);
  v4 = v2[98];
  v56 = 0;
  v53 = *(_DWORD **)(v3 + 64);
  sub_2ADCFC(a1, *(int (__fastcall **)(int, int, int))(v4 + 28), (int)&v56);
  if ( v56 )
    return 0;
  v6 = *(_DWORD **)(a1 + 160);
  v7 = v6[16];
  v8 = v6[133];
  v9 = v6[587];
  v10 = (int *)(v7 + 4);
  v11 = v7 + 4 * v8;
  v12 = *(_QWORD *)(v9 + 32);
  if ( v11 <= (unsigned int)v10 )
    goto LABEL_24;
  v54 = v56;
  v55 = v2;
  do
  {
    while ( 1 )
    {
      v14 = *v10++;
      v13 = v14;
      if ( *(_QWORD *)(v14 + 16) == -1 )
        break;
LABEL_7:
      if ( v11 <= (unsigned int)v10 )
        goto LABEL_23;
    }
    v15 = *(_DWORD *)(v13 + 4);
    v16 = *(_DWORD *)(v13 + 44);
    v17 = v15 == 4;
    if ( v15 != 4 )
      v17 = v15 == 9;
    if ( v17 )
    {
      v18 = *(_DWORD *)(v13 + 36);
      if ( v18 > 1 )
      {
LABEL_14:
        HIDWORD(v12) = 0;
        v19 = v12 - 1 + v18;
        v20 = (unsigned int)v12 > v19;
        if ( (unsigned int)v12 > v19 )
          LODWORD(v12) = -1;
        else
          LODWORD(v12) = -v18;
        if ( !v20 )
          LODWORD(v12) = v12 & v19;
      }
      *(_QWORD *)(v13 + 16) = v12;
      if ( !v16 )
        goto LABEL_21;
      goto LABEL_20;
    }
    if ( !v16 || (*(_DWORD *)(v16 + 20) & 0x8000000) == 0 )
      goto LABEL_7;
    v46 = *(char **)v16;
    if ( !sub_2A9F10(a1, *(_DWORD *)(v13 + 44), *(char **)(v13 + 48)) )
      return 0;
    if ( (*(_BYTE *)(v16 + 24) & 0x30) == 0x10 && (*(_DWORD *)(a1 + 40) & 0x400000) == 0 )
    {
      v46 = sub_2CBDD0(a1, v46);
      if ( !v46 )
        return 0;
    }
    if ( *(_DWORD *)v13 != -1 )
      sub_2A6BF0((int)"elf.c", 6263, (int)"_bfd_elf_assign_file_positions_for_non_load");
    v47 = sub_2F0184(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 160) + 2348) + 4), v46, 0);
    v48 = *(_DWORD *)(v16 + 140);
    *(_DWORD *)v13 = v47;
    v49 = *(int **)(v48 + 60);
    v52 = v48;
    if ( v49 )
    {
      if ( !sub_2CCB00(a1, v49, v46, 0) )
        return 0;
    }
    v50 = *(int **)(v52 + 76);
    if ( v50 )
    {
      if ( !sub_2CCB00(a1, v50, v46, 1) )
        return 0;
    }
    v18 = *(_DWORD *)(v13 + 36);
    v51 = *(_DWORD *)(v16 + 108);
    *(_DWORD *)(v13 + 24) = *(_DWORD *)(v16 + 36);
    v16 = *(_DWORD *)(v13 + 44);
    *(_DWORD *)(v13 + 48) = v51;
    v15 = *(_DWORD *)(v13 + 4);
    *(_DWORD *)(v16 + 108) = v54;
    if ( v18 > 1 )
      goto LABEL_14;
    *(_QWORD *)(v13 + 16) = v12;
LABEL_20:
    *(_QWORD *)(v16 + 80) = v12;
LABEL_21:
    if ( v15 == 8 )
      goto LABEL_7;
    v12 += *(unsigned int *)(v13 + 24);
  }
  while ( v11 > (unsigned int)v10 );
LABEL_23:
  v2 = v55;
  v9 = *(_DWORD *)(*(_DWORD *)(a1 + 160) + 2348);
LABEL_24:
  sub_2F0664(*(_DWORD *)(v9 + 4));
  v21 = *(_DWORD *)(a1 + 160);
  v22 = sub_2F04CC(*(_DWORD *)(*(_DWORD *)(v21 + 2348) + 4));
  v23 = *(_DWORD *)(v21 + 164);
  *(_DWORD *)(v21 + 152) = v22;
  if ( v23 > 1 )
  {
    v24 = v23 - 1;
    v25 = __CFADD__(v23 - 1, (_DWORD)v12);
    v26 = v23 - 1 + v12;
    if ( v25 )
      v24 = -1;
    else
      v23 = -v23;
    if ( !v25 )
      v24 = v26 & v23;
    v12 = (unsigned int)v24;
  }
  v27 = *(_DWORD *)(v21 + 172);
  *(_QWORD *)(v21 + 144) = v12;
  if ( v27 )
    *(_QWORD *)(v27 + 80) = v12;
  if ( *(_DWORD *)(v21 + 132) != 8 )
    v12 += (unsigned int)v22;
  v28 = *(_DWORD *)(a1 + 160);
  v29 = 1 << *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 444) + 392) + 11);
  v30 = *(_DWORD *)(v28 + 52) * *(_DWORD *)(v28 + 56);
  v31 = v12 + v29;
  v25 = (_DWORD)v31 != 0;
  v32 = v31 - 1;
  v33 = -v29;
  v34 = *(_DWORD *)(v28 + 2348);
  LODWORD(v35) = v32 & v33;
  *(_DWORD *)(v28 + 24) = v32 & v33;
  HIDWORD(v35) = (HIDWORD(v31) - !v25) & (v33 >> 31);
  v36 = *(_DWORD *)(v28 + 532);
  *(_QWORD *)(v34 + 32) = v35 + (unsigned int)v30;
  if ( v36 <= 1 )
  {
LABEL_43:
    if ( *(_DWORD *)(v34 + 4)
      && (sub_2A8A04(a1, *(_QWORD *)(v28 + 144), 0)
       || !sub_2F0588(a1, *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 160) + 2348) + 4))) )
    {
      return 0;
    }
    v44 = (void (__fastcall *)(int, _DWORD))v2[41];
    if ( v44 )
      v44(a1, *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 160) + 2348) + 56));
    if ( !(*(int (__fastcall **)(int))(v2[98] + 20))(a1) )
      return 0;
    v45 = *(int (__fastcall **)(int))(*(_DWORD *)(v28 + 2348) + 16);
    if ( v45 )
      return v45(a1);
    else
      return 1;
  }
  else
  {
    v37 = v53;
    v38 = 1;
    while ( 1 )
    {
      v39 = (int *)v37[1];
      ++v37;
      v40 = sub_2F04E0(*(_DWORD *)(v34 + 4));
      v41 = (void (__fastcall *)(int, _DWORD))v2[18];
      *v39 = v40;
      if ( v41 )
        v41(a1, *v37);
      v42 = *v37;
      if ( *(_DWORD *)(*v37 + 48) )
      {
        v43 = *(_DWORD *)(v42 + 24);
        if ( sub_2A8A04(a1, *(_QWORD *)(v42 + 16), 0) || sub_2A8884(*(_DWORD *)(*v37 + 48), v43, a1) != v43 )
          return 0;
      }
      ++v38;
      v28 = *(_DWORD *)(a1 + 160);
      v34 = *(_DWORD *)(v28 + 2348);
      if ( v36 == v38 )
        goto LABEL_43;
    }
  }
}
