int __fastcall sub_B3AE0(const char *a1, int *a2, int *a3, int a4)
{
  const char *v5; // r4
  char *v8; // r5
  const char *v10; // r6
  size_t v11; // r5
  size_t v12; // r9
  char *v13; // r0
  bool v14; // zf
  int v15; // r0
  bool v16; // zf
  bool v17; // zf
  int v18; // r0

  v5 = a1;
  if ( *a1 == 91 )
  {
    v13 = strchr(a1, 93);
    if ( !v13 )
      goto LABEL_7;
    ++v5;
    v11 = v13 - v5;
    if ( v13[1] )
    {
      if ( v13[1] != 58 )
        goto LABEL_7;
      v10 = v13 + 2;
      v12 = strlen(v13 + 2);
LABEL_6:
      if ( strchr(v10, 58) )
      {
LABEL_7:
        sub_D0048(32, 136, 130, "crypto/bio/b_addr.c", 551);
        return 0;
      }
      v16 = v5 == 0;
      if ( v5 )
        v16 = a2 == 0;
      if ( v16 )
        goto LABEL_26;
      goto LABEL_15;
    }
  }
  else
  {
    v8 = strrchr(a1, 58);
    if ( v8 != strchr(v5, 58) )
    {
      sub_D0048(32, 136, 129, "crypto/bio/b_addr.c", 548);
      return 0;
    }
    if ( v8 )
    {
      v10 = v8 + 1;
      v11 = v8 - v5;
      v12 = strlen(v10);
      goto LABEL_6;
    }
    if ( a4 )
    {
      v10 = v5;
      v12 = strlen(v5);
      goto LABEL_26;
    }
    v11 = strlen(v5);
  }
  v14 = a2 == 0;
  if ( a2 )
    v14 = v5 == 0;
  if ( v14 )
    return 1;
  v12 = 0;
  v10 = 0;
LABEL_15:
  if ( !v11 || v11 == 1 && *v5 == 42 )
  {
    *a2 = 0;
  }
  else
  {
    v15 = sub_E9EF4(v5, v11, "crypto/bio/b_addr.c", 530);
    *a2 = v15;
    if ( !v15 )
    {
LABEL_19:
      sub_D0048(32, 136, 65, "crypto/bio/b_addr.c", 554);
      return 0;
    }
  }
LABEL_26:
  v17 = v10 == 0;
  if ( v10 )
    v17 = a3 == 0;
  if ( v17 )
    return 1;
  if ( v12 && (v12 != 1 || *v10 != 42) )
  {
    v18 = sub_E9EF4(v10, v12, "crypto/bio/b_addr.c", 540);
    *a3 = v18;
    if ( !v18 )
      goto LABEL_19;
    return 1;
  }
  *a3 = 0;
  return 1;
}
