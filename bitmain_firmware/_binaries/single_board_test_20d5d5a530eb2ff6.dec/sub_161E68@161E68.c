int __fastcall sub_161E68(int *a1, const char *a2, size_t a3, char *a4, signed int a5, int *a6, _DWORD *a7, int a8)
{
  int *v12; // r5
  int v13; // r4
  int v14; // r0
  void *v15; // r0
  int v16; // r8
  void *v18; // r0
  void *v19; // r0
  int v20[2]; // [sp+Ch] [bp-8h] BYREF

  v12 = (int *)sub_D7A5C();
  if ( v12 )
  {
    v13 = sub_15E23C(*a1, a2, a3, a1[1], (int)v12, a8);
    if ( v13 )
    {
      v14 = sub_D8904((int)v12);
      v15 = CRYPTO_malloc((void *)(v14 + a5));
      v13 = (int)v15;
      if ( v15 )
      {
        if ( sub_D8188(v12, (int)v15, v20, a4, a5) )
        {
          v16 = v20[0];
          if ( sub_D83A0(v12, v13 + v20[0], v20) )
          {
            if ( a7 )
              *a7 = v20[0] + v16;
            if ( a6 )
              *a6 = v13;
          }
          else
          {
            v19 = (void *)v13;
            v13 = 0;
            CRYPTO_free(v19);
            sub_D0048(35, 119, 116, (int)"crypto/pkcs12/p12_decr.c", 63);
          }
        }
        else
        {
          v18 = (void *)v13;
          v13 = 0;
          CRYPTO_free(v18);
          sub_D0048(35, 119, 6, (int)"crypto/pkcs12/p12_decr.c", 54);
        }
      }
      else
      {
        sub_D0048(35, 119, 65, (int)"crypto/pkcs12/p12_decr.c", 47);
      }
    }
    else
    {
      sub_D0048(35, 119, 115, (int)"crypto/pkcs12/p12_decr.c", 41);
    }
  }
  else
  {
    v13 = 0;
    sub_D0048(35, 119, 65, (int)"crypto/pkcs12/p12_decr.c", 33);
  }
  sub_D7A6C(v12);
  return v13;
}
