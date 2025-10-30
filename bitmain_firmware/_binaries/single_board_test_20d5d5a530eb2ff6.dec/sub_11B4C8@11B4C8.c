char ***__fastcall sub_11B4C8(int a1, int a2, unsigned int a3, int a4, _BYTE *a5)
{
  _DWORD *v9; // r0
  _DWORD *v10; // r6
  int v11; // r10
  size_t *v12; // r8
  unsigned __int8 *v13; // r2
  void *v14; // r7
  _DWORD *v15; // r5
  _BYTE *v16; // r3
  char ***v17; // r4
  int v18; // r1
  char *v20; // r0
  int (*v21)(void); // r3
  _BYTE *v22; // r0
  void (__fastcall *v23)(size_t *, _BYTE **); // r3
  int (*v24)(void); // r7
  unsigned int v25; // r0
  char *v26; // r0
  _BYTE *v27; // [sp+8h] [bp-8h] BYREF
  _BYTE *v28; // [sp+Ch] [bp-4h] BYREF

  if ( a3 )
  {
    v9 = (_DWORD *)sub_11DEC8(a3);
    v10 = v9;
    if ( v9 )
    {
      if ( v9[10] )
      {
        if ( *a5 == 64 )
          v11 = sub_13B390(a1, a5 + 1);
        else
          v11 = sub_122740(a5);
        if ( v11 && sub_10C010(v11) > 0 )
        {
          v12 = (size_t *)((int (__fastcall *)(_DWORD *, int, int))v10[10])(v10, a2, v11);
          if ( *a5 != 64 )
            sub_10BFDC(v11, (void (__fastcall *)(int))X509V3_conf_free);
LABEL_10:
          if ( v12 )
            goto LABEL_11;
          return 0;
        }
        sub_D0048(34, 151, 105, (int)"crypto/x509v3/v3_conf.c", 93);
        v20 = sub_EAAB4(a3);
        sub_D1240(4, "name=", v20, ",section=", a5);
        if ( *a5 == 64 )
          return 0;
        v17 = 0;
        sub_10BFDC(v11, (void (__fastcall *)(int))X509V3_conf_free);
      }
      else
      {
        v21 = (int (*)(void))v9[8];
        if ( v21 )
        {
          v12 = (size_t *)v21();
          goto LABEL_10;
        }
        v24 = (int (*)(void))v9[12];
        if ( v24 )
        {
          if ( *(_DWORD *)(a2 + 24) && *(_DWORD *)(a2 + 20) )
          {
            v12 = (size_t *)v24();
            if ( v12 )
            {
LABEL_11:
              v13 = (unsigned __int8 *)v10[2];
              v27 = 0;
              if ( v13 )
              {
                v14 = (void *)sub_B0FDC(v12, &v27, v13);
                if ( (int)v14 < 0 )
                  goto LABEL_29;
              }
              else
              {
                v14 = (void *)((int (__fastcall *)(size_t *, _DWORD))v10[6])(v12, 0);
                v22 = CRYPTO_malloc(v14);
                v27 = v22;
                if ( !v22 )
                {
                  v15 = 0;
                  goto LABEL_30;
                }
                v23 = (void (__fastcall *)(size_t *, _BYTE **))v10[6];
                v28 = v22;
                v23(v12, &v28);
              }
              v15 = (_DWORD *)sub_B2068();
              if ( v15 )
              {
                v16 = v27;
                v27 = 0;
                *v15 = v14;
                v15[2] = v16;
                v17 = sub_1104F8(0, a3, a4, (int)v15);
                if ( v17 )
                {
LABEL_15:
                  j_ASN1_STRING_free(v15);
                  v18 = v10[2];
                  if ( v18 )
                  {
                    sub_B17C4((int)v12, v18);
                    return v17;
                  }
                  ((void (__fastcall *)(size_t *))v10[4])(v12);
                  return v17;
                }
LABEL_30:
                v17 = 0;
                sub_D0048(34, 135, 65, (int)"crypto/x509v3/v3_conf.c", 168);
                CRYPTO_free(v27);
                goto LABEL_15;
              }
LABEL_29:
              v15 = 0;
              goto LABEL_30;
            }
          }
          else
          {
            sub_D0048(34, 151, 136, (int)"crypto/x509v3/v3_conf.c", 110);
          }
          return 0;
        }
        sub_D0048(34, 151, 103, (int)"crypto/x509v3/v3_conf.c", 117);
        v25 = a3;
        v17 = 0;
        v26 = sub_EAAB4(v25);
        sub_D1240(2, "name=", v26);
      }
    }
    else
    {
      v17 = 0;
      sub_D0048(34, 151, 129, (int)"crypto/x509v3/v3_conf.c", 82);
    }
    return v17;
  }
  sub_D0048(34, 151, 130, (int)"crypto/x509v3/v3_conf.c", 78);
  return 0;
}
