int __fastcall sub_EE0F8(_DWORD *a1, char **a2, void **a3, int *a4, _DWORD *a5, char a6)
{
  void *v7; // r7
  void *v8; // r4
  _DWORD *v9; // r7
  _DWORD *v10; // r0
  bool v11; // zf
  int v12; // r4
  int v13; // r1
  int v14; // r10
  _BOOL4 v15; // r0
  _BYTE *v16; // r7
  int v17; // r3
  void *v18; // r10
  _BOOL4 v19; // r5
  int v20; // r11
  int v21; // r7
  signed int v22; // r0
  int v23; // r9
  _BOOL4 v24; // r8
  char v25; // r2
  int v26; // r9
  void *v27; // r4
  _DWORD *v28; // r7
  _DWORD *v29; // r0
  bool v30; // zf
  void *v31; // r0
  int v33; // r6
  int v34; // r0
  bool v35; // zf
  int v36; // r2
  void *v37; // r0
  int v38; // r8
  size_t v39; // r6
  int v40; // r3
  int v41; // r8
  void *v42; // r0
  void *v43; // r0
  int v44; // r1
  bool v45; // zf
  unsigned int *v46; // r0
  bool v47; // zf
  int v48; // r0
  int v49; // [sp+8h] [bp-44h]
  int v50; // [sp+Ch] [bp-40h]
  _BOOL4 v51; // [sp+10h] [bp-3Ch]
  int v52; // [sp+14h] [bp-38h]
  char *s; // [sp+30h] [bp-1Ch]
  char *v57; // [sp+3Ch] [bp-10h] BYREF
  int v58; // [sp+40h] [bp-Ch] BYREF
  _DWORD v59[2]; // [sp+44h] [bp-8h] BYREF

  v7 = 0;
  *a5 = 0;
  *a3 = 0;
  *a2 = 0;
  *a4 = 0;
  if ( (a6 & 6) == 6 )
  {
    v49 = a6 & 1;
    v33 = 0;
    v12 = 0;
    sub_D0048(9, 145, 7, (int)"crypto/pem/pem_lib.c", 914);
    v50 = 0;
    v52 = 0;
    goto LABEL_44;
  }
  v49 = a6 & 1;
  if ( (a6 & 1) != 0 )
  {
    v8 = sub_B7E3C();
    v9 = sub_B655C((int)v8);
    v52 = (int)v9;
    v10 = sub_B655C((int)v8);
    v11 = v10 == 0;
    if ( v10 )
      v11 = v9 == 0;
    v50 = (int)v10;
    if ( !v11 )
    {
      v12 = (int)sub_E12E4((void *)0x100);
      goto LABEL_7;
    }
LABEL_43:
    v7 = 0;
    v12 = 0;
    v33 = 0;
    sub_D0048(9, 145, 65, (int)"crypto/pem/pem_lib.c", 922);
    goto LABEL_44;
  }
  v27 = sub_B7E30();
  v28 = sub_B655C((int)v27);
  v52 = (int)v28;
  v29 = sub_B655C((int)v27);
  v30 = v29 == 0;
  if ( v29 )
    v30 = v28 == 0;
  v50 = (int)v29;
  if ( v30 )
    goto LABEL_43;
  v12 = (int)CRYPTO_malloc((void *)0x100);
LABEL_7:
  if ( !v12 )
  {
    v7 = 0;
    v33 = 0;
    sub_D0048(9, 144, 65, (int)"crypto/pem/pem_lib.c", 737);
    goto LABEL_44;
  }
  do
  {
    v13 = sub_B6D58(a1, v12, 255);
    if ( v13 <= 0 )
    {
      sub_D0048(9, 144, 108, (int)"crypto/pem/pem_lib.c", 745);
LABEL_39:
      if ( (a6 & 1) != 0 )
      {
        v48 = v12;
        v7 = 0;
        v12 = 0;
        ((void (__fastcall *)(int, int, const char *, int))loc_E18E0)(v48, 256, "crypto/pem/pem_lib.c", 221);
        sub_15DA88(0);
        goto LABEL_45;
      }
      v31 = (void *)v12;
      v12 = 0;
      CRYPTO_free(v31);
      v7 = 0;
      sub_15DA88(0);
      goto LABEL_41;
    }
    v14 = sub_ED45C((unsigned __int8 *)v12, v13, a6 & 0xFB);
    v15 = strncmp((const char *)v12, "-----BEGIN ", 0xBu) != 0;
    v16 = (_BYTE *)(v14 - 6 + v12);
    if ( v14 <= 5 )
      v17 = v15 | 1;
    else
      v17 = v15;
  }
  while ( v17 || strncmp((const char *)(v14 - 6 + v12), "-----\n", 6u) );
  v18 = (void *)(v14 - 16);
  *v16 = 0;
  if ( (a6 & 1) != 0 )
    v7 = sub_E12E4(v18);
  else
    v7 = CRYPTO_malloc(v18);
  if ( !v7 )
  {
    sub_D0048(9, 144, 65, (int)"crypto/pem/pem_lib.c", 760);
    goto LABEL_39;
  }
  memcpy(v7, (const void *)(v12 + 11), (size_t)v18);
  if ( (a6 & 1) != 0 )
  {
    ((void (__fastcall *)(int, int))loc_E18E0)(v12, 256);
    v12 = (int)sub_E12E4((void *)0x100);
  }
  else
  {
    CRYPTO_free((void *)v12);
    v12 = (int)CRYPTO_malloc((void *)0x100);
  }
  if ( !v12 )
  {
    v33 = 0;
    sub_D0048(9, 143, 65, (int)"crypto/pem/pem_lib.c", 804);
    goto LABEL_44;
  }
  v19 = 0;
  v20 = v52;
  s = (char *)v7;
  v21 = 0;
  v51 = 0;
  while ( 2 )
  {
    while ( 2 )
    {
      while ( 2 )
      {
        v22 = sub_B6D58(a1, v12, 255);
        v23 = v22;
        if ( v22 <= 0 )
        {
          v36 = 812;
          v7 = s;
          goto LABEL_62;
        }
        if ( v22 == 254 )
        {
          v24 = *(unsigned __int8 *)(v12 + 253) != 10;
          if ( v21 )
            goto LABEL_47;
LABEL_26:
          if ( memchr((const void *)v12, 58, v22) )
          {
            v21 = 1;
            v25 = -5;
          }
          else
          {
            if ( !strncmp((const char *)v12, "-----END ", 9u) )
              goto LABEL_58;
LABEL_51:
            v25 = -1;
          }
        }
        else
        {
          v24 = 0;
          if ( !v21 )
            goto LABEL_26;
LABEL_47:
          v34 = strncmp((const char *)v12, "-----END ", 9u);
          v35 = v34 == 0;
          if ( v34 )
            v35 = v21 == 1;
          if ( !v35 )
          {
            v21 = 2;
            goto LABEL_51;
          }
LABEL_58:
          v25 = -5;
        }
        v26 = sub_ED45C((unsigned __int8 *)v12, v23, a6 & v25);
        if ( *(_BYTE *)v12 == 10 )
        {
          if ( v19 )
            goto LABEL_33;
          if ( v21 == 2 )
          {
            v36 = 841;
            v7 = s;
            goto LABEL_62;
          }
          v20 = v50;
          v21 = 2;
          v19 = v24;
          continue;
        }
        break;
      }
      if ( !strncmp((const char *)v12, "-----END ", 9u) )
      {
        v38 = v21;
        v7 = s;
        v39 = strlen(s);
        if ( strncmp((const char *)(v12 + 9), s, v39) || strncmp((const char *)(v12 + 9 + v39), "-----\n", 6u) )
        {
          v36 = 856;
          goto LABEL_62;
        }
        if ( !v38 )
        {
          v40 = v50;
          v50 = v20;
          v52 = v40;
        }
        if ( (a6 & 1) != 0 )
        {
          ((void (__fastcall *)(int, int, const char *, int))loc_E18E0)(v12, 256, "crypto/pem/pem_lib.c", 221);
          sub_B6ECC(v50, 115, 0, (int)v59);
          v57 = *(char **)v59[0];
          if ( !v57 )
          {
            v12 = 0;
            sub_15DA88(0);
            goto LABEL_45;
          }
        }
        else
        {
          CRYPTO_free((void *)v12);
          sub_B6ECC(v50, 115, 0, (int)v59);
          v57 = *(char **)v59[0];
          if ( !v57 )
          {
            v12 = 0;
            sub_15DA88(0);
            goto LABEL_41;
          }
        }
        v33 = sub_15DA78();
        if ( v33 )
        {
          sub_15DC1C();
          if ( sub_15DC28(v33, *(_DWORD *)(v59[0] + 4), &v57) >= 0
            && sub_15DD9C(v33, &v57[*(_DWORD *)(v59[0] + 4)], &v58) >= 0 )
          {
            v57 += v58;
            *(_DWORD *)v59[0] = v57;
            v41 = sub_B6ECC(v52, 3, 0, 0);
            v42 = (void *)(v41 + 1);
            if ( (a6 & 1) != 0 )
            {
              *a3 = sub_E12E4(v42);
              v46 = sub_E12E4(v57);
              *a4 = (int)v46;
              v44 = (int)*a3;
              v47 = v46 == 0;
              if ( v46 )
                v47 = v44 == 0;
              if ( v47 )
              {
                ((void (__fastcall *)(void *, _DWORD, const char *, int))loc_E18E0)(*a3, 0, "crypto/pem/pem_lib.c", 221);
                v12 = 0;
                ((void (__fastcall *)(int, _DWORD, const char *, int))loc_E18E0)(*a4, 0, "crypto/pem/pem_lib.c", 221);
                sub_15DA88(v33);
                goto LABEL_45;
              }
LABEL_83:
              sub_B6740(v52, v44, v41);
              v12 = 1;
              *((_BYTE *)*a3 + v41) = 0;
              sub_B6740(v50, *a4, (int)v57);
              *a5 = v57;
              *a2 = s;
              v7 = 0;
              goto LABEL_44;
            }
            *a3 = CRYPTO_malloc(v42);
            v43 = CRYPTO_malloc(v57);
            *a4 = (int)v43;
            v44 = (int)*a3;
            v45 = v43 == 0;
            if ( v43 )
              v45 = v44 == 0;
            if ( !v45 )
              goto LABEL_83;
            v12 = 0;
            CRYPTO_free(*a3);
            CRYPTO_free((void *)*a4);
            sub_15DA88(v33);
LABEL_41:
            CRYPTO_free(v7);
            goto LABEL_42;
          }
          v12 = 0;
          sub_D0048(9, 145, 100, (int)"crypto/pem/pem_lib.c", 949);
        }
        else
        {
          v12 = 0;
          sub_D0048(9, 145, 65, (int)"crypto/pem/pem_lib.c", 940);
        }
LABEL_44:
        sub_15DA88(v33);
        if ( v49 )
          goto LABEL_45;
        goto LABEL_41;
      }
      if ( v51 )
      {
        v36 = 866;
        v7 = s;
LABEL_62:
        sub_D0048(9, 143, 102, (int)"crypto/pem/pem_lib.c", v36);
        goto LABEL_63;
      }
      if ( sub_B6C30(v20, v12) < 0 )
        goto LABEL_66;
      if ( v21 != 2 )
      {
LABEL_33:
        v19 = v24;
        continue;
      }
      break;
    }
    if ( v26 <= 65 )
    {
      v51 = v26 != 65;
      v19 = v24;
      continue;
    }
    break;
  }
LABEL_66:
  v7 = s;
LABEL_63:
  if ( (a6 & 1) == 0 )
  {
    v37 = (void *)v12;
    v12 = 0;
    CRYPTO_free(v37);
    sub_15DA88(0);
    goto LABEL_41;
  }
  ((void (__fastcall *)(int, int, const char *, int))loc_E18E0)(v12, 256, "crypto/pem/pem_lib.c", 221);
  v12 = 0;
  sub_15DA88(0);
LABEL_45:
  ((void (__fastcall *)(void *, _DWORD, const char *, int))loc_E18E0)(v7, 0, "crypto/pem/pem_lib.c", 221);
LABEL_42:
  BIO_vfree_0(v52);
  BIO_vfree_0(v50);
  return v12;
}
