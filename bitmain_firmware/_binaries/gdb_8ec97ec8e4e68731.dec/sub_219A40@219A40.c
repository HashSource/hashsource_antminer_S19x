void __fastcall sub_219A40(int a1)
{
  _DWORD *v1; // r0
  _DWORD *v2; // r8
  __int64 v3; // r6
  unsigned int v4; // r3
  unsigned int v5; // r5
  int v6; // r4
  void *v7; // r0
  unsigned int v8; // r2
  unsigned int v9; // r5
  int v10; // r4
  void *v11; // r0

  while ( 1 )
  {
    v1 = (_DWORD *)sub_1CD14C(a1, (_DWORD *)dword_489700);
    v2 = v1;
    if ( !v1 )
      break;
    LODWORD(v3) = *v1;
    if ( *v1 )
    {
      if ( !*(_DWORD *)(v3 + 4) && !*(_DWORD *)(v1[1] + 4) )
        return;
      v4 = *(_DWORD *)(v3 + 12);
      if ( v4 == dword_46DBAC )
      {
        HIDWORD(v3) = v1[1];
        if ( v4 == *(_DWORD *)(HIDWORD(v3) + 12) )
        {
          if ( v4 )
          {
            v5 = 0;
            v6 = *v1;
            do
            {
              while ( 1 )
              {
                ++v5;
                if ( *(_DWORD *)(v6 + 16) == 1 )
                {
                  v7 = *(void **)(v6 + 24);
                  if ( v7 )
                    break;
                }
                *(_DWORD *)(v6 + 16) = 0;
                v6 += 16;
                if ( v5 >= v4 )
                  goto LABEL_12;
              }
              free(v7);
              v4 = *(_DWORD *)(v3 + 12);
              *(_DWORD *)(v6 + 16) = 0;
              v6 += 16;
            }
            while ( v5 < v4 );
LABEL_12:
            HIDWORD(v3) = v2[1];
            v8 = *(_DWORD *)(HIDWORD(v3) + 12);
            if ( v8 )
            {
              v9 = 0;
              v10 = v2[1];
              do
              {
                while ( 1 )
                {
                  ++v9;
                  if ( *(_DWORD *)(v10 + 16) == 1 )
                  {
                    v11 = *(void **)(v10 + 24);
                    if ( v11 )
                      break;
                  }
                  *(_DWORD *)(v10 + 16) = 0;
                  v10 += 16;
                  if ( v9 >= v8 )
                    goto LABEL_19;
                }
                free(v11);
                v8 = *(_DWORD *)(HIDWORD(v3) + 12);
                *(_DWORD *)(v10 + 16) = 0;
                v10 += 16;
              }
              while ( v9 < v8 );
LABEL_19:
              v3 = *(_QWORD *)v2;
            }
            else
            {
              LODWORD(v3) = *v2;
            }
          }
          *(_DWORD *)v3 = 0;
          *(_DWORD *)(v3 + 4) = 0;
          *(_DWORD *)(v3 + 8) = 0;
          *(_QWORD *)HIDWORD(v3) = 0;
          *(_DWORD *)(HIDWORD(v3) + 8) = 0;
          return;
        }
        goto LABEL_28;
      }
    }
    else
    {
      if ( dword_46DBAC )
        goto LABEL_29;
      if ( !v1[1] )
        return;
      sub_94700(
        (int)"symtab.c",
        1430,
        "%s: Assertion `%s' failed.",
        "void symbol_cache_flush(program_space*)",
        "cache->static_symbols == NULL");
    }
    sub_94700(
      (int)"symtab.c",
      1441,
      "%s: Assertion `%s' failed.",
      "void symbol_cache_flush(program_space*)",
      "cache->global_symbols->size == symbol_cache_size");
LABEL_28:
    sub_94700(
      (int)"symtab.c",
      1442,
      "%s: Assertion `%s' failed.",
      "void symbol_cache_flush(program_space*)",
      "cache->static_symbols->size == symbol_cache_size");
LABEL_29:
    a1 = *(_DWORD *)(sub_94700(
                       (int)"symtab.c",
                       1429,
                       "%s: Assertion `%s' failed.",
                       "void symbol_cache_flush(program_space*)",
                       "symbol_cache_size == 0")
                   + 16);
  }
}
