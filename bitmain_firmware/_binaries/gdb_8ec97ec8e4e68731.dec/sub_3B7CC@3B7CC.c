int __fastcall sub_3B7CC(int a1, int a2)
{
  int v5; // r0
  struct termios termios_p; // [sp+4h] [bp-40h] BYREF

  if ( tcgetattr(*(_DWORD *)(a1 + 4), &termios_p) < 0 )
    return -1;
  switch ( a2 )
  {
    case 1:
      a2 = 768;
      goto LABEL_8;
    case 2:
      a2 = 256;
      goto LABEL_8;
    case 0:
LABEL_8:
      v5 = *(_DWORD *)(a1 + 4);
      termios_p.c_cflag = termios_p.c_cflag & 0xFFFFFCFF | a2;
      return tcsetattr(v5, 0, &termios_p) >> 31;
  }
  sub_94720("ser-unix.c", 446, "Incorrect parity value: %d", a2);
  return -1;
}
