void __fastcall sub_172A40(_DWORD *a1, int a2)
{
  int v2; // r2
  int v3; // r3
  int v4; // r2
  int v5; // r11
  int v7; // r10
  int v8; // r9
  int v9; // r3
  char v10; // r2
  int v11; // r3
  const char *v12; // r0
  char *v13; // r0
  char *v14; // r4
  int v15; // r3
  unsigned __int8 *v16; // r7
  int v17; // r5
  char *v18; // r2
  int v19; // r1
  int v20; // t1
  bool v21; // zf
  bool v22; // zf
  bool v23; // zf
  int v24; // t1
  int v25; // r0
  int v26; // r3
  unsigned int v27; // r5
  int v28; // r6
  int v29; // r2
  int v30; // r3
  _DWORD *v31; // r1
  _DWORD *v32; // r5
  bool v33; // zf
  int v34; // r1
  int v35; // r3
  int v36; // r5
  int v37; // r2
  int v38; // r3
  bool v39; // zf
  int v40; // r3
  _DWORD *v41; // r1
  int v42; // r3
  unsigned __int8 *v43; // r4
  unsigned __int8 *v44; // r6
  int v45; // r5
  unsigned __int8 *v46; // r3
  int v47; // r2
  bool v48; // zf
  bool v49; // zf
  bool v50; // zf
  int v51; // r0
  int v52; // r4
  char v53; // r3
  int v54; // r2
  int v55; // r3
  bool v56; // zf
  int v57; // r3
  int v58; // r0
  int v59; // r2
  int v60; // r4
  int *v61; // r0
  int v62; // r6
  int v63; // r0
  int v64; // r2
  int v65; // [sp+8h] [bp-14Ch]
  _DWORD *v66; // [sp+Ch] [bp-148h]
  int v67; // [sp+10h] [bp-144h]
  int v68; // [sp+14h] [bp-140h]
  char *v69; // [sp+18h] [bp-13Ch]
  char *ptr; // [sp+1Ch] [bp-138h]
  int v71; // [sp+20h] [bp-134h]
  int v72; // [sp+24h] [bp-130h]
  const char **v74; // [sp+3Ch] [bp-118h]
  void *v75; // [sp+44h] [bp-110h]
  char *v76; // [sp+48h] [bp-10Ch]
  int v77; // [sp+4Ch] [bp-108h]
  _BYTE v78[260]; // [sp+50h] [bp-104h] BYREF

  v2 = a1[6];
  v67 = 12 * a2;
  if ( (*(_WORD *)(v2 + 2) & 0x380) == 0x80 )
  {
    v3 = *(_DWORD *)(*(_DWORD *)(v2 + 28) + 32) + v67;
    v65 = *(_DWORD *)(v3 + 4);
  }
  else
  {
    v3 = 12 * a2;
    v65 = *(_DWORD *)(12 * a2 + 4);
  }
  v74 = *(const char ***)(v3 + 8);
  if ( v65 <= 0 )
    return;
  v4 = 0;
  v5 = 0;
  v7 = *(_DWORD *)(v3 + 8);
  do
  {
    v8 = 16 * v5;
    if ( (*(_BYTE *)(v7 + 12) & 0x20) == 0 )
      goto LABEL_5;
    v9 = a1[6];
    v10 = *(_BYTE *)(v9 + 2);
    v11 = *(_DWORD *)(v9 + 16);
    if ( (v10 & 0x10) != 0 )
      sub_1B7250(v11);
    v69 = (char *)sub_21ABC8(a1, a2, v5);
    v12 = (const char *)sub_1008BC(v69);
    ptr = (char *)v12;
    if ( !v12 || (v13 = strchr(v12, 40), (v14 = v13) == 0) )
      sub_946E0("Internal: Cannot demangle mangled name `%s'.", v69);
    v15 = (unsigned __int8)v13[1];
    v16 = (unsigned __int8 *)(v13 + 1);
    if ( v13[1] )
    {
      v18 = v13 + 1;
      v17 = 1;
      v19 = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          v21 = v15 == 60;
          if ( v15 != 60 )
            v21 = v15 == 40;
          if ( !v21 )
            break;
          ++v19;
LABEL_14:
          v20 = (unsigned __int8)*++v18;
          v15 = v20;
          if ( !v20 )
            goto LABEL_28;
        }
        v22 = v15 == 62;
        if ( v15 != 62 )
          v22 = v15 == 41;
        if ( v22 )
        {
          --v19;
          goto LABEL_14;
        }
        v23 = v15 == 44;
        if ( v15 == 44 )
          v23 = v19 == 0;
        v24 = (unsigned __int8)*++v18;
        v15 = v24;
        if ( v23 )
          ++v17;
        if ( !v15 )
          goto LABEL_28;
      }
    }
    v17 = 1;
