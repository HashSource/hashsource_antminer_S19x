int __fastcall sub_8CE10(_DWORD *a1)
{
  int *v1; // r3
  int v2; // r2
  int v3; // r3
  int v5; // r4

  v1 = (int *)a1[1];
  if ( (*(_DWORD *)(v1[25] + 48) & 8) != 0 )
    goto LABEL_8;
  v2 = *v1;
  v3 = *v1 == 0x10000;
  if ( v2 < 772 )
    v3 |= 1u;
  if ( v3 )
  {
LABEL_8:
    v5 = 0;
    sub_D0048(20, 616, 266, "ssl/ssl_lib.c", 5640);
    return v5;
  }
  if ( a1[7] )
  {
    v5 = sub_9544C(a1);
    if ( v5 )
    {
      switch ( a1[381] )
      {
        case 0:
          v5 = 0;
          sub_D0048(20, 616, 279, "ssl/ssl_lib.c", 5655);
          break;
        case 2:
          a1[381] = 3;
          v5 = sub_9F6C8(a1);
          if ( v5 )
          {
            v5 = 1;
            sub_95D9C(a1, 1);
          }
          else
          {
            a1[381] = 2;
            sub_D0048(20, 616, 283, "ssl/ssl_lib.c", 5676);
          }
          break;
        case 3:
          v5 = 0;
          sub_D0048(20, 616, 285, "ssl/ssl_lib.c", 5664);
          break;
        case 4:
          v5 = 0;
          sub_D0048(20, 616, 286, "ssl/ssl_lib.c", 5667);
          break;
        default:
          v5 = 0;
          sub_D0048(20, 616, 68, "ssl/ssl_lib.c", 5659);
          break;
      }
    }
    else
    {
      sub_D0048(20, 616, 121, "ssl/ssl_lib.c", 5649);
    }
    return v5;
  }
  sub_D0048(20, 616, 284, "ssl/ssl_lib.c", 5644);
  return 0;
}
