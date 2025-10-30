void **__fastcall sub_122740(char *a1)
{
  char *v1; // r0
  char *v2; // r8
  unsigned int v3; // r3
  bool v4; // zf
  char *v5; // r6
  char *v6; // r4
  bool v7; // zf
  unsigned int v8; // r0
  unsigned int v9; // t1
  size_t v10; // r0
  char *v11; // r5
  unsigned int v12; // r0
  char *v13; // r11
  unsigned int v14; // r0
  char *v15; // r5
  bool v16; // zf
  _BYTE *v17; // r11
  int v18; // r3
  int v19; // t1
  bool v20; // zf
  unsigned int v21; // r0
  unsigned int v22; // t1
  size_t v23; // r0
  char *v24; // r6
  unsigned int v25; // r0
  unsigned __int8 *v26; // r9
  char *v27; // r1
  char *v28; // r5
  bool v29; // zf
  unsigned int v30; // t1
  size_t v31; // r0
  char *v32; // r6
  unsigned int v33; // r0
  char *v34; // r7
  unsigned int v35; // r0
  unsigned int v36; // t1
  size_t v37; // r0
  char *v38; // r5
  unsigned int v39; // r0
  unsigned __int8 *v40; // r11
  int v41; // r2
  unsigned int v43; // r0
  unsigned int v44; // t1
  size_t v45; // r0
  char *v46; // r5
  unsigned int v47; // r0
  char *v48; // r6
  void **v49[2]; // [sp+14h] [bp-8h] BYREF

  v49[0] = 0;
  v1 = sub_E9E3C(a1);
  v2 = v1;
  if ( !v1 )
  {
    sub_D0048(34, 109, 65, (int)"crypto/x509v3/v3_utl.c", 323);
LABEL_78:
    CRYPTO_free(v2);
    sub_10BFDC((int)v49[0], (void (__fastcall *)(int))X509V3_conf_free);
    return 0;
  }
  v3 = (unsigned __int8)*v1;
  if ( !*v1 )
  {
LABEL_75:
    v41 = 386;
LABEL_77:
    sub_D0048(34, 109, 108, (int)"crypto/x509v3/v3_utl.c", v41);
    goto LABEL_78;
  }
  v4 = v3 == 10;
  if ( v3 != 10 )
    v4 = v3 == 13;
  if ( !v4 )
  {
    v5 = v1;
    v6 = v1;
    if ( v3 == 58 )
      goto LABEL_14;
    while ( v3 == 44 )
    {
      *v5 = 0;
      v35 = (unsigned __int8)*v6;
      if ( !*v6 )
        goto LABEL_80;
      while ( sub_BDB10(v35, 8) )
      {
        v36 = (unsigned __int8)*++v6;
        v35 = v36;
        if ( !v36 )
          goto LABEL_80;
      }
      if ( !*v6 )
        goto LABEL_80;
      v37 = strlen(v6) - 1;
      v38 = &v6[v37];
      if ( &v6[v37] != v6 )
      {
        while ( 1 )
        {
          v39 = (unsigned __int8)*v38;
          v40 = (unsigned __int8 *)v38--;
          if ( !sub_BDB10(v39, 8) )
            break;
          if ( v6 == v38 )
            goto LABEL_73;
        }
        v40[1] = 0;
LABEL_73:
        if ( !*v6 )
        {
LABEL_80:
          v41 = 350;
          goto LABEL_77;
        }
      }
      v28 = v5 + 1;
      sub_121F9C(v6, 0, v49);
      v3 = (unsigned __int8)v5[1];
      if ( !v5[1] )
        goto LABEL_75;
      while ( 1 )
      {
        v29 = v3 == 13;
        if ( v3 != 13 )
          v29 = v3 == 10;
        if ( v29 )
        {
          v6 = v28;
          v43 = v3;
          goto LABEL_84;
        }
        v6 = v28;
        v5 = v28;
LABEL_13:
        if ( v3 != 58 )
          break;
LABEL_14:
        *v5 = 0;
        v8 = (unsigned __int8)*v6;
        if ( !*v6 )
          goto LABEL_76;
        while ( sub_BDB10(v8, 8) )
        {
          v9 = (unsigned __int8)*++v6;
          v8 = v9;
          if ( !v9 )
            goto LABEL_76;
        }
        if ( !*v6 )
          goto LABEL_76;
        v10 = strlen(v6) - 1;
        v11 = &v6[v10];
        if ( &v6[v10] != v6 )
        {
          while ( 1 )
          {
            v12 = (unsigned __int8)*v11;
            v13 = v11--;
            if ( !sub_BDB10(v12, 8) )
              break;
            if ( v6 == v11 )
              goto LABEL_25;
          }
          if ( v13 != v6 )
            v13[1] = 0;
LABEL_25:
          if ( !*v6 )
          {
LABEL_76:
            v41 = 340;
            goto LABEL_77;
          }
        }
        v14 = (unsigned __int8)v5[1];
        v15 = v5 + 1;
        if ( !v5[1] )
          goto LABEL_95;
        v16 = v14 == 13;
        if ( v14 != 13 )
          v16 = v14 == 10;
        if ( v16 )
        {
LABEL_53:
          while ( sub_BDB10(v14, 8) )
          {
            v30 = (unsigned __int8)*++v15;
            v14 = v30;
            if ( !v30 )
              goto LABEL_95;
          }
          if ( *v15 )
          {
            v31 = strlen(v15) - 1;
            v32 = &v15[v31];
            if ( &v15[v31] == v15 )
              goto LABEL_62;
            while ( 1 )
            {
              v33 = (unsigned __int8)*v32;
              v34 = v32--;
              if ( !sub_BDB10(v33, 8) )
                break;
              if ( v15 == v32 )
                goto LABEL_61;
            }
            if ( v15 != v34 )
              v34[1] = 0;
LABEL_61:
            if ( *v15 )
            {
LABEL_62:
              sub_121F9C(v6, v15, v49);
              goto LABEL_94;
            }
          }
LABEL_95:
          sub_D0048(34, 109, 109, (int)"crypto/x509v3/v3_utl.c", 379);
          goto LABEL_78;
        }
        v17 = v5 + 1;
        v18 = (unsigned __int8)v5[1];
        while ( v18 != 44 )
        {
          v19 = (unsigned __int8)*++v17;
          v18 = v19;
          if ( v19 )
          {
            v20 = v18 == 13;
            if ( v18 != 13 )
              v20 = v18 == 10;
            if ( !v20 )
              continue;
          }
          goto LABEL_53;
        }
        *v17 = 0;
        v21 = (unsigned __int8)v5[1];
        if ( !v5[1] )
          goto LABEL_79;
        while ( sub_BDB10(v21, 8) )
        {
          v22 = (unsigned __int8)*++v15;
          v21 = v22;
          if ( !v22 )
            goto LABEL_79;
        }
        if ( !*v15 )
          goto LABEL_79;
        v23 = strlen(v15) - 1;
        v24 = &v15[v23];
        if ( &v15[v23] != v15 )
        {
          while ( 1 )
          {
            v25 = (unsigned __int8)*v24;
            v26 = (unsigned __int8 *)v24--;
            if ( !sub_BDB10(v25, 8) )
              break;
            if ( v15 == v24 )
              goto LABEL_46;
          }
          v26[1] = 0;
LABEL_46:
          if ( !*v15 )
          {
LABEL_79:
            sub_D0048(34, 109, 109, (int)"crypto/x509v3/v3_utl.c", 364);
            goto LABEL_78;
          }
        }
        v27 = v15;
        v28 = v17 + 1;
        sub_121F9C(v6, v27, v49);
        v3 = (unsigned __int8)v17[1];
        if ( !v17[1] )
          goto LABEL_75;
      }
    }
    v3 = (unsigned __int8)v5[1];
    if ( v5[1] )
    {
      v7 = v3 == 10;
      if ( v3 != 10 )
        v7 = v3 == 13;
      if ( !v7 )
      {
        ++v5;
        goto LABEL_13;
      }
    }
    v43 = (unsigned __int8)*v6;
    if ( *v6 )
      goto LABEL_84;
    goto LABEL_75;
  }
  v43 = (unsigned __int8)*v1;
  v6 = v2;
LABEL_84:
  while ( sub_BDB10(v43, 8) )
  {
    v44 = (unsigned __int8)*++v6;
    v43 = v44;
    if ( !v44 )
      goto LABEL_75;
  }
  if ( !*v6 )
    goto LABEL_75;
  v45 = strlen(v6) - 1;
  v46 = &v6[v45];
  if ( &v6[v45] != v6 )
  {
    while ( 1 )
    {
      v47 = (unsigned __int8)*v46;
      v48 = v46--;
      if ( !sub_BDB10(v47, 8) )
        break;
      if ( v6 == v46 )
        goto LABEL_92;
    }
    if ( v6 != v48 )
      v48[1] = 0;
LABEL_92:
    if ( !*v6 )
      goto LABEL_75;
  }
  sub_121F9C(v6, 0, v49);
LABEL_94:
  CRYPTO_free(v2);
  return v49[0];
}
