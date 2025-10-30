int __fastcall sub_1269C4(int *a1, unsigned __int8 **a2, int a3)
{
  int v6; // r4
  int v8; // r0
  __int16 v9; // r2
  void *v10; // r0
  void *v11; // r7
  size_t v12; // r2
  unsigned __int8 *v13; // r1
  _BOOL4 v14; // r3
  int v15; // r3
  unsigned __int8 *v16; // [sp+8h] [bp-14h] BYREF
  size_t v17; // [sp+Ch] [bp-10h] BYREF
  int v18; // [sp+10h] [bp-Ch] BYREF
  int v19[2]; // [sp+14h] [bp-8h] BYREF

  if ( a1 && (v6 = *a1) != 0 )
  {
    v16 = *a2;
    if ( (sub_ADD48(&v16, (int *)&v17, &v18, v19, a3) & 0x80) != 0 )
    {
      sub_D0048(13, 150, 102, (int)"crypto/asn1/a_int.c", 443);
LABEL_6:
      if ( *a1 == v6 )
        return 0;
LABEL_7:
      ASN1_INTEGER_free(v6);
      return 0;
    }
    if ( v18 != 2 )
    {
      sub_D0048(13, 150, 115, (int)"crypto/asn1/a_int.c", 443);
      goto LABEL_6;
    }
  }
  else
  {
    v8 = sub_B20A4();
    v6 = v8;
    if ( !v8 )
      return 0;
    v16 = *a2;
    *(_DWORD *)(v8 + 4) = 2;
    if ( (sub_ADD48(&v16, (int *)&v17, &v18, v19, a3) & 0x80) != 0 )
    {
      v9 = 102;
      goto LABEL_15;
    }
    if ( v18 != 2 )
    {
      v9 = 115;
      goto LABEL_15;
    }
  }
  v10 = CRYPTO_malloc((void *)(v17 + 1));
  v11 = v10;
  if ( !v10 )
  {
    v9 = 65;
LABEL_15:
    sub_D0048(13, 150, v9, (int)"crypto/asn1/a_int.c", 443);
    if ( !a1 )
      goto LABEL_7;
    goto LABEL_6;
  }
  v12 = v17;
  *(_DWORD *)(v6 + 4) = 2;
  if ( v12 )
  {
    v13 = v16;
    v14 = *v16 == 0;
    if ( v12 == 1 )
      v14 = 0;
    if ( v14 )
    {
      v13 = v16 + 1;
      --v12;
      ++v16;
      v17 = v12;
    }
    memcpy(v10, v13, v12);
    v16 += v17;
  }
  CRYPTO_free(*(void **)(v6 + 8));
  v15 = v17;
  *(_DWORD *)(v6 + 8) = v11;
  *(_DWORD *)v6 = v15;
  if ( a1 )
    *a1 = v6;
  *a2 = v16;
  return v6;
}
