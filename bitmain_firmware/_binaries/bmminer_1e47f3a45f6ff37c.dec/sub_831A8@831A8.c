int __fastcall sub_831A8(int a1, const char *a2)
{
  _DWORD *v6; // [sp+14h] [bp-8h]

  v6 = (_DWORD *)sub_8F138(a2);
  if ( v6 )
  {
    if ( sub_8BB60(a1, *v6, v6) )
    {
      sub_8CD10(2, "src/level_list.c", 90, "zc_arraylist_set fail");
      sub_8CD10(2, "src/level_list.c", 96, "line[%s]", a2);
      sub_8EF30(v6);
      return -1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    sub_8CD10(2, "src/level_list.c", 85, "zlog_level_new fail");
    return -1;
  }
}
