char *__fastcall sub_802A4(int a1, const char *a2, _DWORD *a3)
{
  int v8; // [sp+14h] [bp-8h]
  char *v9; // [sp+14h] [bp-8h]

  if ( a1 )
  {
    v8 = sub_8C498(a1, a2);
    if ( v8 )
    {
      return (char *)v8;
    }
    else
    {
      v9 = sub_7FA00(a2, a3);
      if ( v9 )
      {
        if ( sub_8C558(a1, v9, v9) )
        {
          sub_8CD10(2, "src/category_table.c", 119, "zc_hashtable_put fail");
          sub_7F644(v9);
          return 0;
        }
        else
        {
          return v9;
        }
      }
      else
      {
        sub_8CD10(2, "src/category_table.c", 114, "zc_category_new fail");
        return 0;
      }
    }
  }
  else
  {
    sub_8CD10(2, "src/category_table.c", 105, "categories is null or 0");
    return 0;
  }
}
