void __fastcall sub_858AC(int a1)
{
  int *v1; // r0
  int *v2; // r0

  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 5172) )
    {
      sub_885E4(*(_DWORD *)(a1 + 5172));
      *(_DWORD *)(a1 + 5172) = 0;
    }
    if ( *(_DWORD *)(a1 + 5176) && close(*(_DWORD *)(a1 + 5176)) )
    {
      v1 = _errno_location();
      sub_89984(2, "src/rule.c", 949, "close fail, maybe cause by write, errno[%d]", *v1);
    }
    if ( *(_DWORD *)(a1 + 6240) && pclose(*(FILE **)(a1 + 6240)) == -1 )
    {
      v2 = _errno_location();
      sub_89984(2, "src/rule.c", 954, "pclose fail, errno[%d]", *v2);
    }
    if ( *(_DWORD *)(a1 + 6236) )
    {
      sub_885E4(*(_DWORD *)(a1 + 6236));
      *(_DWORD *)(a1 + 6236) = 0;
    }
    sub_89984(0, "src/rule.c", 961, "zlog_rule_del[%p]", (const void *)a1);
    free((void *)a1);
  }
  else
  {
    sub_89984(2, "src/rule.c", 942, "a_rule is null or 0");
  }
}
