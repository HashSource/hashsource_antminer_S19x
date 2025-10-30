int *__fastcall sub_11D484(int a1, int a2, _DWORD *a3)
{
  int *v4; // r10
  signed int i; // r5
  int v6; // r0
  const char *v7; // r6
  _DWORD *v8; // r7
  _BYTE *v9; // r4
  _DWORD *v10; // r6
  int v11; // r7
  int v12; // r4
  int *v13; // r0
  _DWORD *v14; // r4
  int v15; // r0
  int v16; // r6
  int v17; // r7
  int v18; // r0
  int v19; // r4

  v4 = (int *)sub_11D45C();
  if ( !v4 )
  {
    sub_D0048(34, 157, 65, (int)"crypto/x509v3/v3_crld.c", 403);
    goto LABEL_32;
  }
  for ( i = 0; ; ++i )
  {
    if ( i >= sub_10C010((int)a3) )
      return v4;
    v6 = sub_10C01C(a3, i);
    v7 = *(const char **)(v6 + 4);
    v8 = (_DWORD *)v6;
    v9 = *(_BYTE **)(v6 + 8);
    if ( strcmp(v7, "fullname") )
      break;
    if ( *v9 == 64 )
    {
      v10 = (_DWORD *)sub_11BB1C(a2);
      if ( !v10 )
      {
LABEL_34:
        v19 = (int)v10;
        sub_D0048(34, 156, 150, (int)"crypto/x509v3/v3_crld.c", 55);
        goto LABEL_31;
      }
    }
    else
    {
      v10 = (_DWORD *)sub_122740(v9);
      if ( !v10 )
        goto LABEL_34;
    }
    v11 = sub_1706B8(0, a2, v10);
    if ( *v9 == 64 )
      sub_11BB68(a2, (int)v10);
    else
      sub_10BFDC((int)v10, (void (__fastcall *)(int))X509V3_conf_free);
    if ( !v11 )
    {
      v19 = 0;
      v10 = 0;
      goto LABEL_31;
    }
    v10 = 0;
LABEL_19:
    v12 = *v4;
    if ( *v4 )
    {
      v19 = v11;
      sub_D0048(34, 158, 160, (int)"crypto/x509v3/v3_crld.c", 110);
      goto LABEL_31;
    }
    v13 = (int *)sub_11CF7C();
    *v4 = (int)v13;
    if ( !v13 )
    {
      v19 = v11;
      goto LABEL_31;
    }
    if ( v11 )
    {
      v13[1] = v11;
    }
    else
    {
      v13[1] = (int)v10;
      v12 = 1;
    }
    *v13 = v12;
LABEL_10:
    ;
  }
  if ( !strcmp(v7, "relativename") )
  {
    v14 = (_DWORD *)sub_115C54();
    if ( !v14 )
      goto LABEL_32;
    v15 = sub_11BB1C(a2);
    v16 = v15;
    if ( !v15 )
    {
      sub_D0048(34, 158, 150, (int)"crypto/x509v3/v3_crld.c", 86);
      goto LABEL_32;
    }
    v17 = sub_1230C8(v14, v15, 4097);
    sub_11BB68(a2, v16);
    v10 = (_DWORD *)*v14;
    *v14 = 0;
    X509_NAME_free((int)v14);
    if ( !v17 )
    {
      v19 = 0;
      goto LABEL_31;
    }
    if ( sub_10C010((int)v10) <= 0 )
    {
      v19 = 0;
      goto LABEL_31;
    }
    v18 = sub_10C010((int)v10);
    v11 = *(_DWORD *)(sub_10C01C(v10, v18 - 1) + 8);
    if ( v11 )
    {
      v19 = 0;
      sub_D0048(34, 158, 161, (int)"crypto/x509v3/v3_crld.c", 102);
LABEL_31:
      sub_10BFDC(v19, (void (__fastcall *)(int))GENERAL_NAME_free);
      sub_10BFDC((int)v10, (void (__fastcall *)(int))X509_NAME_ENTRY_free);
      goto LABEL_32;
    }
    goto LABEL_19;
  }
  if ( !strcmp(v7, "onlyuser") )
  {
    if ( !sub_1225E0(v8, v4 + 1) )
      goto LABEL_32;
    goto LABEL_10;
  }
  if ( !strcmp(v7, "onlyCA") )
  {
    if ( !sub_1225E0(v8, v4 + 2) )
      goto LABEL_32;
    goto LABEL_10;
  }
  if ( !strcmp(v7, "onlyAA") )
  {
    if ( !sub_1225E0(v8, v4 + 5) )
      goto LABEL_32;
    goto LABEL_10;
  }
  if ( !strcmp(v7, "indirectCRL") )
  {
    if ( !sub_1225E0(v8, v4 + 4) )
      goto LABEL_32;
    goto LABEL_10;
  }
  if ( !strcmp(v7, "onlysomereasons") )
  {
    if ( !sub_11CA04(v4 + 3, (int)v9) )
      goto LABEL_32;
    goto LABEL_10;
  }
  sub_D0048(34, 157, 106, (int)"crypto/x509v3/v3_crld.c", 395);
  sub_D1240(6, "section:", *v8, ",name:", v8[1], ",value:", v8[2]);
LABEL_32:
  sub_11D470((int)v4);
  return 0;
}
