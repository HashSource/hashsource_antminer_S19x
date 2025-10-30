int __fastcall sub_6D070(int a1)
{
  int v2; // r2
  int v3; // r10
  int v5; // r0
  int v6; // [sp+4h] [bp-Ch]

  if ( a1 < 0 )
    sub_6FC54("socket.c", 81, 0, "(int)fd >= 0");
  v2 = dword_B8D7C;
  if ( dword_B8D7C == -1 )
  {
    if ( sysconf(4) > 25 || sysconf(4) > 9 )
    {
      if ( sysconf(4) <= 25 )
        v2 = sysconf(4) - 10;
      else
        v2 = 16;
    }
    else
    {
      v2 = 0;
    }
    dword_B8D7C = v2;
    if ( debug > 0 )
    {
      v6 = v2;
      v5 = sysconf(4);
      sub_65C68("move_fd: estimated max descriptors: %d, initial socket boundary: %d\n", v5, v6);
      v2 = dword_B8D7C;
    }
  }
  while ( 1 )
  {
    if ( a1 >= v2 )
      return a1;
    v3 = fcntl(a1, 0);
    if ( v3 != -1 )
      break;
    if ( dword_B8D7C <= 9 )
    {
      v2 = 0;
      dword_B8D7C = 0;
      if ( debug <= 0 )
        return a1;
LABEL_5:
      sub_65C68("move_fd: selecting new socket boundary: %d\n", v2);
      v2 = dword_B8D7C;
      goto LABEL_6;
    }
    v2 = dword_B8D7C - 10;
    dword_B8D7C -= 10;
    if ( debug > 0 )
      goto LABEL_5;
LABEL_6:
    if ( v2 <= 0 )
      return a1;
  }
  close(a1);
  return v3;
}
