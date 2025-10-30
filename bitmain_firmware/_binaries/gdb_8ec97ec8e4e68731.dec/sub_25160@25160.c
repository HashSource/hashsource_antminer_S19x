int __fastcall sub_25160(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v11; // r10
  int v12; // r7
  int v13; // r0
  int v14; // r0
  int v15; // r3
  int v16; // r0
  int v17; // r9
  int v18; // r0
  int *v19; // r4
  int v20; // r0
  int v21; // r7
  int v22; // r0
  char *v23; // r3
  int v24; // r4
  int v25; // r2
  int v26; // r3
  int **v27; // r6
  int v28; // r5
  signed int v29; // r3
  int v30; // r2
  int v31; // r3
  _BOOL4 v32; // r3
  int v33; // r7
  int v34; // r1
  int v35; // r5
  int v36; // r0
  int v38; // r0
  _DWORD *v39; // r7
  int *v40; // r0
  _DWORD *v41; // r2
  int v42; // r3
  int v44; // r3
  _DWORD *v45; // r9
  void *v46; // r0
  _DWORD *v47; // r5
  int v49; // r0
  _DWORD *v50; // r0
  int v51; // r0
  int v52; // r0
  int v53; // r7
  _DWORD *v54; // r7
  int **v55; // r0
  _DWORD *v56; // r2
  int *v57; // r3
  int v58; // r5
  int v59; // r0
  int v60; // r10
  char *v61; // r5
  int v62; // r9
  int v63; // r7
  int v64; // r0
  int v65; // r3
  int v66; // r7
  int v67; // r4
  const char *v68; // r5
  const char *v69; // r0
  int *v70; // [sp+8h] [bp-74h] BYREF
  int v71; // [sp+Ch] [bp-70h]
  unsigned __int64 v72; // [sp+10h] [bp-6Ch]
  const char *v73; // [sp+18h] [bp-64h]
  unsigned int v74; // [sp+1Ch] [bp-60h]
  _BOOL4 v75; // [sp+20h] [bp-5Ch]
  const char *v76; // [sp+24h] [bp-58h]
  int v77; // [sp+28h] [bp-54h]
  _DWORD *v78; // [sp+2Ch] [bp-50h]
  const char *v79; // [sp+30h] [bp-4Ch]
  int v80; // [sp+34h] [bp-48h]
  int v81; // [sp+38h] [bp-44h]
  int v82; // [sp+3Ch] [bp-40h]
  _DWORD *v83; // [sp+40h] [bp-3Ch]
  int v84; // [sp+44h] [bp-38h]
  int v85; // [sp+48h] [bp-34h]
  int v86; // [sp+4Ch] [bp-30h]
  int v87; // [sp+54h] [bp-28h] BYREF
  int v88; // [sp+8Ch] [bp+10h]

  v84 = a3;
  v81 = a1;
  v11 = a8;
  v12 = ((int (*)(void))loc_165BB8)();
  v13 = sub_26BC70(a2);
  v14 = sub_171258(v13);
  v15 = *(_DWORD *)(v14 + 24);
  if ( *(_BYTE *)v15 == 1 )
    v14 = sub_171258(*(_DWORD *)(v15 + 20));
  v75 = sub_1FA24(v81, v14);
  if ( sub_2484C(v81, a4) )
    a4 |= 1u;
  v16 = ((int (__fastcall *)(int, int, int, _DWORD))loc_1DFC20)(v84, 14, a4, 0);
  if ( a8 )
  {
    if ( dword_471514 )
    {
      v67 = *(_DWORD *)sub_242FC8(v16);
      v68 = (const char *)((int (__fastcall *)(int, _DWORD))loc_1677C0)(v81, 0);
      v69 = (const char *)sub_25AC8C(v81, a9);
      sub_2594B0(v67, "struct return in %s = %s\n", v68, v69);
    }
    v11 = 1;
    ((void (__fastcall *)(int, _DWORD, int))loc_1DFC20)(v84, 0, a9);
  }
  if ( a5 <= 0 )
  {
    v24 = a7;
    goto LABEL_55;
  }
  v73 = "arg %d @ sp + %d\n";
  v85 = 0;
  v82 = 0;
  v83 = 0;
  v17 = v12;
  v78 = (_DWORD *)(a6 - 4);
  v76 = "arg %d in %s = 0x%s\n";
  v74 = 0xFFFF;
  do
  {
    v18 = v78[1];
    v19 = ++v78;
    v20 = sub_26BC70(v18);
    v21 = sub_171258(v20);
    v22 = *v19;
    v23 = *(char **)(v21 + 24);
    v24 = *(_DWORD *)(v21 + 20);
    v25 = *((_DWORD *)v23 + 5);
    v26 = *v23;
    v79 = (const char *)v24;
    v80 = v25;
    v77 = v26;
    v27 = (int **)sub_26E978(v22);
    v28 = sub_1B744(v21);
    if ( *(_DWORD *)sub_163E78(v81) == 1 )
    {
      v29 = 4;
    }
    else
    {
      v29 = (v28 + 3) & 0xFFFFFFFC;
      if ( v29 >= 8 )
        v29 = 8;
    }
    if ( v75 )
    {
      v86 = v29;
      v28 = 0;
      v87 = 0;
      v70 = &v87;
      v51 = ((int (__fastcall *)(int, int *))loc_1B85C)(v21, &v87);
      v29 = v86;
      if ( (unsigned int)(v51 - 1) <= 3 )
      {
        v72 = __PAIR64__(v86, v51);
        v71 = v87;
        v86 = sub_19EF4(v87);
        v52 = ~(-1 << (v72 * (v86 / 4)));
        do
        {
          v53 = v52 & (v74 >> v28);
          if ( v53 == v52 )
          {
            v80 = v72;
            v24 = sub_347690(v28);
            v80 += v24;
            v59 = sub_19E9C(v71);
            v77 = v28;
            v88 = v11;
            v79 = "%c%d";
            v60 = v17;
            v61 = (char *)v70;
            v62 = v53;
            v63 = v59;
            do
            {
              if ( v63 == 113 )
              {
                sub_1B3DC(v81, v84, v24, (int)v27);
              }
              else
              {
                sub_93170(v61, 4, v79, v63, v24);
                strlen(v61);
                v64 = sub_257E94(v81, v61);
                sub_1DE614(v84, v64, v27, v65);
              }
              ++v24;
              v27 = (int **)((char *)v27 + v86);
            }
            while ( v80 != v24 );
            v66 = v62;
            v17 = v60;
            v11 = v88;
            v74 &= ~(v66 << v77);
            goto LABEL_44;
          }
          v28 += v86 / 4;
        }
        while ( v28 <= 15 );
        v30 = v85;
        v28 = 0;
        v86 = 0;
        v74 = 0;
        if ( ((HIDWORD(v72) - 1) & v85) == 0 )
          goto LABEL_23;
LABEL_61:
        v85 = v30 + 4;
        v54 = (_DWORD *)sub_93028(12);
        v55 = (int **)sub_93028(4);
        v56 = v83;
        v54[2] = v55;
        *v54 = 4;
        v54[1] = v56;
        v57 = *v27;
        v83 = v54;
        *v55 = v57;
        if ( !v28 )
          goto LABEL_24;
        goto LABEL_62;
      }
    }
    v86 = 1;
    if ( v29 > 4 )
      v28 = 1;
    v30 = v85;
    if ( v29 <= 4 )
      v28 = 0;
    v31 = v29 - 1;
    if ( v11 > 3 )
      v28 = 0;
    if ( (v31 & v85) != 0 )
      goto LABEL_61;
LABEL_23:
    if ( !v28 )
      goto LABEL_24;
LABEL_62:
    if ( (v11 & 1) != 0 )
      ++v11;
LABEL_24:
    v32 = v77 == 1;
    if ( !v80 )
      v32 = 0;
    if ( v32 && **(_BYTE **)(sub_171258(v80) + 24) == 7 )
    {
      v58 = sub_15C250(v27, v79, v17);
      if ( sub_2484C(v81, v58) )
      {
        v27 = &v70;
        sub_15C34C(&v70, v79, v17, (unsigned int)(v79 + 14) & 0xFFFFFFF8, v58 | 1, 0);
      }
    }
    if ( (int)v79 > 0 )
    {
      do
      {
        while ( 1 )
        {
          v35 = v24 >= 4 ? 4 : v24;
          v36 = sub_15C250(v27, v35, v17);
          v33 = v36;
          if ( v11 <= 3 && v86 & 1 )
            break;
          v87 = 0;
          v38 = sub_15C34C(&v87, v35, v17, 0, v36, 0);
          if ( dword_471514 )
          {
            v50 = (_DWORD *)sub_242FC8(v38);
            sub_2594B0(*v50, v73, v82, v85);
          }
          v24 -= v35;
          v27 = (int **)((char *)v27 + v35);
          v85 += 4;
          v39 = (_DWORD *)sub_93028(12);
          v40 = (int *)sub_93028(4);
          v41 = v83;
          v42 = v87;
          v39[2] = v40;
          v39[1] = v41;
          v83 = v39;
          *v39 = 4;
          *v40 = v42;
          if ( v24 <= 0 )
            goto LABEL_44;
        }
        if ( !v17 )
          v33 = v36 << (8 * (4 - v35));
        if ( dword_471514 )
        {
          v80 = *(_DWORD *)sub_242FC8(v36);
          v79 = (const char *)((int (__fastcall *)(int, int))loc_1677C0)(v81, v11);
          v49 = sub_98904(v33, 0, 4);
          sub_2594B0(v80, v76, v82, v79, v49);
        }
        v34 = v11;
        v24 -= v35;
        ++v11;
        ((void (__fastcall *)(int, int, int, _DWORD))loc_1DFC20)(v84, v34, v33, 0);
        v27 = (int **)((char *)v27 + v35);
      }
      while ( v24 > 0 );
    }
LABEL_44:
    ;
  }
  while ( a5 != ++v82 );
  v44 = v85;
  v45 = v83;
  if ( (v85 & 4) != 0 )
    v44 = a7;
  else
    v24 = a7;
  if ( (v85 & 4) != 0 )
    v24 = v44 - 4;
  if ( v83 )
  {
    do
    {
      v24 -= *v45;
      sub_FAAE0(v24, v45[2]);
      v46 = (void *)v45[2];
      v47 = (_DWORD *)v45[1];
      if ( v46 )
        free(v46);
      free(v45);
      v45 = v47;
    }
    while ( v47 );
  }
LABEL_55:
  ((void (__fastcall *)(int, int, int, _DWORD))loc_1DFC20)(v84, 13, v24, 0);
  return v24;
}
