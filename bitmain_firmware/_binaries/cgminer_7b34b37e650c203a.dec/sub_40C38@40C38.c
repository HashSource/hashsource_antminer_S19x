int __fastcall sub_40C38(_DWORD *a1, const char **a2, int *a3, void (*a4)(const char *, ...))
{
  bool v8; // zf
  int result; // r0
  const char **v10; // r6
  int *v11; // r3
  int v12; // r4
  int v13; // t1
  unsigned __int8 *v14; // r0
  int v15; // lr
  unsigned int v16; // r12
  int v17; // r1
  int v18; // r3
  char *v19; // r10
  int v20; // r3
  int v21; // r1
  char *v22; // r11
  int v23; // r10
  const char *v24; // r0
  int *v25; // r3
  const char *v26; // r7
  int *v27; // r11
  const char *v28; // r10
  size_t v29; // r4
  size_t v30; // lr
  int *v31; // r3
  const char *v32; // r11
  size_t v33; // r0
  int *v34; // r2
  const char *v35; // r11
  const char *v36; // r3
  size_t v37; // r10
  const char *v38; // [sp+8h] [bp-14h]
  int v39; // [sp+Ch] [bp-10h]
  unsigned int v40; // [sp+10h] [bp-Ch] BYREF
  size_t n[2]; // [sp+14h] [bp-8h] BYREF

  v8 = getenv("POSIXLY_CORRECT") == 0;
  result = (int)a2[1];
  if ( !v8 )
  {
    v10 = a2 + 1;
    if ( !result )
      return result;
    if ( *(_BYTE *)result != 45 )
      return 0;
    v12 = 1;
    if ( *(_BYTE *)(result + 1) == 45 )
      goto LABEL_23;
LABEL_15:
    v14 = (unsigned __int8 *)sub_408F4(&v40);
    if ( v14 )
    {
      v15 = *a3 + 1;
      if ( *v14 == (unsigned __int8)(*v10)[v15] )
      {
LABEL_17:
        v16 = v40;
        v38 = (const char *)(v14 - 1);
        *a3 = v15;
        n[0] = 2;
        v17 = 28 * v16;
        v18 = dword_76864 + 28 * v16;
        if ( *(_DWORD *)(v18 + 4) != 1 )
        {
LABEL_18:
          if ( v15 )
          {
            v19 = (char *)&(*v10)[v15 + 1];
            if ( *v19 )
            {
              *a3 = 0;
              goto LABEL_20;
            }
          }
          v19 = (char *)a2[v12 + 1];
          if ( v19 )
            goto LABEL_20;
          a4("%s: %.*s: %s", *a2, n[0], v38, "requires an argument");
          return -1;
        }
LABEL_37:
        v19 = 0;
        v22 = (char *)(*(int (__fastcall **)(_DWORD))(v18 + 8))(*(_DWORD *)(v18 + 20));
        goto LABEL_38;
      }
      while ( 1 )
      {
        v14 = sub_40954((int)v14, &v40);
        if ( !v14 )
          break;
        v15 = *a3 + 1;
        if ( (unsigned __int8)(*v10)[v15] == *v14 )
          goto LABEL_17;
      }
    }
LABEL_36:
    v33 = strlen(*v10);
    a4("%s: %.*s: %s", *a2, v33, *v10, "unrecognized option");
    return -1;
  }
  if ( !result )
    return result;
  if ( *(_BYTE *)result == 45 )
  {
    v10 = a2 + 1;
    v12 = 1;
  }
  else
  {
    v11 = (int *)(a2 + 2);
    v12 = 1;
    do
    {
      v10 = (const char **)v11;
      v13 = *v11++;
      result = v13;
      ++v12;
      if ( !v13 )
        return result;
    }
    while ( *(_BYTE *)result != 45 );
  }
  if ( *(_BYTE *)(result + 1) != 45 )
    goto LABEL_15;
LABEL_23:
  v23 = *(unsigned __int8 *)(result + 2);
  if ( !*(_BYTE *)(result + 2) )
  {
    sub_40C00(a1, (int)a2, v12);
    return v23;
  }
  if ( *a3 )
    _assert_fail("*offset == 0", "ccan/opt/parse.c", 0x3Bu, "parse_one");
  v24 = sub_40844(&v40, n);
  if ( !v24 )
    goto LABEL_36;
  v25 = a3;
  v26 = v24;
  v27 = v25;
  v39 = v12;
  while ( 1 )
  {
    v28 = *v10;
    v29 = n[0];
    if ( strncmp(*v10 + 2, v26, n[0]) )
      goto LABEL_35;
    v30 = v29 + 2;
    if ( v28[v29 + 2] == 61 )
      break;
    if ( !v28[v29 + 2] )
    {
      v16 = v40;
      v31 = v27;
      v32 = v26;
      a3 = v31;
      v12 = v39;
      v38 = v32 - 2;
      v17 = 28 * v40;
      n[0] = v30;
      v18 = dword_76864 + 28 * v40;
      if ( *(_DWORD *)(v18 + 4) == 1 )
        goto LABEL_37;
      goto LABEL_34;
    }
LABEL_35:
    v26 = sub_4089C((int)v26, &v40, n);
    if ( !v26 )
      goto LABEL_36;
  }
  v16 = v40;
  v34 = v27;
  v35 = v26;
  a3 = v34;
  v36 = v28;
  v37 = v29 + 3;
  v12 = v39;
  v17 = 28 * v40;
  v19 = (char *)&v36[v37];
  n[0] = v30;
  v38 = v35 - 2;
  v18 = dword_76864 + 28 * v40;
  if ( *(_DWORD *)(v18 + 4) == 1 )
  {
    if ( v19 )
    {
      a4("%s: %.*s: %s", *a2, v30, v38, "doesn't allow an argument");
      return -1;
    }
    goto LABEL_37;
  }
  if ( !v19 )
  {
LABEL_34:
    v15 = *a3;
    goto LABEL_18;
  }
LABEL_20:
  v20 = dword_76864;
  v21 = dword_76864 + v17;
  if ( *(_DWORD *)(v21 + 4) == 4 )
  {
    sub_4014C((int)v19, *(_DWORD **)(v21 + 20));
    v16 = v40;
    v20 = dword_76864;
  }
  v22 = (char *)(*(int (__fastcall **)(char *, _DWORD))(v20 + 28 * v16 + 12))(v19, *(_DWORD *)(v20 + 28 * v16 + 20));
LABEL_38:
  if ( v22 )
  {
    a4("%s: %.*s: %s", *a2, n[0], v38, v22);
    free(v22);
    return -1;
  }
  else
  {
    if ( *a3 )
    {
      if ( !(*v10)[*a3 + 1] )
      {
        *a3 = 0;
        goto LABEL_42;
      }
    }
    else
    {
LABEL_42:
      sub_40C00(a1, (int)a2, v12);
      if ( v19 )
      {
        if ( *v10 == v19 )
          sub_40C00(a1, (int)a2, v12);
      }
    }
    return 1;
  }
}