LABEL_28:
    v25 = strncmp(v13 + 1, "(void)", 6u);
    v26 = a1[6];
    if ( !v25 )
      --v17;
    v27 = 24 * (v17 + 1);
    if ( (*(_BYTE *)(v26 + 2) & 0x10) != 0 )
    {
      v28 = *(_DWORD *)(v26 + 16);
      v29 = *(_DWORD *)(v28 + 64);
      v30 = *(_DWORD *)(v28 + 60);
      if ( v29 - v30 < v27 )
      {
        obstack_newchunk((struct obstack *)(v28 + 48), v27);
        v30 = *(_DWORD *)(v28 + 60);
        v29 = *(_DWORD *)(v28 + 64);
      }
      v31 = *(_DWORD **)(v28 + 56);
      v32 = (_DWORD *)(v30 + v27);
      *(_DWORD *)(v28 + 60) = v32;
      v33 = v32 == v31;
      v66 = v31;
      if ( v32 == v31 )
        LOBYTE(v30) = *(_BYTE *)(v28 + 88);
      v34 = *(_DWORD *)(v28 + 72);
      if ( v33 )
        *(_BYTE *)(v28 + 88) = v30 | 2;
      v35 = *(_DWORD *)(v28 + 52);
      v36 = ((unsigned int)v32 + v34) & ~v34;
      *(_DWORD *)(v28 + 60) = v36;
      if ( v36 - v35 > (unsigned int)(v29 - v35) )
      {
        v36 = v29;
        *(_DWORD *)(v28 + 60) = v29;
      }
      *(_DWORD *)(v28 + 56) = v36;
    }
    else
    {
      v66 = sub_93028(v27);
    }
    v37 = a1[6];
    v38 = *(_WORD *)(v37 + 2) & 0x380;
    v39 = v38 == 128;
    if ( v38 == 128 )
      v40 = *(_DWORD *)(v37 + 28);
    else
      v40 = 0;
    if ( v39 )
      v40 = *(_DWORD *)(v40 + 32);
    v72 = *(_DWORD *)(v40 + v67 + 8);
    v71 = v72 + v8;
    if ( *(_WORD *)(v72 + v8 + 14) == 1 )
    {
      v68 = 0;
    }
    else
    {
      v41 = (_DWORD *)*a1;
      if ( !*a1 )
        v41 = sub_16FF74(a1, 0);
      v66[3] = v41;
      v68 = 1;
    }
    v42 = (unsigned __int8)v14[1];
    if ( v42 != 41 && v14[1] )
    {
      v43 = (unsigned __int8 *)(v14 + 1);
      v44 = v16;
      v45 = 0;
      do
      {
        if ( v45 > 0 )
          goto LABEL_52;
        v50 = v42 == 41;
        if ( v42 != 41 )
          v50 = v42 == 44;
        if ( v50 )
        {
          if ( strncmp((const char *)v44, "...", v43 - v44)
            && (v51 = strncmp((const char *)v44, "void", v43 - v44)) != 0 )
          {
            v76 = (char *)&v66[6 * v68];
            v61 = (int *)sub_242FB4(v51);
            v77 = *v61;
            *(_DWORD *)sub_242FB4(v61) = &dword_48A9A4;
            v75 = sub_92E28();
            v62 = sub_14E750(v44, v43 - v44);
            v63 = sub_92E40((int)v75);
            ++v68;
            *(_DWORD *)sub_242FB4(v63) = v77;
            *((_DWORD *)v76 + 3) = v62;
            v46 = v43 + 1;
            v44 = v43 + 1;
            v16 = v43 + 1;
          }
          else
          {
            v46 = v43 + 1;
            v44 = v43 + 1;
            v16 = v43 + 1;
          }
        }
        else
        {
LABEL_52:
          v46 = v43 + 1;
          v16 = v43 + 1;
        }
        v47 = *v43;
        v43 = v46;
        v48 = v47 == 40;
        if ( v47 != 40 )
          v48 = v47 == 60;
        if ( v48 )
        {
          ++v45;
        }
        else
        {
          v49 = v47 == 41;
          if ( v47 != 41 )
            v49 = v47 == 62;
          if ( v49 )
            --v45;
        }
        v42 = *v46;
      }
      while ( v42 );
    }
    v52 = *(_DWORD *)(v71 + 4);
    *(_DWORD *)(v72 + 16 * v5) = v69;
    sub_170C60(v52, (int)a1, *(_DWORD *)(*(_DWORD *)(v52 + 24) + 20), (int)v66, v68, *(v16 - 2) == 46);
    v53 = *(_BYTE *)(v71 + 12) & 0xDF;
    *(_BYTE *)(*(_DWORD *)(v52 + 24) + 1) &= ~4u;
    *(_BYTE *)(v71 + 12) = v53;
    free(ptr);
    v4 = 1;
LABEL_5:
    ++v5;
    v7 += 16;
  }
  while ( v5 != v65 );
  if ( v4 && strncmp(*v74, "_Z", 2u) )
  {
    v54 = a1[6];
    v55 = *(_WORD *)(v54 + 2) & 0x380;
    v56 = v55 == 128;
    if ( v55 == 128 )
      v57 = *(_DWORD *)(v54 + 28);
    else
      v57 = 0;
    if ( v56 )
      v57 = *(_DWORD *)(v57 + 32);
    v58 = sub_3102B0(*(_DWORD *)(v57 + v67), v78, 2);
    if ( v58 )
      goto LABEL_79;
    v64 = a1[6];
    if ( (*(_WORD *)(v64 + 2) & 0x380) == 0x80 )
      v58 = *(_DWORD *)(*(_DWORD *)(v64 + 28) + 32);
    if ( sub_3102B0(*(_DWORD *)(v58 + v67), v78, 0) )
    {
LABEL_79:
      v59 = a1[6];
      if ( (*(_WORD *)(v59 + 2) & 0x380) == 0x80 )
        v60 = *(_DWORD *)(*(_DWORD *)(v59 + 28) + 32);
      else
        v60 = 0;
      *(_DWORD *)(v60 + v67) = sub_327254(v78);
    }
  }
}
