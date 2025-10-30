int __fastcall sub_B5A40(int a1, unsigned __int16 *a2, char a3)
{
  const struct sockaddr *v6; // r0
  const struct sockaddr *v7; // r5
  socklen_t v8; // r0
  int v9; // r4
  int *v11; // r0
  int *v12; // r0
  int *v13; // r0
  _DWORD optval[2]; // [sp+Ch] [bp-8h] BYREF

  optval[0] = 1;
  if ( a1 != -1 )
  {
    if ( sub_B592C(a1) )
    {
      if ( (a3 & 4) != 0 && setsockopt(a1, 1, 9, optval, 4u) )
      {
        v9 = 0;
        v11 = _errno_location();
        sub_D0048(2, 14, *v11, "crypto/bio/b_sock2.c", 92);
        sub_D0048(32, 138, 137, "crypto/bio/b_sock2.c", 93);
        return v9;
      }
      if ( (a3 & 0x10) != 0 && setsockopt(a1, 6, 1, optval, 4u) )
      {
        v9 = 0;
        v12 = _errno_location();
        sub_D0048(2, 14, *v12, "crypto/bio/b_sock2.c", 101);
        sub_D0048(32, 138, 138, "crypto/bio/b_sock2.c", 102);
        return v9;
      }
      nullsub_23();
      v7 = v6;
      v8 = sub_B3808(a2);
      if ( connect(a1, v7, v8) != -1 )
        return 1;
      v9 = sub_B7FBC();
      if ( !v9 )
      {
        v13 = _errno_location();
        sub_D0048(2, 2, *v13, "crypto/bio/b_sock2.c", 110);
        sub_D0048(32, 138, 103, "crypto/bio/b_sock2.c", 111);
        return v9;
      }
    }
    return 0;
  }
  sub_D0048(32, 138, 135, "crypto/bio/b_sock2.c", 82);
  return 0;
}
