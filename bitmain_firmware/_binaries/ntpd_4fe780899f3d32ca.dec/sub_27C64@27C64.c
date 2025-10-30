int __fastcall sub_27C64(const void *a1, unsigned int a2, unsigned int a3)
{
  int v3; // r6
  int v4; // r4
  int pubkey; // r5
  int subject_name; // r0
  char *v7; // r0
  int signature_nid; // r0
  int v9; // r0
  int serialNumber; // r0
  int issuer_name; // r0
  char *v12; // r0
  unsigned int *v13; // r0
  unsigned int *v14; // r0
  int ext_count; // r9
  int i; // r5
  int v17; // r0
  int v18; // r10
  int ext; // r8
  int object; // r0
  int v21; // r0
  _DWORD *data; // r0
  const char *v23; // r5
  const char *v24; // r8
  void *v25; // r0
  _DWORD *v27; // r0
  int error; // r0
  const char *v29; // r0
  int v30; // r0
  const char *v31; // r0
  unsigned __int8 *v35; // [sp+5Ch] [bp-128h]
  const void *v36; // [sp+6Ch] [bp-118h] BYREF
  unsigned __int8 v37[4]; // [sp+70h] [bp-114h] BYREF
  unsigned __int8 v38; // [sp+74h] [bp-110h]
  unsigned __int8 v39; // [sp+75h] [bp-10Fh]
  unsigned __int8 v40; // [sp+76h] [bp-10Eh]
  unsigned __int8 v41; // [sp+77h] [bp-10Dh]
  unsigned __int8 v42; // [sp+78h] [bp-10Ch]
  char v43[256]; // [sp+7Ch] [bp-108h] BYREF

  v36 = a1;
  v3 = d2i_X509(0, &v36, a2);
  if ( !v3 )
  {
    error = ERR_get_error(0);
    v4 = 0;
    v29 = (const char *)ERR_error_string(error, 0);
    sub_64E00(3, "cert_parse: %s", v29);
    return v4;
  }
  v4 = sub_63BA4(0, 84, 0, 1);
  pubkey = X509_get_pubkey(v3);
  *(_DWORD *)(v4 + 8) = pubkey;
  if ( !pubkey )
  {
    v30 = ERR_get_error(0);
    v31 = (const char *)ERR_error_string(v30, 0);
    sub_64E00(3, "cert_parse: %s", v31);
    goto LABEL_25;
  }
  *(_DWORD *)(v4 + 12) = X509_get_version(v3);
  subject_name = X509_get_subject_name(v3);
  X509_NAME_oneline(subject_name, v43, 256);
  v7 = strstr(v43, "CN=");
  if ( !v7 )
  {
    sub_64E00(5, "cert_parse: invalid subject %s", v43);
    goto LABEL_25;
  }
  *(_DWORD *)(v4 + 48) = sub_63D08(v7 + 3);
  signature_nid = X509_get_signature_nid(v3);
  *(_DWORD *)(v4 + 16) = signature_nid;
  v9 = OBJ_nid2sn(signature_nid);
  *(_DWORD *)(v4 + 20) = EVP_get_digestbyname(v9);
  serialNumber = X509_get_serialNumber(v3);
  *(_DWORD *)(v4 + 24) = ASN1_INTEGER_get(serialNumber);
  issuer_name = X509_get_issuer_name(v3);
  X509_NAME_oneline(issuer_name, v43, 256);
  v12 = strstr(v43, "CN=");
  if ( !v12 )
  {
    sub_64E00(5, "cert_parse: invalid issuer %s", v43);
    goto LABEL_25;
  }
  v35 = (unsigned __int8 *)(v4 + 28);
  *(_DWORD *)(v4 + 52) = sub_63D08(v12 + 3);
  v13 = (unsigned int *)X509_get0_notBefore(v3);
  sub_2698C(*v13, v13 + 2, v4 + 28);
  v14 = (unsigned int *)X509_get0_notAfter(v3);
  sub_2698C(*v14, v14 + 2, v4 + 38);
  ext_count = X509_get_ext_count(v3);
  if ( ext_count > 0 )
  {
    for ( i = 0; i != ext_count; ++i )
    {
      while ( 1 )
      {
        ext = X509_get_ext(v3, i);
        object = X509_EXTENSION_get_object();
        v21 = OBJ_obj2nid(object);
        if ( v21 != 82 )
          break;
        ++i;
        data = (_DWORD *)X509_EXTENSION_get_data(ext);
        *(_DWORD *)(v4 + 56) = BN_bin2bn(data[2] + 2, *data - 2, 0);
        if ( ext_count == i )
          goto LABEL_13;
      }
      if ( v21 == 126 )
      {
        v17 = BIO_s_mem();
        v18 = BIO_new(v17);
        X509V3_EXT_print(v18, ext, 0);
        BIO_gets(v18, v43, 256);
        BIO_free(v18);
        if ( !strcmp(v43, "Trust Root") )
        {
          *(_DWORD *)(v4 + 4) |= 1u;
        }
        else if ( !strcmp(v43, "Private") )
        {
          *(_DWORD *)(v4 + 4) |= 8u;
        }
      }
    }
  }
LABEL_13:
  v23 = *(const char **)(v4 + 48);
  v24 = *(const char **)(v4 + 52);
  if ( !strcmp(v23, v24) )
  {
    if ( X509_verify(v3, *(_DWORD *)(v4 + 8)) <= 0 )
    {
      sub_64E00(5, "cert_parse: signature not verified %s", *(const char **)(v4 + 48));
LABEL_25:
      v27 = (_DWORD *)v4;
      v4 = 0;
      sub_27BCC(v27);
      X509_free(v3);
      return v4;
    }
  }
  else if ( !strcmp((const char *)dword_108274, v24) )
  {
    sub_64E00(5, "cert_parse: certificate trail loop %s", v23);
    goto LABEL_25;
  }
  sub_66750(v37, a3, 0);
  if ( sub_268A4(v35, (unsigned __int8 *)(v4 + 38)) > 0 || sub_268A4(v35, v37) < 0 )
  {
    sub_64E00(
      5,
      "cert_parse: invalid times %s first %u-%02u-%02uT%02u:%02u:%02u last %u-%02u-%02uT%02u:%02u:%02u fstamp %u-%02u-%02"
      "uT%02u:%02u:%02u",
      *(const char **)(v4 + 48),
      *(unsigned __int16 *)(v4 + 28),
      *(unsigned __int8 *)(v4 + 32),
      *(unsigned __int8 *)(v4 + 33),
      *(unsigned __int8 *)(v4 + 34),
      *(unsigned __int8 *)(v4 + 35),
      *(unsigned __int8 *)(v4 + 36),
      *(unsigned __int16 *)(v4 + 38),
      *(unsigned __int8 *)(v4 + 42),
      *(unsigned __int8 *)(v4 + 43),
      *(unsigned __int8 *)(v4 + 44),
      *(unsigned __int8 *)(v4 + 45),
      *(unsigned __int8 *)(v4 + 46),
      *(unsigned __int16 *)v37,
      v38,
      v39,
      v40,
      v41,
      v42);
    goto LABEL_25;
  }
  *(_DWORD *)(v4 + 64) = bswap32(a3);
  *(_DWORD *)(v4 + 68) = bswap32(a2);
  v25 = (void *)sub_63BA4(0, a2, 0, 0);
  *(_DWORD *)(v4 + 72) = v25;
  memcpy(v25, a1, a2);
  X509_free(v3);
  return v4;
}
