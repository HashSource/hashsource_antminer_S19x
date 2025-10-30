int __fastcall sub_3A89C(int a1, speed_t a2, __int16 a3)
{
  tcflag_t v6; // r3
  tcflag_t v8; // r3
  struct termios *p_c_line; // r3
  int *v10; // r0
  int v11; // r5
  int *v12; // r4
  int *v13; // r0
  int v14; // r5
  int *v15; // r4
  int v16; // [sp+4h] [bp-44h] BYREF
  struct termios termios_p; // [sp+8h] [bp-40h] BYREF

  if ( tcgetattr(a1, &termios_p) < 0 )
  {
    v13 = _errno_location();
    v14 = *v13;
    v15 = v13;
    sub_65D40(3, "refclock_setup fd %d tcgetattr: %m", a1);
    *v15 = v14;
    return 0;
  }
  else
  {
    if ( a2 )
    {
      v16 = 0;
      termios_p.c_oflag = 0;
      if ( (a3 & 0x100) != 0 )
        v8 = 2976;
      else
        v8 = 2224;
      termios_p.c_iflag = 261;
      termios_p.c_cflag = v8;
      cfsetispeed(&termios_p, a2);
      cfsetospeed(&termios_p, a2);
      p_c_line = (struct termios *)&termios_p.c_line;
      do
      {
        BYTE1(p_c_line->c_iflag) = 0;
        p_c_line = (struct termios *)((char *)p_c_line + 1);
      }
      while ( p_c_line != (struct termios *)&termios_p.c_cc[31] );
      if ( ioctl(a1, 0x5415u, &v16) < 0 )
        sub_65D40(3, "refclock_setup fd %d TIOCMGET: %m", a1);
      if ( (v16 & 0x100) != 0 && (a3 & 0x80) != 0 )
        termios_p.c_cflag &= ~0x800u;
    }
    if ( (a3 & 0x20) != 0 )
      v6 = 0;
    else
      v6 = 2;
    termios_p.c_lflag = v6;
    if ( (a3 & 0x20) != 0 )
    {
      termios_p.c_iflag = v6;
      termios_p.c_cc[6] = 1;
    }
    if ( (a3 & 0x40) != 0 )
      termios_p.c_lflag |= 8u;
    if ( tcsetattr(a1, 0, &termios_p) < 0 )
    {
      v10 = _errno_location();
      v11 = *v10;
      v12 = v10;
      sub_65D40(3, "refclock_setup fd %d TCSANOW: %m", a1);
      *v12 = v11;
      return 0;
    }
    else
    {
      if ( tcflush(a1, 2) < 0 )
        sub_65D40(3, "refclock_setup fd %d tcflush(): %m", a1);
      return 1;
    }
  }
}
