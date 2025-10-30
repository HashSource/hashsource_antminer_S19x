void *__fastcall sub_7FD68(_DWORD *a1)
{
  if ( !a1 )
    return (void *)sub_8CD10(2, "src/category.c", 194, "a_category is null or 0");
  if ( !a1[275] )
    return (void *)sub_8CD10(1, "src/category.c", 196, "a_category->fit_rules_backup in NULL, never update before");
  if ( a1[274] )
    sub_8B980(a1[274]);
  a1[274] = a1[275];
  a1[275] = 0;
  memcpy(a1 + 258, a1 + 266, 0x20u);
  return memset(a1 + 266, 0, 0x20u);
}
