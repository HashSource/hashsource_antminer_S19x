int __fastcall sub_57D9C(int a1)
{
  struct termios termios_p; // [sp+8h] [bp-44h] BYREF
  speed_t speed; // [sp+44h] [bp-8h]

  speed = 4098;
  tcgetattr(a1, &termios_p);
  cfsetispeed(&termios_p, speed);
  cfsetospeed(&termios_p, speed);
  termios_p.c_cflag &= 0xFFFFFECF;
  termios_p.c_cflag |= 0x30u;
  termios_p.c_cflag |= 0x80u;
  termios_p.c_cflag |= 0x800u;
  termios_p.c_iflag &= 0xFFFFFA14;
  termios_p.c_oflag &= ~1u;
  termios_p.c_lflag &= 0xFFFF7FB4;
  termios_p.c_cc[5] = 0;
  termios_p.c_cc[6] = 9;
  tcsetattr(a1, 0, &termios_p);
  return tcflush(a1, 2);
}
