int __fastcall sub_4FCD4(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13)
{
  int v14; // r10
  int v16; // r5
  int v17; // r6
  _DWORD *v18; // r4
  int v19; // r0
  _DWORD *v20; // r12
  int v21; // r1
  int v22; // r2
  int v23; // r3
  _DWORD *v24; // r12
  int v25; // r1
  int v26; // r2
  int v27; // r3
  int v28; // r1
  int v29; // r5
  int v30; // r1
  int v31; // r2
  int v32; // r3
  bool v33; // cc
  _DWORD *v34; // r4
  int v35; // r1
  int v36; // r2
  int v37; // r3
  int v38; // r1
  int v39; // r4
  _DWORD *v40; // r7
  int v41; // r1
  int v42; // r2
  int v43; // r3
  _DWORD *v44; // r4
  int v45; // r1
  int v46; // r2
  int v47; // r3
  int result; // r0
  int v49; // r1
  _DWORD *v50; // lr
  int v51; // r1
  int v52; // r2
  int v53; // r3
  int v54; // r1
  int v55; // r2
  int v56; // r3
  int v57; // r1
  int v58; // [sp+0h] [bp-34h]
  int v60; // [sp+8h] [bp-2Ch]
  int v61; // [sp+Ch] [bp-28h] BYREF
  int v62; // [sp+10h] [bp-24h]
  int v63; // [sp+14h] [bp-20h]
  int v64; // [sp+18h] [bp-1Ch] BYREF
  int v65; // [sp+1Ch] [bp-18h]
  int v66; // [sp+20h] [bp-14h]
  int v67; // [sp+24h] [bp-10h]
  int v68; // [sp+28h] [bp-Ch]
  int v69; // [sp+2Ch] [bp-8h]
  int varg_r3; // [sp+5Ch] [bp+28h]

  v14 = (a3 - 1) / 2;
  v58 = a3 & 1;
  if ( a2 >= v14 )
  {
    v18 = (_DWORD *)(a1 + 40 * a2);
    if ( (a3 & 1) != 0 )
    {
      v60 = varg_r3;
      v61 = a5;
      v62 = a6;
      v63 = a7;
      v64 = a8;
      v65 = a9;
      v66 = a10;
      v67 = a11;
      v68 = a12;
      v69 = a13;
      goto LABEL_14;
    }
    v17 = a2;
    goto LABEL_7;
  }
  v16 = a2;
  do
  {
    v17 = 2 * (v16 + 1) - 1;
    v18 = (_DWORD *)(a1 + 40 * v17);
    v19 = sub_4FC3C((int *)(a1 + 80 * (v16 + 1) + 4), (_DWORD *)(a1 + 80 * (v16 + 1) + 16), v18 + 1, v18 + 4);
    v20 = (_DWORD *)(a1 + 40 * v16);
    if ( v19 >= 0 )
    {
      v18 = (_DWORD *)(a1 + 80 * (v16 + 1));
      v17 = 2 * (v16 + 1);
    }
    v21 = v18[1];
    v22 = v18[2];
    v23 = v18[3];
    v16 = v17;
    *v20 = *v18;
    v20[1] = v21;
    v20[2] = v22;
    v20[3] = v23;
    v24 = v20 + 4;
    v25 = v18[5];
    v26 = v18[6];
    v27 = v18[7];
    *v24 = v18[4];
    v24[1] = v25;
    v24[2] = v26;
    v24[3] = v27;
    v24 += 4;
    v28 = v18[9];
    *v24 = v18[8];
    v24[1] = v28;
  }
  while ( v17 < v14 );
  if ( !v58 )
  {
LABEL_7:
    if ( v17 == (a3 - 2) / 2 )
    {
      v50 = v18;
      v17 = 2 * v17 + 1;
      v18 = (_DWORD *)(a1 + 40 * v17);
      v51 = v18[1];
      v52 = v18[2];
      v53 = v18[3];
      *v50 = *v18;
      v50[1] = v51;
      v50[2] = v52;
      v50[3] = v53;
      v50 += 4;
      v54 = v18[5];
      v55 = v18[6];
      v56 = v18[7];
      *v50 = v18[4];
      v50[1] = v54;
      v50[2] = v55;
      v50[3] = v56;
      v50 += 4;
      v57 = v18[9];
      *v50 = v18[8];
      v50[1] = v57;
    }
  }
  v60 = varg_r3;
  v61 = a5;
  v62 = a6;
  v63 = a7;
  v29 = (v17 - 1) / 2;
  v64 = a8;
  v65 = a9;
  v66 = a10;
  v67 = a11;
  v68 = a12;
  v69 = a13;
  if ( v17 > a2 )
  {
    while ( 1 )
    {
      v39 = 5 * v17;
      v40 = (_DWORD *)(a1 + 40 * v29);
      v17 = v29;
      v18 = (_DWORD *)(a1 + 8 * v39);
      if ( sub_4FC3C(v40 + 1, v40 + 4, &v61, &v64) >= 0 )
        break;
      v30 = v40[1];
      v31 = v40[2];
      v32 = v40[3];
      v33 = a2 < v29;
      v29 = (v29 - 1) / 2;
      *v18 = *v40;
      v18[1] = v30;
      v18[2] = v31;
      v18[3] = v32;
      v34 = v18 + 4;
      v35 = v40[5];
      v36 = v40[6];
      v37 = v40[7];
      *v34 = v40[4];
      v34[1] = v35;
      v34[2] = v36;
      v34[3] = v37;
      v34 += 4;
      v38 = v40[9];
      *v34 = v40[8];
      v34[1] = v38;
      if ( !v33 )
      {
        v18 = v40;
        break;
      }
    }
  }
LABEL_14:
  v41 = v61;
  v42 = v62;
  v43 = v63;
  *v18 = v60;
  v18[1] = v41;
  v18[2] = v42;
  v18[3] = v43;
  v44 = v18 + 4;
  v45 = v65;
  v46 = v66;
  v47 = v67;
  *v44 = v64;
  v44[1] = v45;
  v44[2] = v46;
  v44[3] = v47;
  v44 += 4;
  result = v68;
  v49 = v69;
  *v44 = v68;
  v44[1] = v49;
  return result;
}
