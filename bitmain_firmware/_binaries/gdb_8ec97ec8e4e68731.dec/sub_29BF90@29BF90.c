const char *__fastcall sub_29BF90(const char *a1)
{
  size_t v2; // r0
  int v3; // r3
  const char *v4; // r2
  int v5; // lr
  int v6; // r3
  size_t v7; // r4
  const char *v8; // r0
  const char *v9; // r4
  int v10; // t1
  int v11; // r2
  char *v12; // r3
  int v13; // t1
  int v14; // r3
  unsigned __int8 *v15; // r7
  unsigned __int8 *v16; // r6
  bool v17; // zf
  const char *v18; // r8
  int v19; // t1
  size_t v20; // r0
  size_t v21; // r9
  unsigned __int8 *v22; // r3

  if ( !a1 )
    return 0;
  v2 = strlen(a1);
  if ( v2 )
  {
    v3 = (unsigned __int8)a1[v2 - 1];
    v4 = &a1[v2 - 1];
    v5 = v3 - 44;
    v17 = v3 == 44;
    v6 = v3;
    if ( !v17 )
      v5 = 1;
    if ( (v5 & ((word_438898[v6] ^ 0x40u) >> 6)) == 0 )
    {
      v7 = 1 - v2;
      v8 = &a1[v2];
      v9 = &v4[v7];
      do
      {
        *--v8 = 0;
        if ( v9 == v8 )
          break;
        v10 = *(unsigned __int8 *)--v4;
      }
      while ( ((v10 != 44) & ((word_438898[v10] ^ 0x40u) >> 6)) == 0 );
    }
  }
  v11 = *(unsigned __int8 *)a1;
  if ( !*a1 )
    return 0;
  v12 = (char *)a1;
  do
  {
    if ( (word_438898[v11] & 0x40) != 0 )
      *v12 = 44;
    v13 = (unsigned __int8)*++v12;
    v11 = v13;
  }
  while ( v13 );
  v14 = *(unsigned __int8 *)a1;
  if ( !*a1 )
    return 0;
  v15 = (unsigned __int8 *)a1;
  do
  {
    while ( 1 )
    {
      v17 = v14 == 44;
      v16 = v15 + 1;
      v14 = v15[1];
      if ( v17 )
      {
        v17 = v14 == 44;
        if ( v14 != 44 )
          v17 = a1 == (const char *)v15;
        if ( v17 )
          break;
      }
      ++v15;
      if ( !v14 )
        goto LABEL_29;
    }
    v18 = (const char *)(v15 + 1);
    if ( v14 == 44 )
    {
      do
        v19 = *(unsigned __int8 *)++v18;
      while ( v19 == 44 );
    }
    v20 = strlen(v18);
    v21 = v20;
    if ( a1 != (const char *)v15 )
    {
      v22 = v15 + 2;
      ++v15;
      v16 = v22;
    }
    memmove(v15, v18, v20);
    v15[v21] = 0;
    v14 = v15[1];
    v15 = v16;
  }
  while ( v14 );
LABEL_29:
  if ( *a1 )
    return a1;
  else
    return 0;
}
