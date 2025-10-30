int __fastcall sub_283FA4(int fd, struct termios *termios_p)
{
  int *v4; // r0

  while ( 1 )
  {
    if ( tcsetattr(fd, 1, termios_p) >= 0 )
      return 0;
    v4 = _errno_location();
    if ( *v4 != 4 )
      break;
    *v4 = 0;
  }
  return -1;
}
