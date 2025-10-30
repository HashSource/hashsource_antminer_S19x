int __fastcall sub_50FFC(_DWORD *a1, const char **a2, int *a3, void (*a4)(const char *, ...))
{
  bool v8; // zf
  int result; // r0
  const char **v10; // r5
  int v11; // r4
  unsigned __int8 *v12; // r0
  int i; // r2
  unsigned int v14; // r1
  int v15; // r3
  int v16; // r0
  char *v17; // r7
  int v18; // r2
  int v19; // r3
  char *v20; // r9
  int v21; // r7
  unsigned __int8 *v22; // r0
  int *v23; // r3
  unsigned __int8 *v24; // r8
  int *v25; // r9
  size_t v26; // r4
  const char *v27; // r7
  size_t v28; // r2
  int *v29; // r3
  unsigned __int8 *v30; // r9
  size_t v31; // r0
  int *v32; // r3
  int v33; // t1
  int *v34; // r1
  unsigned __int8 *v35; // r9
  int v36; // lr
  const char *v37; // [sp+8h] [bp-14h]
  int v38; // [sp+Ch] [bp-10h]
  unsigned int v39; // [sp+10h] [bp-Ch] BYREF
  size_t n[2]; // [sp+14h] [bp-8h] BYREF

  v8 = getenv("POSIXLY_CORRECT") == 0;
  result = (int)a2[1];
  if ( v8 )
  {
    if ( !result )
      return result;
    if ( *(_BYTE *)result == 45 )
    {
      v10 = a2 + 1;
      v11 = 1;
    }
    else
    {
      v32 = (int *)(a2 + 2);
      v11 = 1;
      do
      {
        v10 = (const char **)v32;
        v33 = *v32++;
        result = v33;
        ++v11;
        if ( !v33 )
          return result;
      }
      while ( *(_BYTE *)result != 45 );
    }
  }
  else
  {
    v10 = a2 + 1;
    if ( !result )
      return result;
    if ( *(_BYTE *)result != 45 )
      return 0;
    v11 = 1;
  }
  if ( *(_BYTE *)(result + 1) != 45 )
  {
    v12 = sub_50CA0(&v39);
    if ( !v12 )
    {
LABEL_29:
      v31 = strlen(*v10);
      a4("%s: %.*s: %s", *a2, v31, *v10, "unrecognized option");
      return -1;
    }
    for ( i = *a3 + 1; (unsigned __int8)(*v10)[i] != *v12; i = *a3 + 1 )
    {
      v12 = sub_50D00((int)v12, &v39);
      if ( !v12 )
        goto LABEL_29;
    }
    v14 = v39;
    *a3 = i;
    v37 = (const char *)(v12 - 1);
    v15 = 28 * v14;
    n[0] = 2;
    v16 = dword_9CD914 + 28 * v14;
    if ( *(_DWORD *)(v16 + 4) != 1 )
    {
LABEL_13:
      if ( i )
      {
        v17 = (char *)&(*v10)[i + 1];
        if ( *v17 )
        {
          *a3 = 0;
          goto LABEL_15;
        }
      }
      v17 = (char *)a2[v11 + 1];
      if ( v17 )
        goto LABEL_15;
      a4("%s: %.*s: %s", *a2, n[0], v37, "requires an argument");
      return -1;
    }
LABEL_36:
    v17 = 0;
    v20 = (char *)(*(int (__fastcall **)(_DWORD))(v16 + 8))(*(_DWORD *)(v16 + 20));
    goto LABEL_37;
  }
  v21 = *(unsigned __int8 *)(result + 2);
  if ( !*(_BYTE *)(result + 2) )
  {
    sub_50FC0(a1, (int)a2, v11);
    return v21;
  }
  if ( *a3 )
    _assert_fail("*offset == 0", "ccan/opt/parse.c", 0x3Bu, "parse_one");
  v22 = sub_50BF0(&v39, (int *)n);
  if ( !v22 )
    goto LABEL_29;
  v23 = a3;
  v24 = v22;
  v25 = v23;
  v38 = v11;
  while ( 1 )
  {
    v26 = n[0];
    v27 = *v10;
    if ( strncmp(*v10 + 2, (const char *)v24, n[0]) )
      goto LABEL_28;
    v28 = v26 + 2;
    if ( v27[v26 + 2] == 61 )
      break;
    if ( !v27[v26 + 2] )
    {
      v14 = v39;
      v29 = v25;
      v30 = v24;
      a3 = v29;
      v37 = (const char *)(v30 - 2);
      v15 = 28 * v39;
      n[0] = v26 + 2;
      v16 = dword_9CD914 + 28 * v39;
      v11 = v38;
      if ( *(_DWORD *)(v16 + 4) == 1 )
        goto LABEL_36;
      goto LABEL_26;
    }
LABEL_28:
    v24 = sub_50C48((int)v24, &v39, (int *)n);
    if ( !v24 )
      goto LABEL_29;
  }
  v34 = v25;
  v35 = v24;
  a3 = v34;
  v14 = v39;
  v17 = (char *)&v27[v26 + 3];
  v15 = 28 * v39;
  v16 = dword_9CD914 + 28 * v39;
  v37 = (const char *)(v35 - 2);
  v11 = v38;
  v36 = *(_DWORD *)(v16 + 4);
  n[0] = v28;
  if ( v36 == 1 )
  {
    if ( v17 )
    {
      a4("%s: %.*s: %s", *a2);
      return -1;
    }
    goto LABEL_36;
  }
  if ( !v17 )
  {
LABEL_26:
    i = *a3;
    goto LABEL_13;
  }
LABEL_15:
  v18 = dword_9CD914;
  v19 = dword_9CD914 + v15;
  if ( *(_DWORD *)(v19 + 4) == 4 )
  {
    sub_50468((int)v17, *(_DWORD **)(v19 + 20));
    v18 = dword_9CD914;
    v14 = v39;
  }
  v20 = (char *)(*(int (__fastcall **)(char *, _DWORD))(v18 + 28 * v14 + 12))(v17, *(_DWORD *)(v18 + 28 * v14 + 20));
LABEL_37:
  if ( v20 )
  {
    a4("%s: %.*s: %s", *a2, n[0], v37, v20);
    free(v20);
    return -1;
  }
  else
  {
    if ( *a3 )
    {
      if ( !(*v10)[*a3 + 1] )
      {
        *a3 = 0;
        goto LABEL_41;
      }
    }
    else
    {
LABEL_41:
      sub_50FC0(a1, (int)a2, v11);
      if ( v17 )
      {
        if ( *v10 == v17 )
          sub_50FC0(a1, (int)a2, v11);
      }
    }
    return 1;
  }
}
