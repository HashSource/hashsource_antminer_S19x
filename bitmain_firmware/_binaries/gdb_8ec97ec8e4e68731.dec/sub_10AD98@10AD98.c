int __fastcall sub_10AD98(_DWORD *a1, int a2)
{
  int v2; // r4
  int v3; // r7
  int v6; // r0
  int v7; // r0
  __int64 v8; // r0
  __int64 v9; // r0
  __int64 v10; // kr00_8
  int v11; // r8
  int v12; // r6
  int *v13; // r10
  int *v14; // r8
  int *v15; // r7
  int v16; // r1
  int v17; // t1
  int v18; // r4

  v2 = *(_BYTE *)(a2 + 20) & 0x1F;
  v3 = a1[3];
  if ( v2 == *(_DWORD *)(*a1 + 8) )
  {
    v6 = sub_21B7DC(a2);
    v7 = sub_21CBA8(v2, v6);
    v8 = sub_347674(v7, a1[2]);
    *(_DWORD *)(a2 + 40) = *(_DWORD *)(v3 + 4 * HIDWORD(v8));
    *(_DWORD *)(v3 + 4 * HIDWORD(v8)) = a2;
  }
  else
  {
    v9 = sub_94700(
           (int)"dictionary.c",
           690,
           "%s: Assertion `%s' failed.",
           "void insert_symbol_hashed(dictionary*, symbol*)",
           "SYMBOL_LANGUAGE (sym) == DICT_LANGUAGE (dict)->la_language");
    v10 = v9;
    v11 = *(_DWORD *)(v9 + 8);
    v12 = *(_DWORD *)(v9 + 16) + 1;
    *(_DWORD *)(v9 + 16) = v12;
    if ( v12 / 5 >= v11 )
    {
      v13 = *(int **)(v9 + 12);
      *(_DWORD *)(v9 + 12) = sub_93094(2 * v11 + 1, 4u);
      *(_DWORD *)(v10 + 8) = 2 * v11 + 1;
      if ( v11 > 0 )
      {
        v14 = &v13[v11];
        v15 = v13;
        do
        {
          v17 = *v15++;
          v16 = v17;
          if ( v17 )
          {
            v18 = *(_DWORD *)(v16 + 40);
            if ( v18 )
            {
              while ( 1 )
              {
                sub_10AD98(v10);
                if ( !*(_DWORD *)(v18 + 40) )
                  break;
                v18 = *(_DWORD *)(v18 + 40);
              }
            }
            sub_10AD98(v10);
          }
        }
        while ( v14 != v15 );
      }
      if ( v13 )
        free(v13);
    }
    LODWORD(v8) = sub_10AD98(v10);
    *(_DWORD *)(v10 + 16) = v12;
  }
  return v8;
}
