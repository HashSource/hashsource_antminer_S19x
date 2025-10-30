int __fastcall sub_112BC(int a1)
{
  int v2; // r1
  int v3; // r1
  int v4; // r1
  int v5; // r1
  int v6; // r1
  int v7; // r1
  int v9; // [sp+Ch] [bp-18h] BYREF
  int v10; // [sp+10h] [bp-14h] BYREF
  int v11; // [sp+14h] [bp-10h] BYREF
  _DWORD optval[3]; // [sp+18h] [bp-Ch] BYREF

  v11 = 30;
  optval[0] = 3;
  v9 = 1;
  v10 = 45;
  optval[1] = 0;
  printf("socket_fd = %d\n", a1);
  v2 = setsockopt(a1, 1, 21, optval, 8u);
  if ( v2 < 0 || (v2 = setsockopt(a1, 1, 20, optval, 8u), v2 < 0) )
  {
    printf("Set socket send timeout fail, ret = %d\n", v2);
    return 0;
  }
  else
  {
    v3 = setsockopt(a1, 1, 9, &v9, 4u);
    if ( v3 < 0 )
    {
      printf("Set socket keep alive fail, ret = %d\n", v3);
      return 0;
    }
    else
    {
      v4 = setsockopt(a1, 6, 1, &v9, 4u);
      if ( v4 < 0 )
      {
        printf("Set socket no delay fail, ret = %d\n", v4);
        return 0;
      }
      else
      {
        v5 = setsockopt(a1, 6, 6, &v9, 4u);
        if ( v5 < 0 )
        {
          printf("Set socket keep cnt fail, ret = %d\n", v5);
          return 0;
        }
        else
        {
          v6 = setsockopt(a1, 6, 4, &v10, 4u);
          if ( v6 < 0 )
          {
            printf("Set socket keep idle fail, ret = %d\n", v6);
            return 0;
          }
          else
          {
            v7 = setsockopt(a1, 6, 5, &v11, 4u);
            if ( v7 < 0 )
            {
              printf("Set socket keep intvl fail, ret = %d\n", v7);
              return 0;
            }
            else
            {
              return 1;
            }
          }
        }
      }
    }
  }
}
