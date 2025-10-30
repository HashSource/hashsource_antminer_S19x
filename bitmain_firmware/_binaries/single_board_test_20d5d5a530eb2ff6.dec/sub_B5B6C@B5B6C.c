int __fastcall sub_B5B6C(int a1, unsigned __int16 *a2, char a3)
{
  const struct sockaddr *v5; // r0
  const struct sockaddr *v6; // r6
  socklen_t v7; // r0
  int *v9; // r0
  int *v10; // r0
  int optval; // [sp+Ch] [bp-4h] BYREF

  optval = 1;
  if ( a1 == -1 )
  {
    sub_D0048(32, 147, 135, "crypto/bio/b_sock2.c", 141);
    return 0;
  }
  else if ( (a3 & 1) != 0 && setsockopt(a1, 1, 2, &optval, 4u) )
  {
    v10 = _errno_location();
    sub_D0048(2, 14, *v10, "crypto/bio/b_sock2.c", 153);
    sub_D0048(32, 147, 139, "crypto/bio/b_sock2.c", 154);
    return 0;
  }
  else
  {
    nullsub_23();
    v6 = v5;
    v7 = sub_B3808(a2);
    if ( bind(a1, v6, v7) )
    {
      v9 = _errno_location();
      sub_D0048(2, 6, *v9, "crypto/bio/b_sock2.c", 161);
      sub_D0048(32, 147, 117, "crypto/bio/b_sock2.c", 162);
      return 0;
    }
    else
    {
      return 1;
    }
  }
}
