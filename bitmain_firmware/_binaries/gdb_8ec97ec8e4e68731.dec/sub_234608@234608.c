int __fastcall sub_234608(
        int a1,
        int a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13)
{
  int v14; // r6
  int v18; // lr
  unsigned int *v19; // r12
  int v20; // r5
  unsigned int *v21; // r7
  unsigned int v22; // r1
  unsigned int v23; // r2
  unsigned int v24; // r3
  _DWORD *v25; // r12
  unsigned int v26; // r1
  unsigned int v27; // r2
  unsigned int v28; // r3
  unsigned int v29; // r1
  int v30; // lr
  int v31; // r9
  unsigned int *v32; // r3
  int *v33; // r4
  unsigned int v34; // r0
  unsigned int v35; // r1
  unsigned int v36; // r2
  unsigned int v37; // r3
  int *v38; // r12
  int v39; // r6
  bool v40; // cc
  int v41; // r0
  int v42; // r1
  int v43; // r2
  int v44; // r3
  int v45; // r6
  int v46; // r1
  _DWORD *v47; // r7
  int v49; // lr
  unsigned int *v50; // lr
  unsigned int v51; // r1
  unsigned int v52; // r2
  unsigned int v53; // r3
  unsigned int v54; // r1
  unsigned int v55; // r2
  unsigned int v56; // r3
  unsigned int v57; // r1
  int v58; // [sp+4h] [bp-30h]
  unsigned int v59; // [sp+Ch] [bp-28h]
  unsigned int v60; // [sp+10h] [bp-24h]
  unsigned int v61; // [sp+14h] [bp-20h]
  int v62; // [sp+18h] [bp-1Ch]
  int v63; // [sp+1Ch] [bp-18h]
  int v64; // [sp+20h] [bp-14h]
  int v65; // [sp+24h] [bp-10h]
  int v66; // [sp+28h] [bp-Ch]
  int v67; // [sp+2Ch] [bp-8h]

  v14 = (a3 - 1) / 2;
  v58 = a3 & 1;
  if ( a2 >= v14 )
  {
    if ( (a3 & 1) != 0 )
    {
      v21 = (unsigned int *)(a1 + 40 * a2);
      v59 = a5;
      v60 = a6;
      v61 = a7;
      v62 = a8;
      v63 = a9;
      v64 = a10;
      v65 = a11;
      v66 = a12;
      v67 = a13;
      goto LABEL_14;
    }
    v20 = a2;
  }
  else
  {
    v18 = a2;
    do
    {
      v19 = (unsigned int *)(a1 + 40 * v18);
      v20 = 2 * (v18 + 1) - 1;
      v21 = (unsigned int *)(a1 + 40 * v20);
      if ( *v21 <= *(_DWORD *)(a1 + 80 * (v18 + 1)) )
      {
        v21 = (unsigned int *)(a1 + 80 * (v18 + 1));
        v20 = 2 * (v18 + 1);
      }
      v22 = v21[1];
      v23 = v21[2];
      v24 = v21[3];
      v18 = v20;
      *v19 = *v21;
      v19[1] = v22;
      v19[2] = v23;
      v19[3] = v24;
      v25 = v19 + 4;
      v26 = v21[5];
      v27 = v21[6];
      v28 = v21[7];
      *v25 = v21[4];
      v25[1] = v26;
      v25[2] = v27;
      v25[3] = v28;
      v25 += 4;
      v29 = v21[9];
      *v25 = v21[8];
      v25[1] = v29;
    }
    while ( v20 < v14 );
    if ( v58 )
      goto LABEL_9;
  }
  if ( v20 == (a3 - 2) / 2 )
  {
    v49 = 5 * v20;
    v20 = 2 * v20 + 1;
    v50 = (unsigned int *)(a1 + 8 * v49);
    v21 = (unsigned int *)(a1 + 40 * v20);
    v51 = v21[1];
    v52 = v21[2];
    v53 = v21[3];
    *v50 = *v21;
    v50[1] = v51;
    v50[2] = v52;
    v50[3] = v53;
    v50 += 4;
    v54 = v21[5];
    v55 = v21[6];
    v56 = v21[7];
    *v50 = v21[4];
    v50[1] = v54;
    v50[2] = v55;
    v50[3] = v56;
    v50 += 4;
    v57 = v21[9];
    *v50 = v21[8];
    v50[1] = v57;
  }
  else
  {
    v21 = (unsigned int *)(a1 + 40 * v20);
  }
LABEL_9:
  v59 = a5;
  v60 = a6;
  v61 = a7;
  v30 = (v20 - 1) / 2;
  v62 = a8;
  v63 = a9;
  v64 = a10;
  v65 = a11;
  v66 = a12;
  v67 = a13;
  if ( v20 > a2 )
  {
    v31 = 4 * v30;
    v32 = (unsigned int *)(a1 + 40 * v30);
    if ( *v32 < a4 )
    {
      do
      {
        v33 = (int *)v32;
        v34 = *v32;
        v35 = v32[1];
        v36 = v32[2];
        v37 = v32[3];
        v33 += 4;
        v38 = (int *)(a1 + 40 * v20);
        v39 = (v30 - 1) / 2;
        *v38 = v34;
        v38[1] = v35;
        v38[2] = v36;
        v38[3] = v37;
        v38 += 4;
        v21 = (unsigned int *)(a1 + 8 * (v31 + v30));
        v31 = 4 * v39;
        v40 = a2 < v30;
        v20 = v30;
        v41 = *v33;
        v42 = v33[1];
        v43 = v33[2];
        v44 = v33[3];
        v33 += 4;
        v30 = v39;
        v45 = 5 * v39;
        *v38 = v41;
        v38[1] = v42;
        v38[2] = v43;
        v38[3] = v44;
        v38 += 4;
        v32 = (unsigned int *)(a1 + 8 * v45);
        v46 = v33[1];
        *v38 = *v33;
        v38[1] = v46;
      }
      while ( v40 && *(_DWORD *)(a1 + 8 * v45) < a4 );
    }
  }
LABEL_14:
  *v21 = a4;
  v21[1] = v59;
  v21[2] = v60;
  v21[3] = v61;
  v47 = v21 + 4;
  *v47 = v62;
  v47[1] = v63;
  v47[2] = v64;
  v47[3] = v65;
  v47 += 4;
  *v47 = v66;
  v47[1] = v67;
  return v66;
}
