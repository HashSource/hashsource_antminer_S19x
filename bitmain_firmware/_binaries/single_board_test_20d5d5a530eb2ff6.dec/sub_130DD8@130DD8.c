int __fastcall sub_130DD8(int **a1, int a2, int *a3, int a4, int ***a5)
{
  int **v6; // r1
  int **v7; // r1
  int **v8; // r1
  int **v9; // r0
  int **v10; // r4
  int v11; // r8
  int v12; // r0
  int v13; // r12
  int v14; // r11
  unsigned int v15; // r9
  int v16; // r2
  int v17; // r10
  _DWORD *v18; // r3
  unsigned int v19; // r1
  unsigned int v20; // lr
  unsigned int v21; // r7
  unsigned int v22; // r6
  unsigned int v23; // r5
  int v24; // r8
  unsigned int v25; // r0
  unsigned int v26; // r1
  unsigned int v27; // r4
  int *v28; // r0
  int v29; // r1
  int v31; // r9
  int v32; // r4
  int v33; // r5
  int *v34; // r6
  int v35; // r10
  int v36; // r3
  int v37; // r2
  int *v38; // r7
  int *v39; // r11
  int v40; // r4
  int v41; // r6
  unsigned int v42; // r5
  int v43; // r0
  unsigned int v44; // r2
  unsigned int v45; // r3
  unsigned int v46; // r0
  bool v48; // cf
  bool v49; // cc
  int v50; // r0
  int *v51; // r2
  unsigned int v52; // r0
  int v53; // r0
  int *v54; // r5
  int *v55; // r6
  _DWORD *v56; // r3
  int *v57; // r2
  int v58; // r1
  int v59; // r4
  int *v60; // r6
  int *v61; // r2
  int v62; // t1
  size_t v63; // r2
  int *v64; // r0
  int **v65; // [sp+4h] [bp-38h]
  int **v66; // [sp+8h] [bp-34h]
  unsigned int v67; // [sp+Ch] [bp-30h]
  int v68; // [sp+Ch] [bp-30h]
  int i; // [sp+10h] [bp-2Ch]
  int **v71; // [sp+14h] [bp-28h]
  unsigned int v72; // [sp+14h] [bp-28h]
  int *v73; // [sp+18h] [bp-24h]
  int v74; // [sp+18h] [bp-24h]
  int **v75; // [sp+1Ch] [bp-20h]
  int v77; // [sp+24h] [bp-18h]
  int v78; // [sp+24h] [bp-18h]
  unsigned int v80; // [sp+30h] [bp-Ch]
  int v81; // [sp+34h] [bp-8h]

  v71 = a1;
  sub_130BC0((int)a5);
  if ( !a1 )
    v71 = sub_130CCC(a5, v6);
  v66 = sub_130CCC(a5, v6);
  v75 = sub_130CCC(a5, v7);
  v9 = sub_130CCC(a5, v8);
  v10 = v9;
  v65 = v9;
  if ( !v9 || !sub_B89E4((int)v9, a4) )
    goto LABEL_15;
  v11 = (int)v10[1];
  v73 = *v10;
  v12 = sub_B8208((*v10)[v11 - 1]);
  v13 = v12 & 0x3F;
  v14 = 64 - v12;
  if ( v12 <= 0 )
    v13 = -(-v12 & 0x3F);
  v15 = -v13 | ((unsigned int)-v13 >> 8);
  if ( v11 > 0 )
  {
    if ( v11 <= 8 )
    {
      v16 = 0;
      v17 = 0;
    }
    else
    {
      v16 = 0;
      v17 = 0;
      v77 = v11;
      v67 = ((v11 - 9) & 0xFFFFFFF8) + 8;
      v18 = v73 + 19;
      do
      {
        v19 = *(v18 - 19);
        v17 += 8;
        v20 = *(v18 - 18);
        v21 = *(v18 - 17);
        v22 = *(v18 - 16);
        v23 = *(v18 - 15);
        v24 = (v19 >> v13) & v15;
        *(v18 - 19) = v16 | (v19 << v14);
        v25 = *(v18 - 13);
        v26 = *(v18 - 12);
        *(v18 - 18) = v24 | (v20 << v14);
        *(v18 - 17) = (v20 >> v13) & v15 | (v21 << v14);
        v27 = *(v18 - 14);
        *(v18 - 15) = (v23 << v14) | (v22 >> v13) & v15;
        __pld(v18);
        *(v18 - 12) = (v26 << v14) | (v25 >> v13) & v15;
        v16 = (v26 >> v13) & v15;
        *(v18 - 16) = (v21 >> v13) & v15 | (v22 << v14);
        *(v18 - 14) = (v23 >> v13) & v15 | (v27 << v14);
        v18 += 8;
        *(v18 - 21) = (v25 << v14) | (v27 >> v13) & v15;
      }
      while ( v17 != v67 );
      v11 = v77;
    }
    v28 = &v73[v17];
    do
    {
      ++v17;
      v29 = (*v28 << v14) | v16;
      v16 = ((unsigned int)*v28 >> v13) & v15;
      *v28++ = v29;
    }
    while ( v11 > v17 );
  }
  v65[3] = 0;
  if ( !sub_BA420((void **)v75, a3, v14) )
    goto LABEL_15;
  v31 = (int)v65[1];
  v32 = (int)v75[1];
  if ( v31 >= v32 )
  {
    if ( !sub_B89D8((int)v75, v31 + 1) )
    {
LABEL_15:
      sub_130C74(a5);
      return 0;
    }
    v63 = 4 * (v31 - v32 + 1);
    v64 = &(*v75)[v32];
    v32 = v31 + 1;
    memset(v64, 0, v63);
    v75[1] = (int *)(v31 + 1);
  }
  v74 = v32 - v31;
  if ( v31 == 1 )
    v11 = 0;
  v33 = v31 + 0x3FFFFFFF;
  v34 = *v75;
  v35 = (*v65)[v33];
  if ( v31 != 1 )
    v11 = (*v65)[v33 - 1];
  if ( !sub_B89D8((int)v71, v74) )
    goto LABEL_15;
  v36 = *(_DWORD *)(a4 + 12);
  v80 = a3[3];
  v37 = (int)&(*v71)[v74];
  v71[1] = (int *)v74;
  v68 = v37;
  v71[3] = (int *)(v36 ^ v80);
  if ( !sub_B89D8((int)v66, v31 + 1) )
    goto LABEL_15;
  if ( v74 > 0 )
  {
    v81 = v14;
    v38 = &v34[v32 - 1];
    v39 = &v34[v74];
    v78 = v33 * 4 + 4;
    for ( i = 0; i != v74; ++i )
    {
      if ( v35 == *v38 )
      {
        v40 = -1;
      }
      else
      {
        v41 = *(v38 - 1);
        if ( v39 == v38 )
          v42 = 0;
        else
          v42 = *(v38 - 2);
        v43 = sub_12F9FC(*v38, *(v38 - 1), v35);
        v40 = v43;
        v44 = v43 * v11;
        if ( v41 == v43 * v35 && v42 < v44 )
        {
          v40 = v43 - 1;
          v45 = v35;
          v46 = 0;
          do
          {
            v49 = v11 > v44;
            v44 -= v11;
            if ( v49 )
              --v46;
            if ( v46 < v45 )
              break;
            if ( v42 >= v44 && v46 == v45 )
              break;
            v48 = __CFADD__(v45, v35);
            v45 += v35;
            --v40;
          }
          while ( !v48 );
        }
      }
      --v39;
      v50 = sub_12F8E8(*v66, *v65, v31, v40);
      v51 = *v66;
      *(int *)((char *)v51 + v78) = v50;
      v52 = bn_sub_words(v39, v39, v51, v31 + 1);
      v72 = v40 - v52;
      v53 = -v52;
      v54 = *v66;
      if ( v31 > 0 )
      {
        v55 = *v65;
        if ( v31 <= 8 )
        {
          v58 = 0;
        }
        else
        {
          v56 = v55 + 23;
          v57 = *v66;
          v58 = 0;
          do
          {
            v59 = *(v56 - 23);
            v58 += 8;
            __pld(v56);
            v56 += 8;
            v57 += 8;
            *(v57 - 8) = v59 & v53;
            *(v57 - 7) = *(v56 - 30) & v53;
            *(v57 - 6) = *(v56 - 29) & v53;
            *(v57 - 5) = *(v56 - 28) & v53;
            *(v57 - 4) = *(v56 - 27) & v53;
            *(v57 - 3) = *(v56 - 26) & v53;
            *(v57 - 2) = *(v56 - 25) & v53;
            *(v57 - 1) = *(v56 - 24) & v53;
          }
          while ( v58 != ((v31 - 9) & 0xFFFFFFF8) + 8 );
        }
        v60 = &v55[v58];
        v61 = &v54[v58];
        do
        {
          v62 = *v60++;
          ++v58;
          *v61++ = v62 & v53;
        }
        while ( v31 > v58 );
      }
      *v38-- += bn_add_words(v39, v39, v54, v31);
      *(_DWORD *)(v68 - 4) = v72;
      v68 -= 4;
    }
    v14 = v81;
  }
  v75[1] = (int *)v31;
  v75[3] = (int *)v80;
  if ( a2 )
  {
    if ( !sub_BA630(a2, v75, v14) )
      goto LABEL_15;
  }
  sub_130C74(a5);
  return 1;
}
