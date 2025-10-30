int __fastcall sub_EA8F0(int a1)
{
  _DWORD *v2; // r6
  int j; // r4
  _DWORD *v4; // r3
  _DWORD *v5; // r0
  int result; // r0
  int i; // r4
  void *v8; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r3
  void *v12; // [sp+8h] [bp-10h]
  void *v13; // [sp+Ch] [bp-Ch]
  void *v14; // [sp+10h] [bp-8h]
  void *v15; // [sp+14h] [bp-4h]

  v13 = 0;
  v12 = 0;
  v14 = 0;
  v15 = 0;
  if ( !dword_6E1AA8 )
  {
    result = sub_DF6B4(
               (unsigned __int8 *(__fastcall *)(unsigned __int8 *))sub_EA7C4,
               (int (**)(const char *, const char *))((char *)&loc_EA724 + 1));
    dword_6E1AA8 = result;
    if ( !result )
      return result;
  }
  v2 = (_DWORD *)sub_EB288(a1);
  if ( !v2 )
  {
LABEL_18:
    for ( i = 0; i != 4; ++i )
    {
      v8 = *(&v12 + i);
      CRYPTO_free(v8);
    }
    ASN1_OBJECT_free(v2, v9, v10, v11);
    return 0;
  }
  v15 = CRYPTO_malloc((void *)8);
  if ( !v15
    || v2[3] && *(_DWORD *)(a1 + 16) && (v12 = CRYPTO_malloc((void *)8)) == 0
    || *v2 && (v13 = CRYPTO_malloc((void *)8)) == 0
    || v2[1] && (v14 = CRYPTO_malloc((void *)8)) == 0 )
  {
    sub_D0048(8, 105, 65, (int)"crypto/objects/obj_dat.c", 212);
    goto LABEL_18;
  }
  for ( j = 0; j != 4; ++j )
  {
    v4 = *(&v12 + j);
    if ( v4 )
    {
      *v4 = j;
      v4[1] = v2;
      v5 = sub_DF7A0((int *)dword_6E1AA8, v4);
      CRYPTO_free(v5);
    }
  }
  result = v2[2];
  v2[5] &= 0xFFFFFFF2;
  return result;
}
