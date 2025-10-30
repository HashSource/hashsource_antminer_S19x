int *__fastcall sub_16120C(_DWORD *a1, int *a2, int (__fastcall *a3)(_BYTE *, int, _DWORD, char *), char *a4)
{
  int *v5; // r5
  int *v6; // r4
  char *v7; // r8
  unsigned __int8 *v8; // r2
  int v9; // r8
  _DWORD *v10; // r0
  signed int v11; // r0
  int (__fastcall **v12)(int *, void **, int); // r3
  int v13; // r2
  int v14; // r3
  int v15; // r2
  int v16; // r0
  int v17; // r4
  int v18; // r0
  bool v19; // cc
  unsigned int v20; // r1
  void **v21; // r0
  bool v22; // zf
  _DWORD *v24; // r0
  _DWORD *v25; // r0
  __int16 v26; // r0
  int *v30; // [sp+2Ch] [bp-38h]
  int (__fastcall *v31)(int *, void **, int); // [sp+30h] [bp-34h]
  unsigned __int8 *v32; // [sp+34h] [bp-30h]
  char *s1; // [sp+38h] [bp-2Ch] BYREF
  char *s; // [sp+3Ch] [bp-28h] BYREF
  int v35; // [sp+40h] [bp-24h] BYREF
  int v36; // [sp+44h] [bp-20h] BYREF
  int v37; // [sp+48h] [bp-1Ch] BYREF
  int v38[6]; // [sp+4Ch] [bp-18h] BYREF

  v5 = a2;
  s1 = 0;
  s = 0;
  v35 = 0;
  if ( !a2 )
  {
    v5 = (int *)sub_10BFCC();
    if ( !v5 )
    {
      v6 = 0;
      sub_D0048(9, 116, 65, (int)"crypto/pem/pem_info.c", 54);
      goto LABEL_33;
    }
  }
  v6 = (int *)sub_12EDE0();
  if ( !v6 )
    goto LABEL_33;
  while ( 2 )
  {
    if ( !sub_EE7A4(a1, &s1, (void **)&s, &v35, &v37) )
    {
      v26 = sub_D065C();
      if ( (v26 & 0xFFF) != 0x6C )
        goto LABEL_33;
      sub_D00F0();
      if ( *v6 || v6[1] || v6[2] || v6[9] )
      {
        if ( !sub_10BD3C(v5, (int)v6) )
          goto LABEL_33;
        v6 = 0;
      }
      X509_INFO_free((int)v6);
      goto LABEL_38;
    }
    while ( 1 )
    {
      v7 = s1;
      if ( strcmp(s1, "CERTIFICATE") )
      {
        if ( strcmp(v7, "X509 CERTIFICATE") )
          break;
      }
      if ( !*v6 )
      {
        v30 = v6;
        v31 = d2i_X509;
LABEL_13:
        v8 = (unsigned __int8 *)s;
        v9 = 0;
        goto LABEL_14;
      }
LABEL_8:
      if ( sub_10BD3C(v5, (int)v6) )
      {
        v6 = (int *)sub_12EDE0();
        if ( v6 )
          continue;
      }
      goto LABEL_33;
    }
    if ( !strcmp(v7, "TRUSTED CERTIFICATE") )
    {
      if ( *v6 )
        goto LABEL_8;
      v30 = v6;
      v31 = d2i_X509_AUX;
      goto LABEL_13;
    }
    if ( !strcmp(v7, "X509 CRL") )
    {
      if ( !v6[1] )
      {
        v30 = v6 + 1;
        v31 = d2i_X509_CRL;
        goto LABEL_13;
      }
      goto LABEL_8;
    }
    if ( !strcmp(v7, "RSA PRIVATE KEY") )
    {
      if ( !v6[2] )
      {
        v6[9] = 0;
        v6[8] = 0;
        v10 = sub_12EE94();
        v6[2] = (int)v10;
        if ( v10 )
        {
          v30 = v10 + 3;
          v9 = 6;
          v32 = (unsigned __int8 *)s;
          v11 = strlen(s);
          v12 = (int (__fastcall **)(int *, void **, int))&d2i_RSAPrivateKey_ptr;
          goto LABEL_27;
        }
        goto LABEL_33;
      }
      goto LABEL_8;
    }
    if ( !strcmp(v7, "DSA PRIVATE KEY") )
    {
      if ( !v6[2] )
      {
        v6[9] = 0;
        v6[8] = 0;
        v25 = sub_12EE94();
        v6[2] = (int)v25;
        if ( !v25 )
          goto LABEL_33;
        v30 = v25 + 3;
        v9 = 116;
        v32 = (unsigned __int8 *)s;
        v11 = strlen(s);
        v12 = (int (__fastcall **)(int *, void **, int))&d2i_DSAPrivateKey_ptr;
LABEL_27:
        v8 = v32;
        v31 = *v12;
        if ( v11 > 10 )
        {
          if ( !sub_ED848(v32, v6 + 3) )
            goto LABEL_33;
          v13 = v35;
          v35 = 0;
          v14 = v37;
          v7 = s1;
          v6[9] = v13;
          v6[8] = v14;
LABEL_19:
          CRYPTO_free(v7);
          s1 = 0;
          CRYPTO_free(s);
          s = 0;
          CRYPTO_free((void *)v35);
          v35 = 0;
          continue;
        }
LABEL_14:
        if ( !sub_ED848(v8, v38) || !sub_ED6F8((_DWORD **)v38, (char *)v35, &v37, a3, a4) )
          goto LABEL_33;
        v36 = v35;
        if ( v9 )
        {
          if ( sub_AE3A8(v9, v30, &v36, v37) )
          {
LABEL_18:
            v7 = s1;
            goto LABEL_19;
          }
          v15 = 192;
        }
        else
        {
          if ( v31(v30, (void **)&v36, v37) )
            goto LABEL_18;
          v15 = 196;
        }
        sub_D0048(9, 116, 13, (int)"crypto/pem/pem_info.c", v15);
        goto LABEL_33;
      }
      goto LABEL_8;
    }
    break;
  }
  if ( strcmp(v7, "EC PRIVATE KEY") )
    goto LABEL_19;
  if ( v6[2] )
    goto LABEL_8;
  v6[9] = 0;
  v6[8] = 0;
  v24 = sub_12EE94();
  v6[2] = (int)v24;
  if ( v24 )
  {
    v30 = v24 + 3;
    v9 = 408;
    v32 = (unsigned __int8 *)s;
    v11 = strlen(s);
    v12 = (int (__fastcall **)(int *, void **, int))&d2i_ECPrivateKey_ptr;
    goto LABEL_27;
  }
LABEL_33:
  v16 = (int)v6;
  v17 = 0;
  X509_INFO_free(v16);
  while ( 1 )
  {
    v19 = v17 < sub_10C010((int)v5);
    v20 = v17;
    v21 = (void **)v5;
    ++v17;
    if ( !v19 )
      break;
    v18 = sub_10C01C(v5, v20);
    X509_INFO_free(v18);
  }
  v22 = a2 == v5;
  v5 = 0;
  if ( !v22 )
    sub_10BDB4(v21);
LABEL_38:
  CRYPTO_free(s1);
  CRYPTO_free(s);
  CRYPTO_free((void *)v35);
  return v5;
}
