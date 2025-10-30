void *__fastcall sub_7C994(_DWORD *a1)
{
  if ( !a1 )
    return (void *)sub_89984(2, "src/category.c", 194, "a_category is null or 0");
  if ( !a1[275] )
    return (void *)sub_89984(1, "src/category.c", 196, "a_category->fit_rules_backup in NULL, never update before");
  if ( a1[274] )
    sub_885E4(a1[274]);
  a1[274] = a1[275];
  a1[275] = 0;
  memcpy(a1 + 258, a1 + 266, 0x20u);
  return memset(a1 + 266, 0, 0x20u);
}
