char *__fastcall sub_7CED0(int a1, const char *a2, _DWORD *a3)
{
  int v8; // [sp+14h] [bp-8h]
  char *v9; // [sp+14h] [bp-8h]

  if ( a1 )
  {
    v8 = sub_89108(a1, a2);
    if ( v8 )
    {
      return (char *)v8;
    }
    else
    {
      v9 = sub_7C62C(a2, a3);
      if ( v9 )
      {
        if ( sub_891C8(a1, v9, v9) )
        {
          sub_89984(2, "src/category_table.c", 119, "zc_hashtable_put fail");
          sub_7C26C(v9);
          return 0;
        }
        else
        {
          return v9;
        }
      }
      else
      {
        sub_89984(2, "src/category_table.c", 114, "zc_category_new fail");
        return 0;
      }
    }
  }
  else
  {
    sub_89984(2, "src/category_table.c", 105, "categories is null or 0");
    return 0;
  }
}
