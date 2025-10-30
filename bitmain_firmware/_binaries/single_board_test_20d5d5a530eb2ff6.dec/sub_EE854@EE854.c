int __fastcall sub_EE854(
        int *a1,
        int *a2,
        char **a3,
        int a4,
        _DWORD *a5,
        int (__fastcall *a6)(_BYTE *, int, _DWORD, char *),
        char *s,
        char a8)
{
  char *v9; // r4
  int v10; // r4
  void *v11; // r0
  int v13; // r7
  int v14; // r7
  int v15; // r2
  size_t v16; // r0
  int v17; // r4
  int v18; // r2
  size_t v19; // r0
  int v20; // r3
  char *s1; // [sp+2Ch] [bp-8h] BYREF
  void *v25; // [sp+30h] [bp-4h] BYREF
  int v26; // [sp+34h] [bp+0h] BYREF
  int v27; // [sp+38h] [bp+4h] BYREF
  _DWORD *v28[6]; // [sp+3Ch] [bp+8h] BYREF

  v9 = 0;
  s1 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( (a8 & 1) != 0 )
      {
        ((void (__fastcall *)(char *, _DWORD, const char *, int))loc_E18E0)(v9, 0, "crypto/pem/pem_lib.c", 221);
        ((void (__fastcall *)(void *, _DWORD, const char *, int))loc_E18E0)(v25, 0, "crypto/pem/pem_lib.c", 221);
        ((void (__fastcall *)(int, int, const char *, int))loc_E18E0)(v26, v27, "crypto/pem/pem_lib.c", 221);
      }
      else
      {
        CRYPTO_free(v9);
        CRYPTO_free(v25);
        CRYPTO_free((void *)v26);
      }
      if ( !sub_EE0F8(a5, &s1, &v25, &v26, &v27, a8) )
      {
        v10 = 0;
        if ( (sub_D0760() & 0xFFF) == 0x6C )
          sub_D1240(2, "Expecting: ", a4);
        return v10;
      }
      v9 = s1;
      if ( !strcmp(s1, (const char *)a4) )
        goto LABEL_9;
      if ( !strcmp((const char *)a4, "ANY PRIVATE KEY") )
      {
        if ( !strcmp(v9, "ENCRYPTED PRIVATE KEY") )
          goto LABEL_9;
        if ( !strcmp(v9, "PRIVATE KEY") )
          goto LABEL_9;
        v18 = sub_EE81C(v9, "PRIVATE KEY");
        if ( v18 > 0 )
        {
          v19 = sub_AD9B8(0, v9, v18);
          if ( v19 )
          {
            if ( *(_DWORD *)(v19 + 96) )
              goto LABEL_9;
          }
        }
        goto LABEL_37;
      }
      if ( strcmp((const char *)a4, "PARAMETERS") )
        break;
      v15 = sub_EE81C(v9, "PARAMETERS");
      if ( v15 > 0 )
      {
        v16 = sub_AD9B8((size_t)v28, v9, v15);
        if ( v16 )
        {
          v17 = *(_DWORD *)(v16 + 60);
          sub_CDDF8((int)v28[0]);
          if ( v17 )
            goto LABEL_9;
        }
      }
LABEL_37:
      v9 = s1;
    }
    if ( !strcmp(v9, "X9.42 DH PARAMETERS") && !strcmp((const char *)a4, "DH PARAMETERS") )
      break;
    v13 = strcmp(v9, "X509 CERTIFICATE");
    if ( !v13 && !strcmp((const char *)a4, "CERTIFICATE") )
      break;
    if ( !strcmp(v9, "NEW CERTIFICATE REQUEST") && !strcmp((const char *)a4, "CERTIFICATE REQUEST") )
      break;
    if ( !strcmp(v9, "CERTIFICATE") )
    {
      if ( !strcmp((const char *)a4, "TRUSTED CERTIFICATE") || !strcmp((const char *)a4, "PKCS7") )
        break;
      if ( *(_BYTE *)a4 == 67 )
      {
        v14 = *(unsigned __int8 *)(a4 + 1);
        if ( v14 == 77 && *(_BYTE *)(a4 + 2) == 83 && !*(_BYTE *)(a4 + 3) )
          break;
        if ( !strcmp(v9, "PKCS7") )
        {
LABEL_49:
          if ( v14 == 77 && *(_BYTE *)(a4 + 2) == 83 && !*(_BYTE *)(a4 + 3) )
            break;
        }
      }
    }
    else
    {
      if ( !v13 && !strcmp((const char *)a4, "TRUSTED CERTIFICATE")
        || !strcmp(v9, "PKCS #7 SIGNED DATA") && !strcmp((const char *)a4, "PKCS7") )
      {
        break;
      }
      if ( !strcmp(v9, "PKCS7") && *(_BYTE *)a4 == 67 )
      {
        v14 = *(unsigned __int8 *)(a4 + 1);
        goto LABEL_49;
      }
    }
  }
LABEL_9:
  if ( sub_ED848((unsigned __int8 *)v25, (int *)v28) && sub_ED6F8(v28, (char *)v26, &v27, a6, s) )
  {
    v20 = v27;
    *a1 = v26;
    *a2 = v20;
    if ( a3 )
    {
      v10 = 1;
      v11 = v25;
      *a3 = s1;
      if ( (a8 & 1) != 0 )
        goto LABEL_60;
LABEL_13:
      CRYPTO_free(v11);
      goto LABEL_14;
    }
    v10 = 1;
  }
  else
  {
    v10 = 0;
  }
  if ( (a8 & 1) == 0 )
  {
    CRYPTO_free(s1);
    v11 = v25;
    goto LABEL_13;
  }
  ((void (__fastcall *)(char *, _DWORD, const char *, int))loc_E18E0)(s1, 0, "crypto/pem/pem_lib.c", 221);
LABEL_60:
  ((void (*)(void))loc_E18E0)();
LABEL_14:
  if ( v10 )
    return 1;
  if ( (a8 & 1) != 0 )
  {
    ((void (__fastcall *)(int, int, const char *, int))loc_E18E0)(v26, v27, "crypto/pem/pem_lib.c", 221);
    return v10;
  }
  CRYPTO_free((void *)v26);
  return 0;
}
