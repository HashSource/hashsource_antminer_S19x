int __fastcall sub_233BB0(int result, char *a2, int a3)
{
  int v3; // r3
  _DWORD *v4; // r5
  char *v5; // r6
  unsigned int v6; // r3
  unsigned int v7; // r2
  unsigned int v8; // r1
  char *v9; // r12
  bool v10; // cf
  int v11; // r0
  int v12; // r1
  int v13; // r2
  int v14; // r3
  int *v15; // r4
  _DWORD *v16; // r8
  char *v17; // r6
  int v18; // r0
  int v19; // r1
  int v20; // r2
  int v21; // r3
  int *v22; // r4
  int v23; // r0
  int v24; // r1
  int v25; // r2
  int v26; // r3
  int *v27; // r12
  _DWORD *v28; // r8
  int v29; // r0
  int v30; // r1
  int v31; // r2
  int v32; // r3
  int v33; // r1
  char *v34; // r8
  int v35; // r9
  _DWORD *v36; // r6
  unsigned int v37; // r1
  unsigned int v38; // r2
  char *v39; // r4
  char *v40; // r3
  unsigned int v41; // t1
  _DWORD *v42; // r10
  int v43; // r1
  int v44; // r2
  int v45; // r3
  _DWORD *v46; // r6
  int v47; // r1
  int v48; // r2
  int v49; // r3
  int v50; // r1
  int v51; // r4
  int v52; // r7
  int *v53; // r8
  int v54; // r0
  int v55; // r1
  int v56; // r2
  int v57; // r3
  _DWORD *v58; // lr
  char *v60; // r7
  int v61; // r0
  int v62; // r1
  int v63; // r2
  int v64; // r3
  char *v65; // r12
  int v66; // r0
  int v67; // r1
  int v68; // r2
  int v69; // r3
  int v70; // r1
  int v71; // r2
  int v72; // r3
  int v73; // r1
  int v74; // r2
  int v75; // r3
  int v76; // r1
  int v77; // [sp+24h] [bp-40h]
  char *v78; // [sp+28h] [bp-3Ch]
  char *v79; // [sp+28h] [bp-3Ch]
  int v80; // [sp+2Ch] [bp-38h]
  int v81; // [sp+34h] [bp-30h]
  int v82; // [sp+38h] [bp-2Ch]
  int v83; // [sp+38h] [bp-2Ch]
  int v84; // [sp+38h] [bp-2Ch]
  int v85; // [sp+3Ch] [bp-28h]
  int v86; // [sp+3Ch] [bp-28h]
  int v87; // [sp+3Ch] [bp-28h]
  int v88; // [sp+40h] [bp-24h]
  int v89; // [sp+40h] [bp-24h]
  int v90; // [sp+40h] [bp-24h]
  int v91; // [sp+44h] [bp-20h]
  int v92; // [sp+44h] [bp-20h]
  int v93; // [sp+44h] [bp-20h]
  int v94; // [sp+48h] [bp-1Ch]
  int v95; // [sp+48h] [bp-1Ch]
  int v96; // [sp+4Ch] [bp-18h]
  int v97; // [sp+4Ch] [bp-18h]
  int v98; // [sp+4Ch] [bp-18h]
  int v99; // [sp+50h] [bp-14h]
  int v100; // [sp+50h] [bp-14h]
  int v101; // [sp+50h] [bp-14h]
  int v102; // [sp+54h] [bp-10h]
  int v103; // [sp+54h] [bp-10h]
  int v104; // [sp+54h] [bp-10h]
  int v105; // [sp+58h] [bp-Ch]
  int v106; // [sp+58h] [bp-Ch]
  int v107; // [sp+58h] [bp-Ch]
  int v108; // [sp+5Ch] [bp-8h]
  int v109; // [sp+5Ch] [bp-8h]
  int v110; // [sp+5Ch] [bp-8h]

  v3 = (int)&a2[-result];
  v78 = a2;
  v80 = a3;
  if ( (int)&a2[-result] > 640 )
  {
    v4 = (_DWORD *)result;
    if ( !a3 )
    {
      v39 = a2;
      goto LABEL_19;
    }
    v5 = a2;
    v81 = result + 80;
    while ( 1 )
    {
      v6 = v4[10];
      --v80;
      v7 = *((_DWORD *)v78 - 10);
      v8 = v4[10 * (-858993459 * ((v5 - (char *)v4) >> 3) / 2)];
      v9 = (char *)&v4[10 * (-858993459 * ((v5 - (char *)v4) >> 3) / 2)];
      if ( v6 >= v8 )
      {
        if ( v6 < v7 )
        {
          v11 = *v4;
          v12 = v4[1];
          v13 = v4[2];
          v14 = v4[3];
          v15 = v4 + 4;
LABEL_30:
          v9 = (char *)(v4 + 10);
          v16 = v4;
          v17 = (char *)(v4 + 10);
          goto LABEL_8;
        }
        v10 = v8 >= v7;
        v11 = *v4;
        v12 = v4[1];
        v13 = v4[2];
        v14 = v4[3];
        v15 = v4 + 4;
        if ( v10 )
          goto LABEL_28;
      }
      else
      {
        if ( v8 < v7 )
        {
          v11 = *v4;
          v12 = v4[1];
          v13 = v4[2];
          v14 = v4[3];
          v15 = v4 + 4;
LABEL_28:
          v16 = v4;
          v17 = (char *)&v4[10 * (-858993459 * ((v5 - (char *)v4) >> 3) / 2)];
          goto LABEL_8;
        }
        v10 = v6 >= v7;
        v11 = *v4;
        v12 = v4[1];
        v13 = v4[2];
        v14 = v4[3];
        v15 = v4 + 4;
        if ( v10 )
          goto LABEL_30;
      }
      v16 = v4;
      v9 = v78 - 40;
      v17 = v78 - 40;
LABEL_8:
      v82 = v11;
      v85 = v12;
      v88 = v13;
      v91 = v14;
      v18 = *v15;
      v19 = v15[1];
      v20 = v15[2];
      v21 = v15[3];
      v22 = v15 + 4;
      v94 = v18;
      v96 = v19;
      v99 = v20;
      v102 = v21;
      v105 = *v22;
      v108 = v22[1];
      v23 = *(_DWORD *)v9;
      v24 = *((_DWORD *)v9 + 1);
      v25 = *((_DWORD *)v9 + 2);
      v26 = *((_DWORD *)v9 + 3);
      v27 = (int *)(v9 + 16);
      *v16 = v23;
      v16[1] = v24;
      v16[2] = v25;
      v16[3] = v26;
      v28 = v16 + 4;
      v29 = *v27;
      v30 = v27[1];
      v31 = v27[2];
      v32 = v27[3];
      v27 += 4;
      *v28 = v29;
      v28[1] = v30;
      v28[2] = v31;
      v28[3] = v32;
      v33 = v27[1];
      v34 = v78;
      *v22 = *v27;
      v22[1] = v33;
      v35 = v81;
      *(_DWORD *)v17 = v82;
      *((_DWORD *)v17 + 1) = v85;
      *((_DWORD *)v17 + 2) = v88;
      *((_DWORD *)v17 + 3) = v91;
      v36 = v17 + 16;
      *v36 = v94;
      v36[1] = v96;
      v36[2] = v99;
      v36[3] = v102;
      *v27 = v105;
      v27[1] = v108;
      v37 = *v4;
      v38 = *((_DWORD *)v78 - 10);
      while ( 1 )
      {
        v5 = (char *)(v35 - 40);
        v39 = (char *)(v35 - 40);
        if ( *(_DWORD *)(v35 - 40) < v37 )
          goto LABEL_16;
        if ( v38 > v37 )
        {
          v40 = v34 - 80;
          do
          {
            v34 = v40;
            v41 = *(_DWORD *)v40;
            v40 -= 40;
          }
          while ( v41 > v37 );
        }
        else
        {
          v34 -= 40;
        }
        if ( v5 >= v34 )
          break;
        v83 = *(_DWORD *)v5;
        v86 = *(_DWORD *)(v35 - 36);
        v89 = *(_DWORD *)(v35 - 32);
        v92 = *(_DWORD *)(v35 - 28);
        v42 = (_DWORD *)(v35 - 8);
        v95 = *(_DWORD *)(v35 - 24);
        v97 = *(_DWORD *)(v35 - 20);
        v100 = *(_DWORD *)(v35 - 16);
        v103 = *(_DWORD *)(v35 - 12);
        v106 = *(_DWORD *)(v35 - 8);
        v109 = *(_DWORD *)(v35 - 4);
        v43 = *((_DWORD *)v34 + 1);
        v44 = *((_DWORD *)v34 + 2);
        v45 = *((_DWORD *)v34 + 3);
        *(_DWORD *)v5 = *(_DWORD *)v34;
        *(_DWORD *)(v35 - 36) = v43;
        *(_DWORD *)(v35 - 32) = v44;
        *(_DWORD *)(v35 - 28) = v45;
        v46 = (_DWORD *)(v35 - 24);
        v47 = *((_DWORD *)v34 + 5);
        v48 = *((_DWORD *)v34 + 6);
        v49 = *((_DWORD *)v34 + 7);
        *v46 = *((_DWORD *)v34 + 4);
        v46[1] = v47;
        v46[2] = v48;
        v46[3] = v49;
        v50 = *((_DWORD *)v34 + 9);
        *v42 = *((_DWORD *)v34 + 8);
        v42[1] = v50;
        *(_DWORD *)v34 = v83;
        *((_DWORD *)v34 + 1) = v86;
        *((_DWORD *)v34 + 2) = v89;
        *((_DWORD *)v34 + 3) = v92;
        *((_DWORD *)v34 + 4) = v95;
        *((_DWORD *)v34 + 5) = v97;
        *((_DWORD *)v34 + 6) = v100;
        *((_DWORD *)v34 + 7) = v103;
        *((_DWORD *)v34 + 8) = v106;
        *((_DWORD *)v34 + 9) = v109;
        v37 = *v4;
        v38 = *((_DWORD *)v34 - 10);
LABEL_16:
        v35 += 40;
      }
      result = sub_233BB0(v35 - 40, v78, v80);
      v3 = v5 - (char *)v4;
      if ( v5 - (char *)v4 <= 640 )
        return result;
      v78 = (char *)(v35 - 40);
      if ( !v80 )
      {
LABEL_19:
        v79 = v39;
        v51 = -858993459 * (v3 >> 3);
        v52 = (v51 - 2) >> 1;
        v53 = &v4[10 * v52];
        do
        {
          v54 = *v53;
          v55 = v53[1];
          v56 = v53[2];
          v57 = v53[3];
          v58 = v53 + 4;
          v53 -= 10;
          LOBYTE(v77) = 0;
          sub_234608(v4, v52, v51, v54, v55, v56, v57, *v58, v58[1], v58[2], v58[3], v58[4], v58[5], v77);
        }
        while ( v52-- != 0 );
        v60 = v79;
        do
        {
          v61 = *((_DWORD *)v60 - 10);
          v62 = *((_DWORD *)v60 - 9);
          v63 = *((_DWORD *)v60 - 8);
          v64 = *((_DWORD *)v60 - 7);
          v65 = v60 - 24;
          v60 -= 40;
          v84 = v61;
          v87 = v62;
          v90 = v63;
          v93 = v64;
          v66 = *(_DWORD *)v65;
          v67 = *((_DWORD *)v65 + 1);
          v68 = *((_DWORD *)v65 + 2);
          v69 = *((_DWORD *)v65 + 3);
          v65 += 16;
          v98 = v67;
          v101 = v68;
          v104 = v69;
          v107 = *(_DWORD *)v65;
          v110 = *((_DWORD *)v65 + 1);
          v70 = v4[1];
          v71 = v4[2];
          v72 = v4[3];
          *(_DWORD *)v60 = *v4;
          *((_DWORD *)v60 + 1) = v70;
          *((_DWORD *)v60 + 2) = v71;
          *((_DWORD *)v60 + 3) = v72;
          v73 = v4[5];
          v74 = v4[6];
          v75 = v4[7];
          *((_DWORD *)v60 + 4) = v4[4];
          *((_DWORD *)v60 + 5) = v73;
          *((_DWORD *)v60 + 6) = v74;
          *((_DWORD *)v60 + 7) = v75;
          v76 = v4[9];
          *(_DWORD *)v65 = v4[8];
          *((_DWORD *)v65 + 1) = v76;
          LOBYTE(v77) = 0;
          result = sub_234608(
                     v4,
                     0,
                     -858993459 * ((v60 - (char *)v4) >> 3),
                     v84,
                     v87,
                     v90,
                     v93,
                     v66,
                     v98,
                     v101,
                     v104,
                     v107,
                     v110,
                     v77);
        }
        while ( v60 - (char *)v4 > 40 );
        return result;
      }
    }
  }
  return result;
}
