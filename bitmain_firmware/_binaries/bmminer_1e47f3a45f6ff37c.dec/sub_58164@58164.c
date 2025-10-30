int __fastcall sub_58164(int a1, speed_t *a2, _DWORD *a3)
{
  char v7[2048]; // [sp+14h] [bp-848h] BYREF
  struct termios termios_p; // [sp+814h] [bp-48h] BYREF
  speed_t v9; // [sp+850h] [bp-Ch]
  speed_t v10; // [sp+854h] [bp-8h]

  tcgetattr(a1, &termios_p);
  v10 = cfgetispeed(&termios_p);
  v9 = cfgetospeed(&termios_p);
  if ( v10 == v9 )
  {
    if ( *a3 > 3u )
    {
      *a2 = v10;
      *a3 = 4;
      return 0;
    }
    else
    {
      strcpy(v7, "bad param to get baud, size too small\n");
      sub_3B6AC(0, v7, 0, (int)v7);
      return -2;
    }
  }
  else
  {
    strcpy(v7, "input and output speed not match\n");
    sub_3B6AC(0, v7, 0, (int)v7);
    return -1;
  }
}
