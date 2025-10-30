void __fastcall sub_7F644(_DWORD *a1)
{
  if ( a1 )
  {
    if ( a1[274] )
      sub_8B980(a1[274]);
    sub_8CD10(0, "src/category.c", 40, "zlog_category_del[%p]", a1);
    free(a1);
  }
  else
  {
    sub_8CD10(2, "src/category.c", 38, "a_category is null or 0");
  }
}
