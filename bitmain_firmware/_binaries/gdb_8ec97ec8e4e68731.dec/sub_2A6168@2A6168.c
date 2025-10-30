int __fastcall sub_2A6168(_DWORD *a1, char *s1)
{
  const char *v3; // r6
  char *v4; // r4
  const char *v5; // r7
  char *v6; // r0
  int v7; // r8
  int v8; // r2
  _BOOL4 v9; // r3
  const char *v10; // r1
  int v11; // t1
  int v12; // t1
  _BOOL4 v13; // r3
  int v14; // r3
  int result; // r0
  unsigned int v16; // r0
  int v17; // r0
  int v18; // t1
  int v19; // r2
  size_t v20; // r8

  v3 = (const char *)a1[5];
  v4 = s1;
  if ( !strcasecmp(s1, v3) && a1[8] )
    return 1;
  v5 = (const char *)a1[6];
  if ( !strcasecmp(v4, v5) )
    return 1;
  v6 = strchr(v5, 58);
  if ( !v6 )
  {
    v20 = strlen(v3);
    if ( strncasecmp(v4, v3, v20) )
      goto LABEL_6;
    if ( v4[v20] == 58 )
    {
      if ( strcasecmp(&v4[v20 + 1], v5) )
        goto LABEL_6;
    }
    else if ( strcasecmp(&v4[v20], v5) )
    {
      goto LABEL_6;
    }
    return 1;
  }
  v7 = v6 - v5;
  if ( !strncasecmp(v4, v5, v6 - v5) && !strcasecmp(&v4[v7], &v5[v7 + 1]) )
    return 1;
LABEL_6:
  v8 = (unsigned __int8)*v4;
  if ( !*v4 )
    return a1[8];
  v9 = *(unsigned __int8 *)v3 != v8;
  if ( !*v3 )
    v9 = 1;
  if ( !v9 )
  {
    v10 = v3;
    do
    {
      v11 = (unsigned __int8)*++v4;
      v8 = v11;
      if ( !v11 )
        return a1[8];
      v12 = *(unsigned __int8 *)++v10;
      v13 = v8 != v12;
      if ( !v12 )
        v13 = 1;
    }
    while ( !v13 );
  }
  if ( v8 == 58 )
  {
    v14 = (unsigned __int8)v4[1];
    if ( v4[1] )
    {
      ++v4;
      goto LABEL_19;
    }
    return a1[8];
  }
  v14 = (unsigned __int8)*v4;
LABEL_19:
  result = word_438898[v14] & 4;
  if ( !result )
    return result;
  v16 = 0;
  do
  {
    v17 = v14 + 10 * v16;
    v18 = (unsigned __int8)*++v4;
    v14 = v18;
    v16 = v17 - 48;
  }
  while ( (word_438898[v18] & 4) != 0 );
  if ( v16 == 7410 )
  {
    v19 = 37;
    v16 = 45;
    goto LABEL_32;
  }
  if ( v16 <= 0x1CF2 )
  {
    if ( v16 == 5200 )
    {
      v19 = 2;
      v16 = 10;
      goto LABEL_32;
    }
    if ( v16 <= 0x1450 )
    {
      if ( v16 <= 8 )
      {
        if ( v16 < 3 && v16 != 1 )
          return 0;
        v19 = 2;
      }
      else
      {
        if ( v16 != 3000 && v16 != 4000 )
          return 0;
        v19 = 8;
      }
      goto LABEL_32;
    }
    if ( v16 == 5307 )
      goto LABEL_63;
    if ( v16 > 0x14BB )
    {
      if ( v16 == 5407 )
      {
        v19 = 2;
        v16 = 18;
      }
      else
      {
        if ( v16 != 6000 )
          return 0;
        v19 = 26;
      }
      goto LABEL_32;
    }
    if ( v16 == 5206 )
    {
LABEL_63:
      v19 = 2;
      v16 = 12;
      goto LABEL_32;
    }
    if ( v16 != 5282 )
      return 0;
    v19 = 2;
    v16 = 16;
  }
  else if ( v16 == 68010 )
  {
    v19 = 2;
    v16 = 3;
  }
  else if ( v16 > 0x109AA )
  {
    if ( (int *)v16 == &elf_hash_chain[244] )
    {
      v19 = 2;
      v16 = 6;
    }
    else if ( v16 > (unsigned int)&elf_hash_chain[244] )
    {
      if ( (int *)v16 == &elf_hash_chain[249] )
      {
        v19 = 2;
        v16 = 7;
      }
      else
      {
        if ( (int *)v16 != &elf_hash_chain[317] )
          return 0;
        v19 = 2;
        v16 = 8;
      }
    }
    else if ( (int *)v16 == &elf_hash_chain[239] )
    {
      v19 = 2;
      v16 = 4;
    }
    else
    {
      if ( v16 != 68030 )
        return 0;
      v19 = 2;
      v16 = 5;
    }
  }
  else if ( v16 == 7750 )
  {
    v19 = 37;
    v16 = 64;
  }
  else if ( v16 > 0x1E46 )
  {
    if ( v16 == 32000 )
    {
      v19 = 13;
    }
    else
    {
      if ( (int *)v16 != &elf_hash_chain[234] )
        return 0;
      v19 = 2;
      v16 = 1;
    }
  }
  else if ( v16 == 7708 )
  {
    v19 = 37;
    v16 = 48;
  }
  else
  {
    if ( v16 != 7729 )
      return 0;
    v19 = 37;
    v16 = 61;
  }
LABEL_32:
  if ( a1[3] != v19 )
    return 0;
  return a1[4] == v16;
}
