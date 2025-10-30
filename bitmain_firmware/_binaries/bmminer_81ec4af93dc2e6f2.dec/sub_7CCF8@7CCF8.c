int __fastcall sub_7CCF8(int a1, _DWORD *a2)
{
  int i; // [sp+Ch] [bp-8h]

  if ( a1 )
  {
    for ( i = sub_89710(a1); i; i = sub_897AC(a1, i) )
    {
      if ( sub_7C7B8(*(_DWORD **)(i + 8), a2) )
      {
        sub_89984(2, "src/category_table.c", 66, "zlog_category_update_rules fail, try rollback");
        return -1;
      }
    }
    return 0;
  }
  else
  {
    sub_89984(2, "src/category_table.c", 62, "categories is null or 0", a2, 0);
    return -1;
  }
}
