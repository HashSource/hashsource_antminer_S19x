int __fastcall sub_2ED7A0(int a1)
{
  _DWORD *v1; // r5
  int v2; // r4
  _BOOL4 v3; // r0
  int v4; // r10
  int v5; // r7
  int v6; // r3
  int v7; // r1
  int v8; // r7
  int v9; // r12
  int v10; // lr
  int v11; // r6
  int v12; // r3
  int v13; // r2
  int v14; // r12
  int result; // r0
  int v16; // r7
  const char *v17; // r10
  int v18; // r6
  size_t v19; // r9
  char v20; // r5
  size_t v21; // r3
  int v22; // r0
  char v23; // r5
  int v25; // [sp+8h] [bp-Ch]
  _DWORD *v26; // [sp+Ch] [bp-8h]

  v1 = *(_DWORD **)(a1 + 56);
  if ( !v1 )
    return 1;
  while ( 1 )
  {
    if ( *(_DWORD *)(v1[1] + 4) == 5 )
    {
      v2 = v1[25];
      if ( v2 )
      {
        if ( (*(_WORD *)(v2 + 24) & 0x380) != 0x200 )
        {
          v3 = 0;
          v4 = v1[25];
          v5 = 0;
          do
          {
            v6 = *(_DWORD *)(v4 + 20);
            if ( (v6 & 0x100000) != 0 )
            {
              *(_BYTE *)(v4 + 24) |= 8u;
            }
            else if ( (*(_BYTE *)(v4 + 24) & 8) != 0 && (v6 & 1) != 0 && *(_DWORD *)(*(_DWORD *)(v4 + 140) + 4) != 7 )
            {
              v5 = 1;
            }
            if ( !v3 && (v6 & 0x2000) != 0 )
              v3 = strncmp(*(const char **)v4, ".debug_line.", 0xCu) == 0;
            v4 = *(_DWORD *)(v4 + 12);
          }
          while ( v4 );
          if ( v5 )
            break;
        }
      }
    }
LABEL_38:
    v1 = (_DWORD *)v1[39];
    if ( !v1 )
      return 1;
  }
  v7 = v2;
  do
  {
    v8 = *(_DWORD *)(v7 + 20);
    if ( (v8 & 0x2000000) != 0 )
    {
      v9 = 1;
      v10 = 1;
      v11 = *(_DWORD *)(*(_DWORD *)(v7 + 140) + 124);
      v12 = v11;
      do
      {
        v13 = *(_DWORD *)(v12 + 20);
        v12 = *(_DWORD *)(*(_DWORD *)(v12 + 140) + 124);
        if ( (v13 & 0x2000) == 0 )
          v9 = 0;
        if ( (v13 & 7) != 0 )
          v10 = 0;
      }
      while ( v11 != v12 );
      if ( v10 | v9 )
      {
        do
        {
          v14 = *(_DWORD *)(v12 + 140);
          *(_BYTE *)(v12 + 24) |= 8u;
          v12 = *(_DWORD *)(v14 + 124);
        }
        while ( v11 != v12 );
      }
    }
    else
    {
      if ( (v8 & 0x2000) == 0 && (v8 & 7) != 0 )
        goto LABEL_25;
      if ( !*(_DWORD *)(*(_DWORD *)(v7 + 140) + 124) )
        *(_BYTE *)(v7 + 24) |= 8u;
    }
    if ( (*(_BYTE *)(v7 + 24) & 8) != 0 && (v8 & 0x2000) != 0 )
      v4 = 1;
LABEL_25:
    v7 = *(_DWORD *)(v7 + 12);
  }
  while ( v7 );
  if ( v3 )
  {
    v16 = v2;
    v25 = v4;
    v26 = v1;
    do
    {
      if ( (*(_DWORD *)(v16 + 20) & 0x10) != 0 && (*(_BYTE *)(v16 + 24) & 8) == 0 )
      {
        v17 = *(const char **)v16;
        v18 = v2;
        v19 = strlen(*(const char **)v16);
        do
        {
          v20 = *(_BYTE *)(v18 + 24);
          if ( (v20 & 8) != 0 && (*(_DWORD *)(v18 + 20) & 0x2000) != 0 )
          {
            v21 = strlen(*(const char **)v18);
            if ( v19 < v21 )
            {
              v22 = strncmp((const char *)(*(_DWORD *)v18 + v21 - v19), v17, v19);
              v23 = v20 & 0xF7 | (8 * (v22 & 1));
              if ( !v22 )
                *(_BYTE *)(v18 + 24) = v23;
            }
          }
          v18 = *(_DWORD *)(v18 + 12);
        }
        while ( v18 );
      }
      v16 = *(_DWORD *)(v16 + 12);
    }
    while ( v16 );
    v4 = v25;
    v1 = v26;
  }
  if ( !v4 )
    goto LABEL_38;
  while ( 1 )
  {
    if ( (*(_BYTE *)(v2 + 24) & 8) != 0 && (*(_DWORD *)(v2 + 20) & 0x2000) != 0 )
    {
      result = sub_2ED50C(a1, v2, (int)sub_2DB8A8);
      if ( !result )
        return result;
    }
    v2 = *(_DWORD *)(v2 + 12);
    if ( !v2 )
      goto LABEL_38;
  }
}
