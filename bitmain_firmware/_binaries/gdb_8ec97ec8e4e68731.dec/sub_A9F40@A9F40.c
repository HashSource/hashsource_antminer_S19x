int __fastcall sub_A9F40(int a1, int a2, int a3, int a4, int a5)
{
  int v6; // r4
  unsigned int v7; // r5
  int v8; // r0
  int v9; // r3
  int v10; // r11
  __int16 v11; // r2
  __int16 v12; // r2
  int v13; // r4
  int v14; // r1
  int v15; // r3
  char v16; // r2
  void *v17; // r12
  void *v18; // r3
  int v19; // r0
  bool v20; // zf
  int v21; // r3
  int v22; // r3
  int v23; // r2
  int v24; // r1
  char v25; // r2
  signed int v26; // r4
  int v27; // r6
  int v28; // r0
  int v29; // r3
  int v30; // r8
  int v31; // r5
  int v32; // r9
  int v33; // r10
  int v34; // r9
  int v35; // r2
  int v36; // r0
  int v37; // r0
  unsigned int v38; // r3
  int v39; // r2
  int v40; // r7
  int v41; // r2
  signed int v42; // r3
  unsigned int v43; // r9
  int v44; // r10
  int v45; // r7
  int v46; // r5
  int v47; // r8
  size_t v48; // r0
  int v49; // r9
  int v50; // r0
  int v51; // r12
  int v52; // r8
  int v53; // r9
  int v54; // r2
  unsigned int v55; // r3
  unsigned int v56; // r3
  int v57; // r0
  int j; // r3
  int v59; // r5
  int v60; // r4
  int v61; // r2
  int v62; // r2
  int v63; // r0
  signed int v64; // r4
  int v65; // r5
  int v66; // r2
  const char *v67; // r1
  int v68; // r4
  int v69; // r5
  int i; // r6
  int v72; // r4
  int v73; // r6
  int v74; // r3
  _DWORD *v75; // r5
  int v76; // r7
  int v77; // r0
  int v78; // r1
  int v79; // r2
  int v80; // r3
  _DWORD *v81; // lr
  _DWORD *v82; // r12
  int v83; // r1
  signed int v85; // [sp+10h] [bp-2Ch]
  int v86; // [sp+18h] [bp-24h]
  int v90; // [sp+2Ch] [bp-10h]
  int v91; // [sp+34h] [bp-8h]

  v91 = sub_26C1E0(a1);
  if ( a5 )
  {
    v6 = *(__int16 *)(*(_DWORD *)(a1 + 24) + 4);
    a5 = v6;
    v7 = 24 * v6;
  }
  else
  {
    v68 = *(_DWORD *)(a1 + 24);
    v69 = *(__int16 *)(v68 + 4);
    if ( v69 <= 0 )
    {
      v7 = 0;
      LOWORD(v6) = 0;
    }
    else
    {
      for ( i = 0; i != v69; ++i )
      {
        if ( sub_A0328(a1, i) )
          break;
        if ( sub_9D140(v68, i) )
          break;
      }
      a5 = i;
      LOWORD(v6) = i;
      v7 = 24 * i;
    }
  }
  v8 = sub_16FF58(a1);
  v9 = *(_DWORD *)(v8 + 24);
  v10 = v8;
  v11 = *(_WORD *)(v9 + 2);
  *(_WORD *)(v9 + 4) = v6;
  *(_BYTE *)v9 = 3;
  v12 = v11 & 0xFC7F | 0x80;
  *(_DWORD *)(v9 + 28) = &word_3B4A2C;
  *(_WORD *)(v9 + 2) = v12;
  if ( (v12 & 0x10) != 0 )
  {
    v13 = *(_DWORD *)(v9 + 16);
    v14 = *(_DWORD *)(v13 + 64);
    v15 = *(_DWORD *)(v13 + 60);
    v16 = v14 - v15;
    if ( v14 - v15 < v7 )
    {
      obstack_newchunk((struct obstack *)(v13 + 48), v7);
      v15 = *(_DWORD *)(v13 + 60);
      v14 = *(_DWORD *)(v13 + 64);
    }
    v17 = *(void **)(v13 + 56);
    v18 = (void *)(v15 + v7);
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
  }
  else
  {
    v17 = sub_93028(v7);
  }
  *(_DWORD *)(*(_DWORD *)(v10 + 24) + 24) = v17;
  memset(v17, 0, v7);
  v22 = *(_DWORD *)(v10 + 24);
  if ( a1 )
  {
    v23 = *(_DWORD *)(a1 + 24);
    v24 = *(_DWORD *)(v23 + 8);
    if ( !v24 )
      v24 = *(_DWORD *)(v23 + 12);
  }
  else
  {
    v24 = 0;
  }
  v25 = *(_BYTE *)(v22 + 2);
  v26 = 0;
  *(_DWORD *)(v22 + 8) = v24;
  *(_DWORD *)(v22 + 12) = 0;
  *(_BYTE *)(v22 + 2) = v25 | 8;
  LOWORD(v22) = (unsigned __int16)&dword_477C60;
  if ( a5 > 0 )
  {
    HIWORD(v22) = (unsigned int)&dword_477C60 >> 16;
    v90 = v22;
    v27 = 0;
    v85 = 0;
    v86 = -1;
    do
    {
      v43 = v26;
      v44 = *(_DWORD *)(a1 + 24);
      v45 = 24 * v27;
      v46 = *(_DWORD *)(v44 + 24) + 24 * v27;
      v47 = *(_DWORD *)(v46 + 16);
      if ( v47 )
      {
        v48 = strlen(*(const char **)(v46 + 16));
        if ( (unsigned int)*(unsigned __int8 *)(v47 + v48 - 1) - 48 <= 9 )
        {
          if ( (unsigned int)*(unsigned __int8 *)(v47 + v48 - 2) - 48 > 9 )
            v49 = v48 - 1;
          else
            v49 = v48 - 2;
          if ( v49 > 6 && !strncmp((const char *)(v47 + v49 - 6), "___XV", 5u) )
          {
            v50 = strtol((const char *)(v47 + v49), 0, 10);
            v44 = *(_DWORD *)(a1 + 24);
            v43 = (8 * v50 + v26 - 1) & (-8 * v50);
            v46 = *(_DWORD *)(v44 + 24) + v45;
          }
          else
          {
            v43 = (v26 + 7) & 0xFFFFFFF8;
          }
        }
      }
      v51 = *(_DWORD *)(*(_DWORD *)(v10 + 24) + 24);
      v26 = v43 + *(_DWORD *)v46;
      v52 = v51 + v45;
      *(_BYTE *)(v52 + 8) = *(_BYTE *)(v51 + v45 + 8) & 0xF1;
      *(_QWORD *)(v51 + 24 * v27) = v26;
      v53 = *(_DWORD *)(v51 + v45 + 8) & 0xF;
      *(_DWORD *)(v52 + 8) = v53;
      if ( sub_A0328(a1, v27) )
      {
        v86 = v27;
      }
      else
      {
        v28 = sub_9D140(v44, v27);
        v29 = *(_DWORD *)(v46 + 12);
        if ( v28 )
        {
          v30 = *(_DWORD *)(*(_DWORD *)(v29 + 24) + 20);
          if ( a4 )
          {
            v31 = a4;
          }
          else
          {
            if ( *(_DWORD *)(v90 + 0x24) < *(_DWORD *)(v10 + 20) )
              goto LABEL_91;
            v31 = sub_26DD04(v10, a2, a3);
            v10 = sub_26BC70(v31);
          }
          if ( sub_A2514(v30) )
          {
            v32 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v30 + 24) + 24) + 24 * v27);
            if ( a2 )
              v33 = a2 + v32;
            else
              v33 = 0;
            if ( a3 )
              v34 = a3 + v32;
            else
              v34 = 0;
            v30 = sub_A2E80(v30);
          }
          else
          {
            v34 = a3;
            v33 = a2;
          }
          v35 = v26 / 8;
          if ( v33 )
            v33 += v35;
          if ( v34 )
            v34 += v35;
          v36 = sub_A2598(v30);
          v37 = sub_A9EE8(v36, v33, v34, v31, 0);
          v38 = *(_DWORD *)(v37 + 20);
          if ( v38 > *(_DWORD *)(v90 + 0x24) )
LABEL_91:
            sub_946E0("object size is larger than varsize-limit");
          v26 += 8 * v38;
          v39 = *(_DWORD *)(*(_DWORD *)(a1 + 24) + 24) + v45;
          v40 = *(_DWORD *)(*(_DWORD *)(v10 + 24) + 24) + v45;
          v41 = *(_DWORD *)(v39 + 16);
          *(_DWORD *)(v40 + 12) = v37;
          *(_DWORD *)(v40 + 16) = v41;
        }
        else
        {
          v54 = *(_DWORD *)(v46 + 16);
          *(_DWORD *)(v52 + 12) = v29;
          *(_DWORD *)(v52 + 16) = v54;
          v55 = *(_DWORD *)(v46 + 8);
          if ( (v55 & 0xFFFFFFF0) != 0 )
          {
            v56 = v55 >> 4;
            v26 += v56;
            *(_DWORD *)(v52 + 8) = v53 & 0xF | (16 * v56);
          }
          else
          {
            v57 = *(_DWORD *)(v46 + 12);
            for ( j = *(_DWORD *)(v57 + 24); *(_BYTE *)j == 23; j = *(_DWORD *)(v57 + 24) )
              v57 = *(_DWORD *)(j + 20);
            v26 += 8 * *(_DWORD *)(sub_A0870(v57) + 20);
          }
        }
      }
      v42 = v85;
      ++v27;
      if ( v85 < v26 )
        v42 = v26;
      v85 = v42;
      *(_DWORD *)(v10 + 20) = (unsigned int)(v42 + 7) >> 3;
    }
    while ( a5 != v27 );
    if ( v86 != -1 )
    {
      v59 = 24 * v86;
      v60 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v10 + 24) + 24) + 24 * v86);
      if ( !a4 )
      {
        a4 = sub_26DD04(v10, a2, a3);
        v10 = sub_26BC70(a4);
      }
      v61 = v60 / 8;
      if ( a2 )
        a2 += v61;
      if ( a3 )
        v62 = v61 + a3;
      else
        v62 = 0;
      v63 = sub_A9B0C(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 24) + 24) + v59 + 12), a2, v62, a4);
      if ( v63 )
      {
        v64 = v60 + 8 * *(_DWORD *)(v63 + 20);
        if ( v64 < v85 )
          v64 = v85;
        v65 = *(_DWORD *)(*(_DWORD *)(v10 + 24) + 24) + v59;
        *(_DWORD *)(v65 + 12) = v63;
        *(_DWORD *)(v65 + 16) = "S";
        *(_DWORD *)(v10 + 20) = (unsigned int)(v64 + 7) >> 3;
      }
      else
      {
        v72 = *(_DWORD *)(v10 + 24);
        v73 = *(__int16 *)(v72 + 4);
        if ( v86 + 1 < v73 )
        {
          v74 = *(_DWORD *)(v72 + 24);
          v75 = (_DWORD *)(v74 + v59);
          v76 = 24 * (__int16)v73 + v74 - 24;
          do
          {
            v77 = v75[6];
            v78 = v75[7];
            v79 = v75[8];
            v80 = v75[9];
            v81 = v75 + 10;
            v82 = v75;
            v75 += 6;
            *v82 = v77;
            v82[1] = v78;
            v82[2] = v79;
            v82[3] = v80;
            v82 += 4;
            v83 = v81[1];
            *v82 = *v81;
            v82[1] = v83;
          }
          while ( (_DWORD *)v76 != v75 );
        }
        *(_WORD *)(v72 + 4) = v73 - 1;
      }
    }
  }
  else
  {
    HIWORD(v22) = (unsigned int)&dword_477C60 >> 16;
    v90 = v22;
  }
  v66 = *(_DWORD *)(a1 + 20);
  if ( v66 )
  {
    *(_DWORD *)(v10 + 20) = -v66 & (v66 - 1 + *(_DWORD *)(v10 + 20));
  }
  else
  {
    v67 = *(const char **)(*(_DWORD *)(v10 + 24) + 8);
    if ( v67 )
      sub_946B0("Invalid type size for `%s' detected: %d.", v67, 0);
    else
      sub_946B0("Invalid type size for <unnamed> detected: %d.", 0);
  }
  sub_26C300(v91);
  if ( *(_DWORD *)(v10 + 20) > *(_DWORD *)(v90 + 0x24) )
    sub_946E0("record type with dynamic size is larger than varsize-limit");
  return v10;
}
