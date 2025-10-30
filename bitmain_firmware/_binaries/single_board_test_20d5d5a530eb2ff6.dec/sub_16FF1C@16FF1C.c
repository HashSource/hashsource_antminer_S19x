_DWORD *__fastcall sub_16FF1C(_DWORD *a1, int a2, int a3, int a4, char *s, int a6)
{
  _DWORD *v9; // r4
  size_t *v10; // r8
  size_t v11; // r0
  _DWORD *result; // r0
  char **v13; // r0
  char *v14; // r9
  int v15; // r0
  int v16; // r1
  int v17; // r8
  int v18; // r0
  unsigned __int8 *v19; // r0
  unsigned __int8 *v20; // r7
  char ***v21; // r9
  int **v22; // r9
  _DWORD *v23; // r0
  int v24; // r10
  int v25; // r0
  int v26; // r0

  if ( s )
  {
    v9 = a1;
    if ( !a1 )
    {
      v9 = (_DWORD *)sub_11D910();
      if ( !v9 )
      {
        sub_D0048(34, 164, 65, (int)"crypto/x509v3/v3_alt.c", 448);
        return 0;
      }
    }
    switch ( a4 )
    {
      case 0:
        v14 = strchr(s, 59);
        if ( v14 )
        {
          v15 = sub_11D890();
          v9[1] = v15;
          if ( v15 )
          {
            ASN1_TYPE_free(*(_DWORD *)(v15 + 4));
            v16 = a3;
            v17 = v9[1];
            v18 = sub_12C954(v14 + 1, v16);
            *(_DWORD *)(v17 + 4) = v18;
            if ( v18 )
            {
              v19 = sub_E9EF4((unsigned __int8 *)s, v14 - s);
              v20 = v19;
              if ( v19 )
              {
                v21 = (char ***)v9[1];
                *v21 = sub_EB03C((char *)v19, 0);
                CRYPTO_free(v20);
                if ( *(_DWORD *)v9[1] )
                  goto LABEL_11;
              }
            }
          }
        }
        sub_D0048(34, 164, 147, (int)"crypto/x509v3/v3_alt.c", 493);
        goto LABEL_7;
      case 1:
      case 2:
      case 6:
        v10 = (size_t *)sub_B220C();
        v9[1] = v10;
        if ( v10 )
        {
          v11 = strlen(s);
          if ( sub_AE088(v10, s, v11) )
            goto LABEL_11;
        }
        sub_D0048(34, 164, 65, (int)"crypto/x509v3/v3_alt.c", 506);
        goto LABEL_7;
      case 4:
        v22 = (int **)sub_115C54();
        if ( !v22 )
        {
          v24 = 0;
          goto LABEL_22;
        }
        v23 = (_DWORD *)sub_11BB1C(a3);
        v24 = (int)v23;
        if ( !v23 )
        {
          sub_D0048(34, 144, 150, (int)"crypto/x509v3/v3_alt.c", 598);
          sub_D1240(2, "section=", s);
          goto LABEL_22;
        }
        if ( !sub_1230C8(v22, v23, 4097) )
        {
LABEL_22:
          X509_NAME_free((int)v22);
          sub_11BB68(a3, v24);
          sub_D0048(34, 164, 149, (int)"crypto/x509v3/v3_alt.c", 486);
          goto LABEL_7;
        }
        v9[1] = v22;
        sub_11BB68(a3, v24);
        goto LABEL_11;
      case 7:
        if ( a6 )
        {
          v25 = sub_123010(s);
          v9[1] = v25;
          if ( v25 )
            goto LABEL_11;
          goto LABEL_25;
        }
        v26 = sub_122FD8(s);
        v9[1] = v26;
        if ( !v26 )
        {
LABEL_25:
          sub_D0048(34, 164, 118, (int)"crypto/x509v3/v3_alt.c", 478);
          sub_D1240(2, "value=", s);
          goto LABEL_7;
        }
LABEL_11:
        result = v9;
        *v9 = a4;
        break;
      case 8:
        v13 = sub_EB03C(s, 0);
        if ( v13 )
        {
          v9[1] = v13;
          goto LABEL_11;
        }
        sub_D0048(34, 164, 119, (int)"crypto/x509v3/v3_alt.c", 464);
        sub_D1240(2, "value=", s);
LABEL_7:
        result = 0;
        if ( !a1 )
        {
          GENERAL_NAME_free((int)v9);
          return 0;
        }
        return result;
      default:
        sub_D0048(34, 164, 167, (int)"crypto/x509v3/v3_alt.c", 498);
        goto LABEL_7;
    }
  }
  else
  {
    sub_D0048(34, 164, 124, (int)"crypto/x509v3/v3_alt.c", 439);
    return 0;
  }
  return result;
}
