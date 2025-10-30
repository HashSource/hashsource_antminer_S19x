int __fastcall sub_EEC84(_DWORD *a1, int *a2, int (__fastcall *a3)(_BYTE *, int, _DWORD, char *), char *a4)
{
  int result; // r0
  const char *v6; // r9
  int v7; // r6
  int v8; // r10
  int v9; // r9
  int v10; // r6
  int v11; // r2
  int *v12; // r0
  int v13; // r0
  int v14; // r8
  int v15; // r0
  char *v18; // [sp+20h] [bp-Ch] BYREF
  int v19; // [sp+24h] [bp-8h] BYREF
  int v20; // [sp+28h] [bp-4h] BYREF
  int v21; // [sp+2Ch] [bp+0h] BYREF
  _BYTE v22[1028]; // [sp+30h] [bp+4h] BYREF

  v18 = 0;
  v19 = 0;
  v20 = 0;
  result = sub_EEC00(&v20, &v21, &v18, (int)"ANY PRIVATE KEY", a1, a3, a4);
  if ( result )
  {
    v6 = v18;
    v19 = v20;
    if ( !strcmp(v18, "PRIVATE KEY") )
    {
      v13 = d2i_PKCS8_PRIV_KEY_INFO(0, (int)&v19, v21);
      v14 = v13;
      if ( v13 )
      {
        v10 = sub_D8E18(v13);
        if ( a2 )
        {
          sub_DA240(*a2);
          *a2 = v10;
        }
        sub_AE5FC(v14);
        if ( v10 )
          goto LABEL_13;
      }
    }
    else if ( !strcmp(v6, "ENCRYPTED PRIVATE KEY") )
    {
      v7 = d2i_X509_SIG(0, &v19, v21);
      if ( v7 )
      {
        if ( a3 )
          v8 = a3(v22, 1024, 0, a4);
        else
          v8 = sub_ED544(v22, 1024, 0, a4);
        if ( v8 < 0 )
        {
          sub_D0048(9, 123, 104, (int)"crypto/pem/pem_pkey.c", 64);
          v15 = v7;
          v10 = 0;
          sub_12EF2C(v15);
          goto LABEL_13;
        }
        v9 = sub_EF32C(v7, v22, v8);
        sub_12EF2C(v7);
        sub_E07F8(v22, v8);
        if ( v9 )
        {
          v10 = sub_D8E18(v9);
          if ( a2 )
          {
            sub_DA240(*a2);
            *a2 = v10;
          }
          sub_AE5FC(v9);
          if ( v10 )
            goto LABEL_13;
        }
      }
    }
    else
    {
      v11 = sub_EE81C(v6, "PRIVATE KEY");
      if ( v11 > 0 )
      {
        v12 = (int *)sub_AD9B8(0, v18, v11);
        if ( v12 )
        {
          if ( v12[24] )
          {
            v10 = sub_AE3A8(*v12, a2, &v19, v21);
            if ( v10 )
              goto LABEL_13;
          }
        }
      }
    }
    v10 = 0;
    sub_D0048(9, 123, 13, (int)"crypto/pem/pem_pkey.c", 88);
LABEL_13:
    sub_E1864(v18);
    ((void (__fastcall *)(int, int, const char *, int))loc_E18E0)(v20, v21, "crypto/pem/pem_pkey.c", 91);
    return v10;
  }
  return result;
}
