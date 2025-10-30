int __fastcall sub_1D1790(_DWORD *a1)
{
  _DWORD *v2; // r4
  int v3; // r6
  const char *v4; // r5
  size_t v5; // r0
  __int64 v7; // r0

  v2 = (_DWORD *)sub_1D0878(a1, 1)[6];
  if ( !v2 )
    return 0;
  v3 = 0;
  do
  {
    v4 = (const char *)v2[1];
    v5 = strlen(v4);
    if ( v5 > 2 )
    {
      if ( strcmp(&v4[v5 - 2], ".h") )
      {
        if ( strcmp(v4, aCNamespaces) )
          v3 = (int)v2;
      }
    }
    else
    {
      v3 = (int)v2;
    }
    v2 = (_DWORD *)*v2;
  }
  while ( v2 );
  if ( !v3 )
    return 0;
  if ( !*(_BYTE *)(v3 + 52) )
  {
    if ( sub_1CE1F0((int)a1, v3) )
      return sub_21A6C4();
    return 0;
  }
  v7 = sub_94700((int)"psymtab.c", 853, "select_source_symtab: readin pst found and no symtabs.");
  return sub_1D1860(v7, HIDWORD(v7));
}
