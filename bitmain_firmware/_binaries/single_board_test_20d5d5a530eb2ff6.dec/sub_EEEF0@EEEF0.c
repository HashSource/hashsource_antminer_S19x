int __fastcall sub_EEEF0(_DWORD *a1, int *a2)
{
  int result; // r0
  int v4; // r5
  _DWORD *v5; // r0
  int v6; // r4
  int (__fastcall *v7)(int, void **, int); // r3
  char *s; // [sp+10h] [bp-10h] BYREF
  void *v9; // [sp+14h] [bp-Ch] BYREF
  void *v10; // [sp+18h] [bp-8h] BYREF
  int v11; // [sp+1Ch] [bp-4h] BYREF

  s = 0;
  v9 = 0;
  v10 = 0;
  result = sub_EEBE4((int *)&v10, &v11, &s, (int)"PARAMETERS", a1, 0, 0);
  if ( result )
  {
    v9 = v10;
    v4 = sub_EE81C(s, "PARAMETERS");
    if ( v4 > 0 )
    {
      v5 = EVP_PKEY_new();
      v6 = (int)v5;
      if ( v5 )
      {
        if ( sub_D9E20(v5, s, v4) )
        {
          v7 = *(int (__fastcall **)(int, void **, int))(*(_DWORD *)(v6 + 12) + 60);
          if ( v7 )
          {
            if ( v7(v6, &v9, v11) )
            {
              if ( a2 )
              {
                sub_DA240(*a2);
                *a2 = v6;
              }
              goto LABEL_11;
            }
          }
        }
        sub_DA240(v6);
      }
    }
    v6 = 0;
    sub_D0048(9, 140, 13, (int)"crypto/pem/pem_pkey.c", 154);
LABEL_11:
    CRYPTO_free(s);
    CRYPTO_free(v10);
    return v6;
  }
  return result;
}
