bool __fastcall sub_DF364(int a1, char *a2, unsigned int *a3)
{
  int *v3; // r4
  int v4; // r5
  int v5; // r7
  int v6; // r6
  unsigned int v7; // r9
  unsigned int v9; // r10
  int v10; // r0
  int v11; // r4
  int v13; // r9
  _DWORD *v14; // r0
  char *v15; // r11
  _DWORD *v16; // r0
  bool v17; // cf
  char v18; // r3
  int v19; // r3
  unsigned int v20; // r3
  unsigned int v21; // r5
  unsigned int v22; // r3
  int v23; // r7
  unsigned int v24; // r2
  char *v25; // r1
  char *v26; // r3
  unsigned int v27; // r2
  int v28; // r6
  int v29; // r4
  int v30; // r0
  int *v31; // r12
  char *v32; // lr
  int v33; // r0
  int v34; // r4
  int v35; // r0
  int v36; // r4
  int v37; // r0
  int v38; // r4
  int v39; // r0
  int v40; // r4
  int v41; // r0
  int v42; // r4
  int v43; // r0
  int v44; // r4
  int v45; // r0
  char *v46; // lr
  int *v47; // r1
  int v48; // r0
  int v49; // t1
  int v50; // t1
  int v51; // r3
  unsigned int v52; // r7
  char *v53; // r2
  char *v54; // r0
  char v55; // t1
  unsigned int v56; // [sp+10h] [bp-Ch]

  v3 = *(int **)(a1 + 20);
  v4 = *v3;
  if ( !*v3 )
  {
    sub_D0048(52, 101, 105, (int)"crypto/kdf/tls1_prf.c", 129);
    return v4;
  }
  v5 = v3[1];
  if ( !v5 )
  {
    v4 = 0;
    sub_D0048(52, 101, 107, (int)"crypto/kdf/tls1_prf.c", 133);
    return v4;
  }
  v6 = v3[259];
  if ( v6 )
  {
    v7 = v3[2];
    v9 = *a3;
    v10 = sub_D8C70(*v3);
    v11 = (int)(v3 + 3);
    if ( v10 != 114 )
      return sub_DF098((_DWORD *)v4, v5, v7, v11, v6, a2, v9) != 0;
    v56 = v7 >> 1;
    v13 = (v7 & 1) + (v7 >> 1);
    v14 = sub_D902C();
    v4 = sub_DF098(v14, v5, v13, v11, v6, a2, v9);
    if ( v4 )
    {
      v15 = (char *)CRYPTO_malloc(v9, "crypto/kdf/tls1_prf.c", 260);
      if ( v15 )
      {
        v16 = sub_D93D8();
        v4 = sub_DF098(v16, v56 + v5, v13, v11, v6, v15, v9);
        if ( v4 )
        {
          if ( v9 )
          {
            v17 = v15 >= a2 + 4;
            if ( v15 < a2 + 4 )
              v17 = a2 >= v15 + 4;
            v18 = v17;
            if ( v9 <= 6 )
              v18 = 0;
            v19 = v18 & 1;
            if ( (((unsigned __int8)v15 | (unsigned __int8)a2) & 3) != 0 )
              v19 = 0;
            if ( v19 )
            {
              v20 = (v9 - 4) >> 2;
              v21 = v20 + 1;
              v22 = v20 - 8;
              v23 = 4 * v21;
              if ( v22 > 0xFFFFFFF6 )
              {
                v32 = v15;
                v31 = (int *)a2;
                v27 = 0;
              }
              else
              {
                v24 = v22 & 0xFFFFFFF8;
                v25 = v15 + 32;
                v26 = a2 + 32;
                v27 = v24 + 8;
                v28 = 0;
                do
                {
                  v29 = *((_DWORD *)v25 - 8);
                  v28 += 8;
                  v30 = *((_DWORD *)v26 - 8);
                  v31 = (int *)v26;
                  __pld(v26 + 48);
                  v32 = v25;
                  v26 += 32;
                  v33 = v30 ^ v29;
                  v34 = *((_DWORD *)v26 - 15);
                  *((_DWORD *)v26 - 16) = v33;
                  v25 += 32;
                  v35 = *((_DWORD *)v25 - 15) ^ v34;
                  v36 = *((_DWORD *)v26 - 14);
                  *((_DWORD *)v26 - 15) = v35;
                  v37 = *((_DWORD *)v25 - 14) ^ v36;
                  v38 = *((_DWORD *)v26 - 13);
                  *((_DWORD *)v26 - 14) = v37;
                  v39 = *((_DWORD *)v25 - 13) ^ v38;
                  v40 = *((_DWORD *)v26 - 12);
                  *((_DWORD *)v26 - 13) = v39;
                  v41 = *((_DWORD *)v25 - 12) ^ v40;
                  v42 = *((_DWORD *)v26 - 11);
                  *((_DWORD *)v26 - 12) = v41;
                  v43 = *((_DWORD *)v25 - 11) ^ v42;
                  v44 = *((_DWORD *)v26 - 10);
                  *((_DWORD *)v26 - 11) = v43;
                  v45 = *((_DWORD *)v26 - 9);
                  *((_DWORD *)v26 - 10) = v44 ^ *((_DWORD *)v25 - 10);
                  *((_DWORD *)v26 - 9) = v45 ^ *((_DWORD *)v25 - 9);
                }
                while ( v28 != v27 );
              }
              v46 = v32 - 4;
              v47 = v31 - 1;
              do
              {
                v49 = v47[1];
                ++v47;
                v48 = v49;
                ++v27;
                v50 = *((_DWORD *)v46 + 1);
                v46 += 4;
                *v31++ = v50 ^ v48;
              }
              while ( v27 < v21 );
              if ( v9 != v23 )
              {
                v51 = v23 + 1;
                a2[4 * v21] ^= v15[4 * v21];
                if ( v9 > v23 + 1 )
                {
                  v52 = v23 + 2;
                  a2[v51] ^= v15[v51];
                  if ( v9 > v52 )
                    a2[v52] ^= v15[v52];
                }
              }
            }
            else
            {
              v53 = v15 - 1;
              v54 = &a2[v9];
              do
              {
                v55 = *++v53;
                *a2++ ^= v55;
              }
              while ( v54 != a2 );
            }
          }
          v4 = 1;
          sub_E0758((int)v15, v9, (size_t)"crypto/kdf/tls1_prf.c");
        }
        else
        {
          sub_E0758((int)v15, v9, (size_t)"crypto/kdf/tls1_prf.c");
        }
      }
      else
      {
        v4 = 0;
        sub_D0048(52, 111, 65, (int)"crypto/kdf/tls1_prf.c", 261);
      }
    }
    return v4;
  }
  sub_D0048(52, 101, 106, (int)"crypto/kdf/tls1_prf.c", 137);
  return 0;
}
