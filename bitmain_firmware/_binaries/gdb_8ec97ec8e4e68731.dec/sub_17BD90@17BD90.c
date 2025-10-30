int __fastcall sub_17BD90(const char *a1, int *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, int *a6)
{
  size_t v10; // r0
  int v11; // r4
  size_t v12; // r5
  char *v13; // r9
  char *v14; // r0
  unsigned int v15; // r0
  const char *v16; // r5
  const char *v17; // r4
  unsigned int v18; // r11
  int v19; // r2
  const char *v20; // r6
  unsigned int v21; // r3
  const char *v22; // r9
  int v23; // r3
  const char *v24; // r5
  int v25; // r6
  int result; // r0
  char *v27; // r2
  int v28; // r3
  bool v29; // cc
  int v30; // r3
  int v31; // [sp+Ch] [bp-8h]
  int v32; // [sp+Ch] [bp-8h]

  v10 = strlen(a1);
  v11 = 0;
  *a3 = 0;
  *a2 = 0;
  v12 = v10;
  *a5 = 0;
  *a4 = 0;
  *a6 = 0;
  if ( !strcmp(a1, "__go_init_main") )
  {
    result = sub_327254("main");
    *a2 = result;
    *a3 = "init";
    return result;
  }
  if ( !strcmp(a1, "main.main") )
  {
LABEL_26:
    v11 = sub_327254("main");
    *a2 = v11;
    *a3 = "main";
    return v11;
  }
  if ( strncmp(a1, "go.", 3u) && strncmp(a1, "libgo_", 6u) )
    return v11;
  v13 = strchr(a1, 64);
  if ( v13 )
    return 0;
  v11 = (int)strchr(a1, 46);
  if ( !v11 )
    return v11;
  v14 = strrchr(a1, 46);
  if ( (char *)v11 == v14 )
    return 0;
  v11 = (unsigned __int8)v14[1];
  if ( !v14[1] )
    return v11;
  if ( *(v14 - 1) == 46 )
    return 0;
  v15 = sub_327254(a1);
  v16 = (const char *)(v15 + v12);
  v17 = (const char *)v15;
  if ( v15 >= (unsigned int)v16 )
    goto LABEL_37;
  v18 = v15 + 1;
  while ( 1 )
  {
    v19 = *((unsigned __int8 *)v16 - 1);
    v20 = v16 - 1;
    v21 = v19 - 48;
    if ( !v13 )
    {
      v27 = (char *)(v16 - 1);
      v20 = v16;
      goto LABEL_32;
    }
    if ( v21 > 9 )
      break;
    --v16;
LABEL_36:
    if ( v17 >= v16 )
      goto LABEL_37;
  }
  if ( v19 != 78 )
    goto LABEL_28;
  if ( v17 < v20 )
  {
    v30 = *((unsigned __int8 *)v16 - 2);
    if ( v30 == 46 )
    {
      v22 = v13 + 2;
      v32 = strtol(v16, 0, 10);
      if ( v32 == strlen(v22) )
        goto LABEL_21;
      goto LABEL_29;
    }
    if ( (unsigned int)v20 <= v18 || v30 != 112 )
    {
      v27 = (char *)(v16 - 2);
      v21 = v30 - 48;
      goto LABEL_32;
    }
  }
  else if ( (unsigned int)v20 <= v18 || *(v16 - 2) != 112 )
  {
    goto LABEL_37;
  }
  if ( *(v16 - 3) != 46 )
  {
    if ( v17 < v20 )
    {
      v27 = (char *)(v16 - 2);
      v21 = 64;
      goto LABEL_32;
    }
    goto LABEL_37;
  }
  v22 = v13 + 2;
  v31 = strtol(v16, 0, 10);
  if ( v31 != strlen(v22) )
  {
LABEL_28:
    if ( v17 >= v20 )
      goto LABEL_37;
LABEL_29:
    v27 = (char *)(v16 - 2);
    v21 = *((unsigned __int8 *)v16 - 2) - 48;
LABEL_32:
    while ( 1 )
    {
      v16 = v27;
      if ( v21 <= 9 && *v20 == 95 )
        break;
      if ( v17 >= v27 )
        goto LABEL_37;
      v28 = (unsigned __int8)*(v27 - 1);
      v20 = v27--;
      v21 = v28 - 48;
    }
    v13 = v27;
    goto LABEL_36;
  }
LABEL_21:
  v23 = *((unsigned __int8 *)v16 - 2);
  if ( v23 == 46 )
  {
    v24 = v16 - 2;
    v25 = 0;
  }
  else
  {
    if ( v23 != 112 )
    {
      sub_94700(
        (int)"go-lang.c",
        288,
        "%s: Assertion `%s' failed.",
        "char* unpack_mangled_go_symbol(const char*, const char**, const char**, const char**, const char**, int*)",
        "p[-1] == 'p'");
      goto LABEL_26;
    }
    v24 = v16 - 3;
    v25 = 1;
  }
  v29 = v24 != 0;
  if ( v24 )
    v29 = v24 > v17;
  if ( v29 && *(v24 - 1) != 46 )
  {
    sub_17BD0C(v22, a4, a5);
    *v24 = 0;
    *a6 = v25;
  }
LABEL_37:
  sub_17BD0C(v17, a2, a3);
  return (int)v17;
}
