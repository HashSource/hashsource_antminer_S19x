int __fastcall sub_B5658(const char *a1, _WORD *a2)
{
  int v4; // r5
  int v6; // r0
  unsigned __int16 *v7; // r0
  struct addrinfo *v8; // [sp+Ch] [bp-4h] BYREF

  v8 = 0;
  if ( a1 )
  {
    if ( sub_B55B4() != 1 )
      return 0;
    v6 = sub_B3E14(0, a1, 0, 2, 1, &v8);
    v4 = v6;
    if ( v6 )
    {
      if ( sub_B3A54((int)v8) == 2 )
      {
        v4 = 1;
        v7 = (unsigned __int16 *)sub_B3A98((int)v8);
        *a2 = __rev16(sub_B37D0(v7));
      }
      else
      {
        v4 = 0;
        sub_D0048(32, 107, 141, "crypto/bio/b_sock.c", 74);
      }
      sub_B3AA0(v8);
    }
    else
    {
      sub_D1240(2, "host=", a1);
    }
    return v4;
  }
  else
  {
    sub_D0048(32, 107, 113, "crypto/bio/b_sock.c", 64);
    return 0;
  }
}
