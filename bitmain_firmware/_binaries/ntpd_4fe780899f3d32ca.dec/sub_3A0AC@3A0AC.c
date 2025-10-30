int __fastcall sub_3A0AC(int a1, speed_t a2, __int16 a3)
{
  tcflag_t v6; // r3
  struct termios *p_c_line; // r3
  tcflag_t v8; // r3
  int *v10; // r4
  int v11; // r5
  int *v12; // r4
  int v13; // r5
  int v14; // [sp+4h] [bp-44h] BYREF
  struct termios termios_p; // [sp+8h] [bp-40h] BYREF

  if ( tcgetattr(a1, &termios_p) < 0 )
  {
    v12 = _errno_location();
    v13 = *v12;
    sub_64E00(3, "refclock_setup fd %d tcgetattr: %m", a1);
    *v12 = v13;
    return 0;
  }
  else
  {
    if ( a2 )
    {
      v14 = 0;
      termios_p.c_iflag = 261;
      termios_p.c_oflag = 0;
      if ( (a3 & 0x100) != 0 )
        v6 = 2976;
      else
        v6 = 2224;
      termios_p.c_cflag = v6;
      cfsetispeed(&termios_p, a2);
      cfsetospeed(&termios_p, a2);
      p_c_line = (struct termios *)&termios_p.c_line;
      do
      {
        BYTE1(p_c_line->c_iflag) = 0;
        p_c_line = (struct termios *)((char *)p_c_line + 1);
      }
      while ( p_c_line != (struct termios *)&termios_p.c_cc[31] );
      if ( ioctl(a1, 0x5415u, &v14) < 0 )
        sub_64E00(3, "refclock_setup fd %d TIOCMGET: %m", a1);
      if ( (v14 & 0x100) != 0 && (a3 & 0x80) != 0 )
        termios_p.c_cflag &= ~0x800u;
    }
    if ( (a3 & 0x20) != 0 )
      v8 = 0;
    else
      v8 = 2;
    termios_p.c_lflag = v8;
    if ( (a3 & 0x20) != 0 )
    {
      termios_p.c_iflag = v8;
      termios_p.c_cc[6] = 1;
    }
    if ( (a3 & 0x40) != 0 )
      termios_p.c_lflag |= 8u;
    if ( tcsetattr(a1, 0, &termios_p) < 0 )
    {
      v10 = _errno_location();
      v11 = *v10;
      sub_64E00(3, "refclock_setup fd %d TCSANOW: %m", a1);
      *v10 = v11;
      return 0;
    }
    else
    {
      if ( tcflush(a1, 2) < 0 )
        sub_64E00(3, "refclock_setup fd %d tcflush(): %m", a1);
      return 1;
    }
  }
}
