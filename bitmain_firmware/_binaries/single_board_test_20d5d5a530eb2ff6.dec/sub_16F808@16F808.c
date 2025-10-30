int __fastcall sub_16F808(int a1, _DWORD *a2, _DWORD *a3)
{
  signed int v3; // r4
  int v5; // r9
  int v6; // r8
  const char *v7; // r0
  int v8; // r0
  const char *v9; // r11
  int v10; // r5
  const char *v11; // r0
  int v12; // r5
  char *v13; // r6
  bool v14; // r3
  int v15; // r4
  void **v16; // r8
  char **v17; // r5
  _DWORD *v18; // r7
  int v19; // r9
  int v21; // r0
  int *v22; // r0
  int v23; // r0
  bool v24; // zf
  int v25; // r0
  int v26; // r0

  v3 = 0;
  v5 = 0;
  v6 = 0;
  while ( v3 < sub_10C010((int)a3) )
  {
    v8 = sub_10C01C(a3, v3);
    v9 = *(const char **)(v8 + 4);
    v10 = v8;
    if ( !strcmp(v9, "keyid") )
    {
      v7 = *(const char **)(v10 + 8);
      if ( v7 )
      {
        if ( !strcmp(v7, "always") )
          v6 = 2;
        else
          v6 = 1;
      }
      else
      {
        v6 = 1;
      }
    }
    else
    {
      if ( strcmp(v9, "issuer") )
      {
        sub_D0048(34, 119, 120, (int)"crypto/x509v3/v3_akey.c", 122);
        sub_D1240(2, "name=", *(_DWORD *)(v10 + 4));
        return 0;
      }
      v11 = *(const char **)(v10 + 8);
      if ( v11 )
      {
        if ( !strcmp(v11, "always") )
          v5 = 2;
        else
          v5 = 1;
      }
      else
      {
        v5 = 1;
      }
    }
    ++v3;
  }
  if ( a2 )
  {
    v12 = a2[1];
    if ( v12 )
    {
      v13 = (char *)v6;
      v14 = 1;
      if ( v6 )
      {
        if ( sub_10ED70(v12) >= 0 && (v26 = sub_10ED88(v12)) != 0 )
        {
          v13 = sub_11E00C(v26);
          v14 = v13 == 0;
        }
        else
        {
          v14 = 1;
          v13 = 0;
        }
        if ( v6 == 2 && v14 )
        {
          sub_D0048(34, 119, 123, (int)"crypto/x509v3/v3_akey.c", 144);
          return 0;
        }
      }
      if ( v5 )
        v15 = v14;
      else
        v15 = 0;
      if ( v5 == 2 )
        v15 |= 1u;
      if ( !v15 )
      {
        v16 = 0;
        v17 = (char **)sub_11A190();
        if ( !v17 )
        {
          v15 = 0;
          v18 = 0;
          v16 = 0;
          v19 = 0;
LABEL_27:
          sub_10BDB4(v16);
          GENERAL_NAME_free((int)v18);
          X509_NAME_free(v19);
          ASN1_INTEGER_free(v15);
          j_ASN1_STRING_free(v13);
          return 0;
        }
LABEL_36:
        v17[1] = (char *)v16;
        v17[2] = (char *)v15;
        *v17 = v13;
        return (int)v17;
      }
      v21 = sub_10E65C(v12);
      v19 = sub_115E5C(v21);
      v22 = (int *)sub_10E664(v12);
      v23 = sub_126524(v22);
      v24 = v23 == 0;
      if ( v23 )
        v24 = v19 == 0;
      v15 = v23;
      if ( v24 )
      {
        v18 = 0;
        sub_D0048(34, 119, 122, (int)"crypto/x509v3/v3_akey.c", 154);
        v16 = 0;
        goto LABEL_27;
      }
      v17 = (char **)sub_11A190();
      if ( !v17 )
      {
        v18 = 0;
        v16 = 0;
        goto LABEL_27;
      }
      v16 = sub_10BFCC();
      if ( v16 && (v25 = sub_11D910(), (v18 = (_DWORD *)v25) != 0) )
      {
        if ( sub_10BD3C((int *)v16, v25) )
        {
          *v18 = 4;
          v18[1] = v19;
          goto LABEL_36;
        }
      }
      else
      {
        v18 = 0;
      }
      sub_D0048(34, 119, 65, (int)"crypto/x509v3/v3_akey.c", 166);
      goto LABEL_27;
    }
    if ( *a2 == 1 )
      return sub_11A190();
  }
  sub_D0048(34, 119, 121, (int)"crypto/x509v3/v3_akey.c", 132);
  return 0;
}
