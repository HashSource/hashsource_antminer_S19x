int *__fastcall sub_11C060(int a1, int a2, int a3)
{
  int v3; // r0
  int v4; // r4
  int i; // r0
  char **v6; // r5
  char ***v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r3
  int v11; // r10
  signed int v12; // r6
  _DWORD *v13; // r4
  char *v14; // r5
  int v15; // r0
  char **v16; // r0
  int v17; // r0
  const char *v18; // r5
  _DWORD *v19; // r4
  int v20; // r0
  char ***v21; // r5
  char **v22; // r0
  size_t *v23; // r7
  char *v24; // r4
  size_t v25; // r0
  signed int v27; // r5
  _DWORD *v28; // r9
  char ***v29; // r4
  char **v30; // r0
  int v31; // r0
  size_t ***v32; // r7
  size_t **v33; // r0
  size_t *v34; // r4
  size_t v35; // r0
  int v36; // r0
  const char *v37; // r4
  _DWORD *v38; // r8
  char *v39; // r11
  size_t **v40; // r4
  int v41; // r0
  _DWORD *v42; // r11
  int *v43; // r8
  int v44; // r4
  int v45; // r0
  int v46; // r0
  int v47; // r10
  bool v48; // cc
  unsigned int v49; // r1
  char *v50; // r0
  int v51; // r4
  size_t *v52; // r8
  size_t v53; // r0
  int v54; // r0
  int v55; // r8
  int v56; // r0
  size_t **v57; // r3
  int *v58; // r0
  int v59; // r2
  _DWORD *v60; // [sp+14h] [bp-48h]
  int v61; // [sp+18h] [bp-44h]
  unsigned int v62; // [sp+1Ch] [bp-40h]
  int v63; // [sp+28h] [bp-34h]
  _DWORD *v64; // [sp+34h] [bp-28h]
  int v65; // [sp+38h] [bp-24h]
  int v67; // [sp+44h] [bp-18h]
  int *v68; // [sp+48h] [bp-14h]

  v64 = (_DWORD *)sub_122740(a3);
  v3 = sub_10C010((int)v64);
  v65 = v3;
  if ( !v64 )
  {
    sub_D0048(34, 130, 34, (int)"crypto/x509v3/v3_cpols.c", 101);
    return 0;
  }
  v4 = v3;
  v68 = (int *)sub_10BF44(0, v3);
  if ( !v68 )
  {
    sub_D0048(34, 130, 65, (int)"crypto/x509v3/v3_cpols.c", 107);
    goto LABEL_34;
  }
  if ( v4 <= 0 )
  {
LABEL_107:
    sub_10BFDC((int)v64, (void (__fastcall *)(int))X509V3_conf_free);
    return v68;
  }
  v63 = 0;
  v62 = 0;
  for ( i = sub_10C01C(v64, 0); ; i = sub_10C01C(v64, v62) )
  {
    v12 = *(_DWORD *)(i + 8);
    v13 = (_DWORD *)i;
    if ( v12 || (v14 = *(char **)(i + 4)) == 0 )
    {
      sub_D0048(34, 130, 134, (int)"crypto/x509v3/v3_cpols.c", 117);
      sub_D1240(6, "section:", *v13, ",name:", v13[1], ",value:", v13[2]);
      goto LABEL_34;
    }
    if ( !strcmp(*(const char **)(i + 4), "ia5org") )
    {
      v63 = 1;
      goto LABEL_9;
    }
    if ( *v14 == 64 )
      break;
    v6 = sub_EB03C(v14, 0);
    if ( !v6 )
    {
      sub_D0048(34, 130, 110, (int)"crypto/x509v3/v3_cpols.c", 141);
      sub_D1240(6, "section:", *v13, ",name:", v13[1], ",value:", v13[2]);
      goto LABEL_34;
    }
    v7 = (char ***)sub_11BF58();
    v11 = (int)v7;
    if ( !v7 )
    {
      ASN1_OBJECT_free(v6, v8, v9, v10);
      v59 = 148;
      goto LABEL_105;
    }
    *v7 = v6;
    if ( !sub_10BD3C(v68, (int)v7) )
      goto LABEL_104;
LABEL_9:
    if ( ++v62 == v65 )
      goto LABEL_107;
  }
  v60 = (_DWORD *)sub_11BB1C(a2);
  if ( !v60 )
  {
    sub_D0048(34, 130, 135, (int)"crypto/x509v3/v3_cpols.c", 129);
    sub_D1240(6, "section:", *v13, ",name:", v13[1], ",value:", v13[2]);
    goto LABEL_34;
  }
  v15 = sub_11BF58();
  v11 = v15;
  if ( !v15 )
    goto LABEL_32;
  v61 = v15;
  while ( 2 )
  {
    if ( v12 >= sub_10C010((int)v60) )
    {
      v11 = v61;
      if ( !*(_DWORD *)v61 )
      {
        sub_D0048(34, 131, 139, (int)"crypto/x509v3/v3_cpols.c", 236);
        goto LABEL_33;
      }
      sub_11BB68(a2, (int)v60);
      if ( !sub_10BD3C(v68, v61) )
      {
LABEL_104:
        POLICYINFO_free(v11);
        v59 = 155;
LABEL_105:
        sub_D0048(34, 130, 65, (int)"crypto/x509v3/v3_cpols.c", v59);
        goto LABEL_34;
      }
      goto LABEL_9;
    }
    v17 = sub_10C01C(v60, v12);
    v18 = *(const char **)(v17 + 4);
    v19 = (_DWORD *)v17;
    if ( !strcmp(v18, "policyIdentifier") )
    {
      v16 = sub_EB03C((char *)v19[2], 0);
      if ( !v16 )
      {
        v11 = v61;
        sub_D0048(34, 131, 110, (int)"crypto/x509v3/v3_cpols.c", 183);
        sub_D1240(6, "section:", *v19, ",name:", v19[1], ",value:", v19[2]);
        goto LABEL_33;
      }
      *(_DWORD *)v61 = v16;
      goto LABEL_20;
    }
    if ( !sub_122A8C((int)v18, "CPS") )
    {
      if ( !*(_DWORD *)(v61 + 4) )
        *(_DWORD *)(v61 + 4) = sub_10BFCC();
      v20 = sub_11BF9C();
      v21 = (char ***)v20;
      if ( !v20 || !sub_10BD3C(*(int **)(v61 + 4), v20) )
        break;
      v22 = sub_EAA20(0xA4u);
      *v21 = v22;
      if ( !v22 )
      {
        v11 = v61;
        sub_D0048(34, 131, 68, (int)"crypto/x509v3/v3_cpols.c", 197);
        goto LABEL_33;
      }
      v23 = (size_t *)sub_B220C();
      v21[1] = (char **)v23;
      if ( !v23 )
        break;
      v24 = (char *)v19[2];
      v25 = strlen(v24);
      if ( !sub_AE088(v23, v24, v25) )
        break;
      goto LABEL_20;
    }
    v27 = sub_122A8C(v19[1], "userNotice");
    if ( v27 )
    {
      v11 = v61;
      sub_D0048(34, 131, 138, (int)"crypto/x509v3/v3_cpols.c", 229);
      sub_D1240(6, "section:", *v19, ",name:", v19[1], ",value:", v19[2]);
      goto LABEL_33;
    }
    if ( *(_BYTE *)v19[2] != 64 )
    {
      v11 = v61;
      sub_D0048(34, 131, 137, (int)"crypto/x509v3/v3_cpols.c", 209);
      sub_D1240(6, "section:", *v19, ",name:", v19[1], ",value:", v19[2]);
      goto LABEL_33;
    }
    v28 = (_DWORD *)sub_11BB1C(a2);
    if ( !v28 )
    {
      v11 = v61;
      sub_D0048(34, 131, 135, (int)"crypto/x509v3/v3_cpols.c", 215);
      sub_D1240(6, "section:", *v19, ",name:", v19[1], ",value:", v19[2]);
      goto LABEL_33;
    }
    v29 = (char ***)sub_11BF9C();
    v67 = (int)v29;
    if ( !v29 )
    {
LABEL_70:
      v11 = v61;
      sub_D0048(34, 132, 65, (int)"crypto/x509v3/v3_cpols.c", 366);
LABEL_71:
      POLICYQUALINFO_free(v67);
      sub_11BB68(a2, (int)v28);
      goto LABEL_33;
    }
    v30 = sub_EAA20(0xA5u);
    *v29 = v30;
    if ( !v30 )
    {
      v11 = v61;
      sub_D0048(34, 132, 68, (int)"crypto/x509v3/v3_cpols.c", 296);
      goto LABEL_71;
    }
    v31 = sub_11BFF4();
    v32 = (size_t ***)v31;
    if ( !v31 )
      goto LABEL_70;
    v29[1] = (char **)v31;
    while ( 2 )
    {
      if ( v27 < sub_10C010((int)v28) )
      {
        v36 = sub_10C01C(v28, v27);
        v37 = *(const char **)(v36 + 4);
        v38 = (_DWORD *)v36;
        v39 = *(char **)(v36 + 8);
        if ( strcmp(v37, "explicitText") )
        {
          if ( strcmp(v37, "organization") )
          {
            if ( !strcmp(v37, "noticeNumbers") )
            {
              v40 = *v32;
              if ( *v32 )
              {
                v41 = sub_122740(v39);
                v42 = (_DWORD *)v41;
                if ( v41 )
                  goto LABEL_54;
                goto LABEL_83;
              }
              v56 = sub_11C04C();
              v40 = (size_t **)v56;
              if ( !v56 )
                goto LABEL_70;
              *v32 = (size_t **)v56;
              v41 = sub_122740(v38[2]);
              v42 = (_DWORD *)v41;
              if ( !v41 )
                goto LABEL_83;
LABEL_54:
              if ( !sub_10C010(v41) )
              {
LABEL_83:
                v11 = v61;
                sub_D0048(34, 132, 141, (int)"crypto/x509v3/v3_cpols.c", 340);
                sub_D1240(6, "section:", *v38, ",name:", v38[1], ",value:", v38[2]);
                sub_10BFDC((int)v42, (void (__fastcall *)(int))X509V3_conf_free);
                goto LABEL_71;
              }
              v43 = (int *)v40[1];
              v44 = 0;
              do
              {
                v48 = v44 < sub_10C010((int)v42);
                v49 = v44++;
                if ( !v48 )
                {
                  sub_10BFDC((int)v42, (void (__fastcall *)(int))X509V3_conf_free);
                  goto LABEL_47;
                }
                v45 = sub_10C01C(v42, v49);
                v46 = sub_122498(0, *(_DWORD *)(v45 + 4));
                v47 = v46;
                if ( !v46 )
                {
                  v11 = v61;
                  sub_D0048(34, 133, 140, (int)"crypto/x509v3/v3_cpols.c", 383);
                  goto LABEL_79;
                }
              }
              while ( sub_10BD3C(v43, v46) );
              v55 = v47;
              v11 = v61;
              ASN1_INTEGER_free(v55);
              sub_D0048(34, 133, 65, (int)"crypto/x509v3/v3_cpols.c", 393);
LABEL_79:
              sub_10BFDC((int)v42, (void (__fastcall *)(int))X509V3_conf_free);
            }
            else
            {
              v11 = v61;
              sub_D0048(34, 132, 138, (int)"crypto/x509v3/v3_cpols.c", 350);
              sub_D1240(6, "section:", *v38, ",name:", v38[1], ",value:", v38[2]);
            }
            goto LABEL_71;
          }
          v33 = *v32;
          if ( !*v32 )
          {
            v33 = (size_t **)sub_11C04C();
            if ( !v33 )
              goto LABEL_70;
            *v32 = v33;
            v39 = (char *)v38[2];
          }
          v34 = *v33;
          if ( v63 )
            v34[1] = 22;
          else
            v34[1] = 26;
          v35 = strlen(v39);
          if ( !sub_AE088(v34, v39, v35) )
            goto LABEL_70;
          goto LABEL_47;
        }
        v50 = strchr(v39, 58);
        if ( !v50 || (v51 = v50 - v39, v50 - v39 == -1) )
        {
LABEL_68:
          v52 = (size_t *)sub_AE194(26);
          v32[1] = (size_t **)v52;
          if ( !v52 )
            goto LABEL_70;
        }
        else
        {
          if ( v51 == 4 )
          {
            if ( strncmp(v39, "UTF8", 4u) )
              goto LABEL_68;
            v54 = 12;
          }
          else if ( v51 == 10 )
          {
            if ( strncmp(v39, "UTF8String", 0xAu) )
              goto LABEL_68;
            v54 = 12;
          }
          else if ( v51 == 3 )
          {
            if ( strncmp(v39, "BMP", 3u) )
              goto LABEL_68;
            v54 = 30;
          }
          else if ( v51 == 9 )
          {
            if ( strncmp(v39, "BMPSTRING", 9u) )
              goto LABEL_68;
            v54 = 30;
          }
          else
          {
            if ( v51 == 7 )
            {
              if ( strncmp(v39, "VISIBLE", 7u) )
                goto LABEL_68;
            }
            else if ( v51 != 13 || strncmp(v39, "VISIBLESTRING", 0xDu) )
            {
              goto LABEL_68;
            }
            v54 = 26;
          }
          v52 = (size_t *)sub_AE194(v54);
          v32[1] = (size_t **)v52;
          if ( !v52 )
            goto LABEL_70;
          v39 += v51 + 1;
        }
        v53 = strlen(v39);
        if ( !sub_AE088(v52, v39, v53) )
          goto LABEL_70;
LABEL_47:
        ++v27;
        continue;
      }
      break;
    }
    v57 = *v32;
    if ( *v32 && (!v57[1] || !*v57) )
    {
      v11 = v61;
      sub_D0048(34, 132, 142, (int)"crypto/x509v3/v3_cpols.c", 359);
      goto LABEL_71;
    }
    sub_11BB68(a2, (int)v28);
    v58 = *(int **)(v61 + 4);
    if ( !v58 )
    {
      v58 = (int *)sub_10BFCC();
      *(_DWORD *)(v61 + 4) = v58;
    }
    if ( sub_10BD3C(v58, v67) )
    {
LABEL_20:
      ++v12;
      continue;
    }
    break;
  }
  v11 = v61;
LABEL_32:
  sub_D0048(34, 131, 65, (int)"crypto/x509v3/v3_cpols.c", 243);
LABEL_33:
  POLICYINFO_free(v11);
  sub_11BB68(a2, (int)v60);
LABEL_34:
  sub_10BFDC((int)v64, (void (__fastcall *)(int))X509V3_conf_free);
  sub_10BFDC((int)v68, (void (__fastcall *)(int))POLICYINFO_free);
  return 0;
}
