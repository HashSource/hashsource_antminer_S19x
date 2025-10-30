int __fastcall sub_63F68(int a1, speed_t a2)
{
  int v3; // r0
  int v4; // r6
  int *v6; // r4
  int v7; // r0
  int v8; // r5
  struct termios v9; // [sp+0h] [bp-40h] BYREF

  v3 = open64(a1, 2);
  v4 = v3;
  if ( v3 < 0 )
    return -1;
  if ( tcgetattr(v3, &v9) < 0
    || (v9.c_cflag = 2105,
        *(_WORD *)&v9.c_cc[5] = 5,
        v9.c_iflag = 0,
        v9.c_oflag = 0,
        v9.c_lflag = 0,
        cfsetispeed(&v9, a2),
        cfsetospeed(&v9, a2),
        tcsetattr(v4, 0, &v9) < 0) )
  {
    v6 = _errno_location();
    v7 = v4;
    v8 = *v6;
    v4 = -1;
    close(v7);
    *v6 = v8;
  }
  return v4;
}
