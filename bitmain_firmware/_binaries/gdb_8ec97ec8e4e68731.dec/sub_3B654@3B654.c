int __fastcall sub_3B654(int a1)
{
  int v2; // r0
  tcflag_t v3; // r3
  int v4; // r0
  int result; // r0
  int v6; // r4
  int *v7; // r0
  const char *v8; // r0
  int v9; // r5
  int *v10; // r0
  const char *v11; // r0
  struct termios termios_p; // [sp+4h] [bp-40h] BYREF

  v2 = tcgetattr(*(_DWORD *)(a1 + 4), &termios_p);
  if ( v2 < 0 )
  {
    v9 = *(_DWORD *)sub_242FB4(v2);
    v10 = _errno_location();
    v11 = (const char *)sub_6FF98(*v10);
    sub_2594B0(v9, "get_tty_state failed: %s\n", v11);
  }
  termios_p.c_iflag = 0;
  termios_p.c_oflag = 0;
  termios_p.c_lflag = 0;
  if ( dword_471B94 )
    v3 = termios_p.c_cflag & 0x7FFFFFCF | 0x80000000;
  else
    v3 = termios_p.c_cflag & 0x7FFFFFCF;
  termios_p.c_cflag = v3 | 0x830;
  v4 = *(_DWORD *)(a1 + 4);
  *(_WORD *)&termios_p.c_cc[5] = 0;
  result = tcsetattr(v4, 0, &termios_p);
  if ( result < 0 )
  {
    v6 = *(_DWORD *)sub_242FB4(result);
    v7 = _errno_location();
    v8 = (const char *)sub_6FF98(*v7);
    return sub_2594B0(v6, "set_tty_state failed: %s\n", v8);
  }
  return result;
}
