int __fastcall sub_1686A4(int a1, _DWORD *a2, unsigned int a3, char *a4, void *s, size_t *a6)
{
  int v8; // r4
  int *v9; // r11
  int *v10; // r7
  int v11; // r0
  bool v12; // cc
  void *v13; // r8
  _DWORD *v14; // r5
  int v15; // r10
  int v16; // r0
  bool v17; // zf
  int v18; // r6
  unsigned int v19; // r5
  int *v20; // r10
  int *v21; // r9
  int ***v22; // r6
  int v23; // r7
  int v25; // r3
  int v26; // r0
  int v27; // r2
  int v28; // r3
  int v29; // r5
  int ***v30; // r0
  bool v31; // zf
  int **v32; // r1
  int **v33; // r1
  int **v34; // r1
  int **v35; // r1
  int **v36; // r1
  bool v37; // zf
  int v38; // r3
  char *v39; // r0
  int v40; // r2
  bool v41; // cf
  char v42; // r3
  int v43; // r3
  unsigned int v44; // r3
  unsigned int v45; // r12
  unsigned int v46; // r3
  unsigned int v47; // r2
  unsigned int v48; // r7
  unsigned int v49; // r3
  unsigned int v50; // r2
  int v51; // lr
  int v52; // r0
  int v53; // r1
  int v54; // r1
  int v55; // r0
  int v56; // r1
  int v57; // r1
  int v58; // r0
  int v59; // r1
  int v60; // r0
  int v61; // r1
  int v62; // r0
  int v63; // r1
  int v64; // r0
  int v65; // r1
  int v66; // r0
  int v67; // r1
  unsigned int v68; // r3
  int *v69; // r1
  unsigned int v70; // r3
  int *v71; // lr
  int v72; // r7
  int v73; // t1
  int v74; // t1
  __int16 v75; // r2
  __int16 v76; // r2
  int v77; // r0
  int v78; // r2
  char *v79; // r1
  unsigned int v80; // r0
  char v81; // t1
  int v82; // r0
  int v83; // [sp+0h] [bp-64h]
  int v84; // [sp+0h] [bp-64h]
  void *v85; // [sp+14h] [bp-50h]
  int *v86; // [sp+18h] [bp-4Ch]
  int v87; // [sp+1Ch] [bp-48h]
  int v88; // [sp+1Ch] [bp-48h]
  int **v92; // [sp+2Ch] [bp-38h]
  int *v93; // [sp+2Ch] [bp-38h]
  int v94; // [sp+30h] [bp-34h]
  unsigned int v95; // [sp+30h] [bp-34h]
  signed int v96; // [sp+38h] [bp-2Ch]
  int **v97; // [sp+3Ch] [bp-28h]
  int **v98; // [sp+40h] [bp-24h]
  int **v99; // [sp+44h] [bp-20h]
  int **v100; // [sp+48h] [bp-1Ch]
  size_t v101[2]; // [sp+50h] [bp-14h] BYREF
  int v102; // [sp+58h] [bp-Ch]
  int v103; // [sp+5Ch] [bp-8h]

  v8 = 0;
  v9 = (int *)sub_D14F4();
  v10 = (int *)sub_C59B8(a1);
  v86 = (int *)sub_C6244((int)v10);
  v87 = sub_C5A68(a1);
  v11 = sub_D8C78((int)a2);
  v12 = (int)v9 <= 0;
  if ( v9 )
    v12 = v11 <= 0;
  v103 = 0;
  v102 = 0;
  if ( v12 )
  {
    v85 = 0;
    sub_D0048(53, 103, 68, (int)"crypto/sm2/sm2_crypt.c", 132);
    goto LABEL_15;
  }
  v13 = (void *)v11;
  v14 = (_DWORD *)sub_B822C();
  v15 = sub_B822C();
  v16 = sub_B822C();
  v17 = v15 == 0;
  if ( v15 )
    v17 = v14 == 0;
  v18 = v16;
  v8 = v17;
  if ( !v16 )
    v8 |= 1u;
  if ( v8 || !sub_C6348((int)v10) )
  {
    sub_B895C((int)v14);
    sub_B895C(v15);
    sub_B895C(v18);
LABEL_14:
    v8 = 0;
    sub_D0048(53, 103, 68, (int)"crypto/sm2/sm2_crypt.c", 138);
    v85 = 0;
LABEL_15:
    v19 = 0;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    goto LABEL_16;
  }
  v25 = sub_B85BC(v14);
  v26 = (int)v14;
  v27 = v25 + 14;
  v28 = v25 + 7;
  if ( v28 < 0 )
    v28 = v27;
  v29 = v28 >> 3;
  v96 = v28 >> 3;
  sub_B895C(v26);
  sub_B895C(v15);
  sub_B895C(v18);
  if ( !v29 )
    goto LABEL_14;
  v21 = sub_C63F4(v10);
  v20 = sub_C63F4(v10);
  v30 = (int ***)sub_130B08();
  v31 = v20 == 0;
  if ( v20 )
    v31 = v21 == 0;
  v22 = v30;
  v19 = v31;
  if ( !v30 )
    v19 |= 1u;
  if ( v19 )
  {
    v76 = 65;
    v84 = 146;
LABEL_72:
    v85 = 0;
    v19 = 0;
    sub_D0048(53, 103, v76, (int)"crypto/sm2/sm2_crypt.c", v84);
    v23 = 0;
    goto LABEL_16;
  }
  sub_130BC0((int)v30);
  v92 = sub_130CCC(v22, v32);
  v97 = sub_130CCC(v22, v33);
  v100 = sub_130CCC(v22, v34);
  v98 = sub_130CCC(v22, v35);
  v99 = sub_130CCC(v22, v36);
  if ( !v99 )
  {
    v8 = 0;
    v84 = 158;
    v76 = 3;
    goto LABEL_72;
  }
  v85 = sub_E0740((void *)(2 * v96));
  v8 = (int)sub_E0740(v13);
  v37 = v8 == 0;
  if ( v8 )
    v37 = v85 == 0;
  v38 = v37;
  v94 = v38;
  if ( v37 )
  {
    v23 = 0;
    sub_D0048(53, 103, 65, (int)"crypto/sm2/sm2_crypt.c", 166);
    goto LABEL_16;
  }
  memset(s, v38, *a6);
  if ( !sub_1365E8(v92, v86) )
  {
    v19 = 0;
    v23 = 0;
    sub_D0048(53, 103, 68, (int)"crypto/sm2/sm2_crypt.c", 173);
    goto LABEL_16;
  }
  if ( !sub_C7330(v10, v21, (int)v92, v94, v94, (int)v22)
    || !sub_C6D34(v10, v21, (int)v97, (int)v98, (int)v22)
    || !sub_C7330(v10, v20, 0, v87, (int)v92, (int)v22)
    || !sub_C6D34(v10, v20, (int)v100, (int)v99, (int)v22) )
  {
    v83 = 181;
    v75 = 16;
LABEL_70:
    v19 = 0;
    sub_D0048(53, 103, v75, (int)"crypto/sm2/sm2_crypt.c", v83);
    v23 = 0;
    goto LABEL_16;
  }
  if ( sub_B8CD4(v100, (int)v85, v96) < 0 || sub_B8CD4(v99, (int)v85 + v96, v96) < 0 )
  {
    v83 = 187;
    v75 = 68;
    goto LABEL_70;
  }
  v39 = (char *)sub_E0740(a4);
  v40 = 193;
  v19 = (unsigned int)v39;
  if ( !v39 )
  {
LABEL_92:
    sub_D0048(53, 103, 65, (int)"crypto/sm2/sm2_crypt.c", v40);
    v23 = 0;
    goto LABEL_16;
  }
  if ( !sub_159E04(v39, (unsigned int)a4, (int)v85, 2 * v96, 0, 0, a2) )
  {
    v23 = 0;
    sub_D0048(53, 103, 6, (int)"crypto/sm2/sm2_crypt.c", 200);
    goto LABEL_16;
  }
  if ( a4 )
  {
    v41 = v19 >= a3 + 4;
    if ( v19 < a3 + 4 )
      v41 = a3 >= v19 + 4;
    v42 = v41;
    if ( (unsigned int)a4 > 6 )
      v43 = v42 & 1;
    else
      v43 = 0;
    if ( !v43 || (a3 | v19) << 30 )
    {
      v79 = (char *)v19;
      v80 = a3 - 1;
      do
      {
        v81 = *(_BYTE *)++v80;
        *v79++ ^= v81;
      }
      while ( &a4[v19] != v79 );
    }
    else
    {
      v44 = (unsigned int)(a4 - 4) >> 2;
      v45 = v44 + 1;
      v46 = v44 - 8;
      v88 = 4 * v45;
      if ( v46 > 0xFFFFFFF6 )
      {
        v68 = a3;
        v69 = (int *)v19;
        v50 = 0;
      }
      else
      {
        v47 = v46 & 0xFFFFFFF8;
        v48 = a3 + 32;
        v49 = v19 + 32;
        v50 = v47 + 8;
        v51 = 0;
        do
        {
          v52 = *(_DWORD *)(v48 - 32);
          v51 += 8;
          v53 = *(_DWORD *)(v49 - 32);
          __pld((void *)(v49 + 48));
          v93 = (int *)v49;
          v49 += 32;
          v54 = v53 ^ v52;
          v55 = *(_DWORD *)(v49 - 60);
          *(_DWORD *)(v49 - 64) = v54;
          v56 = *(_DWORD *)(v48 - 28);
          v95 = v48;
          v48 += 32;
          v57 = v56 ^ v55;
          v58 = *(_DWORD *)(v49 - 56);
          *(_DWORD *)(v49 - 60) = v57;
          v59 = *(_DWORD *)(v48 - 56) ^ v58;
          v60 = *(_DWORD *)(v49 - 52);
          *(_DWORD *)(v49 - 56) = v59;
          v61 = *(_DWORD *)(v48 - 52) ^ v60;
          v62 = *(_DWORD *)(v49 - 48);
          *(_DWORD *)(v49 - 52) = v61;
          v63 = *(_DWORD *)(v48 - 48) ^ v62;
          v64 = *(_DWORD *)(v49 - 44);
          *(_DWORD *)(v49 - 48) = v63;
          v65 = *(_DWORD *)(v48 - 44) ^ v64;
          v66 = *(_DWORD *)(v49 - 40);
          *(_DWORD *)(v49 - 44) = v65;
          v67 = *(_DWORD *)(v49 - 36);
          *(_DWORD *)(v49 - 40) = *(_DWORD *)(v48 - 40) ^ v66;
          *(_DWORD *)(v49 - 36) = v67 ^ *(_DWORD *)(v48 - 36);
        }
        while ( v51 != v50 );
        v68 = v95;
        v69 = v93;
      }
      v70 = v68 - 4;
      v71 = v69 - 1;
      do
      {
        v73 = v71[1];
        ++v71;
        v72 = v73;
        ++v50;
        v74 = *(_DWORD *)(v70 + 4);
        v70 += 4;
        *v69++ = v74 ^ v72;
      }
      while ( v50 < v45 );
      if ( a4 != (char *)v88 )
      {
        *(_BYTE *)(v19 + 4 * v45) ^= *(_BYTE *)(a3 + 4 * v45);
        if ( a4 != (char *)(v88 + 1) )
        {
          *(_BYTE *)(v19 + v88 + 1) ^= *(_BYTE *)(a3 + v88 + 1);
          if ( a4 != (char *)(v88 + 2) )
            *(_BYTE *)(v19 + v88 + 2) ^= *(_BYTE *)(a3 + v88 + 2);
        }
      }
    }
  }
  if ( !sub_D16C0(v9, a2)
    || !sub_D16D8((int)v9, (int)v85, v96)
    || !sub_D16D8((int)v9, a3, (int)a4)
    || !sub_D16D8((int)v9, (int)v85 + v96, v96)
    || !sub_D1734(v9, v8, 0) )
  {
    v23 = 0;
    sub_D0048(53, 103, 6, (int)"crypto/sm2/sm2_crypt.c", 212);
    goto LABEL_16;
  }
  v101[0] = (size_t)v97;
  v101[1] = (size_t)v98;
  v102 = sub_B2068();
  v77 = sub_B2068();
  v103 = v77;
  if ( !v102 || !v77 )
  {
    v40 = 222;
    goto LABEL_92;
  }
  if ( sub_1280A4(v102, (char *)v8, (size_t)v13) && sub_1280A4(v103, (char *)v19, (size_t)a4) )
  {
    v82 = sub_168534(v101, (_BYTE **)&s);
    if ( v82 >= 0 )
    {
      v23 = 1;
      *a6 = v82;
      goto LABEL_16;
    }
    v78 = 234;
  }
  else
  {
    v78 = 227;
  }
  sub_D0048(53, 103, 68, (int)"crypto/sm2/sm2_crypt.c", v78);
  v23 = 0;
LABEL_16:
  j_ASN1_STRING_free(v103);
  j_ASN1_STRING_free(v102);
  CRYPTO_free((void *)v19);
  CRYPTO_free(v85);
  CRYPTO_free((void *)v8);
  sub_D1504(v9);
  sub_130B5C((void **)v22);
  sub_C6490((int)v21);
  sub_C6490((int)v20);
  return v23;
}
