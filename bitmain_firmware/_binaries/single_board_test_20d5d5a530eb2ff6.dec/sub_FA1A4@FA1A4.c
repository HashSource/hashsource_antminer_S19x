int __fastcall sub_FA1A4(int **a1, char *s1, int a3)
{
  int v6; // r5
  _BYTE *v8; // r4
  int v9; // [sp+Ch] [bp-8h] BYREF

  if ( !a3 )
  {
    v6 = 0;
    sub_D0048(4, 144, 147, (int)"crypto/rsa/rsa_pmeth.c", 593);
    return v6;
  }
  if ( strcmp(s1, "rsa_padding_mode") )
  {
    if ( !strcmp(s1, "rsa_pss_saltlen") )
    {
      if ( strcmp((const char *)a3, "digest")
        && (*(_BYTE *)a3 != 109 || *(_BYTE *)(a3 + 1) != 97 || *(_BYTE *)(a3 + 2) != 120 || *(_BYTE *)(a3 + 3)) )
      {
        if ( strcmp((const char *)a3, "auto") )
          strtol((const char *)a3, 0, 10);
      }
      return sub_F89C8(a1, 24);
    }
    if ( !strcmp(s1, "rsa_keygen_bits") )
      goto LABEL_38;
    if ( !strcmp(s1, "rsa_keygen_pubexp") )
    {
      v9 = 0;
      v6 = sub_135CF4(&v9, a3);
      if ( v6 )
      {
        v6 = sub_F89C8(a1, 4);
        if ( v6 <= 0 )
          sub_B895C(v9);
      }
      return v6;
    }
    if ( !strcmp(s1, "rsa_keygen_primes") )
    {
LABEL_38:
      strtol((const char *)a3, 0, 10);
      return sub_F89C8(a1, 4);
    }
    else if ( !strcmp(s1, "rsa_mgf1_md") )
    {
      return sub_DB8C0((int)a1, 1016, 4101, a3);
    }
    else
    {
      if ( **a1 != 912 )
        goto LABEL_24;
      if ( !strcmp(s1, "rsa_pss_keygen_mgf1_md") )
        return sub_DB8C0((int)a1, 4, 4101, a3);
      if ( !strcmp(s1, "rsa_pss_keygen_md") )
        return sub_DB8C0((int)a1, 4, 1, a3);
      if ( strcmp(s1, "rsa_pss_keygen_saltlen") )
      {
LABEL_24:
        if ( !strcmp(s1, "rsa_oaep_md") )
          return sub_DB8C0((int)a1, 768, 4105, a3);
        v6 = strcmp(s1, "rsa_oaep_label");
        if ( v6 )
          return -2;
        v8 = sub_E9FB4((const char *)a3, &v9);
        if ( v8 )
        {
          v6 = sub_DB77C((int)a1, 6, 768);
          if ( v6 <= 0 )
            CRYPTO_free(v8);
        }
        return v6;
      }
      strtol((const char *)a3, 0, 10);
      return sub_DB77C((int)a1, 912, 4);
    }
  }
  if ( strcmp((const char *)a3, "pkcs1")
    && strcmp((const char *)a3, "sslv23")
    && strcmp((const char *)a3, "none")
    && strcmp((const char *)a3, "oeap")
    && strcmp((const char *)a3, "oaep")
    && strcmp((const char *)a3, "x931")
    && (*(_BYTE *)a3 != 112 || *(_BYTE *)(a3 + 1) != 115 || *(_BYTE *)(a3 + 2) != 115 || *(_BYTE *)(a3 + 3)) )
  {
    v6 = -2;
    sub_D0048(4, 144, 118, (int)"crypto/rsa/rsa_pmeth.c", 614);
    return v6;
  }
  return sub_F89C8(a1, -1);
}
