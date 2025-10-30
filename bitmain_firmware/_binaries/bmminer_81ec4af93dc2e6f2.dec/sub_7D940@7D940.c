int __fastcall sub_7D940(_DWORD *a1)
{
  int v4; // [sp+1Ch] [bp-8h]

  a1[2316] = sub_7F5B4(a1 + 1291, a1 + 2323);
  if ( a1[2316] )
  {
    a1[1290] = sub_80CAC(a1 + 265);
    if ( a1[1290] )
    {
      v4 = sub_84364("*.*        >stdout", a1[2320], a1[2316], a1[2321], a1[2317], a1[2318], a1 + 2323);
      if ( v4 )
      {
        if ( sub_888DC(a1[2322], v4) )
        {
          sub_858AC(v4);
          sub_89984(2, "src/conf.c", 209, "zc_arraylist_add fail");
          return -1;
        }
        else
        {
          return 0;
        }
      }
      else
      {
        sub_89984(2, "src/conf.c", 202, "zlog_rule_new fail");
        return -1;
      }
    }
    else
    {
      sub_89984(2, "src/conf.c", 189, "zlog_rotater_new fail");
      return -1;
    }
  }
  else
  {
    sub_89984(2, "src/conf.c", 183, "zlog_format_new fail");
    return -1;
  }
}
