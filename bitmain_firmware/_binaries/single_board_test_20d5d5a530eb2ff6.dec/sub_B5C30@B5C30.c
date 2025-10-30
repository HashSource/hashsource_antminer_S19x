int __fastcall sub_B5C30(int a1, unsigned __int16 *a2, unsigned int a3)
{
  int v6; // r4
  int *v7; // r0
  int *v9; // r0
  int *v10; // r0
  int *v11; // r0
  int *v12; // r0
  int v13; // [sp+Ch] [bp-10h] BYREF
  int optval; // [sp+10h] [bp-Ch] BYREF
  socklen_t optlen; // [sp+14h] [bp-8h] BYREF

  v13 = 1;
  optlen = 4;
  if ( a1 == -1 )
  {
    sub_D0048(32, 139, 135, "crypto/bio/b_sock2.c", 213);
    return 0;
  }
  else
  {
    v6 = getsockopt(a1, 1, 3, &optval, &optlen);
    if ( !v6 && optlen == 4 )
    {
      if ( sub_B592C(a1) )
      {
        if ( (a3 & 4) != 0 && setsockopt(a1, 1, 9, &v13, 4u) )
        {
          v11 = _errno_location();
          sub_D0048(2, 14, *v11, "crypto/bio/b_sock2.c", 231);
          sub_D0048(32, 139, 137, "crypto/bio/b_sock2.c", 232);
        }
        else if ( (a3 & 0x10) != 0 && setsockopt(a1, 6, 1, &v13, 4u) )
        {
          v9 = _errno_location();
          sub_D0048(2, 14, *v9, "crypto/bio/b_sock2.c", 240);
          sub_D0048(32, 139, 138, "crypto/bio/b_sock2.c", 241);
        }
        else if ( sub_B3784(a2) == 10 && (v13 = (a3 >> 1) & 1, setsockopt(a1, 41, 26, &v13, 4u)) )
        {
          v10 = _errno_location();
          sub_D0048(2, 14, *v10, "crypto/bio/b_sock2.c", 256);
          sub_D0048(32, 139, 136, "crypto/bio/b_sock2.c", 257);
        }
        else if ( sub_B5B6C(a1, a2, a3) )
        {
          if ( optval != 2 && listen(a1, 128) == -1 )
          {
            v12 = _errno_location();
            sub_D0048(2, 7, *v12, "crypto/bio/b_sock2.c", 267);
            sub_D0048(32, 139, 119, "crypto/bio/b_sock2.c", 268);
          }
          else
          {
            return 1;
          }
        }
      }
    }
    else
    {
      v6 = 0;
      v7 = _errno_location();
      sub_D0048(2, 15, *v7, "crypto/bio/b_sock2.c", 220);
      sub_D0048(32, 139, 134, "crypto/bio/b_sock2.c", 221);
    }
    return v6;
  }
}
