int __fastcall sub_1724C8(int a1, size_t *a2, _DWORD *a3, unsigned int a4, int a5, int a6, _DWORD *a7, int a8)
{
  const char *v11; // r11
  const char *v12; // r5
  char *v13; // r0
  unsigned int v14; // r3
  char v15; // r3
  unsigned int v16; // r8
  int v17; // r10
  int v18; // r0
  int v19; // r4
  int *v20; // r0
  signed int v21; // r9
  char *v22; // r0
  int v23; // r0
  int (__fastcall *v24)(_DWORD, int, _DWORD, void **); // r4
  int v25; // r0
  void *v26; // r4
  int v27; // r8
  int (__fastcall *v28)(int, size_t **, int); // r9
  int v29; // r7
  int v30; // r0
  int v31; // r6
  const char *v33; // r8
  int v34; // r0
  int v35; // r0
  _DWORD *v36; // r0
  int v37; // r8
  int v38; // r9
  int v39; // r6
  const char *v40; // r9
  int v41; // r0
  int v42; // r0
  _DWORD *v43; // r0
  int v44; // r7
  int v45; // r6
  int v47; // [sp+14h] [bp-48h]
  size_t *v48; // [sp+24h] [bp-38h] BYREF
  void *v49; // [sp+28h] [bp-34h] BYREF
  void *v50; // [sp+2Ch] [bp-30h]
  int v51; // [sp+30h] [bp-2Ch]
  char v52[32]; // [sp+34h] [bp-28h] BYREF
  char v53; // [sp+54h] [bp-8h] BYREF

  if ( (a4 & 0x400) != 0 )
    v11 = "application/x-pkcs7-";
  else
    v11 = "application/pkcs7-";
  if ( (a4 & 0x800) != 0 )
    v12 = "\r\n";
  else
    v12 = "\n";
  if ( ((a3 != 0) & (a4 >> 6)) == 0 )
  {
    switch ( a5 )
    {
      case 23:
        v40 = "enveloped-data";
        v33 = "smime.p7m";
        break;
      case 22:
        if ( a6 == 204 )
        {
          v40 = "signed-receipt";
          v33 = "smime.p7m";
        }
        else
        {
          if ( sub_10C010((int)a7) < 0 )
            v40 = "certs-only";
          else
            v40 = "signed-data";
          v33 = "smime.p7m";
        }
        break;
      case 786:
        v40 = "compressed-data";
        v33 = "smime.p7z";
        break;
      default:
        sub_B550C(a1, "MIME-Version: 1.0%s", v12);
        v33 = "smime.p7m";
        sub_B550C(a1, "Content-Disposition: attachment;");
        sub_B550C(a1, " filename=\"%s\"%s", "smime.p7m", v12);
        sub_B550C(a1, "Content-Type: %smime;", v11);
        goto LABEL_41;
    }
    sub_B550C(a1, "MIME-Version: 1.0%s", v12);
    sub_B550C(a1, "Content-Disposition: attachment;");
    sub_B550C(a1, " filename=\"%s\"%s", v33, v12);
    sub_B550C(a1, "Content-Type: %smime;", v11);
    sub_B550C(a1, " smime-type=%s;", v40);
LABEL_41:
    sub_B550C(a1, " name=\"%s\"%s", v33, v12);
    v34 = sub_B550C(a1, "Content-Transfer-Encoding: base64%s%s", v12, v12);
    v35 = sub_17D14C(v34);
    v36 = sub_B655C(v35);
    v37 = (int)v36;
    if ( v36 )
    {
      v38 = sub_B70C0((int)v36, a1);
      v39 = sub_1723CC(v38, a2, a3, a4, (unsigned __int8 *)a8);
      sub_B6ECC(v38, 11, 0, 0);
      sub_B70E8(v38);
      BIO_vfree_0(v37);
      if ( !v39 )
        return 0;
      sub_B550C(a1, (unsigned __int8 *)"%s", v12);
      return 1;
    }
    else
    {
      sub_D0048(13, 210, 65, (int)"crypto/asn1/asn_mime.c", 105);
      return 0;
    }
  }
  if ( sub_F497C((int)v52, 32) <= 0 )
    return 0;
  v13 = v52;
  do
  {
    v14 = *v13 & 0xF;
    if ( v14 > 9 )
      v15 = v14 + 55;
    else
      v15 = v14 + 48;
    *v13++ = v15;
  }
  while ( v13 != &v53 );
  v53 = 0;
  v16 = 0;
  v17 = a1;
  sub_B550C(a1, "MIME-Version: 1.0%s", v12);
  sub_B550C(a1, "Content-Type: multipart/signed;");
  sub_B550C(a1, " protocol=\"%ssignature\";", v11);
  v18 = a1;
  v47 = 0;
  v19 = 0;
  sub_B6C30(v18, (int)" micalg=\"");
  if ( sub_10C010((int)a7) <= 0 )
  {
LABEL_20:
    v26 = (void *)v17;
    goto LABEL_29;
  }
  while ( 1 )
  {
    if ( v19 )
      sub_B69CC(v17, (int)",", 1);
    v20 = (int *)sub_10C01C(a7, v16);
    v21 = (signed int)sub_EAC84(*v20);
    v22 = sub_EAAB4(v21);
    v23 = sub_D99DC((int)v22);
    if ( v23 )
    {
      v24 = *(int (__fastcall **)(_DWORD, int, _DWORD, void **))(v23 + 44);
      if ( v24 )
      {
        v25 = v24(0, 2, 0, &v49);
        if ( v25 > 0 )
        {
          sub_B6C30(v17, (int)v49);
          v19 = 1;
          CRYPTO_free(v49);
          goto LABEL_19;
        }
        if ( v25 != -2 )
          goto LABEL_20;
      }
    }
    if ( v21 == 673 )
    {
      sub_B6C30(v17, (int)"sha-384");
      v19 = 1;
      goto LABEL_19;
    }
    if ( v21 <= 673 )
    {
      switch ( v21 )
      {
        case 64:
          v19 = 1;
          sub_B6C30(v17, (int)"sha1");
          break;
        case 672:
          v19 = 1;
          sub_B6C30(v17, (int)"sha-256");
          break;
        case 4:
          v19 = 1;
          sub_B6C30(v17, (int)"md5");
          break;
        default:
          goto LABEL_49;
      }
      goto LABEL_19;
    }
    if ( v21 == 809 )
      break;
    if ( v21 > 809 )
    {
      if ( v21 == 982 )
      {
        v26 = (void *)v17;
        sub_B6C30(v17, (int)"gostr3411-2012-256");
        goto LABEL_29;
      }
      if ( v21 == 983 )
      {
        v26 = (void *)v17;
        sub_B6C30(v17, (int)"gostr3411-2012-512");
        goto LABEL_29;
      }
LABEL_49:
      v19 = 0;
      if ( !v47 )
      {
        v19 = 1;
        v47 = 1;
        sub_B6C30(v17, (int)"unknown");
      }
      goto LABEL_19;
    }
    if ( v21 != 674 )
      goto LABEL_49;
    v19 = 1;
    sub_B6C30(v17, (int)"sha-512");
LABEL_19:
    if ( (int)++v16 >= sub_10C010((int)a7) )
      goto LABEL_20;
  }
  v26 = (void *)v17;
  sub_B6C30(v17, (int)"gostr3411-94");
LABEL_29:
  sub_B550C((int)v26, "\"; boundary=\"----%s\"%s%s", v52, v12, v12);
  sub_B550C((int)v26, "This is an S/MIME signed message%s%s", v12, v12);
  sub_B550C((int)v26, "------%s%s", v52, v12);
  v48 = a2;
  if ( (a4 & 0x8040) == 0x40 )
  {
    v27 = *(_DWORD *)(a8 + 16);
    if ( !v27 || (v28 = *(int (__fastcall **)(int, size_t **, int))(v27 + 16)) == 0 )
    {
      sub_D0048(13, 214, 202, (int)"crypto/asn1/asn_mime.c", 340);
      return 0;
    }
    v50 = 0;
    v51 = 0;
    v49 = v26;
    if ( v28(12, &v48, a8) <= 0 )
      return 0;
    sub_172298(a3, (int)v50, a4);
    v29 = (*(int (__fastcall **)(int, size_t **, int, void **))(v27 + 16))(13, &v48, a8, &v49);
    v30 = (int)v50;
    if ( v26 != v50 )
    {
      do
      {
        v31 = sub_B70E8(v30);
        BIO_vfree_0((int)v50);
        v30 = v31;
        v50 = (void *)v31;
      }
      while ( v26 != (void *)v31 );
    }
    if ( v29 <= 0 )
      return 0;
  }
  else
  {
    sub_172298(a3, (int)v26, a4);
  }
  sub_B550C((int)v26, "%s------%s%s", v12, v52, v12);
  sub_B550C((int)v26, "Content-Type: %ssignature;", v11);
  sub_B550C((int)v26, " name=\"smime.p7s\"%s", v12);
  sub_B550C((int)v26, "Content-Transfer-Encoding: base64%s", v12);
  sub_B550C((int)v26, "Content-Disposition: attachment;");
  v41 = sub_B550C((int)v26, " filename=\"smime.p7s\"%s%s", v12, v12);
  v42 = sub_17D14C(v41);
  v43 = sub_B655C(v42);
  v44 = (int)v43;
  if ( v43 )
  {
    v45 = sub_B70C0((int)v43, (int)v26);
    sub_1723CC(v45, a2, 0, 0, (unsigned __int8 *)a8);
    sub_B6ECC(v45, 11, 0, 0);
    sub_B70E8(v45);
    BIO_vfree_0(v44);
  }
  else
  {
    sub_D0048(13, 210, 65, (int)"crypto/asn1/asn_mime.c", 105);
  }
  sub_B550C((int)v26, "%s------%s--%s%s", v12, v52, v12, v12);
  return 1;
}
