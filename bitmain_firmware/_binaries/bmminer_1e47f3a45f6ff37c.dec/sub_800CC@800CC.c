int __fastcall sub_800CC(int a1, _DWORD *a2)
{
  int i; // [sp+Ch] [bp-8h]

  if ( a1 )
  {
    for ( i = sub_8CA9C(a1); i; i = sub_8CB38(a1, i) )
    {
      if ( sub_7FB8C(*(_DWORD **)(i + 8), a2) )
      {
        sub_8CD10(2, "src/category_table.c", 66, "zlog_category_update_rules fail, try rollback");
        return -1;
      }
    }
    return 0;
  }
  else
  {
    sub_8CD10(2, "src/category_table.c", 62, "categories is null or 0", a2, 0);
    return -1;
  }
}
