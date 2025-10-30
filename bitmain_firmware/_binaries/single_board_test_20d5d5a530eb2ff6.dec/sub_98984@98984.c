int __fastcall sub_98984(_DWORD *a1, int *a2)
{
  unsigned int v2; // r5
  _DWORD *v4; // lr
  unsigned __int8 *v6; // r3
  unsigned int v7; // r1
  unsigned __int8 *v8; // r2
  int v9; // r11
  int v10; // r10
  int v11; // r9
  int v12; // r0
  _BOOL4 v13; // r12
  int v14; // r12
  int v15; // r8
  int v16; // r1
  int v17; // r3
  int v19; // r12
  unsigned __int8 *v20; // r1
  int v21; // r8
  size_t v22; // r8
  _BOOL4 v23; // r12
  _DWORD *v24; // r1
  _DWORD *v25; // r0
  int v26; // r3
  _DWORD *v27; // r2
  _DWORD *v28; // r0
  int *v29; // lr
  int v30; // lr
  _BOOL4 v31; // r1
  time_t v32; // r0
  int v33; // lr
  int v34; // r3
  int v35; // r0
  int v36; // r2
  void *v37; // r0
  unsigned int v38; // r6
  unsigned __int8 *v39; // r5
  int v40; // r3
  unsigned int v41; // r2
  int *v42; // lr
  int v43; // r11
  _DWORD *v44; // r10
  int v45; // r1
  int v46; // r0
  unsigned __int8 *v47; // r2
  int *v48; // r9
  _BOOL4 v49; // r2
  unsigned int v50; // r3
  unsigned __int8 *v51; // r2
  unsigned int v52; // r3
  unsigned int v53; // lr
  int v54; // r9
  int v55; // r0
  int *v56; // r2
  int v57; // r3
  int v58; // r0
  int v59; // r1
  int v60; // r3
  _BOOL4 v61; // r2
  int v62; // r9
  int v63; // r0
  int v64; // r8
  int v65; // r0
  _BOOL4 v66; // r1
  int v67; // [sp+18h] [bp-24h]
  int v68; // [sp+1Ch] [bp-20h]
  int v69; // [sp+1Ch] [bp-20h]
  _DWORD *v70; // [sp+1Ch] [bp-20h]
  _DWORD *v71; // [sp+1Ch] [bp-20h]
  int v72; // [sp+20h] [bp-1Ch]
  _DWORD *v73; // [sp+20h] [bp-1Ch]
  _DWORD *v74; // [sp+20h] [bp-1Ch]
  int v75; // [sp+20h] [bp-1Ch]
  int v76; // [sp+20h] [bp-1Ch]
  int v77; // [sp+24h] [bp-18h]
  int v78; // [sp+24h] [bp-18h]
  int v79; // [sp+2Ch] [bp-10h] BYREF
  _DWORD v80[3]; // [sp+30h] [bp-Ch] BYREF

  v2 = a2[1];
  v79 = 0;
  if ( v2 <= 3 )
    goto LABEL_9;
  v4 = (_DWORD *)a1[1];
  v6 = (unsigned __int8 *)*a2;
  v7 = v2 - 4;
  v8 = v6 + 4;
  v9 = *v6;
  v10 = v6[1];
  v11 = v6[3];
  v12 = *(_DWORD *)(v4[25] + 48) & 8;
  v67 = v6[2];
  *a2 = (int)(v6 + 4);
  a2[1] = v2 - 4;
  if ( v12 )
  {
    v38 = 0;
    v39 = 0;
    v40 = 0;
  }
  else
  {
    v13 = *v4 >= 772;
    if ( *v4 == 0x10000 )
      v13 = 0;
    if ( v13 )
    {
      if ( v7 <= 3 )
        goto LABEL_9;
      v14 = v6[4];
      v15 = v6[6];
      v68 = v6[5];
      v16 = v6[7];
      a2[1] = v2 - 8;
      *a2 = (int)(v6 + 8);
      v72 = v16;
      if ( v2 == 8 )
        goto LABEL_9;
      v38 = v6[8];
      v41 = v2 - 9;
      if ( v38 > v2 - 9 )
        goto LABEL_9;
      v7 = v41 - v38;
      a2[1] = v41 - v38;
      v39 = v6 + 9;
      v8 = &v6[v38 + 9];
      *a2 = (int)v8;
      v40 = (v68 << 16) | (v14 << 24) | v72 | (v15 << 8);
    }
    else
    {
      v38 = v12;
      v39 = (unsigned __int8 *)v12;
      v40 = v12;
    }
  }
  if ( v7 <= 1 )
  {
LABEL_9:
    v17 = 2598;
    goto LABEL_10;
  }
  v19 = *v8;
  v20 = (unsigned __int8 *)(v7 - 2);
  v21 = v8[1];
  a2[1] = (int)v20;
  *a2 = (int)(v8 + 2);
  v22 = v21 | (v19 << 8);
  if ( !v12 )
  {
    v23 = *v4 >= 772;
    if ( *v4 == 0x10000 )
      v23 = 0;
    if ( v23 )
    {
      if ( v22 && v22 <= (unsigned int)v20 )
        goto LABEL_20;
      goto LABEL_9;
    }
  }
  if ( (unsigned __int8 *)v22 != v20 )
    goto LABEL_9;
  if ( !v22 )
    return 3;
  if ( v12 )
    goto LABEL_55;
  v66 = *v4 >= 772;
  if ( *v4 == 0x10000 )
    v66 = 0;
  if ( !v66 )
  {
LABEL_55:
    v24 = (_DWORD *)a1[285];
    if ( !v24[82] )
      goto LABEL_28;
    goto LABEL_21;
  }
LABEL_20:
  v24 = (_DWORD *)a1[285];
LABEL_21:
  v69 = v40;
  v25 = sub_8D794(v24, 0);
  v26 = v69;
  v27 = v25;
  if ( !v25 )
  {
    sub_95494(a1, 80, 366, 65, (int)"ssl/statem/statem_clnt.c", 2628);
    goto LABEL_11;
  }
  v28 = (_DWORD *)a1[376];
  if ( (v28[9] & 1) != 0 )
  {
    v29 = (int *)a1[1];
    if ( (*(_DWORD *)(v29[25] + 48) & 8) != 0 )
      goto LABEL_58;
    v30 = *v29;
    v31 = v30 < 772;
    if ( v30 == 0x10000 )
      v31 = 1;
    if ( v31 )
    {
LABEL_58:
      v76 = v69;
      v71 = v27;
      sub_8DB08(v28, a1[285]);
      v26 = v76;
      v27 = v71;
    }
  }
  v77 = v26;
  v73 = v27;
  v70 = v27;
  sub_8D6A4(a1[285]);
  v40 = v77;
  v24 = v70;
  a1[285] = v73;
LABEL_28:
  v78 = v40;
  v74 = v24;
  v32 = time(0);
  v33 = a1[285];
  v74[108] = v32;
  CRYPTO_free(*(_DWORD *)(v33 + 464), "ssl/statem/statem_clnt.c", 2652);
  v34 = a1[285];
  *(_DWORD *)(v34 + 464) = 0;
  *(_DWORD *)(v34 + 468) = 0;
  v75 = v34;
  v35 = CRYPTO_malloc(v22, "ssl/statem/statem_clnt.c", 2656);
  v36 = a1[285];
  *(_DWORD *)(v75 + 464) = v35;
  v37 = *(void **)(v36 + 464);
  if ( !v37 )
  {
    sub_95494(a1, 80, 366, 65, (int)"ssl/statem/statem_clnt.c", 2659);
    goto LABEL_11;
  }
  if ( v22 > a2[1] )
  {
    sub_95494(a1, 50, 366, 159, (int)"ssl/statem/statem_clnt.c", 2664);
    goto LABEL_11;
  }
  memcpy(v37, (const void *)*a2, v22);
  v42 = (int *)a1[1];
  v43 = (v10 << 16) | (v9 << 24);
  v44 = (_DWORD *)a1[285];
  v45 = *(_DWORD *)(v42[25] + 48);
  v46 = *a2 + v22;
  v47 = (unsigned __int8 *)(a2[1] - v22);
  *a2 = v46;
  a2[1] = (int)v47;
  v44[118] = v43 | v11 | (v67 << 8);
  v48 = (int *)(v45 & 8);
  v44[119] = v78;
  v44[117] = v22;
  if ( (v45 & 8) == 0 )
  {
    v49 = *v42 != 0x10000;
    if ( *v42 < 772 )
      v49 = 0;
    if ( v49 )
    {
      v50 = a2[1];
      if ( v50 > 1 )
      {
        v51 = (unsigned __int8 *)*a2;
        v52 = v50 - 2;
        v53 = *(unsigned __int8 *)(*a2 + 1) | (*(unsigned __int8 *)*a2 << 8);
        if ( v53 <= v52 && v53 == v52 )
        {
          *a2 = (int)&v51[v53 + 2];
          a2[1] = (int)v48;
          v80[0] = v51 + 2;
          v80[1] = v53;
          if ( !sub_8F274(a1, (int)v80, 0x2000, &v79, v48, 1) )
            goto LABEL_11;
          v46 = sub_8F658(a1, 0x2000, v79, (int)v48, (int)v48, 1);
          if ( !v46 )
            goto LABEL_11;
          v44 = (_DWORD *)a1[285];
          goto LABEL_46;
        }
      }
      v17 = 2679;
LABEL_10:
      sub_95494(a1, 50, 366, 159, (int)"ssl/statem/statem_clnt.c", v17);
      goto LABEL_11;
    }
  }
LABEL_46:
  v54 = v44[116];
  v55 = sub_D93F0(v46);
  if ( !sub_D18F0(v54, v22, v44 + 83, v80, v55, 0) )
  {
    sub_95494(a1, 80, 366, 6, (int)"ssl/statem/statem_clnt.c", 2713);
    goto LABEL_11;
  }
  v56 = (int *)a1[1];
  v57 = a1[285];
  v58 = v80[0];
  v59 = v56[25];
  *(_DWORD *)(v57 + 408) = 0;
  *(_DWORD *)(v57 + 328) = v58;
  if ( (*(_DWORD *)(v59 + 48) & 8) != 0 )
    return 3;
  v60 = *v56;
  v61 = *v56 != 0x10000;
  if ( v60 < 772 )
    v61 = 0;
  if ( !v61 )
    return 3;
  v62 = sub_86508((int)a1);
  v63 = sub_D8C78(v62);
  v64 = v63;
  if ( v63 < 0 )
  {
    sub_95494(a1, 80, 366, 68, (int)"ssl/statem/statem_clnt.c", 2730);
    goto LABEL_11;
  }
  if ( !sub_A5334(a1, v62, a1 + 99, "resumption", 10, v39, v38, a1[285] + 72, v63, 1) )
  {
LABEL_11:
    CRYPTO_free(v79, "ssl/statem/statem_clnt.c", 2754);
    return 0;
  }
  v65 = v79;
  *(_DWORD *)(a1[285] + 4) = v64;
  CRYPTO_free(v65, "ssl/statem/statem_clnt.c", 2747);
  sub_8A430(a1, 1);
  return 1;
}
