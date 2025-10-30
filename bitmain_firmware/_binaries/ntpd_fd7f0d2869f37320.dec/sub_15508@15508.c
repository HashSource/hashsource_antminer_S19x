__int16 *__fastcall sub_15508(unsigned int a1, int a2)
{
  int v2; // r5
  int v3; // r0
  int v4; // r1
  int v5; // r4
  _BOOL4 v6; // r2
  __int16 *result; // r0
  int v8; // r0
  char v9; // r12
  int v10; // r4

  v2 = a1;
  if ( a1 >= 0x400 )
  {
    sub_65D40(3, "Too many sockets in use, FD_SETSIZE %d exceeded by fd %d", 1024, a1);
    exit(1);
  }
  if ( a2 )
  {
    v3 = ((int (*)(void))_fdelt_chk)();
    v4 = 1;
    v5 = dword_BA2C4;
    v6 = v2 == dword_BA2C4;
    if ( !dword_BA2C4 )
      v6 = 0;
    result = &word_BA240[2 * v3];
    *((_DWORD *)result + 1) &= ~(1 << (v2 & 0x1F));
    if ( v6 )
    {
      v10 = v5 - 1;
      while ( 1 )
      {
        result = &word_BA240[2 * _fdelt_chk(v10, v4)];
        if ( ((*((int *)result + 1) >> (v10 & 0x1F)) & 1) != 0 )
          break;
        if ( v10-- == 0 )
        {
          v10 = dword_BA2C4;
          goto LABEL_14;
        }
      }
      dword_BA2C4 = v10;
LABEL_14:
      if ( v2 == v10 )
        sub_6FC54("ntp_io.c", "GNU", 2, "fd != maxactivefd");
    }
  }
  else
  {
    v8 = ((int (*)(void))_fdelt_chk)();
    v9 = v2 & 0x1F;
    if ( v2 < dword_BA2C4 )
      v2 = dword_BA2C4;
    dword_BA2C4 = v2;
    result = &word_BA240[2 * v8];
    *((_DWORD *)result + 1) |= 1 << v9;
  }
  return result;
}
