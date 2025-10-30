int __fastcall sub_7FB8C(_DWORD *a1, _DWORD *a2)
{
  if ( a1 )
  {
    if ( a2 )
    {
      if ( a1[275] )
        sub_8B980(a1[275]);
      a1[275] = a1[274];
      a1[274] = 0;
      memcpy(a1 + 266, a1 + 258, 0x20u);
      if ( sub_7F770((int)a1, a2) )
      {
        sub_8CD10(2, "src/category.c", 163, "zlog_category_obtain_rules fail");
        a1[274] = 0;
        return -1;
      }
      else
      {
        return 0;
      }
    }
    else
    {
      sub_8CD10(2, "src/category.c", 151, "new_rules is null or 0");
      return -1;
    }
  }
  else
  {
    sub_8CD10(2, "src/category.c", 150, "a_category is null or 0");
    return -1;
  }
}
