int __fastcall sub_A46BC(int *a1, int a2, int a3, int a4, unsigned int a5)
{
  int v5; // r10
  unsigned int v8; // r5
  int v9; // r0
  int v10; // r3
  int *v11; // r2
  int v12; // r6
  int v13; // r11
  unsigned int v14; // r8
  bool v15; // zf
  unsigned int v16; // r7
  int *v17; // r2
  int v18; // r7
  int *v19; // r3
  int result; // r0
  int v21; // r1
  int v22; // r2
  int v23; // r3
  int v24; // r2
  int v25; // r3
  bool v26; // zf
  int v27; // r0
  int v28; // r2
  int v29; // r2
  int v30; // r10
  int v31; // r0
  bool v32; // cc
  int v33; // r1
  char v34; // r3
  __int64 v35; // r0
  int v36; // r0
  int v37; // r2
  int v38; // r3
  int *v39; // r3
  int v40; // r2
  int v41; // r3
  int v42; // r5
  int v43; // r5
  int v44; // r1
  int v45; // r0
  unsigned __int8 *v46; // r1
  int v47; // r2
  _DWORD *v48; // r5
  int v49; // r5
  int v50; // r0
  unsigned __int8 *v51; // r3
  unsigned __int8 *v52; // r3
  int v53; // t1
  int v54; // r5
  int v55; // r1
  int v56; // r0
  int v57; // r0
  int v58; // r6
  int v59; // r1
  int v60; // r2
  int v61; // r8
  int v62; // r0
  int v63; // r2
  int v64; // r1
  int i; // r8
  int v66; // r0
  int v67; // r6
  int v68; // r1
  int v69; // r2
  int v70; // r10
  int v71; // r0
  int v72; // r0
  char *v73; // r3
  int v74; // r5
  int v75; // r12
  int v76; // r5
  char *v77; // lr
  int v78; // r10
  int v79; // t1
  char **v80; // r3
  int v81; // r2
  int v82; // [sp+0h] [bp-1Ch]
  int v83; // [sp+4h] [bp-18h]
  int v84; // [sp+4h] [bp-18h]
  int *v85; // [sp+8h] [bp-14h]
  int v86; // [sp+Ch] [bp-10h]
  char v87; // [sp+Ch] [bp-10h]
  int v88; // [sp+Ch] [bp-10h]
  unsigned int v89; // [sp+14h] [bp-8h] BYREF

  v5 = a1[257];
  v8 = a5;
  v9 = *(_DWORD *)(v5 + 16);
  v10 = v9 & 0x30000;
  if ( a5 == -1 )
  {
    v26 = a3 == 0;
    if ( a3 )
      v26 = a2 == 0;
    v12 = a2;
    v13 = a3;
    if ( v26 )
      return 0;
    v16 = 0;
    v86 = v9 & 0x30000;
    if ( !sub_8559C(a3, &v89) )
      return 0;
    v8 = v89;
    v27 = *(_DWORD *)(v5 + 16);
    v83 = 4 * v89;
    v85 = (int *)(a1[31] + 636 + 4 * v89);
    if ( (((unsigned int)&loc_2FFFE + 3) & v27) != 0 )
      v28 = 3824;
    else
      v28 = 2128;
    v82 = v28;
    if ( (((unsigned int)&loc_2FFFE + 3) & v27) != 0 )
      v29 = 1776;
    else
      v29 = 80;
    if ( v86 )
    {
      if ( sub_10E930(0, v12, a4, v86) )
      {
        if ( sub_8A8F0((int)a1) >> 8 != 3 )
        {
          v16 = 48;
          v14 = 1;
          goto LABEL_67;
        }
        v34 = 1;
        v14 = 1;
        goto LABEL_74;
      }
      v14 = 1;
      v16 = 2048;
    }
    else
    {
      v82 = v29;
      v16 = 0;
      v14 = 1;
    }
  }
  else
  {
    if ( a5 == -2 )
    {
      v11 = *(int **)v5;
      v8 = -858993459 * ((*(_DWORD *)v5 - (v5 + 20)) >> 2);
      v83 = 858993460 * ((*(_DWORD *)v5 - (v5 + 20)) >> 2);
    }
    else
    {
      v83 = 4 * a5;
      v11 = (int *)(v5 + 20 + 20 * a5);
    }
    v12 = *v11;
    v13 = v11[1];
    v14 = v9 & ((unsigned int)&loc_2FFFE + 3);
    v15 = v13 == 0;
    if ( v13 )
      v15 = v12 == 0;
    v85 = (int *)(a1[31] + 636 + v83);
    if ( v15 )
    {
      v16 = 0;
      v82 = 0;
      goto LABEL_9;
    }
    v16 = 0;
    a4 = v11[2];
    if ( v10 )
    {
      if ( sub_10E930(0, v12, v11[2], v10) )
      {
        v82 = 0;
        goto LABEL_9;
      }
      v82 = 0;
      v16 = 2048;
    }
    else
    {
      v16 = 0;
      v82 = 0;
    }
  }
  if ( sub_8A8F0((int)a1) >> 8 != 3 )
  {
LABEL_24:
    if ( !v82 )
    {
      if ( !sub_A2B30(a1, v12, 1) )
        goto LABEL_9;
      goto LABEL_26;
    }
    v16 |= 0x30u;
LABEL_67:
    if ( !sub_A2B30(a1, v12, 1) )
      goto LABEL_27;
LABEL_26:
    v16 |= 0x40u;
    goto LABEL_27;
  }
  v34 = v14;
  if ( v14 )
    v34 = 1;
LABEL_74:
  v87 = v34;
  if ( sub_8A8F0((int)a1) > 770 )
    v36 = v87 & 1;
  else
    v36 = 0;
  if ( !v36 )
    goto LABEL_24;
  v37 = a1[31];
  v38 = *(_DWORD *)(v37 + 620);
  if ( v38 )
  {
    v84 = 0;
    goto LABEL_80;
  }
  v72 = *(_DWORD *)(v37 + 616);
  if ( v72 )
    goto LABEL_138;
  if ( v8 > 6 )
  {
    v38 = -1;
LABEL_138:
    v84 = v38;
    goto LABEL_80;
  }
  v73 = *(char **)((char *)&unk_1A9C40 + v83 + 484);
  v84 = *(_DWORD *)((char *)&unk_1A9C40 + v83 + 456);
  if ( v84 > 0 )
  {
    v74 = *(_DWORD *)(v5 + 208);
    if ( v74 )
    {
      v75 = *(_DWORD *)(v5 + 212);
      if ( !v75 )
      {
LABEL_149:
        if ( !v82 )
          goto LABEL_9;
        goto LABEL_67;
      }
      v76 = v74 - 2;
      v77 = v73;
      while ( 2 )
      {
        v79 = *(unsigned __int16 *)(v76 + 2);
        v76 += 2;
        v78 = v79;
        v80 = &off_202A94;
        while ( *((unsigned __int16 *)v80 + 2) != v78 )
        {
          v80 += 8;
          if ( v80 == &off_202DD4 )
            goto LABEL_148;
        }
        if ( v80[2] != (char *)64 || v77 != v80[4] )
        {
LABEL_148:
          if ( v75 != ++v72 )
            continue;
          goto LABEL_149;
        }
        break;
      }
      if ( v72 == v75 )
        goto LABEL_149;
    }
    v39 = (int *)a1[1];
    v81 = *(_DWORD *)(v39[25] + 48);
    HIDWORD(v35) = v81 << 28;
    if ( (v81 & 8) != 0 )
      goto LABEL_120;
    goto LABEL_81;
  }
LABEL_80:
  v39 = (int *)a1[1];
  v40 = *(_DWORD *)(v39[25] + 48);
  if ( (v40 & 8) != 0 )
    goto LABEL_119;
LABEL_81:
  v41 = *v39;
  v40 = v41 >= 772;
  if ( v41 == 0x10000 )
    v40 = 0;
  if ( !v40 )
  {
LABEL_119:
    if ( v84 == -1 )
      goto LABEL_85;
LABEL_120:
    if ( !sub_A2650(a1, v12, v84) )
    {
      if ( !v82 )
        goto LABEL_9;
      v42 = v16;
      v16 |= 0x20u;
      goto LABEL_123;
    }
    goto LABEL_85;
  }
  if ( sub_A2D30(a1, v12, v13) )
  {
LABEL_85:
    v42 = v16 | 0x10;
    goto LABEL_86;
  }
  v42 = v16;
LABEL_86:
  v16 = v42 | 0x20;
  if ( v84 == -1 )
  {
    v43 = 0;
    while ( 1 )
    {
      v32 = v43 < sub_10C010(a4, HIDWORD(v35), v40);
      v44 = v43++;
      if ( !v32 )
        break;
      v35 = sub_10C01C(a4, v44);
    }
    goto LABEL_91;
  }
LABEL_123:
  v88 = v42;
  v54 = 0;
  while ( 1 )
  {
    v32 = sub_10C010(a4, HIDWORD(v35), v40) <= v54;
    v55 = v54++;
    if ( v32 )
      break;
    v56 = sub_10C01C(a4, v55);
    if ( !sub_A2650(a1, v56, v84) )
    {
      if ( !v82 )
        goto LABEL_9;
      v16 = v88 & 0xFFFFFFDF;
      goto LABEL_67;
    }
  }
LABEL_91:
  if ( sub_A2B30(a1, v12, 1) )
    goto LABEL_26;
  if ( !v82 )
    goto LABEL_9;
LABEL_27:
  v23 = a1[7];
  if ( v23 )
  {
    v30 = 0;
    if ( !v14 )
      goto LABEL_34;
    do
    {
      v32 = v30 < sub_10C010(a4, v21, v22);
      v33 = v30++;
      if ( !v32 )
      {
        v23 = a1[7];
        v16 |= 0x80u;
        goto LABEL_29;
      }
      v31 = sub_10C01C(a4, v33);
    }
    while ( sub_A2B30(a1, v31, 0) );
    if ( !v82 )
    {
      v16 |= 0x80u;
      goto LABEL_9;
    }
    v16 &= ~0x80u;
    if ( a1[7] )
    {
      v25 = v82;
      v16 |= 0x600u;
      goto LABEL_64;
    }
  }
  else
  {
    v16 |= 0x80u;
LABEL_29:
    v24 = v14;
    if ( v14 )
      v24 = 1;
    if ( v23 )
      v24 = 0;
    if ( !v24 )
    {
LABEL_34:
      v25 = v82;
      v16 |= 0x600u;
      if ( !v82 )
        goto LABEL_35;
LABEL_64:
      if ( (v25 & ~v16) == 0 )
        goto LABEL_35;
LABEL_9:
      if ( sub_8A8F0((int)a1) >> 8 == 3 )
        goto LABEL_36;
LABEL_10:
      v18 = v16 | 0x102;
      goto LABEL_11;
    }
  }
  v45 = sub_DA19C(v13);
  switch ( v45 )
  {
    case 116:
      v50 = 2;
      break;
    case 408:
      v50 = 64;
      break;
    case 6:
      v50 = 1;
      break;
    default:
      v48 = (_DWORD *)a1[31];
      v16 |= 0x400u;
      goto LABEL_98;
  }
  v48 = (_DWORD *)a1[31];
  v46 = (unsigned __int8 *)v48[136];
  v51 = (unsigned __int8 *)v48[135];
  if ( v46 )
  {
    if ( *v51 == v50 )
    {
LABEL_118:
      v16 |= 0x400u;
    }
    else
    {
      v46 = &v51[(_DWORD)v46];
      v52 = v51 + 1;
      while ( v46 != v52 )
      {
        v53 = *v52++;
        if ( v53 == v50 )
          goto LABEL_118;
      }
    }
  }
  v47 = v82;
  if ( !(v16 & 0x400 | v82) )
  {
    v82 = 0;
    goto LABEL_9;
  }
LABEL_98:
  v49 = v48[137];
  if ( v49 && sub_10C010(v49, v46, v47) )
  {
    v57 = v12;
    v58 = 0;
    v61 = sub_10E65C(v57);
    while ( 1 )
    {
      v32 = v58 < sub_10C010(v49, v59, v60);
      v64 = v58++;
      if ( !v32 )
        break;
      v62 = sub_10C01C(v49, v64);
      if ( !sub_10E6E0(v61, v62) )
        goto LABEL_100;
    }
    for ( i = 0; i < sub_10C010(a4, v64, v63); ++i )
    {
      v66 = sub_10C01C(a4, i);
      v67 = 0;
      v70 = sub_10E65C(v66);
      while ( 1 )
      {
        v32 = v67 < sub_10C010(v49, v68, v69);
        v64 = v67++;
        if ( !v32 )
          break;
        v71 = sub_10C01C(v49, v64);
        if ( !sub_10E6E0(v70, v71) )
          goto LABEL_100;
      }
    }
  }
  else
  {
LABEL_100:
    v16 |= 0x200u;
  }
  v25 = v82;
  if ( v82 )
    goto LABEL_64;
  if ( (v16 & 0x200) == 0 )
    goto LABEL_9;
LABEL_35:
  v16 |= 1u;
  if ( sub_8A8F0((int)a1) >> 8 != 3 )
    goto LABEL_10;
LABEL_36:
  if ( sub_8A8F0((int)a1) <= 770 )
    goto LABEL_10;
  v18 = v16 | *v85 & 0x102;
LABEL_11:
  v19 = (int *)v82;
  result = v18;
  if ( !v82 )
  {
    result = v18 & 1;
    if ( (v18 & 1) != 0 )
    {
      result = v18;
      v19 = v85;
    }
    else
    {
      v17 = v85;
    }
    if ( (v18 & 1) != 0 )
      *v19 = v18;
    else
      v19 = (int *)*v17;
    if ( (v18 & 1) == 0 )
      *v17 = (unsigned __int16)v19 & 0x102;
  }
  return result;
}
