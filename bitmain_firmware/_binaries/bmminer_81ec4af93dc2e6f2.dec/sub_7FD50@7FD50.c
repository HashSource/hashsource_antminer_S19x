int sub_7FD50()
{
  int v2; // [sp+4h] [bp-8h]

  v2 = sub_884DC(sub_8BBB0);
  if ( v2 )
  {
    if ( sub_7FC2C(v2) )
    {
      sub_89984(2, "src/level_list.c", 67, "zlog_level_set_default fail");
      sub_885E4(v2);
      return 0;
    }
    else
    {
      return v2;
    }
  }
  else
  {
    sub_89984(2, "src/level_list.c", 62, "zc_arraylist_new fail");
    return 0;
  }
}
