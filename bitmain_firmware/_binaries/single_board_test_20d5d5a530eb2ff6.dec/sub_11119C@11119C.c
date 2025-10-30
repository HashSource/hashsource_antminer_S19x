bool __fastcall sub_11119C(int *a1, int *a2, int *a3, int *a4, int *a5, int *a6, _DWORD *a7)
{
  int *v7; // r10
  signed int v8; // r11
  _DWORD *v9; // r0
  int v10; // r3
  _DWORD *v11; // r5
  int v12; // r4
  int v13; // r0
  int v14; // r9
  int v15; // r2
  int v16; // r4
  int v17; // r3
  time_t *v18; // r4
  _DWORD *v19; // r0
  int v20; // r0
  int v21; // r7
  int v22; // r6
  unsigned int v23; // r4
  int v24; // r7
  int v25; // r4
  bool v26; // cc
  unsigned int v27; // r1
  int v28; // r7
  int v29; // r0
  signed int v30; // r4
  int v31; // r5
  int v32; // r7
  int v33; // r0
  int v34; // r4
  int v35; // r3
  time_t *v36; // r4
  _DWORD *v37; // r0
  int v39; // r3
  signed int v40; // r6
  int v41; // r3
  _DWORD *v42; // r9
  int v43; // r4
  int v44; // r7
  int v45; // r0
  int v46; // r5
  unsigned int v47; // r1
  _DWORD *v48; // r0
  _DWORD **v49; // r3
  _DWORD *v50; // r7
  _DWORD *v51; // r5
  bool v52; // zf
  signed int v53; // r10
  int v54; // r11
  int v55; // r10
  int v56; // r0
  unsigned int v57; // r1
  int v58; // r4
  unsigned int v59; // r1
  int v60; // r7
  int v61; // r0
  _DWORD *v62; // r0
  int v63; // r0
  int v64; // r1
  int v65; // r3
  _BOOL4 v66; // r3
  _BOOL4 v67; // r3
  int v68; // r4
  int v69; // r0
  _DWORD *v70; // r3
  int v71; // r10
  _DWORD *v72; // r7
  int v73; // r5
  unsigned int v74; // r1
  _DWORD *v75; // r0
  _DWORD *v76; // r0
  int v77; // r0
  int v78; // [sp+0h] [bp-54h]
  int v79; // [sp+4h] [bp-50h]
  int v80; // [sp+8h] [bp-4Ch]
  int v81; // [sp+Ch] [bp-48h]
  int v82; // [sp+10h] [bp-44h]
  int v83; // [sp+14h] [bp-40h]
  int v84; // [sp+18h] [bp-3Ch]
  int v85; // [sp+1Ch] [bp-38h]
  signed int j; // [sp+28h] [bp-2Ch]
  signed int v87; // [sp+2Ch] [bp-28h]
  int v88; // [sp+30h] [bp-24h]
  int *i; // [sp+34h] [bp-20h]
  int v93; // [sp+44h] [bp-10h]
  int v94; // [sp+48h] [bp-Ch] BYREF
  int v95; // [sp+4Ch] [bp-8h] BYREF

  v7 = a1;
  v8 = 0;
  v81 = 0;
  v83 = 0;
  v84 = a1[25];
  v79 = 0;
  v82 = 0;
  v80 = *a5;
  while ( v8 < sub_10C010((int)a7) )
  {
    v9 = (_DWORD *)sub_10C01C(a7, v8);
    v10 = v9[21];
    v11 = v9;
    if ( (v10 & 2) != 0 )
      goto LABEL_27;
    v78 = *a6;
    if ( (*(_DWORD *)(v7[4] + 12) & 0x1000) != 0 )
    {
      if ( (v10 & 0x40) != 0 )
      {
        if ( (v9[22] & ~*a6) == 0 )
          goto LABEL_27;
      }
      else if ( v9[24] )
      {
        ++v8;
        continue;
      }
    }
    else if ( (v10 & 0x60) != 0 )
    {
      goto LABEL_27;
    }
    v12 = sub_10E65C(v84);
    v13 = sub_113BC4(v11);
    if ( sub_10E6E0(v12, v13) )
    {
      if ( (v11[21] & 0x20) == 0 )
        goto LABEL_27;
      v14 = 256;
      v15 = 0;
    }
    else
    {
      v14 = 288;
      v15 = 32;
    }
    v16 = v7[4];
    v17 = *(_DWORD *)(v16 + 12);
    if ( (v11[18] & 0x200) != 0 )
      v14 = v15;
    if ( (v17 & 2) != 0 )
    {
      v18 = (time_t *)(v16 + 4);
    }
    else
    {
      v18 = (time_t *)(v17 & 0x200000);
      if ( (v17 & 0x200000) != 0 )
        goto LABEL_93;
    }
    v19 = (_DWORD *)sub_113BB4(v11);
    if ( sub_110DC0(v19, v18) < 0 )
    {
      if ( !sub_113BB8(v11)
        || (v62 = (_DWORD *)sub_113BB8(v11), (v63 = sub_110DC0(v62, v18)) != 0) && (v63 >= 0 || (v7[28] & 2) != 0) )
      {
LABEL_93:
        v14 |= 0x40u;
      }
    }
    v20 = sub_113BC4(v11);
    v21 = v7[23];
    v22 = v20;
    v23 = sub_10C010(v7[20]) - 1;
    if ( v21 != v23 )
      v23 = v21 + 1;
    v24 = sub_10C01C((_DWORD *)v7[20], v23);
    if ( !sub_12055C(v24, v11[19]) && (v14 & 0x20) != 0 )
    {
      v14 |= 0x1Cu;
      v81 = v24;
      goto LABEL_26;
    }
    v25 = v23 + 1;
    while ( 1 )
    {
      v26 = v25 < sub_10C010(v7[20]);
      v27 = v25++;
      if ( !v26 )
        break;
      v28 = sub_10C01C((_DWORD *)v7[20], v27);
      v29 = sub_10E660(v28);
      if ( !sub_10E6E0(v29, v22) && !sub_12055C(v28, v11[19]) )
      {
        v14 |= 0xCu;
        v81 = v28;
        goto LABEL_26;
      }
    }
    if ( (*(_DWORD *)(v7[4] + 12) & 0x1000) != 0 )
    {
      v58 = 0;
      do
      {
        v26 = v58 < sub_10C010(v7[2]);
        v59 = v58++;
        if ( !v26 )
          goto LABEL_26;
        v60 = sub_10C01C((_DWORD *)v7[2], v59);
        v61 = sub_10E660(v60);
      }
      while ( sub_10E6E0(v61, v22) || sub_12055C(v60, v11[19]) );
      v14 |= 4u;
      v81 = v60;
      if ( (v14 & 4) == 0 )
        goto LABEL_27;
    }
    else
    {
LABEL_26:
      if ( (v14 & 4) == 0 )
        goto LABEL_27;
    }
    v39 = v11[21];
    if ( (v39 & 0x10) != 0 )
      goto LABEL_99;
    if ( (*(_DWORD *)(v84 + 128) & 0x10) != 0 )
    {
      if ( (v39 & 4) != 0 )
        goto LABEL_99;
    }
    else if ( (v39 & 8) != 0 )
    {
      goto LABEL_99;
    }
    v40 = 0;
    v88 = v14;
    v85 = v11[22];
    v41 = v14 & 0x20;
    v42 = v11;
    v93 = v41;
    v87 = v8;
    for ( i = v7; v40 < sub_10C010(*(_DWORD *)(v84 + 156)); ++v40 )
    {
      v43 = sub_10C01C(*(_DWORD **)(v84 + 156), v40);
      v44 = sub_113BC4(v42);
      v45 = *(_DWORD *)(v43 + 8);
      if ( v45 )
      {
        v46 = 0;
        while ( 1 )
        {
          v26 = v46 < sub_10C010(v45);
          v47 = v46++;
          if ( !v26 )
            break;
          v48 = (_DWORD *)sub_10C01C(*(_DWORD **)(v43 + 8), v47);
          if ( *v48 == 4 && !sub_10E6E0(v48[1], v44) )
            goto LABEL_62;
          v45 = *(_DWORD *)(v43 + 8);
        }
        continue;
      }
      if ( v93 )
      {
LABEL_62:
        v49 = (_DWORD **)v42[20];
        if ( !v49 )
          goto LABEL_96;
        v50 = *v49;
        v51 = *(_DWORD **)v43;
        v52 = *v49 == 0;
        if ( *v49 )
          v52 = v51 == 0;
        v53 = v52;
        if ( v52 )
        {
LABEL_96:
          v11 = v42;
          v8 = v87;
          v14 = v88;
          v7 = i;
          v65 = v85 & *(_DWORD *)(v43 + 12);
          v85 = v65;
          goto LABEL_97;
        }
        if ( *v51 == 1 )
        {
          v71 = v51[2];
          if ( v71 )
          {
            if ( *v50 != 1 )
            {
              v72 = (_DWORD *)v50[1];
              goto LABEL_122;
            }
            v64 = v50[2];
            if ( v64 && !sub_10E6E0(v51[2], v64) )
              goto LABEL_96;
          }
        }
        else if ( *v50 == 1 )
        {
          v71 = v50[2];
          if ( v71 )
          {
            v72 = (_DWORD *)v51[1];
LABEL_122:
            v73 = 0;
            while ( 1 )
            {
              v26 = v73 < sub_10C010((int)v72);
              v74 = v73++;
              if ( !v26 )
                break;
              v75 = (_DWORD *)sub_10C01C(v72, v74);
              if ( *v75 == 4 && !sub_10E6E0(v71, v75[1]) )
                goto LABEL_96;
            }
          }
        }
        else
        {
          for ( j = v53; j < sub_10C010(v51[1]); ++j )
          {
            v54 = 0;
            v55 = sub_10C01C((_DWORD *)v51[1], j);
            while ( 1 )
            {
              v26 = v54 < sub_10C010(v50[1]);
              v57 = v54++;
              if ( !v26 )
                break;
              v56 = sub_10C01C((_DWORD *)v50[1], v57);
              if ( !sub_11D9DC(v55, v56) )
                goto LABEL_96;
            }
          }
        }
      }
    }
    v11 = v42;
    v8 = v87;
    v70 = (_DWORD *)v42[20];
    v14 = v88;
    v7 = i;
    if ( v70 && *v70 || !v93 )
      goto LABEL_99;
    v65 = v85;
LABEL_97:
    if ( (v65 & ~v78) != 0 )
    {
      v14 |= 0x80u;
      v78 |= v85;
LABEL_99:
      v66 = v14 == 0;
      if ( v80 > v14 )
        v66 = 1;
      if ( !v66 )
      {
        v67 = v80 == v14;
        if ( !v79 )
          v67 = 0;
        if ( !v67
          || (v68 = sub_113BB4(v79), v69 = sub_113BB4(v11), sub_12B260(&v94, &v95, v68, v69)) && (v94 > 0 || v95 > 0) )
        {
          ++v8;
          v79 = (int)v11;
          v80 = v14;
          v82 = v78;
          v83 = v81;
          continue;
        }
      }
    }
LABEL_27:
    ++v8;
  }
  if ( v79 )
  {
    X509_CRL_free(*a2);
    *a2 = v79;
    v30 = 0;
    *a4 = v83;
    *a5 = v80;
    *a6 = v82;
    sub_113B90(v79);
    X509_CRL_free(*a3);
    *a3 = 0;
    if ( (*(_DWORD *)(v7[4] + 12) & 0x2000) != 0 && ((*(_DWORD *)(v79 + 72) | *(_DWORD *)(v7[25] + 128)) & 0x1000) != 0 )
    {
      while ( 1 )
      {
        if ( v30 >= sub_10C010((int)a7) )
        {
          *a3 = 0;
          return v80 >= 448;
        }
        v31 = sub_10C01C(a7, v30);
        if ( *(_DWORD *)(v31 + 96) )
        {
          if ( *(_DWORD *)(v79 + 92) )
          {
            v32 = sub_113BC4(v79);
            v33 = sub_113BC4(v31);
            if ( !sub_10E6E0(v32, v33)
              && sub_110644(v31, v79)
              && sub_110644(v31, v79)
              && sub_126528(*(_DWORD *)(v31 + 96), *(_DWORD *)(v79 + 92)) <= 0
              && sub_126528(*(_DWORD *)(v31 + 92), *(_DWORD *)(v79 + 92)) > 0 )
            {
              break;
            }
          }
        }
        ++v30;
      }
      v34 = v7[4];
      v35 = *(_DWORD *)(v34 + 12);
      if ( (v35 & 2) != 0 )
      {
        v36 = (time_t *)(v34 + 4);
      }
      else
      {
        if ( (v35 & 0x200000) != 0 )
        {
LABEL_138:
          *a5 |= 2u;
LABEL_46:
          sub_113B90(v31);
          *a3 = v31;
          return v80 >= 448;
        }
        v36 = 0;
      }
      v37 = (_DWORD *)sub_113BB4(v31);
      if ( sub_110DC0(v37, v36) >= 0 )
        goto LABEL_46;
      if ( sub_113BB8(v31) )
      {
        v76 = (_DWORD *)sub_113BB8(v31);
        v77 = sub_110DC0(v76, v36);
        if ( !v77 || v77 < 0 && (v7[28] & 2) == 0 )
          goto LABEL_46;
      }
      goto LABEL_138;
    }
  }
  return v80 >= 448;
}
