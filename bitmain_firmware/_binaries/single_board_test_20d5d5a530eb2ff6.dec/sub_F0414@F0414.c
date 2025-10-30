int __fastcall sub_F0414(int a1)
{
  int v2; // r0
  char *v3; // r0
  char *v4; // r0
  int result; // r0
  _DWORD *v6; // r4
  int *v7; // r0
  int *v8; // r9
  int v9; // r2
  _BYTE *v10; // r0
  int v11; // r2
  int v12; // [sp+Ch] [bp-10h] BYREF
  _BYTE *v13; // [sp+10h] [bp-Ch] BYREF
  void *v14[2]; // [sp+14h] [bp-8h] BYREF

  v2 = **(_DWORD **)(a1 + 8);
  v12 = 0;
  v13 = 0;
  v3 = sub_EAC84(v2);
  v4 = sub_EAAB4((unsigned int)v3);
  result = sub_D99DC((int)v4);
  v6 = (_DWORD *)result;
  if ( result )
  {
    v7 = (int *)sub_D14F4();
    v8 = v7;
    if ( !v7 )
    {
      sub_D0048(33, 139, 65, (int)"crypto/pkcs7/pk7_doit.c", 834);
      v10 = v13;
      goto LABEL_13;
    }
    if ( sub_D9454(v7, &v12, v6, 0, *(_DWORD *)(a1 + 28)) <= 0 )
      goto LABEL_12;
    if ( sub_DB77C(v12, -1, 8) <= 0 )
    {
      v11 = 843;
LABEL_17:
      sub_D0048(33, 139, 152, (int)"crypto/pkcs7/pk7_doit.c", v11);
      v10 = v13;
      goto LABEL_13;
    }
    v9 = sub_B0FDC(*(size_t **)(a1 + 12), &v13, PKCS7_ATTR_SIGN_it);
    v10 = v13;
    if ( v13 )
    {
      if ( sub_D16D8((int)v8, (int)v13, v9) <= 0 || (CRYPTO_free(v13), v13 = 0, sub_D9644(v8, 0, (int)v14) <= 0) )
      {
LABEL_12:
        v10 = v13;
        goto LABEL_13;
      }
      v10 = CRYPTO_malloc(v14[0]);
      v13 = v10;
      if ( v10 )
      {
        if ( sub_D9644(v8, (int)v10, (int)v14) > 0 )
        {
          if ( sub_DB77C(v12, -1, 8) > 0 )
          {
            sub_D1504(v8);
            sub_AE174(*(_DWORD **)(a1 + 20), (int)v13, (int)v14[0]);
            return 1;
          }
          v11 = 865;
          goto LABEL_17;
        }
        goto LABEL_12;
      }
    }
LABEL_13:
    CRYPTO_free(v10);
    sub_D1504(v8);
    return 0;
  }
  return result;
}
