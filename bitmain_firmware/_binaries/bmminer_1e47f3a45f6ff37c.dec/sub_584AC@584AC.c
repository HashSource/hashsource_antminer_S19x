int __fastcall sub_584AC(int a1, _DWORD *a2, _DWORD *a3)
{
  char v7[2048]; // [sp+14h] [bp-840h] BYREF
  struct termios termios_p; // [sp+814h] [bp-40h] BYREF

  tcgetattr(a1, &termios_p);
  if ( *a3 > 3u )
  {
    *a2 = termios_p.c_cc[6];
    *a3 = 4;
    return 0;
  }
  else
  {
    strcpy(v7, "bad param to get vmin, size too small\n");
    sub_3B6AC(0, v7, 0, (int)v7);
    return -2;
  }
}
