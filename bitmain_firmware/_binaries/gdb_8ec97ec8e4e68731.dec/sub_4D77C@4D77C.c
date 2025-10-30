char *sub_4D77C()
{
  int v0; // r3
  int v2; // r0
  unsigned int v3; // r3
  unsigned __int8 v4; // [sp+4h] [bp-8h] BYREF
  unsigned __int8 v5; // [sp+5h] [bp-7h]
  char v6; // [sp+6h] [bp-6h]
  char v7; // [sp+7h] [bp-5h]

  v0 = dword_46B130;
  if ( dword_46B130 == -1 )
  {
    v2 = sub_98F68(&dword_4878EC);
    if ( ptrace(PTRACE_SYSCALL|PTRACE_POKEDATA, v2, 0, &v4) < 0 )
    {
      dword_46B130 = 0;
      return 0;
    }
    v3 = v4;
    byte_474742 = v5;
    byte_474740 = v7;
    byte_474741 = v6;
    byte_474743 = v4;
    if ( v5 > 0x10u )
    {
      sub_946B0("arm-linux-gdb supports %d hardware watchpoints but target                       supports %d", 16, v5);
      v3 = (unsigned __int8)byte_474743;
      byte_474742 = 16;
    }
    if ( v3 > 0x10 )
    {
      sub_946B0("arm-linux-gdb supports %d hardware breakpoints but target                       supports %d", 16, v3);
      byte_474743 = 16;
    }
    v0 = (unsigned __int8)byte_474740;
    if ( byte_474740 )
      v0 = 1;
    dword_46B130 = v0;
  }
  if ( v0 == 1 )
    return &byte_474740;
  return 0;
}
