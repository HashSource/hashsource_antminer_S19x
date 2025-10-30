int __fastcall sub_3B870(int a1, int a2)
{
  int v4; // r3
  int v5; // r1
  const char *v6; // r2
  signed int v8; // r5
  struct termios termios_p; // [sp+4h] [bp-40h] BYREF

  if ( a2 == 50 )
  {
    v8 = 1;
  }
  else
  {
    if ( a2 <= 49 )
    {
      sub_946B0("Invalid baud rate %d.  Minimum value is %d.", a2, 50);
LABEL_9:
      *_errno_location() = 22;
      return -1;
    }
    v4 = 75;
    v5 = 0;
    v6 = "2";
    while ( 1 )
    {
      v6 += 8;
      if ( v4 == -1 )
      {
        sub_946B0("Invalid baud rate %d.  Maximum value is %d.", a2, *(_DWORD *)&::a2[8 * v5]);
        goto LABEL_9;
      }
      if ( a2 == v4 )
        break;
      if ( a2 < v4 )
      {
        sub_946B0("Invalid baud rate %d.  Closest values are %d and %d.", a2, *(_DWORD *)&::a2[8 * v5], v4);
        goto LABEL_9;
      }
      v4 = *((_DWORD *)v6 + 2);
      ++v5;
    }
    v8 = *(_DWORD *)&::a2[8 * v5 + 12];
    if ( v8 < 0 )
      goto LABEL_9;
  }
  if ( tcgetattr(*(_DWORD *)(a1 + 4), &termios_p) < 0 )
    return -1;
  cfsetospeed(&termios_p, v8);
  cfsetispeed(&termios_p, v8);
  return tcsetattr(*(_DWORD *)(a1 + 4), 0, &termios_p) >> 31;
}
