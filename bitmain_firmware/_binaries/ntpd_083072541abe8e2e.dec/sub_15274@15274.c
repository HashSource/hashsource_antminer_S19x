__int16 *__fastcall sub_15274(unsigned int a1, int a2)
{
  int v3; // r8
  int v4; // r0
  __int16 *v5; // r1
  int v6; // r4
  __int16 *result; // r0
  int v8; // r2
  int v9; // r0
  int v10; // r3
  int v11; // r2
  int v12; // r4

  if ( a1 >= 0x400 )
  {
    sub_64E00(3, "Too many sockets in use, FD_SETSIZE %d exceeded by fd %d", 1024, a1);
    exit(1);
  }
  v3 = 1 << (a1 & 0x1F);
  if ( a2 )
  {
    v4 = ((int (*)(void))_fdelt_chk)();
    v5 = word_B9240;
    v6 = dword_B92C4;
    result = &word_B9240[2 * v4];
    v8 = a1 == dword_B92C4;
    if ( !dword_B92C4 )
      v8 = 0;
    *((_DWORD *)result + 1) &= ~v3;
    if ( v8 )
    {
      v12 = v6 - 1;
      while ( 1 )
      {
        result = &word_B9240[2 * _fdelt_chk(v12, v5, v8)];
        v8 = *((_DWORD *)result + 1);
        if ( (v8 & (1 << (v12 & 0x1F))) != 0 )
          break;
        if ( v12-- == 0 )
        {
          v12 = dword_B92C4;
          goto LABEL_14;
        }
      }
      dword_B92C4 = v12;
LABEL_14:
      if ( v12 == a1 )
        sub_6ECC0("ntp_io.c", "GNU", 2, "fd != maxactivefd");
    }
  }
  else
  {
    v9 = ((int (*)(void))_fdelt_chk)();
    v10 = dword_B92C4;
    result = &word_B9240[2 * v9];
    v11 = *((_DWORD *)result + 1);
    if ( dword_B92C4 < (int)a1 )
      v10 = a1;
    dword_B92C4 = v10;
    *((_DWORD *)result + 1) = v11 | v3;
  }
  return result;
}
