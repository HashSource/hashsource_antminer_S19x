int __fastcall sub_1799F0(const char *a1, DIR ***a2)
{
  size_t v4; // r9
  const char *v5; // r0
  const char *v6; // r5
  size_t v7; // r0
  bool v8; // zf
  bool v9; // cc
  size_t v10; // r4
  const char *v11; // r0
  void *v12; // r4
  unsigned __int8 *v13; // r0
  unsigned __int8 *v14; // r10
  int v15; // r4

  v4 = strlen(a1);
  while ( 1 )
  {
    v5 = (const char *)sub_E9D40(a2, a1);
    v6 = v5;
    if ( !v5 )
      break;
    while ( 1 )
    {
      v7 = strlen(v5);
      v8 = v7 == 5;
      v9 = v7 > 5;
      v10 = v7;
      v11 = &v6[v7 - 5];
      if ( v9 )
        break;
      if ( v8 )
        goto LABEL_6;
      v5 = (const char *)sub_E9D40(a2, a1);
      v6 = v5;
      if ( !v5 )
        goto LABEL_14;
    }
    if ( !strcasecmp(v11, ".conf") )
      goto LABEL_7;
LABEL_6:
    if ( strcasecmp(&v6[v10 - 4], ".cnf") )
      continue;
LABEL_7:
    v12 = (void *)(v10 + v4 + 2);
    v13 = (unsigned __int8 *)sub_E0740(v12);
    v14 = v13;
    if ( !v13 )
    {
      sub_D0048(14, 107, 65, (int)"crypto/conf/conf_def.c", 740);
      break;
    }
    if ( !*v13 )
    {
      sub_E9F28(v13, a1, (unsigned int)v12);
      sub_E9F6C(v14, "/", (unsigned int)v12);
    }
    sub_E9F6C(v14, v6, (unsigned int)v12);
    v15 = sub_B782C((int)v14, "r");
    CRYPTO_free(v14);
    if ( v15 )
      return v15;
  }
LABEL_14:
  sub_E9DCC(a2);
  *a2 = 0;
  return 0;
}
