int __fastcall sub_125908(int *a1, unsigned __int8 **a2, int a3)
{
  int v6; // r4
  int v7; // r6
  unsigned int v8; // r7
  char *v9; // r6
  size_t v10; // r9
  _BYTE *v11; // r0
  _BYTE *v12; // r10
  __int16 v14; // r2

  if ( a3 <= 0 )
  {
    v14 = 152;
    v6 = 0;
    goto LABEL_18;
  }
  if ( a1 && (v6 = *a1) != 0 )
  {
    v7 = (int)*a2;
    v8 = **a2;
    if ( v8 > 7 )
    {
      sub_D0048(13, 189, 220, (int)"crypto/asn1/a_bitstr.c", 137);
LABEL_12:
      if ( *a1 == v6 )
        return 0;
LABEL_13:
      j_ASN1_STRING_free_0(v6);
      return 0;
    }
  }
  else
  {
    v6 = sub_B211C();
    if ( !v6 )
      return 0;
    v7 = (int)*a2;
    v8 = **a2;
    if ( v8 > 7 )
    {
      v14 = 220;
      goto LABEL_18;
    }
  }
  v9 = (char *)(v7 + 1);
  v10 = a3 - 1;
  *(_DWORD *)(v6 + 12) = v8 | 8 | *(_DWORD *)(v6 + 12) & 0xFFFFFFF0;
  if ( a3 == 1 )
  {
    v12 = 0;
    goto LABEL_8;
  }
  v11 = CRYPTO_malloc((void *)(a3 - 1));
  v12 = v11;
  if ( !v11 )
  {
    v14 = 65;
LABEL_18:
    sub_D0048(13, 189, v14, (int)"crypto/asn1/a_bitstr.c", 137);
    if ( !a1 )
      goto LABEL_13;
    goto LABEL_12;
  }
  memcpy(v11, v9, v10);
  v9 += v10;
  v12[v10 - 1] &= -1 << v8;
LABEL_8:
  *(_DWORD *)v6 = v10;
  CRYPTO_free(*(void **)(v6 + 8));
  *(_DWORD *)(v6 + 8) = v12;
  *(_DWORD *)(v6 + 4) = 3;
  if ( a1 )
    *a1 = v6;
  *a2 = (unsigned __int8 *)v9;
  return v6;
}
