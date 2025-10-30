int __fastcall sub_B5E04(int a1)
{
  struct sockaddr *v2; // r0
  int v3; // r0
  int v4; // r4
  int *v6; // r0
  socklen_t v7; // [sp+Ch] [bp-74h] BYREF

  v7 = 112;
  nullsub_24();
  v3 = accept(a1, v2, &v7);
  v4 = v3;
  if ( v3 == -1 )
  {
    if ( !sub_B7FBC() )
    {
      v6 = _errno_location();
      sub_D0048(2, 8, *v6, "crypto/bio/b_sock2.c", 294);
      sub_D0048(32, 137, 100, "crypto/bio/b_sock2.c", 295);
      return -1;
    }
    return -1;
  }
  if ( !sub_B592C(v3) )
  {
    close(v4);
    return -1;
  }
  return v4;
}
