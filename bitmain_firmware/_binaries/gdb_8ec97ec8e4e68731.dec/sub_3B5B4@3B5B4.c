int __fastcall sub_3B5B4(int a1, struct termios *termios_p)
{
  return tcsetattr(*(_DWORD *)(a1 + 4), 0, termios_p) >> 31;
}
