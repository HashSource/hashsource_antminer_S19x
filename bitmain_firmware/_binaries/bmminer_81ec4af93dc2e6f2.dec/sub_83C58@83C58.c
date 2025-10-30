int __fastcall sub_83C58(int a1, int a2)
{
  int *v3; // r0

  if ( sub_7F9F4(*(_DWORD *)(a1 + 6264), a2) )
  {
    sub_89984(2, "src/rule.c", 441, "zlog_format_gen_msg fail");
    return -1;
  }
  else if ( write(1, **(const void ***)(a2 + 28), *(_DWORD *)(*(_DWORD *)(a2 + 28) + 4) - **(_DWORD **)(a2 + 28)) >= 0 )
  {
    return 0;
  }
  else
  {
    v3 = _errno_location();
    sub_89984(2, "src/rule.c", 447, "write fail, errno[%d]", *v3);
    return -1;
  }
}
