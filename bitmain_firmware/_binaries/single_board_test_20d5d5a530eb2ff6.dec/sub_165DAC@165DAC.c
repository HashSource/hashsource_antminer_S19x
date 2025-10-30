int __fastcall sub_165DAC(_DWORD *a1, int a2, int a3, int a4, _DWORD *a5)
{
  int v5; // r7
  int (*v7)(void); // r7
  void **v11; // r11
  int v12; // r6
  void **v13; // r0
  int **v14; // r1
  int **v15; // r1
  int **v16; // r1
  int v17; // r7
  int v18; // r1
  int v19; // r3
  int v20; // r0
  int v21; // r2
  int v22; // r2
  int v23; // r2
  int *v24; // r10
  int v25; // r0
  int v26; // r4
  int *v27; // r0
  int *v28; // r7
  int v29; // r8
  int v30; // r7
  int v31; // r9
  int *v32; // r4
  int v33; // r3
  int v34; // r9
  int v35; // r6
  int *v36; // r1
  int *v37; // r0
  unsigned int v38; // r6
  int v39; // r2
  int v40; // r3
  int v41; // r3
  unsigned int v42; // r0
  int v43; // r2
  int v44; // r0
  int v45; // r0
  int v46; // r0
  int v47; // r0
  int v48; // r0
  int v49; // r0
  int v50; // r0
  int v51; // r0
  int v52; // r0
  int v53; // r3
  int *v54; // r4
  int *v55; // r0
  int *v56; // r4
  int *v57; // r0
  int v58; // r4
  unsigned int v59; // r1
  bool v60; // cc
  int v61; // r0
  int *v62; // r7
  int v63; // r5
  int *v64; // r9
  int *v65; // r0
  int *v66; // r0
  int *v67; // r4
  int *v68; // r0
  int v69; // r5
  unsigned int v70; // r1
  int v71; // r0
  int *v72; // r0
  int v73; // r5
  unsigned int v74; // r1
  int v75; // r6
  int **v77; // [sp+Ch] [bp-48h]
  _DWORD *v78; // [sp+14h] [bp-40h]
  int v79; // [sp+18h] [bp-3Ch]
  int v80; // [sp+1Ch] [bp-38h]
  int v81; // [sp+20h] [bp-34h]
  int *v82; // [sp+24h] [bp-30h]
  int v83; // [sp+28h] [bp-2Ch]
  int **v84; // [sp+2Ch] [bp-28h]
  int v85; // [sp+30h] [bp-24h]
  int v86; // [sp+34h] [bp-20h]
  _DWORD v87[5]; // [sp+3Ch] [bp-18h]

  v5 = a1[2];
  if ( *(_DWORD *)(v5 + 56) )
    return (*(int (**)(void))(v5 + 56))();
  v7 = *(int (**)(void))(v5 + 52);
  if ( !v7 )
  {
    if ( a2 < 512 )
    {
      v11 = 0;
      v12 = 0;
      sub_D0048(4, 129, 120, (int)"crypto/rsa/rsa_gen.c", 78);
      goto LABEL_11;
    }
    if ( a3 <= 1 || a3 > sub_F8B44(a2) )
    {
      v11 = 0;
      v12 = 0;
      sub_D0048(4, 129, 165, (int)"crypto/rsa/rsa_gen.c", 84);
LABEL_11:
      sub_130C74(v11);
      sub_130B5C(v11);
      return v12;
    }
    v13 = (void **)sub_130B08();
    v11 = v13;
    if ( !v13 )
      goto LABEL_49;
    sub_130BC0((int)v13);
    v84 = sub_130CCC((int ***)v11, v14);
    v77 = sub_130CCC((int ***)v11, v15);
    v82 = (int *)sub_130CCC((int ***)v11, v16);
    if ( !v82 )
      goto LABEL_49;
    v17 = sub_189308(a2, a3);
    sub_18959C(a2, a3);
    v19 = v17 + 1;
    if ( v18 > 0 )
      v20 = v17 + 1;
    else
      v20 = v17;
    if ( v18 > 1 )
      v21 = v17 + 1;
    else
      v21 = v17;
    v87[0] = v20;
    v87[1] = v21;
    if ( a3 > 2 )
    {
      v22 = v18 > 2 ? v17 + 1 : v17;
      v87[2] = v22;
      if ( a3 != 3 )
      {
        v23 = v18 > 3 ? v17 + 1 : v17;
        v87[3] = v23;
        if ( a3 != 4 )
        {
          if ( v18 <= 4 )
            v19 = v17;
          v87[4] = v19;
        }
      }
    }
    if ( !a1[4] )
    {
      v44 = sub_B822C();
      a1[4] = v44;
      if ( !v44 )
        goto LABEL_49;
    }
    if ( !a1[6] )
    {
      v46 = sub_B8264();
      a1[6] = v46;
      if ( !v46 )
        goto LABEL_49;
    }
    if ( !a1[5] )
    {
      v45 = sub_B822C();
      a1[5] = v45;
      if ( !v45 )
        goto LABEL_49;
    }
    if ( !a1[7] )
    {
      v51 = sub_B8264();
      a1[7] = v51;
      if ( !v51 )
        goto LABEL_49;
    }
    if ( !a1[8] )
    {
      v50 = sub_B8264();
      a1[8] = v50;
      if ( !v50 )
        goto LABEL_49;
    }
    if ( !a1[9] && (v49 = sub_B8264(), (a1[9] = v49) == 0)
      || !a1[10] && (v48 = sub_B8264(), (a1[10] = v48) == 0)
      || !a1[11] && (v47 = sub_B8264(), (a1[11] = v47) == 0) )
    {
LABEL_49:
      v12 = 0;
      sub_D0048(4, 129, 3, (int)"crypto/rsa/rsa_gen.c", 387);
      goto LABEL_11;
    }
    if ( a3 > 2 )
    {
      a1[1] = 1;
      v24 = (int *)sub_10BF44(0, a3 - 2);
      if ( !v24 )
        goto LABEL_49;
      v25 = a1[12];
      if ( v25 )
        sub_10BFDC(v25, (void (__fastcall *)(int))rsa_multip_info_free);
      v26 = 2;
      a1[12] = v24;
      do
      {
        v27 = sub_F8A3C();
        ++v26;
        v28 = v27;
        if ( !v27 )
          goto LABEL_49;
        sub_10BD3C(v24, (int)v27);
      }
      while ( a3 != v26 );
      v85 = (int)v28;
    }
    else
    {
      v24 = 0;
      v85 = 0;
    }
    if ( !sub_B89E4(a1[5], a4) )
      goto LABEL_49;
    v29 = 0;
    v30 = 0;
    v31 = 0;
    v78 = a1;
LABEL_53:
    while ( 2 )
    {
      if ( v30 )
      {
        if ( v30 == 1 )
        {
          v32 = (int *)v78[8];
        }
        else
        {
          v85 = sub_10C01C(v24, v30 - 2);
          v32 = *(int **)v85;
        }
      }
      else
      {
        v32 = (int *)v78[7];
      }
      sub_B87B8((int)v32, 4);
      v79 = 0;
      v81 = 0;
      v83 = v87[v30];
      v33 = v83 + v31;
      v34 = v83;
      v86 = v33;
      v80 = v33 - 4;
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            if ( !sub_1351B4(v32, v34, 0, 0, 0, a5) )
              goto LABEL_49;
            if ( v30 <= 0 )
              break;
            v35 = 0;
            while ( 1 )
            {
              if ( v35 )
                v36 = v35 == 1 ? (int *)v78[8] : *(int **)sub_10C01C(v24, v35 - 2);
              else
                v36 = (int *)v78[7];
              ++v35;
              if ( !sub_B8354(v32, v36) )
                break;
              if ( v35 == v30 )
                goto LABEL_66;
            }
          }
LABEL_66:
          v37 = (int *)sub_B81FC();
          if ( !BN_sub(v82, v32, v37) )
            goto LABEL_49;
          sub_D1260();
          sub_B87B8((int)v82, 4);
          if ( sub_1330EC((int)v77, (int)v82, (int *)v78[5], (int ***)v11) )
            break;
          v42 = sub_D065C();
          if ( HIBYTE(v42) == 3 && (v42 & 0xFFF) == 0x6C )
          {
            sub_D128C();
            v43 = v29++;
            if ( sub_134EE0(a5, 2, v43) )
              continue;
          }
          goto LABEL_49;
        }
        if ( v30 == 1 )
        {
          if ( !sub_BA0CC(v77, (int **)v78[7], (int **)v78[8], (int)v11) )
            goto LABEL_49;
        }
        else
        {
          if ( !v30 )
          {
            if ( !sub_134EE0(a5, 3, 0) )
              goto LABEL_49;
            v31 = v86;
            v30 = 1;
            goto LABEL_53;
          }
          if ( !sub_BA0CC(v77, (int **)v78[4], (int **)v32, (int)v11) )
            goto LABEL_49;
        }
        if ( !sub_BA7EC(v82, v77, v80) )
          goto LABEL_49;
        v38 = sub_B82E0(v82);
        if ( v38 - 9 <= 6 )
          break;
        v39 = v29++;
        if ( !sub_134EE0(a5, 2, v39) )
          goto LABEL_49;
        if ( a3 <= 4 )
        {
          v41 = v79;
          if ( v79 == 4 )
          {
            v30 = 0;
            v31 = 0;
            goto LABEL_53;
          }
        }
        else
        {
          if ( v38 > 8 )
            v40 = v81 - 1;
          else
            v40 = v81 + 1;
          v81 = v40;
          v34 = v40 + v83;
          v41 = v79;
        }
        v79 = v41 + 1;
      }
      if ( v30 > 1 && !sub_B89E4(*(_DWORD *)(v85 + 12), v78[4])
        || !sub_B89E4(v78[4], (int)v77)
        || !sub_134EE0(a5, 3, v30) )
      {
        goto LABEL_49;
      }
      if ( a3 > ++v30 )
      {
        v31 = v86;
        continue;
      }
      break;
    }
    v52 = sub_B8354((int *)v78[7], (int *)v78[8]);
    if ( v52 >= 0 )
    {
      v54 = (int *)v78[7];
    }
    else
    {
      v54 = (int *)v78[8];
      v53 = v78[7];
    }
    if ( v52 < 0 )
    {
      v78[7] = v54;
      v78[8] = v53;
    }
    v55 = (int *)sub_B81FC();
    if ( !BN_sub((int *)v77, v54, v55) )
      goto LABEL_49;
    v56 = (int *)v78[8];
    v57 = (int *)sub_B81FC();
    if ( !BN_sub(v82, v56, v57) || !sub_BA0CC(v84, v77, (int **)v82, (int)v11) )
      goto LABEL_49;
    v58 = 2;
    while ( 1 )
    {
      v59 = v58 - 2;
      v60 = a3 <= v58++;
      if ( v60 )
        break;
      v61 = sub_10C01C(v24, v59);
      v62 = *(int **)(v61 + 4);
      v63 = v61;
      v64 = *(int **)v61;
      v65 = (int *)sub_B81FC();
      if ( !BN_sub(v62, v64, v65) || !sub_BA0CC(v84, v84, *(int ***)(v63 + 4), (int)v11) )
        goto LABEL_49;
    }
    v66 = (int *)sub_B822C();
    v67 = v66;
    if ( !v66 )
      goto LABEL_49;
    sub_B8740(v66, (int *)v84, 4);
    if ( sub_1330EC(v78[6], v78[5], v67, (int ***)v11) )
    {
      sub_B895C((int)v67);
      v68 = (int *)sub_B822C();
      v67 = v68;
      if ( !v68 )
        goto LABEL_49;
      sub_B8740(v68, (int *)v78[6], 4);
      if ( sub_131220(0, (_DWORD *)v78[9], v67, v77, (int ***)v11) )
      {
        if ( sub_131220(0, (_DWORD *)v78[10], v67, v82, (int ***)v11) )
        {
          v69 = 2;
          while ( 1 )
          {
            v70 = v69 - 2;
            v60 = a3 <= v69++;
            if ( v60 )
              break;
            v71 = sub_10C01C(v24, v70);
            if ( !sub_131220(0, *(_DWORD **)(v71 + 4), v67, *(_DWORD **)(v71 + 4), (int ***)v11) )
              goto LABEL_137;
          }
          sub_B895C((int)v67);
          v72 = (int *)sub_B822C();
          v67 = v72;
          if ( !v72 )
            goto LABEL_49;
          sub_B8740(v72, (int *)v78[7], 4);
          if ( sub_1330EC(v78[11], v78[8], v67, (int ***)v11) )
          {
            v73 = 2;
            while ( 1 )
            {
              v74 = v73 - 2;
              v60 = a3 <= v73++;
              if ( v60 )
                break;
              v75 = sub_10C01C(v24, v74);
              sub_B8740(v67, *(int **)v75, 4);
              if ( !sub_1330EC(*(_DWORD *)(v75 + 8), *(_DWORD *)(v75 + 12), v67, (int ***)v11) )
                goto LABEL_137;
            }
            v12 = 1;
            sub_B895C((int)v67);
            goto LABEL_11;
          }
        }
      }
    }
LABEL_137:
    sub_B895C((int)v67);
    goto LABEL_49;
  }
  if ( a3 == 2 )
    return v7();
  else
    return 0;
}
