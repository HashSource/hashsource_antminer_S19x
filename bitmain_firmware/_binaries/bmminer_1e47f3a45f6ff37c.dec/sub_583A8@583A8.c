int __fastcall sub_583A8(int a1, int *a2, unsigned int a3)
{
  char v8[2048]; // [sp+10h] [bp-844h] BYREF
  struct termios termios_p; // [sp+810h] [bp-44h] BYREF
  speed_t speed; // [sp+84Ch] [bp-8h]

  tcgetattr(a1, &termios_p);
  if ( a3 > 3 )
  {
    speed = sub_582C0(*a2);
    cfsetispeed(&termios_p, speed);
    cfsetospeed(&termios_p, speed);
    tcsetattr(a1, 1, &termios_p);
    tcflush(a1, 2);
    return 0;
  }
  else
  {
    strcpy(v8, "bad param to set baud, size too small\n");
    sub_3B6AC(0, v8, 0, (int)v8);
    return -2;
  }
}
