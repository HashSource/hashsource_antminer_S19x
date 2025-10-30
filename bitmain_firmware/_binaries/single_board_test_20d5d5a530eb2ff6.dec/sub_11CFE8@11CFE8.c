int *__fastcall sub_11CFE8(int a1, int a2, _DWORD *a3)
{
  int i; // r0
  _DWORD *v5; // r4
  int *v6; // r0
  int *v7; // r5
  int v8; // r0
  _DWORD *v9; // r0
  signed int v11; // r5
  _DWORD *v12; // r8
  int *v13; // r10
  int v14; // r4
  int v15; // r0
  const char *v16; // r6
  int v17; // r7
  _BYTE *v18; // r7
  _DWORD *v19; // r6
  int v20; // r7
  int *v21; // r0
  _DWORD *v22; // r11
  int v23; // r0
  int v24; // r6
  int v25; // r7
  int v26; // r0
  _BYTE *v28; // r6
  int v29; // r4
  int v30; // r7
  unsigned int v31; // [sp+10h] [bp-24h]
  int *v32; // [sp+1Ch] [bp-18h]
  int v34; // [sp+24h] [bp-10h]

  v34 = sub_10C010((int)a3);
  v32 = (int *)sub_10BF44(0, v34);
  if ( !v32 )
  {
    v7 = 0;
    v5 = 0;
LABEL_59:
    sub_D0048(34, 134, 65, (int)"crypto/x509v3/v3_crld.c", 285);
    goto LABEL_41;
  }
  if ( v34 > 0 )
  {
    v31 = 0;
    for ( i = sub_10C01C(a3, 0); ; i = sub_10C01C(a3, v31) )
    {
      v11 = *(_DWORD *)(i + 8);
      if ( !v11 )
        break;
      v5 = (_DWORD *)sub_170288(a1, a2, i);
      if ( !v5 )
        goto LABEL_62;
      v6 = (int *)sub_11D968();
      v7 = v6;
      if ( !v6 )
        goto LABEL_59;
      if ( !sub_10BD3C(v6, (int)v5) )
        goto LABEL_59;
      v8 = sub_11CFD4();
      v5 = (_DWORD *)v8;
      if ( !v8 )
        goto LABEL_59;
      sub_10BD3C(v32, v8);
      v9 = (_DWORD *)sub_11CF7C();
      *v5 = v9;
      if ( !v9 )
      {
        v5 = 0;
        goto LABEL_59;
      }
      *v9 = 0;
      v9[1] = v7;
LABEL_10:
      if ( v34 == ++v31 )
        return v32;
    }
    v12 = (_DWORD *)sub_11BB1C(a2);
    if ( !v12 )
    {
LABEL_62:
      v5 = 0;
      v7 = 0;
      goto LABEL_41;
    }
    v13 = (int *)sub_11CFD4();
    if ( !v13 )
    {
LABEL_40:
      v5 = 0;
      v7 = 0;
      DIST_POINT_free((int)v13);
      sub_11BB68(a2, (int)v12);
LABEL_41:
      GENERAL_NAME_free(v5);
      GENERAL_NAMES_free(v7);
      sub_10BFDC((int)v32, (void (__fastcall *)(int))DIST_POINT_free);
      return 0;
    }
    while ( 1 )
    {
      if ( v11 >= sub_10C010((int)v12) )
      {
        sub_11BB68(a2, (int)v12);
        sub_10BD3C(v32, (int)v13);
        goto LABEL_10;
      }
      v15 = sub_10C01C(v12, v11);
      v16 = *(const char **)(v15 + 4);
      v17 = v15;
      if ( !strcmp(v16, "fullname") )
        break;
      v14 = strcmp(v16, "relativename");
      if ( !v14 )
      {
        v22 = (_DWORD *)sub_115C54();
        if ( !v22 )
          goto LABEL_40;
        v23 = sub_11BB1C(a2);
        v24 = v23;
        if ( !v23 )
        {
          sub_D0048(34, 158, 150, (int)"crypto/x509v3/v3_crld.c", 86);
          goto LABEL_40;
        }
        v25 = sub_1230C8(v22, v23, 4097);
        sub_11BB68(a2, v24);
        v19 = (_DWORD *)*v22;
        *v22 = 0;
        X509_NAME_free((int)v22);
        if ( !v25 )
        {
          v14 = 0;
          goto LABEL_39;
        }
        if ( sub_10C010((int)v19) <= 0 )
          goto LABEL_39;
        v26 = sub_10C010((int)v19);
        if ( *(_DWORD *)(sub_10C01C(v19, v26 - 1) + 8) )
        {
          sub_D0048(34, 158, 161, (int)"crypto/x509v3/v3_crld.c", 102);
          goto LABEL_39;
        }
        v20 = *v13;
        v14 = 0;
        if ( *v13 )
        {
LABEL_38:
          sub_D0048(34, 158, 160, (int)"crypto/x509v3/v3_crld.c", 110);
LABEL_39:
          sub_10BFDC(v14, (void (__fastcall *)(int))GENERAL_NAME_free);
          sub_10BFDC((int)v19, (void (__fastcall *)(int))X509_NAME_ENTRY_free);
          goto LABEL_40;
        }
        goto LABEL_28;
      }
      if ( !strcmp(v16, "reasons") )
      {
        if ( !sub_11CA04(v13 + 1, *(_DWORD *)(v17 + 8)) )
          goto LABEL_40;
      }
      else if ( !strcmp(v16, "CRLissuer") )
      {
        v28 = *(_BYTE **)(v17 + 8);
        if ( *v28 == 64 )
          v29 = sub_11BB1C(a2);
        else
          v29 = sub_122740(*(_DWORD *)(v17 + 8));
        if ( !v29 )
        {
          sub_D0048(34, 156, 150, (int)"crypto/x509v3/v3_crld.c", 55);
          v13[2] = 0;
          goto LABEL_40;
        }
        v30 = sub_1706B8(0, a2, v29);
        if ( *v28 == 64 )
          sub_11BB68(a2, v29);
        else
          sub_10BFDC(v29, (void (__fastcall *)(int))X509V3_conf_free);
        v13[2] = v30;
        if ( !v30 )
          goto LABEL_40;
      }
LABEL_19:
      ++v11;
    }
    v18 = *(_BYTE **)(v17 + 8);
    if ( *v18 == 64 )
    {
      v19 = (_DWORD *)sub_11BB1C(a2);
      if ( !v19 )
      {
LABEL_43:
        v14 = (int)v19;
        sub_D0048(34, 156, 150, (int)"crypto/x509v3/v3_crld.c", 55);
        goto LABEL_39;
      }
    }
    else
    {
      v19 = (_DWORD *)sub_122740(v18);
      if ( !v19 )
        goto LABEL_43;
    }
    v14 = sub_1706B8(0, a2, v19);
    if ( *v18 == 64 )
      sub_11BB68(a2, (int)v19);
    else
      sub_10BFDC((int)v19, (void (__fastcall *)(int))X509V3_conf_free);
    if ( !v14 )
    {
      v19 = 0;
      goto LABEL_39;
    }
    v20 = *v13;
    v19 = 0;
    if ( *v13 )
      goto LABEL_38;
LABEL_28:
    v21 = (int *)sub_11CF7C();
    *v13 = (int)v21;
    if ( !v21 )
      goto LABEL_39;
    if ( v14 )
    {
      v21[1] = v14;
    }
    else
    {
      v21[1] = (int)v19;
      v20 = 1;
    }
    *v21 = v20;
    goto LABEL_19;
  }
  return v32;
}
