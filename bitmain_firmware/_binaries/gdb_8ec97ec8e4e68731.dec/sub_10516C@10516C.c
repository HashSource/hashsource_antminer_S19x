int __fastcall sub_10516C(int a1)
{
  int *v1; // r5
  int v3; // r7
  void *v4; // r0
  int v5; // r10
  int v6; // r0
  int v7; // r1
  int v8; // r10
  int v9; // r0
  int v10; // r1
  int v11; // r10
  int v12; // r10
  _DWORD *v13; // r0
  int v14; // r3
  int v15; // r1
  int v16; // r10
  int v17; // r0
  int v18; // r3
  int v19; // r10
  int v20; // r0
  int v21; // r1
  int v22; // r10
  int v23; // r0
  int v24; // r2
  unsigned int v25; // r12
  unsigned int v26; // r3
  unsigned int v27; // r2
  int v28; // r1
  unsigned int v29; // kr00_4
  unsigned __int64 v30; // kr08_8
  int v31; // r0
  int v32; // r1
  unsigned int v33; // r2
  unsigned int v34; // r12
  unsigned int v35; // r3
  unsigned int v36; // r1
  int v37; // r0
  int v38; // r8
  int v39; // r8
  int v40; // r0
  int v41; // r1
  int v42; // r8
  unsigned __int64 v43; // r0
  int v44; // r8
  int v45; // r0
  int v46; // r12
  int v47; // r1
  unsigned int v48; // r9
  int v49; // lr
  int v50; // r1
  int v51; // r0
  int v52; // r2
  int v53; // r3
  int v54; // r1
  int v55; // r0
  int v56; // r3
  __int64 v57; // r2
  unsigned int v58; // lr
  int v59; // r1
  unsigned int v60; // r12
  int v61; // r8
  int v62; // r0
  int v63; // r5
  int result; // r0
  int v65; // r0
  int v66; // r1
  int v67; // r0
  int v68; // r1
  int v69; // r0
  _DWORD v70[2]; // [sp+Ch] [bp-8h] BYREF

  v1 = *(int **)(a1 + 36);
  v3 = *v1;
  v4 = sub_93094(1u, 0x40u);
  sub_1B6B1C(a1, dword_47B26C, v4);
  v5 = sub_1B6B24(a1, dword_47B26C);
  v6 = sub_2AD7AC(v1, ".text");
  v7 = dword_47B26C;
  *(_DWORD *)(v5 + 48) = v6;
  v8 = sub_1B6B24(a1, v7);
  v9 = sub_2AD7AC(v1, ".data");
  v10 = dword_47B26C;
  *(_DWORD *)(v8 + 52) = v9;
  v11 = sub_1B6B24(a1, v10);
  *(_DWORD *)(v11 + 56) = sub_2AD7AC(v1, ".bss");
  v12 = sub_2AD7AC(v1, ".text");
  if ( !v12 )
    sub_946E0("Can't find .text section in symbol file");
  v13 = (_DWORD *)sub_1B6B24(a1, dword_47B26C);
  v14 = *(_DWORD *)(v12 + 28);
  v15 = dword_47B26C;
  v16 = *(_DWORD *)(v12 + 36);
  *v13 = v14;
  v17 = sub_1B6B24(a1, v15);
  v18 = v1[40];
  *(_DWORD *)(v17 + 4) = v16;
  v19 = *(_DWORD *)(v18 + 44);
  v20 = sub_1B6B24(a1, dword_47B26C);
  v21 = dword_47B26C;
  *(_DWORD *)(v20 + 32) = v19;
  v22 = v1[31];
  v23 = sub_1B6B24(a1, v21);
  v24 = v1[40];
  v25 = v1[15];
  v26 = *(_DWORD *)(v24 + 24);
  v27 = *(_DWORD *)(v24 + 28);
  v28 = dword_47B26C;
  v29 = v1[14];
  *(_DWORD *)(v23 + 8) = v22;
  v30 = __PAIR64__(v27, v26) + __PAIR64__(v25, v29);
  v31 = sub_1B6B24(a1, v28);
  v32 = v1[40];
  v33 = v1[14];
  v34 = v1[15];
  v35 = *(_DWORD *)(v32 + 32);
  v36 = *(_DWORD *)(v32 + 36);
  *(_QWORD *)(v31 + 24) = v30;
  if ( !(__PAIR64__(v36, v35) + __PAIR64__(v34, v33)) )
  {
    v65 = sub_1B6B24(a1, dword_47B26C);
    v66 = dword_47B26C;
    *(_DWORD *)(v65 + 16) = 0;
    result = sub_1B6B24(a1, v66);
    *(_DWORD *)(result + 12) = 0;
    return result;
  }
  if ( sub_2A8A04(v1, v36, v35 + v33, (__PAIR64__(v36, v35) + __PAIR64__(v34, v33)) >> 32, 0) < 0 )
    goto LABEL_19;
  v70[0] = 0;
  v37 = sub_2A87D8(v70, 4, v1);
  v38 = v37;
  if ( v37 < 0 )
    goto LABEL_19;
  if ( !v37 )
  {
    v67 = sub_1B6B24(a1, dword_47B26C);
    v68 = dword_47B26C;
    *(_DWORD *)(v67 + 16) = v38;
    result = sub_1B6B24(a1, v68);
    *(_DWORD *)(result + 12) = v38;
    return result;
  }
  v39 = (*(int (__fastcall **)(_DWORD *))(v1[1] + 76))(v70);
  v40 = sub_1B6B24(a1, dword_47B26C);
  v41 = dword_47B26C;
  *(_DWORD *)(v40 + 16) = v39;
  if ( *(_DWORD *)(sub_1B6B24(a1, v41) + 16) <= 3u
    || (v42 = *(_DWORD *)(sub_1B6B24(a1, dword_47B26C) + 16), LODWORD(v43) = sub_2A8BE8(v1), v42 > v43) )
  {
    v69 = sub_1B6B24(a1, dword_47B26C);
    sub_946E0("ridiculous string table size (%d bytes).", *(_DWORD *)(v69 + 16));
  }
  v44 = sub_1B6B24(a1, dword_47B26C);
  v45 = sub_1B6B24(a1, dword_47B26C);
  v46 = *(_DWORD *)(a1 + 64);
  v47 = *(_DWORD *)(a1 + 60);
  v48 = *(_DWORD *)(v45 + 16);
  if ( v48 > v46 - v47 )
  {
    obstack_newchunk((struct obstack *)(a1 + 48), *(_DWORD *)(v45 + 16));
    v47 = *(_DWORD *)(a1 + 60);
    v46 = *(_DWORD *)(a1 + 64);
  }
  v49 = *(_DWORD *)(a1 + 56);
  v50 = v47 + v48;
  v51 = *(_DWORD *)(a1 + 72);
  v52 = *(_DWORD *)(a1 + 52);
  *(_DWORD *)(a1 + 60) = v50;
  if ( v50 == v49 )
    *(_BYTE *)(a1 + 88) |= 2u;
  v53 = (v50 + v51) & ~v51;
  *(_DWORD *)(a1 + 60) = v53;
  if ( v53 - v52 > (unsigned int)(v46 - v52) )
  {
    v53 = v46;
    *(_DWORD *)(a1 + 60) = v46;
  }
  *(_DWORD *)(a1 + 56) = v53;
  v54 = dword_47B26C;
  *(_DWORD *)(v44 + 12) = v49;
  v55 = sub_1B6B24(a1, v54);
  v56 = v1[40];
  LODWORD(v57) = *(_DWORD *)(v56 + 32);
  v58 = *(_DWORD *)(v56 + 36);
  v59 = *(_DWORD *)(a1 + 204) + *(_DWORD *)(v55 + 16);
  v60 = v1[14];
  HIDWORD(v57) = v1[15];
  *(_DWORD *)(a1 + 204) = v59;
  if ( sub_2A8A04(v1, v59, v57 + v60, (v57 + __PAIR64__(v58, v60)) >> 32, 0) < 0
    || (v61 = *(_DWORD *)(sub_1B6B24(a1, dword_47B26C) + 12),
        v62 = sub_1B6B24(a1, dword_47B26C),
        v63 = sub_2A87D8(v61, *(_DWORD *)(v62 + 16), v1),
        result = sub_1B6B24(a1, dword_47B26C),
        *(_DWORD *)(result + 16) != v63) )
  {
LABEL_19:
    sub_258B04(v3);
  }
  return result;
}
