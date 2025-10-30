int __fastcall sub_B55B8(const char *a1, void *a2)
{
  int v2; // r4
  int v5; // r5
  int v7; // r0
  const char *v8; // r0
  const char *v9; // r0
  struct addrinfo *v10; // [sp+8h] [bp-Ch] BYREF
  size_t v11[2]; // [sp+Ch] [bp-8h] BYREF

  v2 = 0;
  v10 = 0;
  if ( sub_B55B4() != 1 )
    return 0;
  v7 = sub_B3E14(a1, 0, 0, 2, 1, &v10);
  v5 = v7;
  if ( v7 )
  {
    if ( sub_B3A54((int)v10) == 2 )
    {
      v8 = (const char *)sub_B3A98((int)v10);
      if ( sub_B3788(v8, 0, v11) )
      {
        if ( v11[0] == 4 )
        {
          v9 = (const char *)sub_B3A98((int)v10);
          v2 = sub_B3788(v9, a2, v11);
        }
      }
      else
      {
        v2 = 0;
      }
    }
    else
    {
      sub_D0048(32, 106, 107, "crypto/bio/b_sock.c", 41);
    }
    v5 = v2;
    sub_B3AA0(v10);
  }
  else
  {
    sub_D1240(2, "host=", a1);
  }
  return v5;
}
