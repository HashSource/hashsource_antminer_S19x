void **__fastcall sub_16FA60(int a1, int *a2, void **a3)
{
  int v3; // r3
  char *v6; // r0
  char *v7; // r6
  int v8; // r2
  int v9; // r1
  void **v10; // r0
  int v11; // r3
  char *v12; // r0
  char *v13; // r5
  void **result; // r0
  void **v15[2]; // [sp+Ch] [bp-8h] BYREF

  v3 = *a2;
  v15[0] = a3;
  if ( v3 )
  {
    v6 = sub_EA090(*(unsigned __int8 **)(v3 + 8), *(_DWORD *)v3);
    v7 = v6;
    if ( !v6 )
    {
      sub_D0048(34, 173, 65, (int)"crypto/x509v3/v3_akey.c", 48);
      return 0;
    }
    if ( !sub_121F9C("keyid", v6, v15) )
    {
      CRYPTO_free(v7);
      v8 = 53;
LABEL_13:
      sub_D0048(34, 173, 11, (int)"crypto/x509v3/v3_akey.c", v8);
      goto LABEL_14;
    }
    CRYPTO_free(v7);
  }
  v9 = a2[1];
  if ( v9 )
  {
    v10 = (void **)sub_16FD74(0, v9, v15[0]);
    if ( !v10 )
    {
      v8 = 61;
      goto LABEL_13;
    }
    v15[0] = v10;
  }
  v11 = a2[2];
  if ( !v11 )
    return v15[0];
  v12 = sub_EA090(*(unsigned __int8 **)(v11 + 8), *(_DWORD *)v11);
  v13 = v12;
  if ( v12 )
  {
    if ( !sub_121F9C("serial", v12, v15) )
    {
      CRYPTO_free(v13);
      v8 = 74;
      goto LABEL_13;
    }
    CRYPTO_free(v13);
    return v15[0];
  }
  sub_D0048(34, 173, 65, (int)"crypto/x509v3/v3_akey.c", 69);
LABEL_14:
  result = 0;
  if ( !a3 )
  {
    sub_10BFDC((int)v15[0], (void (__fastcall *)(int))X509V3_conf_free);
    return 0;
  }
  return result;
}
