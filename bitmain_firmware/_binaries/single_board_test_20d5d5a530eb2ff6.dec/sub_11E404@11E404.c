int __fastcall sub_11E404(int a1, _DWORD *a2)
{
  int *v3; // r2
  int v4; // r3
  bool v5; // zf
  int *v7; // r3
  int *v8; // r0
  int v9; // r5
  char *v10; // r4
  const char *v11; // r6
  char *v12; // r1
  char *v13; // r2
  char *v14; // r3
  char *v15; // r7
  int v16; // r8
  size_t v17; // r9
  const char *v18; // r2
  int v19; // r1
  const char *v20; // r3
  const char *v21; // r10
  char *v22; // r7
  int v23; // r2
  int v24; // r5
  char *v25; // r4
  const char *v26; // r2
  int v27; // r1
  int v28; // t1
  int v29; // r3
  int v30; // t1
  int v31; // r5
  int v32; // r4
  signed int v33; // r2
  size_t *v34; // r3
  size_t v35; // r6
  const void *v36; // r7
  _BYTE *v37; // r0
  _BYTE *v38; // r5
  signed int v39; // r6
  _BYTE *v40; // r0
  int *v41; // r3
  int v42; // r2
  _BYTE *v43; // r1
  int *v44; // r2
  int v45; // r3
  int *v46; // r0
  int v47; // r1
  bool v48; // cc
  int v49; // r0
  _BYTE *v50; // r4
  _BYTE *v51; // r4
  int v52; // r1
  int v53; // r0
  int v54; // t1
  int v55; // r2
  int v56; // t1
  int *v57; // r0
  int v58; // r1
  bool v59; // zf
  unsigned __int8 *v60; // r1
  unsigned __int8 *v61; // r0
  unsigned __int8 *v62; // r4
  unsigned __int8 *v63; // r3
  unsigned __int8 *v64; // r1
  int v65; // r6
  int v66; // t1
  int v67; // r2
  int v68; // t1
  int v69; // t1

  switch ( *a2 )
  {
    case 1:
      v7 = (int *)a2[1];
      v8 = *(int **)(a1 + 4);
      v9 = *v7;
      v10 = (char *)v7[2];
      v11 = (const char *)v8[2];
      if ( *v7 > 0 )
      {
        v12 = &v10[v9 - 1];
        if ( *v12 == 64 )
        {
LABEL_66:
          v13 = v12;
        }
        else
        {
          v13 = (char *)*v7;
          v14 = &v10[v9 - 2];
          while ( 1 )
          {
            --v13;
            v12 = v14--;
            if ( !v13 )
              break;
            if ( *v12 == 64 )
              goto LABEL_66;
          }
        }
LABEL_11:
        v15 = v13;
        goto LABEL_12;
      }
      if ( *v7 )
      {
        v13 = &v10[v9 - 1];
        goto LABEL_11;
      }
      v15 = (char *)*v7;
LABEL_12:
      v16 = *v8;
      if ( *v8 <= 0 )
      {
        if ( !*v8 )
          return 53;
        v17 = v16 - 1;
        v21 = &v11[v16 - 1];
        if ( !v21 )
          return 53;
      }
      else
      {
        v17 = v16 - 1;
        v18 = &v11[v16 - 1];
        if ( *v18 != 64 )
        {
          v19 = v16 - 1;
          v20 = &v11[v16 - 2];
          do
          {
            v18 = v20;
            v17 = v19 - 1;
            --v20;
            if ( !v19 )
              return 53;
            --v19;
          }
          while ( *v18 != 64 );
        }
        v21 = v18;
      }
      if ( v15 )
      {
        if ( v10 == v15 )
        {
LABEL_24:
          v22 = v15 + 1;
          v23 = v22 - v10;
          v10 = v22;
          goto LABEL_25;
        }
        if ( v15 - v10 != v17 )
          return 47;
        if ( !memchr(v10, 0, v17) && !memchr(v11, 0, v17) )
        {
          if ( strncmp(v10, v11, v17) )
            return 47;
          goto LABEL_24;
        }
        return 53;
      }
      if ( v9 <= 0 || *v10 != 46 )
      {
        v23 = 0;
LABEL_25:
        v24 = v9 - v23;
        if ( v24 != v16 - (v21 + 1 - v11) )
          return 47;
        if ( v24 )
        {
          v25 = v10 - 1;
          v26 = v21;
          while ( 1 )
          {
            v28 = (unsigned __int8)*++v25;
            v27 = v28;
            v30 = *(unsigned __int8 *)++v26;
            v29 = v30;
            if ( v27 != v30 )
              break;
LABEL_33:
            if ( !--v24 )
              return 0;
          }
          if ( (unsigned int)(v27 - 65) > 0x19 )
          {
            if ( (unsigned int)(v29 - 65) > 0x19 )
              return 47;
          }
          else
          {
            v27 = (unsigned __int8)(v27 + 32);
            if ( (unsigned int)(v29 - 65) > 0x19 )
              goto LABEL_32;
          }
          v29 = (unsigned __int8)(v29 + 32);
LABEL_32:
          if ( v29 != v27 )
            return 47;
          goto LABEL_33;
        }
        return 0;
      }
      if ( v9 < v16 && !sub_11E22C((unsigned __int8 *)v10, (int)&v11[v16 - v9], v9) )
        return 0;
      return 47;
    case 2:
      v44 = (int *)a2[1];
      v45 = *v44;
      if ( !*v44 )
        return 0;
      v46 = *(int **)(a1 + 4);
      v47 = *v46;
      v48 = *v46 <= v45;
      if ( *v46 < v45 )
        return 47;
      v49 = v46[2];
      v50 = (_BYTE *)v44[2];
      if ( !v48 )
      {
        v49 += v47 - v45;
        if ( *v50 != 46 && *(_BYTE *)(v49 - 1) != 46 )
          return 47;
      }
      if ( !v45 )
        return 0;
      v51 = v50 - 1;
      v52 = v49 - 1;
      while ( 2 )
      {
        v54 = (unsigned __int8)*++v51;
        v53 = v54;
        v56 = *(unsigned __int8 *)++v52;
        v55 = v56;
        if ( v53 == v56 )
          goto LABEL_63;
        if ( (unsigned int)(v53 - 65) <= 0x19 )
        {
          v53 = (unsigned __int8)(v53 + 32);
          if ( (unsigned int)(v55 - 65) > 0x19 )
            goto LABEL_62;
          goto LABEL_61;
        }
        if ( (unsigned int)(v55 - 65) <= 0x19 )
        {
LABEL_61:
          v55 = (unsigned __int8)(v55 + 32);
LABEL_62:
          if ( v55 != v53 )
            return 47;
LABEL_63:
          if ( !--v45 )
            return 0;
          continue;
        }
        return 47;
      }
    case 4:
      v31 = *(_DWORD *)(a1 + 4);
      v32 = a2[1];
      if ( *(_DWORD *)(v31 + 4) && sub_115C40(*(size_t **)(a1 + 4), 0) < 0
        || *(_DWORD *)(v32 + 4) && sub_115C40((size_t *)v32, 0) < 0 )
      {
        return 17;
      }
      v33 = *(_DWORD *)(v32 + 16);
      if ( v33 <= *(_DWORD *)(v31 + 16) && !memcmp(*(const void **)(v32 + 12), *(const void **)(v31 + 12), v33) )
        return 0;
      return 47;
    case 6:
      v34 = *(size_t **)(a1 + 4);
      v35 = *v34;
      v36 = (const void *)v34[2];
      v37 = memchr(v36, 58, *v34);
      if ( !v37 || (int)(v35 - (v37 - (_BYTE *)v36)) <= 2 || v37[1] != 47 || v37[2] != 47 )
        return 53;
      v38 = v37 + 3;
      v39 = v35 - (v37 + 3 - (_BYTE *)v36);
      v40 = memchr(v37 + 3, 58, v39);
      if ( v40 || (v40 = memchr(v38, 47, v39)) != 0 )
        v39 = v40 - v38;
      if ( !v39 )
        return 53;
      v41 = (int *)a2[1];
      v42 = *v41;
      v43 = (_BYTE *)v41[2];
      if ( *v41 > 0 && *v43 == 46 )
      {
        if ( v42 >= v39 || sub_11E22C(&v38[v39 - v42], (int)v43, v42) )
          return 47;
      }
      else if ( v42 != v39 || sub_11E22C(v38, (int)v43, v42) )
      {
        return 47;
      }
      return 0;
    case 7:
      v3 = *(int **)(a1 + 4);
      v4 = *v3;
      v5 = *v3 == 4;
      if ( *v3 != 4 )
        v5 = v4 == 16;
      if ( !v5 )
        return 53;
      v57 = (int *)a2[1];
      v58 = *v57;
      v59 = *v57 == 8;
      if ( *v57 != 8 )
        v59 = v58 == 32;
      if ( !v59 )
        return 53;
      if ( v58 != 2 * v4 )
        return 47;
      if ( v4 <= 0 )
        return 0;
      v60 = (unsigned __int8 *)v3[2];
      v61 = (unsigned __int8 *)v57[2];
      v62 = &v61[v4];
      if ( ((*v61 ^ *v60) & v61[v4]) != 0 )
        return 47;
      v63 = &v60[v4];
      v64 = v60 + 1;
      while ( v63 != v64 )
      {
        v66 = *v64++;
        v65 = v66;
        v68 = *++v61;
        v67 = v68;
        v69 = *++v62;
        if ( ((v67 ^ v65) & v69) != 0 )
          return 47;
      }
      return 0;
    default:
      return 51;
  }
}
