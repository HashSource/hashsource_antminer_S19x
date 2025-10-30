size_t *__fastcall sub_170904(int a1, int a2, _DWORD *a3)
{
  size_t *v5; // r10
  unsigned int v6; // r7
  int v7; // r0
  int v8; // r4
  _DWORD *v9; // r8
  const char *v10; // r5
  const char *v11; // r6

  v5 = (size_t *)sub_B211C();
  if ( v5 )
  {
    v6 = 0;
    if ( sub_10C010((int)a3) <= 0 )
    {
      return v5;
    }
    else
    {
      while ( 1 )
      {
        v7 = sub_10C01C(a3, v6);
        v8 = *(_DWORD *)(a1 + 52);
        v9 = (_DWORD *)v7;
        v10 = *(const char **)(v8 + 4);
        if ( !v10 )
        {
LABEL_12:
          sub_D0048(34, 101, 111, (int)"crypto/x509v3/v3_bitst.c", 86);
          sub_D1240(6, "section:", *v9, ",name:", v9[1], ",value:", v9[2]);
          j_ASN1_STRING_free_0((int)v5);
          return 0;
        }
        v11 = *(const char **)(v7 + 4);
        while ( strcmp(*(const char **)(v8 + 8), v11) && strcmp(v10, v11) )
        {
          v8 += 12;
          v10 = *(const char **)(v8 + 4);
          __pld((void *)(v8 + 76));
          if ( !v10 )
            goto LABEL_12;
        }
        if ( !sub_125A14(v5, *(_DWORD *)v8, 1) )
          break;
        if ( !*(_DWORD *)(v8 + 4) )
          goto LABEL_12;
        if ( (int)++v6 >= sub_10C010((int)a3) )
          return v5;
      }
      sub_D0048(34, 101, 65, (int)"crypto/x509v3/v3_bitst.c", 77);
      j_ASN1_STRING_free_0((int)v5);
      return 0;
    }
  }
  else
  {
    sub_D0048(34, 101, 65, (int)"crypto/x509v3/v3_bitst.c", 67);
    return 0;
  }
}
