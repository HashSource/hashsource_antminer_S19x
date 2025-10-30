int sub_83108()
{
  int v2; // [sp+4h] [bp-8h]

  v2 = sub_8B878(sub_8EF30);
  if ( v2 )
  {
    if ( sub_82FE4(v2) )
    {
      sub_8CD10(2, "src/level_list.c", 67, "zlog_level_set_default fail");
      sub_8B980(v2);
      return 0;
    }
    else
    {
      return v2;
    }
  }
  else
  {
    sub_8CD10(2, "src/level_list.c", 62, "zc_arraylist_new fail");
    return 0;
  }
}
