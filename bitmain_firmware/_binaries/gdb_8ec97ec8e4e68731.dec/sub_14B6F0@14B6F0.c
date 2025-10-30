int __fastcall sub_14B6F0(int **a1, int a2)
{
  int *v2; // r2
  int v4; // r3
  _DWORD *v5; // r12
  int v6; // r1
  int v7; // r2
  int v8; // r5
  int v9; // r1
  int v10; // r7
  int v11; // r2
  char v12; // r3
  int v13; // r5
  bool v14; // cf
  int v15; // r2
  char v16; // r3
  unsigned __int8 v17; // r3
  _DWORD *v18; // r0
  _DWORD *v19; // r3
  _DWORD *v20; // r8
  char *v21; // r2
  int v22; // r12
  int *v23; // r0
  int v24; // r1
  int v25; // r2
  unsigned __int8 *v26; // r6
  int v27; // r4
  unsigned __int8 v28; // r0
  int v29; // t1
  int v30; // r9
  const char ***v31; // r6
  const char **v32; // r5
  int v33; // r7
  const char *v34; // r8
  _DWORD *v35; // r6
  int v36; // r3
  int v37; // r5
  int v38; // r2
  bool v39; // cc
  int v40; // r5
  int v41; // r7
  int v42; // r2
  char v43; // r3
  int v44; // r2
  char v45; // r3
  unsigned __int8 v46; // r3
  _DWORD *v47; // r0
  _DWORD *v48; // r3
  _DWORD *v49; // r8
  char *v50; // r2
  int v51; // r12
  int *v52; // r0
  int v53; // r1
  int v54; // r2
  unsigned __int8 *v55; // r6
  int v56; // r4
  unsigned __int8 v57; // r0
  int v58; // t1
  int v59; // r9
  const char ***v60; // r6
  const char **v61; // r5
  const char *v62; // r8
  _DWORD *v63; // r6
  int *v64; // r7
  unsigned int v65; // r1
  int v66; // r5
  int v67; // r6
  int v68; // r2
  int v69; // r0
  int v70; // r8
  int v71; // r9
  unsigned int v72; // r3
  unsigned int v73; // lr
  unsigned int v75; // r3
  unsigned int v76; // r3
  _DWORD *v77; // [sp+8h] [bp-5Ch]
  int v78; // [sp+Ch] [bp-58h]
  int v79; // [sp+Ch] [bp-58h]
  int *v80; // [sp+10h] [bp-54h]
  char *s1; // [sp+14h] [bp-50h]
  char *s1a; // [sp+14h] [bp-50h]
  int v83; // [sp+18h] [bp-4Ch]
  int v84; // [sp+1Ch] [bp-48h]
  int v85; // [sp+1Ch] [bp-48h]
  int v86; // [sp+20h] [bp-44h]
  _DWORD **v87; // [sp+20h] [bp-44h]
  _DWORD **v88; // [sp+20h] [bp-44h]
  int v89; // [sp+24h] [bp-40h]
  int v90; // [sp+24h] [bp-40h]
  int v91; // [sp+28h] [bp-3Ch]
  int v92; // [sp+28h] [bp-3Ch]
  int *v94; // [sp+30h] [bp-34h]
  int v95; // [sp+38h] [bp-2Ch] BYREF
  int v96; // [sp+3Ch] [bp-28h] BYREF
  _BYTE v97[8]; // [sp+40h] [bp-24h] BYREF
  int v98; // [sp+48h] [bp-1Ch] BYREF
  int v99; // [sp+4Ch] [bp-18h] BYREF
  _DWORD *v100; // [sp+50h] [bp-14h]
  int v101; // [sp+54h] [bp-10h]
  int *v102; // [sp+58h] [bp-Ch]
  int v103; // [sp+5Ch] [bp-8h]

  v2 = *a1;
  v4 = *(_DWORD *)(a2 + 4);
  v94 = v2;
  v5 = *(_DWORD **)(a2 + 16);
  v80 = *(int **)a2;
  v6 = v2[6];
  v7 = *(_DWORD *)(v4 + 108);
  v8 = *(_DWORD *)(v6 + 40);
  v91 = v6;
  v9 = *(_DWORD *)(v6 + 36);
  v77 = v5;
  v83 = *(_DWORD *)(a2 + 20);
  v10 = v7 + 4 * v9;
  if ( v8 > 0 )
  {
    v11 = *(_DWORD *)(v7 + 4 * v9);
    v12 = *(_BYTE *)(v11 + 20);
    v96 = v11;
    if ( (v12 & 0x1F) != 0xE )
    {
      v13 = v8 - 1;
      v78 = v10;
      while ( 1 )
      {
        sub_13CA20((int)&v98, v77, &v96);
        if ( !(_BYTE)v99 )
          break;
        v17 = *(_BYTE *)(v96 + 24);
        if ( (v17 & 7) == 1 )
        {
          v75 = (unsigned __int8)((v17 >> 3) - 1);
          if ( v75 > 0xD )
          {
            v89 = 52;
          }
          else
          {
            v89 = *(_DWORD *)&aWhetherToAlway[4 * v75 - 2728];
            if ( !v89 )
              break;
          }
        }
        else
        {
          if ( (v17 & 7) != 2 )
            break;
          v89 = 19;
        }
        s1 = (char *)sub_21B7DC(v96);
        v98 = 0;
        v99 = 0;
        v100 = 0;
        v101 = (int)&v99;
        v102 = &v99;
        v103 = 0;
        v18 = sub_9836C(0x24u);
        v19 = v100;
        v20 = v18;
        *v18 = 0;
        v21 = (char *)(v18 + 3);
        v18[1] = s1;
        if ( v19 )
        {
          v22 = v101;
          v23 = v102;
          v20[3] = v99;
          v24 = v103;
          v20[4] = v19;
          v20[5] = v22;
          v20[6] = v23;
          v19[1] = v21;
          v100 = 0;
          v101 = (int)&v99;
          v102 = &v99;
          v20[7] = v24;
          v103 = 0;
        }
        else
        {
          v18[3] = 0;
          v18[4] = 0;
          v18[5] = v21;
          *((_QWORD *)v18 + 3) = (unsigned int)v21;
        }
        v25 = (unsigned __int8)*s1;
        v26 = (unsigned __int8 *)(s1 + 1);
        if ( *s1 )
        {
          v27 = 0;
          do
          {
            v28 = tolower(v25);
            v29 = *v26++;
            v25 = v29;
            v27 = v28 + 67 * v27 - 113;
          }
          while ( v29 );
        }
        else
        {
          v27 = (unsigned __int8)*s1;
        }
        v86 = v80[1];
        v30 = (unsigned __int64)sub_347674(v27, v86) >> 32;
        v31 = *(const char ****)(*v80 + 4 * v30);
        if ( v31 )
        {
          v84 = v13;
          v32 = *v31;
          v33 = v86;
          v87 = (_DWORD **)v20;
          v34 = (*v31)[8];
          while ( (const char *)v27 != v34 || strcmp(s1, v32[1]) )
          {
            if ( *v32 )
            {
              v34 = (const char *)*((_DWORD *)*v32 + 8);
              v31 = (const char ***)v32;
              v32 = (const char **)*v32;
              if ( v30 == (unsigned __int64)sub_347674(v34, v33) >> 32 )
                continue;
            }
            v13 = v84;
            v20 = v87;
            goto LABEL_59;
          }
          v35 = *v31;
          v13 = v84;
          v20 = v87;
          if ( !v35 )
            goto LABEL_59;
          sub_149088((int)(v87 + 2), v87[4]);
          sub_339E64(v87);
        }
        else
        {
LABEL_59:
          v35 = sub_14B5EC(v80, v30, v27, v20);
        }
        sub_149088((int)&v98, v100);
        v101 = 1;
        v98 = v89;
        v99 = v83;
        LOBYTE(v100) = 0;
        sub_149250((int)v97, v35 + 2, &v98);
        v14 = v13-- != 0;
        if ( !v14 )
        {
LABEL_26:
          v77 = *(_DWORD **)(a2 + 16);
          v4 = *(_DWORD *)(a2 + 4);
          v83 = *(_DWORD *)(a2 + 20);
          goto LABEL_27;
        }
LABEL_6:
        v15 = *(_DWORD *)(v78 + 4);
        v78 += 4;
        v16 = *(_BYTE *)(v15 + 20);
        v96 = v15;
        if ( (v16 & 0x1F) == 0xE )
          goto LABEL_74;
      }
      v14 = v13-- != 0;
      if ( !v14 )
        goto LABEL_26;
      goto LABEL_6;
    }
LABEL_74:
    sub_946E0("Ada is not currently supported by the index");
  }
LABEL_27:
  v36 = *(_DWORD *)(v4 + 120);
  v37 = *(_DWORD *)(v91 + 48);
  v38 = *(_DWORD *)(v91 + 44);
  v39 = v37 <= 0;
  v40 = v37 - 1;
  v41 = v36 + 4 * v38;
  if ( !v39 )
  {
    v42 = *(_DWORD *)(v36 + 4 * v38);
    v43 = *(_BYTE *)(v42 + 20);
    v95 = v42;
    if ( (v43 & 0x1F) == 0xE )
      goto LABEL_74;
    v79 = v41;
    while ( 1 )
    {
      sub_13CA20((int)&v98, v77, &v95);
      if ( !(_BYTE)v99 )
        break;
      v46 = *(_BYTE *)(v95 + 24);
      if ( (v46 & 7) == 1 )
      {
        v76 = (unsigned __int8)((v46 >> 3) - 1);
        if ( v76 > 0xD )
        {
          v90 = 52;
        }
        else
        {
          v90 = *(_DWORD *)&aWhetherToAlway[4 * v76 - 2728];
          if ( !v90 )
            break;
        }
      }
      else
      {
        if ( (v46 & 7) != 2 )
          break;
        v90 = 19;
      }
      s1a = (char *)sub_21B7DC(v95);
      v98 = 0;
      v99 = 0;
      v100 = 0;
      v101 = (int)&v99;
      v102 = &v99;
      v103 = 0;
      v47 = sub_9836C(0x24u);
      v48 = v100;
      v49 = v47;
      *v47 = 0;
      v50 = (char *)(v47 + 3);
      v47[1] = s1a;
      if ( v48 )
      {
        v51 = v101;
        v52 = v102;
        v49[3] = v99;
        v53 = v103;
        v49[4] = v48;
        v49[5] = v51;
        v49[6] = v52;
        v48[1] = v50;
        v100 = 0;
        v101 = (int)&v99;
        v102 = &v99;
        v49[7] = v53;
        v103 = 0;
      }
      else
      {
        v47[3] = 0;
        v47[4] = 0;
        v47[5] = v50;
        *((_QWORD *)v47 + 3) = (unsigned int)v50;
      }
      v54 = (unsigned __int8)*s1a;
      v55 = (unsigned __int8 *)(s1a + 1);
      if ( *s1a )
      {
        v56 = 0;
        do
        {
          v57 = tolower(v54);
          v58 = *v55++;
          v54 = v58;
          v56 = v57 + 67 * v56 - 113;
        }
        while ( v58 );
      }
      else
      {
        v56 = (unsigned __int8)*s1a;
      }
      v92 = v80[1];
      v59 = (unsigned __int64)sub_347674(v56, v92) >> 32;
      v60 = *(const char ****)(*v80 + 4 * v59);
      if ( v60 )
      {
        v85 = v40;
        v88 = (_DWORD **)v49;
        v61 = *v60;
        v62 = (*v60)[8];
        while ( (const char *)v56 != v62 || strcmp(s1a, v61[1]) )
        {
          if ( *v61 )
          {
            v62 = (const char *)*((_DWORD *)*v61 + 8);
            v60 = (const char ***)v61;
            v61 = (const char **)*v61;
            if ( v59 == (unsigned __int64)sub_347674(v62, v92) >> 32 )
              continue;
          }
          v40 = v85;
          v49 = v88;
          goto LABEL_64;
        }
        v63 = *v60;
        v40 = v85;
        v49 = v88;
        if ( !v63 )
          goto LABEL_64;
        sub_149088((int)(v88 + 2), v88[4]);
        sub_339E64(v88);
      }
      else
      {
LABEL_64:
        v63 = sub_14B5EC(v80, v59, v56, v49);
      }
      sub_149088((int)&v98, v100);
      LOBYTE(v100) = 1;
      v98 = v90;
      v101 = 1;
      v99 = v83;
      sub_149250((int)v97, v63 + 2, &v98);
      v14 = v40-- != 0;
      if ( !v14 )
        goto LABEL_52;
LABEL_32:
      v44 = *(_DWORD *)(v79 + 4);
      v79 += 4;
      v45 = *(_BYTE *)(v44 + 20);
      v95 = v44;
      if ( (v45 & 0x1F) == 0xE )
        goto LABEL_74;
    }
    v14 = v40-- != 0;
    if ( !v14 )
      goto LABEL_52;
    goto LABEL_32;
  }
LABEL_52:
  v64 = *(int **)(a2 + 12);
  if ( (int *)v80[38] == v80 + 26 )
  {
    v65 = 8;
    v66 = -8;
    v67 = 8;
  }
  else
  {
    v65 = 4;
    v66 = -4;
    v67 = 4;
  }
  v68 = *v64;
  v69 = v64[1];
  v70 = v80[13];
  v71 = *v94;
  v72 = v69 - *v64;
  v73 = v72 + v65;
  if ( v72 < v72 + v65 )
  {
    sub_AF660(*(char ***)(a2 + 12), v65);
    v69 = v64[1];
  }
  else if ( __CFADD__(v72, v65) )
  {
    v69 = v68 + v73;
    v64[1] = v68 + v73;
  }
  sub_15C34C(v69 + v66, v67, v70, v72, v71, 0);
  ++*(_DWORD *)(a2 + 20);
  return 1;
}
