int __fastcall d2i_SSL_SESSION(int *a1, int *a2, int a3)
{
  int v5; // r5
  int v6; // r4
  int v8; // r2
  bool v9; // zf
  char v10; // r3
  int v11; // r3
  _DWORD *v12; // r3
  int v13; // r0
  int v14; // r0
  int v15; // r3
  size_t v16; // r2
  int v17; // r3
  size_t v18; // r2
  __int64 v19; // r0
  __int64 v20; // r2
  int v21; // r0
  int v22; // r1
  int v23; // r3
  size_t v24; // r2
  _DWORD *v25; // r8
  int v26; // r0
  int v27; // r0
  int v28; // r3
  int *v29; // r3
  int v30; // r1
  int v31; // r3
  int v32; // r3
  int *v33; // r3
  int v34; // r1
  int v35; // r0
  int *v36; // r3
  int v37; // r1
  _DWORD *v38; // [sp+Ch] [bp-10h]
  size_t *v39; // [sp+Ch] [bp-10h]
  _DWORD *v40; // [sp+Ch] [bp-10h]
  int v41; // [sp+14h] [bp-8h] BYREF

  v41 = *a2;
  v5 = sub_B0A18(0, &v41, a3, &unk_202E00);
  if ( !v5 )
  {
    v6 = 0;
    goto LABEL_6;
  }
  if ( a1 )
  {
    v6 = *a1;
    if ( !*a1 )
    {
      v6 = sub_8D45C();
      if ( !v6 )
      {
        sub_B17C4(v5, &unk_202E00);
LABEL_7:
        if ( *a1 == v6 )
          return 0;
        goto LABEL_9;
      }
    }
  }
  else
  {
    v6 = sub_8D45C();
    if ( !v6 )
    {
      sub_B17C4(v5, &unk_202E00);
      goto LABEL_9;
    }
  }
  if ( *(_DWORD *)v5 != 1 )
  {
    sub_D0048(20, 103, 254, "ssl/ssl_asn1.c", 262);
    goto LABEL_6;
  }
  v8 = *(_DWORD *)(v5 + 4);
  v9 = v8 >> 8 == 3;
  if ( v8 >> 8 != 3 )
    v9 = v8 >> 8 == 254;
  v10 = !v9;
  if ( v8 == 256 )
    v11 = 0;
  else
    v11 = v10 & 1;
  if ( v11 )
  {
    sub_D0048(20, 103, 259, "ssl/ssl_asn1.c", 269);
    goto LABEL_6;
  }
  v12 = *(_DWORD **)(v5 + 8);
  *(_DWORD *)v6 = v8;
  if ( *v12 != 2 )
  {
    sub_D0048(20, 103, 137, "ssl/ssl_asn1.c", 276);
    goto LABEL_6;
  }
  v13 = *(unsigned __int8 *)(v12[2] + 1) | 0x3000000 | (*(unsigned __int8 *)v12[2] << 8);
  *(_DWORD *)(v6 + 444) = v13;
  v14 = sub_8253C(v13);
  *(_DWORD *)(v6 + 440) = v14;
  if ( !v14 )
    goto LABEL_6;
  v15 = *(_DWORD *)(v5 + 20);
  if ( v15 && (v16 = *(_DWORD *)v15) != 0 )
  {
    if ( v16 > 0x20 )
      goto LABEL_6;
    v38 = *(_DWORD **)(v5 + 20);
    memcpy((void *)(v6 + 332), *(const void **)(v15 + 8), v16);
    *(_DWORD *)(v6 + 328) = *v38;
  }
  else
  {
    *(_DWORD *)(v6 + 328) = 0;
  }
  v17 = *(_DWORD *)(v5 + 16);
  if ( v17 )
  {
    v18 = *(_DWORD *)v17;
    if ( *(_DWORD *)v17 )
    {
      if ( v18 > 0x100 )
        goto LABEL_6;
      v39 = *(size_t **)(v5 + 16);
      memcpy((void *)(v6 + 72), *(const void **)(v17 + 8), v18);
      v18 = *v39;
    }
  }
  else
  {
    v18 = 0;
  }
  v19 = *(_QWORD *)(v5 + 32);
  *(_DWORD *)(v6 + 4) = v18;
  if ( !v19 )
    LODWORD(v19) = time(0);
  v20 = *(_QWORD *)(v5 + 40);
  *(_DWORD *)(v6 + 432) = v19;
  v21 = *(_DWORD *)(v6 + 412);
  v22 = v20 | HIDWORD(v20);
  if ( !v20 )
    LODWORD(v20) = 3;
  *(_DWORD *)(v6 + 428) = v20;
  X509_free(v21, v22, v20);
  v23 = *(_DWORD *)(v5 + 52);
  *(_DWORD *)(v6 + 412) = *(_DWORD *)(v5 + 48);
  *(_DWORD *)(v5 + 48) = 0;
  if ( v23 && (v24 = *(_DWORD *)v23) != 0 )
  {
    if ( v24 > 0x20 )
      goto LABEL_6;
    v40 = (_DWORD *)v23;
    memcpy((void *)(v6 + 368), *(const void **)(v23 + 8), v24);
    *(_DWORD *)(v6 + 364) = *v40;
  }
  else
  {
    *(_DWORD *)(v6 + 364) = 0;
  }
  v25 = *(_DWORD **)(v5 + 60);
  v26 = *(_DWORD *)(v6 + 460);
  *(_DWORD *)(v6 + 420) = *(_DWORD *)(v5 + 56);
  CRYPTO_free(v26, "ssl/ssl_asn1.c", 213);
  *(_DWORD *)(v6 + 460) = 0;
  if ( v25 )
  {
    v27 = sub_E9EF4(v25[2], *v25, "ssl/ssl_asn1.c", 217);
    *(_DWORD *)(v6 + 460) = v27;
    if ( !v27 )
      goto LABEL_6;
  }
  if ( !sub_A95B4((int *)(v6 + 400), *(_DWORD **)(v5 + 80)) || !sub_A95B4((int *)(v6 + 404), *(_DWORD **)(v5 + 84)) )
    goto LABEL_6;
  v28 = *(_DWORD *)(v5 + 72);
  *(_DWORD *)(v6 + 472) = *(_DWORD *)(v5 + 64);
  *(_DWORD *)(v6 + 476) = v28;
  CRYPTO_free(*(_DWORD *)(v6 + 464), "ssl/ssl_asn1.c", 331);
  v29 = *(int **)(v5 + 76);
  if ( v29 )
  {
    v30 = *v29;
    *(_DWORD *)(v6 + 464) = v29[2];
    *(_DWORD *)(v6 + 468) = v30;
    v29[2] = 0;
  }
  else
  {
    *(_DWORD *)(v6 + 464) = 0;
  }
  v31 = *(_DWORD *)(v5 + 12);
  if ( v31 )
  {
    if ( *(_DWORD *)v31 != 1 )
    {
      sub_D0048(20, 103, 271, "ssl/ssl_asn1.c", 342);
      goto LABEL_6;
    }
    *(_DWORD *)(v6 + 436) = **(unsigned __int8 **)(v31 + 8);
  }
  else
  {
    *(_DWORD *)(v6 + 436) = 0;
  }
  if ( !sub_A95B4((int *)(v6 + 496), *(_DWORD **)(v5 + 88)) )
  {
LABEL_6:
    sub_B17C4(v5, &unk_202E00);
    if ( a1 )
      goto LABEL_7;
LABEL_9:
    sub_8D6A4(v6);
    return 0;
  }
  v32 = *(_DWORD *)(v5 + 104);
  *(_DWORD *)(v6 + 508) = *(_DWORD *)(v5 + 96);
  *(_DWORD *)(v6 + 480) = v32;
  CRYPTO_free(*(_DWORD *)(v6 + 484), "ssl/ssl_asn1.c", 359);
  v33 = *(int **)(v5 + 108);
  if ( v33 )
  {
    v34 = *v33;
    *(_DWORD *)(v6 + 484) = v33[2];
    *(_DWORD *)(v6 + 488) = v34;
    v33[2] = 0;
  }
  else
  {
    *(_DWORD *)(v6 + 484) = 0;
    *(_DWORD *)(v6 + 488) = 0;
  }
  v35 = *(_DWORD *)(v6 + 500);
  *(_BYTE *)(v6 + 492) = *(_DWORD *)(v5 + 112);
  CRYPTO_free(v35, "ssl/ssl_asn1.c", 371);
  v36 = *(int **)(v5 + 116);
  if ( v36 )
  {
    v37 = *v36;
    *(_DWORD *)(v6 + 500) = v36[2];
    *(_DWORD *)(v6 + 504) = v37;
    v36[2] = 0;
  }
  else
  {
    *(_DWORD *)(v6 + 500) = 0;
    *(_DWORD *)(v6 + 504) = 0;
  }
  sub_B17C4(v5, &unk_202E00);
  if ( a1 )
  {
    if ( !*a1 )
      *a1 = v6;
  }
  *a2 = v41;
  return v6;
}
