void __fastcall sub_7C26C(_DWORD *a1)
{
  if ( a1 )
  {
    if ( a1[274] )
      sub_885E4(a1[274]);
    sub_89984(0, "src/category.c", 40, "zlog_category_del[%p]", a1);
    free(a1);
  }
  else
  {
    sub_89984(2, "src/category.c", 38, "a_category is null or 0");
  }
}
