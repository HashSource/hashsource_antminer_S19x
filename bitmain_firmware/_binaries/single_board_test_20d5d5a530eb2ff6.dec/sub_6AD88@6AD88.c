int __fastcall sub_6AD88(int a1)
{
  int v2; // r8
  int v3; // r6
  int v4; // r8
  int v5; // r8
  int v6; // r8
  int v7; // r8
  int v8; // r5
  int v10; // [sp+Ch] [bp-44h] BYREF
  int v11; // [sp+10h] [bp-40h] BYREF
  int v12; // [sp+14h] [bp-3Ch] BYREF
  _DWORD optval[2]; // [sp+18h] [bp-38h] BYREF
  char v14[48]; // [sp+20h] [bp-30h] BYREF

  optval[0] = 3;
  v12 = 30;
  v11 = 45;
  v10 = 1;
  optval[1] = 0;
  sub_1E938(v14, 0x30u);
  printf("%s ", v14);
  printf("%s : socket_fd = %d\n", "set_socket_opt", a1);
  snprintf(byte_65C644, 0x100u, "socket_fd = %d", a1);
  sub_3CC5C((int)byte_65C644, v14);
  v2 = setsockopt(a1, 1, 21, optval, 8u);
  if ( v2 < 0 )
  {
    sub_1E938(v14, 0x30u);
    printf("%s ", v14);
    printf("%s : Set socket send timeout fail, ret = %d\n", "set_socket_opt", v2);
    snprintf(byte_65C744, 0x100u, "Set socket send timeout fail, ret = %d", v2);
    sub_3CC5C((int)byte_65C744, v14);
    return 0;
  }
  else
  {
    v3 = setsockopt(a1, 1, 20, optval, 8u);
    if ( v3 < 0 )
    {
      sub_1E938(v14, 0x30u);
      printf("%s ", v14);
      printf("%s : Set socket send timeout fail, ret = %d\n", "set_socket_opt", v3);
      snprintf(byte_65C844, 0x100u, "Set socket send timeout fail, ret = %d", v3);
      sub_3CC5C((int)byte_65C844, v14);
      return 0;
    }
    else
    {
      v4 = setsockopt(a1, 1, 9, &v10, 4u);
      if ( v4 < 0 )
      {
        sub_1E938(v14, 0x30u);
        printf("%s ", v14);
        printf("%s : Set socket keep alive fail, ret = %d\n", "set_socket_opt", v4);
        snprintf(byte_65C944, 0x100u, "Set socket keep alive fail, ret = %d", v4);
        sub_3CC5C((int)byte_65C944, v14);
        return 0;
      }
      else
      {
        v5 = setsockopt(a1, 6, 1, &v10, 4u);
        if ( v5 < 0 )
        {
          sub_1E938(v14, 0x30u);
          printf("%s ", v14);
          printf("%s : Set socket no delay fail, ret = %d\n", "set_socket_opt", v5);
          snprintf(byte_65CA44, 0x100u, "Set socket no delay fail, ret = %d", v5);
          sub_3CC5C((int)byte_65CA44, v14);
          return 0;
        }
        else
        {
          v6 = setsockopt(a1, 6, 6, &v10, 4u);
          if ( v6 < 0 )
          {
            sub_1E938(v14, 0x30u);
            printf("%s ", v14);
            printf("%s : Set socket keep cnt fail, ret = %d\n", "set_socket_opt", v6);
            snprintf(byte_65CB44, 0x100u, "Set socket keep cnt fail, ret = %d", v6);
            sub_3CC5C((int)byte_65CB44, v14);
            return 0;
          }
          else
          {
            v7 = setsockopt(a1, 6, 4, &v11, 4u);
            if ( v7 < 0 )
            {
              sub_1E938(v14, 0x30u);
              printf("%s ", v14);
              printf("%s : Set socket keep idle fail, ret = %d\n", "set_socket_opt", v7);
              snprintf(byte_65CC44, 0x100u, "Set socket keep idle fail, ret = %d", v7);
              sub_3CC5C((int)byte_65CC44, v14);
              return 0;
            }
            else
            {
              v8 = setsockopt(a1, 6, 5, &v12, 4u);
              if ( v8 < 0 )
              {
                sub_1E938(v14, 0x30u);
                printf("%s ", v14);
                printf("%s : Set socket keep intvl fail, ret = %d\n", "set_socket_opt", v8);
                snprintf(byte_65CD44, 0x100u, "Set socket keep intvl fail, ret = %d", v8);
                sub_3CC5C((int)byte_65CD44, v14);
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
}
