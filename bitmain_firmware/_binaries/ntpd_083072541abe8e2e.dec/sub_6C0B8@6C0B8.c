int __fastcall sub_6C0B8(int a1)
{
  int v2; // r2
  int v3; // r9
  int v4; // r2
  int v6; // r0
  int v7; // [sp+4h] [bp-10h]

  if ( a1 < 0 )
    sub_6ECC0("socket.c", 81, 0, "(int)fd >= 0");
  v2 = dword_B7D7C;
  if ( dword_B7D7C == -1 )
  {
    if ( sysconf(4) > 25 || sysconf(4) > 9 )
      v2 = sysconf(4) <= 25 ? sysconf(4) - 10 : 16;
    else
      v2 = 0;
    dword_B7D7C = v2;
    if ( debug > 0 )
    {
      v7 = v2;
      v6 = sysconf(4);
      sub_64D28("move_fd: estimated max descriptors: %d, initial socket boundary: %d\n", v6, v7);
      v2 = dword_B7D7C;
    }
  }
  while ( 1 )
  {
    if ( a1 >= v2 )
      return a1;
    v3 = fcntl(a1, 0);
    if ( v3 != -1 )
      break;
    v4 = dword_B7D7C;
    if ( dword_B7D7C < 10 )
      v4 = 10;
    v2 = v4 - 10;
    dword_B7D7C = v2;
    if ( debug > 0 )
    {
      sub_64D28("move_fd: selecting new socket boundary: %d\n", v2);
      v2 = dword_B7D7C;
    }
    if ( v2 <= 0 )
      return a1;
  }
  close(a1);
  return v3;
}
