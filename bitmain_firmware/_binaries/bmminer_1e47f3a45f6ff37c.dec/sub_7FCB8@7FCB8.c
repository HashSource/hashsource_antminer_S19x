void *__fastcall sub_7FCB8(int a1)
{
  if ( !a1 )
    return (void *)sub_8CD10(2, "src/category.c", 176, "a_category is null or 0");
  if ( !*(_DWORD *)(a1 + 1100) )
    return (void *)sub_8CD10(1, "src/category.c", 178, "a_category->fit_rules_backup is NULL, never update before");
  sub_8B980(*(_DWORD *)(a1 + 1100));
  *(_DWORD *)(a1 + 1100) = 0;
  return memset((void *)(a1 + 1064), 0, 0x20u);
}
