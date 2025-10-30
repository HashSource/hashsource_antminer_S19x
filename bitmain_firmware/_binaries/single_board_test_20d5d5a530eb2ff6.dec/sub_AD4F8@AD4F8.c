int __fastcall sub_AD4F8(_DWORD *a1, int a2, char a3, const void *a4, size_t a5, void *src, size_t n, int a8)
{
  int v11; // r6
  int v12; // r9
  _BYTE *v13; // r0
  _BYTE *v14; // r4
  _DWORD *v15; // r3
  char *v16; // r2
  int v17; // t1
  int v18; // r12
  int v19; // lr
  int v20; // r0
  int v21; // r12
  int v22; // lr
  int v23; // r0
  _DWORD *v24; // r3
  _DWORD *v25; // r1
  int v26; // t1
  int v27; // r12
  int v28; // lr
  int v29; // r0
  int v30; // r12
  int v31; // lr
  int v32; // r0
  bool v33; // zf
  _BYTE *v34; // r0
  _DWORD *v35; // r3
  _DWORD *v36; // r1
  _DWORD *v37; // r2
  int v38; // t1
  int v39; // r12
  int v40; // lr
  int v41; // r0
  int v42; // r0
  int v43; // r10
  int v44; // r12
  _DWORD *v45; // r3
  int v46; // t1
  int v47; // r5
  int v48; // r0
  int v49; // r1
  int v50; // r1
  int v51; // r5
  int v52; // r0
  int v53; // r5

  v11 = a5 + 64;
  if ( a8 )
  {
    v12 = n + 2 + v11;
    v13 = (_BYTE *)CRYPTO_malloc(v12, "ssl/t1_enc.c", 542);
    v14 = v13;
    if ( v13 )
    {
      memcpy(v13, a4, a5);
      v15 = (_DWORD *)a1[31];
      v16 = &v14[a5];
      v17 = v15[43];
      v15 += 43;
      v18 = v15[1];
      v19 = v15[2];
      v20 = v15[3];
      *(_DWORD *)&v14[a5] = v17;
      *((_DWORD *)v16 + 1) = v18;
      *((_DWORD *)v16 + 2) = v19;
      *((_DWORD *)v16 + 3) = v20;
      v21 = v15[5];
      v22 = v15[6];
      v23 = v15[7];
      *((_DWORD *)v16 + 4) = v15[4];
      *((_DWORD *)v16 + 5) = v21;
      *((_DWORD *)v16 + 6) = v22;
      *((_DWORD *)v16 + 7) = v23;
      v24 = (_DWORD *)a1[31];
      v25 = &v14[a5 + 32];
      v26 = v24[35];
      v24 += 35;
      v27 = v24[1];
      v28 = v24[2];
      v29 = v24[3];
      *v25 = v26;
      v25[1] = v27;
      v25[2] = v28;
      v25[3] = v29;
      v30 = v24[5];
      v31 = v24[6];
      v32 = v24[7];
      v25[4] = v24[4];
      v25[5] = v30;
      v25[6] = v31;
      v25[7] = v32;
      v14[v11] = BYTE1(n);
      v16[65] = n;
      v33 = src == 0;
      if ( !src )
        v33 = n == 0;
      if ( !v33 )
        memcpy(&v14[a5 + 66], src, n);
      goto LABEL_9;
    }
    v11 += n + 2;
LABEL_17:
    v14 = 0;
    v12 = v11;
    v53 = 0;
    sub_D0048(20, 314, 65, "ssl/t1_enc.c", 599);
    goto LABEL_15;
  }
  v34 = (_BYTE *)CRYPTO_malloc(a5 + 64, "ssl/t1_enc.c", 542);
  v14 = v34;
  if ( !v34 )
    goto LABEL_17;
  memcpy(v34, a4, a5);
  v35 = (_DWORD *)a1[31];
  v36 = &v14[a5];
  v12 = a5 + 64;
  v37 = &v14[a5 + 32];
  v38 = v35[43];
  v35 += 43;
  v39 = v35[1];
  v40 = v35[2];
  v41 = v35[3];
  *(_DWORD *)&v14[a5] = v38;
  v36[1] = v39;
  v36[2] = v40;
  v36[3] = v41;
  v42 = v35[7];
  v43 = v35[4];
  v44 = v35[5];
  v36[6] = v35[6];
  v36[4] = v43;
  v36[5] = v44;
  v36[7] = v42;
  v45 = (_DWORD *)a1[31];
  v46 = v45[35];
  v45 += 35;
  v47 = v45[1];
  v48 = v45[2];
  v49 = v45[3];
  *v37 = v46;
  v37[1] = v47;
  v37[2] = v48;
  v37[3] = v49;
  v50 = v45[7];
  v51 = v45[5];
  v52 = v45[6];
  v37[4] = v45[4];
  v37[5] = v51;
  v37[6] = v52;
  v37[7] = v50;
LABEL_9:
  if ( !memcmp(v14, "client finished", 0xFu)
    || !memcmp(v14, "server finished", 0xFu)
    || !memcmp(v14, "master secret", 0xDu)
    || !memcmp(v14, "extended master secret", 0x16u)
    || !memcmp(v14, "key expansion", 0xDu) )
  {
    v53 = 0;
    sub_D0048(20, 314, 367, "ssl/t1_enc.c", 595);
  }
  else
  {
    v53 = sub_AC868(a1, (int)v14, v12, 0, 0, 0, 0, 0, 0, a1[285] + 72, *(_DWORD *)(a1[285] + 4), a2, a3, 0);
  }
LABEL_15:
  sub_E0758((int)v14, v12, (size_t)"ssl/t1_enc.c");
  return v53;
}
