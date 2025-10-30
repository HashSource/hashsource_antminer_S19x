int __fastcall sub_870E0(int a1, int a2)
{
  int *v3; // r0

  if ( sub_82DAC(*(_DWORD *)(a1 + 6264), a2) )
  {
    sub_8CD10(2, "src/rule.c", 459, "zlog_format_gen_msg fail");
    return -1;
  }
  else if ( write(2, **(const void ***)(a2 + 28), *(_DWORD *)(*(_DWORD *)(a2 + 28) + 4) - **(_DWORD **)(a2 + 28)) >= 0 )
  {
    return 0;
  }
  else
  {
    v3 = _errno_location();
    sub_8CD10(2, "src/rule.c", 465, "write fail, errno[%d]", *v3);
    return -1;
  }
}
