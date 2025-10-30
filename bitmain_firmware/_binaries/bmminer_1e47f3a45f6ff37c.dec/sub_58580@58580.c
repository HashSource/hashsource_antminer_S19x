int __fastcall sub_58580(int a1, int *a2, unsigned int a3)
{
  char v8[2048]; // [sp+10h] [bp-844h] BYREF
  struct termios termios_p; // [sp+810h] [bp-44h] BYREF
  int v10; // [sp+84Ch] [bp-8h]

  tcgetattr(a1, &termios_p);
  if ( a3 > 3 )
  {
    v10 = *a2;
    termios_p.c_cc[6] = v10;
    tcsetattr(a1, 0, &termios_p);
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
