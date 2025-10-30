int __fastcall sub_B594C(int a1, int a2)
{
  struct sockaddr *v3; // r0
  int *v5; // r0
  socklen_t v6; // [sp+Ch] [bp-8h] BYREF

  if ( a2 )
  {
    sub_D0048(32, 141, 140, "crypto/bio/b_sock.c", 363);
  }
  else
  {
    v6 = 112;
    nullsub_24();
    if ( getsockname(a1, v3, &v6) == -1 )
    {
      v5 = _errno_location();
      sub_D0048(2, 16, *v5, "crypto/bio/b_sock.c", 352);
      sub_D0048(32, 141, 132, "crypto/bio/b_sock.c", 353);
    }
    else
    {
      if ( v6 <= 0x70 )
        return 1;
      sub_D0048(32, 141, 133, "crypto/bio/b_sock.c", 357);
    }
  }
  return 0;
}
