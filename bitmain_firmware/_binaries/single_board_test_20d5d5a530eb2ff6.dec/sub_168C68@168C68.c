int __fastcall sub_168C68(int a1, _DWORD *a2, void *a3, int a4, unsigned int s, size_t *a6)
{
  int *v8; // r10
  _DWORD *v9; // r9
  int v10; // r8
  int v11; // r0
  bool v12; // zf
  int v13; // r5
  int v14; // r4
  int *v15; // r10
  char *v16; // r7
  unsigned __int8 *v17; // r9
  void *v18; // r8
  int v19; // r4
  int v20; // r6
  int ***v21; // r5
  int v22; // r11
  int v24; // r3
  int v25; // r2
  int v26; // r3
  int v27; // r6
  int v28; // r0
  bool v29; // cc
  int v30; // r0
  void **v31; // r3
  __int16 v32; // r2
  char **v33; // r2
  int ***v34; // r0
  int **v35; // r1
  int **v36; // r1
  unsigned __int8 *v37; // r0
  bool v38; // zf
  int v39; // r3
  _DWORD *v40; // r0
  int v41; // r0
  unsigned int v42; // r10
  bool v43; // cf
  char v44; // r2
  int v45; // r2
  _BOOL4 v46; // r3
  unsigned int v47; // r3
  int v48; // r0
  char *v49; // r2
  char *v50; // r1
  char *v51; // r0
  char v52; // r12
  char v53; // t1
  char v54; // t1
  int *v55; // r0
  char *i; // r3
  int v57; // [sp+0h] [bp-44h]
  void *v59; // [sp+18h] [bp-2Ch]
  int v60; // [sp+1Ch] [bp-28h]
  char *v61; // [sp+20h] [bp-24h]
  unsigned int v62; // [sp+2Ch] [bp-18h]
  unsigned __int8 *v63; // [sp+30h] [bp-14h]
  int **v64; // [sp+34h] [bp-10h]
  int **v65; // [sp+38h] [bp-Ch]
  void *v66; // [sp+3Ch] [bp-8h] BYREF

  v66 = a3;
  v8 = (int *)sub_C59B8(a1);
  v9 = (_DWORD *)sub_B822C();
  v10 = sub_B822C();
  v11 = sub_B822C();
  v12 = v10 == 0;
  if ( v10 )
    v12 = v9 == 0;
  v13 = v11;
  v14 = v12;
  if ( !v11 )
    v14 |= 1u;
  if ( v14 || !sub_C6348((int)v8) )
  {
    v15 = 0;
    sub_B895C((int)v9);
    sub_B895C(v10);
    sub_B895C(v13);
    sub_D8C78((int)a2);
LABEL_11:
    v16 = 0;
    v17 = 0;
    v18 = 0;
    v19 = 0;
    v20 = 0;
    v21 = 0;
    goto LABEL_12;
  }
  v24 = sub_B85BC(v9);
  v25 = v24 + 14;
  v26 = v24 + 7;
  if ( v26 < 0 )
    v26 = v25;
  v27 = v26 >> 3;
  v60 = v26 >> 3;
  sub_B895C((int)v9);
  sub_B895C(v10);
  sub_B895C(v13);
  v28 = sub_D8C78((int)a2);
  v29 = v27 <= 0;
  if ( v27 )
    v29 = v28 <= 0;
  v59 = (void *)v28;
  v20 = v29;
  if ( v29 )
  {
    v15 = 0;
    goto LABEL_11;
  }
  memset((void *)s, 255, *a6);
  v30 = sub_168518((int *)v20, &v66, a4);
  v19 = v30;
  if ( !v30 )
  {
    v15 = 0;
    sub_D0048(53, 102, 100, (int)"crypto/sm2/sm2_crypt.c", 285);
    v16 = 0;
    v17 = 0;
    v18 = 0;
    v20 = 0;
    v21 = 0;
    goto LABEL_12;
  }
  v31 = *(void ***)(v30 + 8);
  if ( v59 != *v31 )
  {
    v15 = (int *)v20;
    v57 = 290;
    v32 = 104;
LABEL_25:
    v16 = (char *)v15;
    v17 = (unsigned __int8 *)v15;
    sub_D0048(53, 102, v32, (int)"crypto/sm2/sm2_crypt.c", v57);
    v18 = v15;
    v20 = (int)v15;
    v21 = (int ***)v15;
    goto LABEL_12;
  }
  v33 = *(char ***)(v30 + 12);
  v61 = *v33;
  if ( *a6 < (unsigned int)*v33 )
  {
    v15 = (int *)v20;
    v57 = 298;
    v32 = 107;
    goto LABEL_25;
  }
  v62 = (unsigned int)v33[2];
  v63 = (unsigned __int8 *)v31[2];
  v34 = (int ***)sub_130B08();
  v21 = v34;
  if ( v34 )
  {
    sub_130BC0((int)v34);
    v65 = sub_130CCC(v21, v35);
    v64 = sub_130CCC(v21, v36);
    if ( v64 )
    {
      v16 = (char *)sub_E0740(v61);
      v18 = sub_E0740((void *)(2 * v60));
      v37 = (unsigned __int8 *)sub_E0740(v59);
      v38 = v18 == 0;
      if ( v18 )
        v38 = v16 == 0;
      v17 = v37;
      v39 = v38;
      if ( !v37 )
        v39 |= 1u;
      if ( v39 )
      {
        v15 = (int *)v20;
        sub_D0048(53, 102, 65, (int)"crypto/sm2/sm2_crypt.c", 322);
      }
      else
      {
        v40 = sub_C63F4(v8);
        v20 = (int)v40;
        if ( v40 )
        {
          if ( sub_C6E54(v8, v40)
            && (v41 = sub_C59E4(a1), sub_C7330(v8, (int *)v20, 0, v20, v41, (int)v21))
            && sub_C6D34(v8, (_DWORD *)v20, (int)v65, (int)v64, (int)v21) )
          {
            if ( sub_B8CD4(v65, (int)v18, v60) >= 0
              && sub_B8CD4(v64, (int)v18 + v60, v60) >= 0
              && (v42 = 0, sub_159E04(v16, (unsigned int)v61, (int)v18, 2 * v60, 0, 0, a2)) )
            {
              if ( v61 )
              {
                v43 = v62 >= s + 4;
                if ( v62 < s + 4 )
                  v43 = s >= v62 + 4;
                v44 = v43;
                if ( (unsigned int)v61 > 6 )
                  v45 = v44 & 1;
                else
                  v45 = 0;
                v46 = s >= (unsigned int)(v16 + 4) || s + 4 <= (unsigned int)v16;
                if ( (v45 & v46) == 0 || (s | v62 | (unsigned int)v16) << 30 )
                {
                  for ( i = 0; i != v61; ++i )
                    i[s] = i[(_DWORD)v16] ^ i[v62];
                }
                else
                {
                  v47 = ((unsigned int)(v61 - 4) >> 2) + 1;
                  v48 = 4 * v47;
                  do
                  {
                    *(_DWORD *)(s + 4 * v42) = *(_DWORD *)(v62 + 4 * v42) ^ *(_DWORD *)&v16[4 * v42];
                    ++v42;
                  }
                  while ( v47 > v42 );
                  if ( v61 != (char *)v48 )
                  {
                    v49 = (char *)(v62 + v48);
                    v50 = &v16[v48];
                    v51 = (char *)(v48 + s);
                    do
                    {
                      v53 = *v49++;
                      v52 = v53;
                      v54 = *v50++;
                      *v51++ = v52 ^ v54;
                    }
                    while ( v49 != &v61[v62] );
                  }
                }
              }
              v55 = (int *)sub_D14F4();
              v15 = v55;
              if ( v55 )
              {
                if ( sub_D16C0(v55, a2)
                  && sub_D16D8((int)v15, (int)v18, v60)
                  && sub_D16D8((int)v15, s, (int)v61)
                  && sub_D16D8((int)v15, (int)v18 + v60, v60)
                  && sub_D1734(v15, (int)v17, 0) )
                {
                  if ( !sub_BC33C(v17, v63, (int)v59) )
                  {
                    v22 = 1;
                    *a6 = (size_t)v61;
                    goto LABEL_13;
                  }
                  sub_D0048(53, 102, 102, (int)"crypto/sm2/sm2_crypt.c", 368);
                }
                else
                {
                  sub_D0048(53, 102, 6, (int)"crypto/sm2/sm2_crypt.c", 363);
                }
              }
              else
              {
                sub_D0048(53, 102, 65, (int)"crypto/sm2/sm2_crypt.c", 354);
              }
            }
            else
            {
              v15 = 0;
              sub_D0048(53, 102, 68, (int)"crypto/sm2/sm2_crypt.c", 345);
            }
          }
          else
          {
            v15 = 0;
            sub_D0048(53, 102, 16, (int)"crypto/sm2/sm2_crypt.c", 337);
          }
        }
        else
        {
          v15 = 0;
          sub_D0048(53, 102, 65, (int)"crypto/sm2/sm2_crypt.c", 328);
        }
      }
    }
    else
    {
      v15 = 0;
      v16 = 0;
      v17 = 0;
      v18 = 0;
      v20 = 0;
      sub_D0048(53, 102, 3, (int)"crypto/sm2/sm2_crypt.c", 313);
    }
  }
  else
  {
    v15 = 0;
    sub_D0048(53, 102, 65, (int)"crypto/sm2/sm2_crypt.c", 304);
    v16 = 0;
    v17 = 0;
    v18 = 0;
    v20 = 0;
  }
LABEL_12:
  v22 = 0;
  memset((void *)s, 0, *a6);
LABEL_13:
  CRYPTO_free(v16);
  CRYPTO_free(v18);
  CRYPTO_free(v17);
  sub_C6490(v20);
  sub_130B5C((void **)v21);
  sub_16855C(v19);
  sub_D1504(v15);
  return v22;
}
