int __fastcall sub_1A2D60(int j, int a2, int i, int a4)
{
  int v4; // r12
  int v5; // r4
  int v6; // r5
  int v7; // r6
  int v8; // lr
  int v9; // r1
  int v10; // r12
  int v11; // lr
  bool v12; // zf
  bool v13; // zf
  int v15; // r3
  __int64 v16; // r0

  if ( j == i )
  {
    if ( a2 == a4 )
      return 0;
    else
      return a2 - a4;
  }
  v4 = *(_DWORD *)(j + 8);
  if ( v4 )
  {
    v5 = *(_DWORD *)(j + 8);
    v6 = 0;
    do
    {
      v5 = *(_DWORD *)(v5 + 8);
      ++v6;
    }
    while ( v5 );
    v7 = *(_DWORD *)(i + 8);
    if ( !v7 )
      goto LABEL_11;
    v8 = *(_DWORD *)(i + 8);
  }
  else
  {
    v7 = *(_DWORD *)(i + 8);
    if ( !v7 )
      goto LABEL_43;
    v8 = *(_DWORD *)(i + 8);
    v6 = 0;
  }
  v5 = 0;
  do
  {
    v7 = *(_DWORD *)(v7 + 8);
    ++v5;
  }
  while ( v7 );
  if ( v5 >= v6 )
  {
    if ( v5 <= v6 )
    {
LABEL_17:
      v12 = v4 == 0;
      if ( v4 )
        v12 = v8 == 0;
      a2 = *(_DWORD *)(j + 12);
      a4 = *(_DWORD *)(i + 12);
      if ( !v12 )
      {
        while ( v4 != v8 )
        {
          a2 = *(_DWORD *)(v4 + 12);
          a4 = *(_DWORD *)(v8 + 12);
          v4 = *(_DWORD *)(v4 + 8);
          v8 = *(_DWORD *)(v8 + 8);
          v13 = v4 == 0;
          if ( v4 )
            v13 = v8 == 0;
          if ( v13 )
            goto LABEL_43;
        }
        if ( a2 != a4 )
          return a2 - a4;
        goto LABEL_44;
      }
LABEL_43:
      sub_94700(
        (int)"macrotab.c",
        285,
        "%s: Assertion `%s' failed.",
        "int compare_locations(macro_source_file*, int, macro_source_file*, int)",
        "file1 && file2");
LABEL_44:
      v16 = sub_94700(
              (int)"macrotab.c",
              294,
              "%s: Assertion `%s' failed.",
              "int compare_locations(macro_source_file*, int, macro_source_file*, int)",
              "! included1 || ! included2");
      return sub_1A2F40(v16, HIDWORD(v16));
    }
    v15 = i;
    for ( i = v8; ; i = *(_DWORD *)(i + 8) )
    {
      --v5;
      a4 = *(_DWORD *)(v15 + 12);
      if ( v6 == v5 )
        break;
      v15 = i;
    }
    v10 = 0;
    v11 = 1;
    goto LABEL_15;
  }
LABEL_11:
  v9 = j;
  for ( j = *(_DWORD *)(j + 8); ; j = *(_DWORD *)(j + 8) )
  {
    --v6;
    a2 = *(_DWORD *)(v9 + 12);
    if ( v6 == v5 )
      break;
    v9 = j;
  }
  v10 = 1;
  v11 = 0;
LABEL_15:
  if ( j != i )
  {
    v8 = *(_DWORD *)(i + 8);
    v4 = *(_DWORD *)(j + 8);
    goto LABEL_17;
  }
  if ( a2 != a4 )
    return a2 - a4;
  if ( !(v10 ^ 1 | v11 ^ 1) )
    goto LABEL_44;
  if ( !v10 )
    return -v11;
  return v10;
}
