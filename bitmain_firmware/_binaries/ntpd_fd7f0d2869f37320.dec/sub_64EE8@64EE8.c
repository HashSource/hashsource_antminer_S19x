int __fastcall sub_64EE8(int a1, speed_t a2)
{
  int v3; // r0
  int v4; // r6
  int *v6; // r0
  int v7; // r5
  int *v8; // r4
  int v9; // r0
  struct termios v10; // [sp+0h] [bp-40h] BYREF

  v3 = open64(a1, 2);
  v4 = v3;
  if ( v3 < 0 )
    return -1;
  if ( tcgetattr(v3, &v10) < 0 )
    goto LABEL_6;
  v10.c_iflag = 0;
  v10.c_cflag = 2105;
  v10.c_oflag = 0;
  v10.c_cc[5] = 5;
  v10.c_lflag = 0;
  v10.c_cc[6] = 0;
  cfsetispeed(&v10, a2);
  cfsetospeed(&v10, a2);
  if ( tcsetattr(v4, 0, &v10) < 0 )
  {
LABEL_6:
    v6 = _errno_location();
    v7 = *v6;
    v8 = v6;
    v9 = v4;
    v4 = -1;
    close(v9);
    *v8 = v7;
  }
  return v4;
}
