int __fastcall sub_115C7C(int *a1, const void **a2, int a3, int a4, int a5, int a6, unsigned __int8 a7, int a8)
{
  _BYTE *v10; // r6
  int v11; // r0
  int v12; // r4
  int v13; // r4
  void *v14; // r5
  void **v15; // r0
  size_t *v16; // r0
  _BYTE *v17; // r1
  signed int v19; // r9
  signed int v20; // r4
  _DWORD *i; // r6
  int v22; // r1
  void **v23; // r0
  unsigned int v24; // r1
  void **v25; // r0
  void *v26; // r3
  _BYTE *v27; // [sp+10h] [bp-8h] BYREF
  _DWORD *v28; // [sp+14h] [bp-4h] BYREF

  if ( a3 >= 0x100000 )
    a3 = 0x100000;
  v10 = *a2;
  v27 = *a2;
  v28 = 0;
  v11 = sub_B0394((int *)&v28, (void **)&v27, a3, (int)byte_20F580, a5, a6, a7, a8);
  if ( v11 > 0 )
  {
    v13 = *a1;
    if ( *a1 )
    {
      sub_BAE3C(*(_DWORD *)(v13 + 8));
      sub_10BFDC(*(_DWORD *)v13, (void (__fastcall *)(int))X509_NAME_ENTRY_free);
      CRYPTO_free(*(void **)(v13 + 12));
      CRYPTO_free((void *)v13);
      *a1 = 0;
    }
    v14 = sub_E0740((void *)0x14);
    if ( !v14 )
    {
      sub_D0048(13, 171, 65, (int)"crypto/x509/x_name.c", 105);
      goto LABEL_12;
    }
    v15 = sub_10BFCC();
    *(_DWORD *)v14 = v15;
    if ( !v15 || (v16 = (size_t *)sub_BADF8(), (*((_DWORD *)v14 + 2) = v16) == 0) )
    {
      sub_D0048(13, 171, 65, (int)"crypto/x509/x_name.c", 105);
      sub_10BDB4(*(void ***)v14);
      CRYPTO_free(v14);
      goto LABEL_12;
    }
    v17 = v27;
    *((_DWORD *)v14 + 1) = 1;
    if ( !sub_BAE84(v16, v17 - v10) )
    {
LABEL_11:
      X509_NAME_free((int)v14);
LABEL_12:
      v12 = 0;
      sub_10BFDC((int)v28, sub_115690);
      sub_D0048(13, 158, 58, (int)"crypto/x509/x_name.c", 206);
      return v12;
    }
    v19 = 0;
    memcpy(*(void **)(*((_DWORD *)v14 + 2) + 4), v10, v27 - v10);
    while ( v19 < sub_10C010((int)v28) )
    {
      v20 = 0;
      for ( i = (_DWORD *)sub_10C01C(v28, v19); v20 < sub_10C010((int)i); sub_10C040(i, v24, 0) )
      {
        v22 = sub_10C01C(i, v20);
        v23 = *(void ***)v14;
        *(_DWORD *)(v22 + 8) = v19;
        if ( !sub_10BD3C((int *)v23, v22) )
          goto LABEL_11;
        v24 = v20++;
      }
      ++v19;
    }
    CRYPTO_free(*((void **)v14 + 3));
    v25 = *(void ***)v14;
    *((_DWORD *)v14 + 3) = 0;
    if ( sub_10C010((int)v25) )
    {
      v12 = sub_1157AC((int *)v14);
      if ( !v12 )
        goto LABEL_11;
    }
    else
    {
      v12 = 1;
      *((_DWORD *)v14 + 4) = 0;
    }
    sub_10BFDC((int)v28, (void (__fastcall *)(int))sub_11568C);
    v26 = v27;
    *((_DWORD *)v14 + 1) = 0;
    *a1 = (int)v14;
    *a2 = v26;
    return v12;
  }
  return v11;
}
