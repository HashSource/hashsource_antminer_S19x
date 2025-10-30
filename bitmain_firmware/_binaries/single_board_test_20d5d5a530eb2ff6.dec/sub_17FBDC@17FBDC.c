int __fastcall sub_17FBDC(int a1, int a2)
{
  int v3; // r0
  int v4; // r0
  _DWORD *v5; // r9
  unsigned int v6; // r8
  int v7; // r0
  const char *v8; // r5
  int v9; // r10
  char *v10; // r0
  char *v11; // r4
  char *v12; // r7
  unsigned int v13; // r0
  char *v14; // r6
  const char *v15; // r4
  size_t v17; // r11
  void *v18; // r0
  int v19; // r4
  const char *v20; // r1
  void *v21; // r5
  char **v22; // r4

  v3 = sub_BBDB4(a1);
  v4 = sub_13B390(a2, v3);
  v5 = (_DWORD *)v4;
  if ( !v4 )
  {
    sub_D0048(13, 174, 172, (int)"crypto/asn1/asn_moid.c", 32);
    return 0;
  }
  v6 = 0;
  if ( sub_10C010(v4) <= 0 )
    return 1;
  while ( 1 )
  {
    v7 = sub_10C01C(v5, v6);
    v8 = *(const char **)(v7 + 8);
    v9 = *(_DWORD *)(v7 + 4);
    v10 = strrchr(v8, 44);
    v11 = v10;
    if ( v10 )
      break;
    v14 = (char *)v8;
    v19 = v9;
    v21 = 0;
LABEL_15:
    v22 = sub_EB11C(v14, v9, v19);
    CRYPTO_free(v21);
    if ( !v22 )
      goto LABEL_19;
    if ( (int)++v6 >= sub_10C010((int)v5) )
      return 1;
  }
  if ( !v10[1] )
    goto LABEL_19;
  v12 = v10 + 1;
  do
  {
    v13 = (unsigned __int8)*v12;
    v14 = v12++;
  }
  while ( sub_BDB10(v13, 8) );
  while ( sub_BDB10(*(unsigned __int8 *)v8, 8) )
    ++v8;
  v15 = v11 - 1;
  while ( sub_BDB10(*(unsigned __int8 *)v15, 8) )
  {
    if ( v8 == v15-- )
      goto LABEL_19;
  }
  v17 = v15 + 1 - v8;
  v18 = CRYPTO_malloc((void *)(v17 + 1));
  v19 = (int)v18;
  if ( v18 )
  {
    v20 = v8;
    v21 = v18;
    memcpy(v18, v20, v17);
    *(_BYTE *)(v19 + v17) = 0;
    goto LABEL_15;
  }
  sub_D0048(13, 124, 65, (int)"crypto/asn1/asn_moid.c", 87);
LABEL_19:
  sub_D0048(13, 174, 171, (int)"crypto/asn1/asn_moid.c", 38);
  return 0;
}
