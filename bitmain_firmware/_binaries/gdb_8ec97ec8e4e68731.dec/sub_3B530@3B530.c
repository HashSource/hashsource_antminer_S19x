int __fastcall sub_3B530(int a1, int a2)
{
  struct termios termios_p; // [sp+4h] [bp-40h] BYREF

  if ( tcgetattr(*(_DWORD *)(a1 + 4), &termios_p) < 0 )
    return -1;
  if ( a2 == 1 )
  {
    termios_p.c_cflag &= ~0x40u;
  }
  else
  {
    if ( a2 < 1 || a2 > 3 )
      return 1;
    termios_p.c_cflag |= 0x40u;
  }
  return tcsetattr(*(_DWORD *)(a1 + 4), 0, &termios_p) >> 31;
}
