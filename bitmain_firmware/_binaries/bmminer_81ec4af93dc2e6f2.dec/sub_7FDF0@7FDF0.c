int __fastcall sub_7FDF0(int a1, const char *a2)
{
  _DWORD *v6; // [sp+14h] [bp-8h]

  v6 = (_DWORD *)sub_8BDB8(a2);
  if ( v6 )
  {
    if ( sub_887C8(a1, *v6, v6) )
    {
      sub_89984(2, "src/level_list.c", 90, "zc_arraylist_set fail");
      sub_89984(2, "src/level_list.c", 96, "line[%s]", a2);
      sub_8BBB0(v6);
      return -1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    sub_89984(2, "src/level_list.c", 85, "zlog_level_new fail");
    return -1;
  }
}
