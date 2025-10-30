int __fastcall sub_8C888(int a1, _DWORD *a2, int a3)
{
  int v3; // r10
  int v4; // r4
  int v8; // r1
  int v9; // r11
  int v10; // r5
  int v11; // r4
  int v12; // r0
  _WORD *v13; // r0
  int v14; // r3
  int v15; // r3
  int v16; // r1
  unsigned int i; // r2
  int v18; // r3
  int v20; // r9
  int v21; // r4

  if ( a3 )
    v3 = 3;
  else
    v3 = 2;
  v4 = a2[1];
  if ( !v4 )
  {
    sub_95494(a1, 47, 520, 183, "ssl/ssl_lib.c", 5367);
    return 0;
  }
  sub_1892EC(v4, v3);
  if ( v8 )
  {
    sub_95494(a1, 50, 520, 151, "ssl/ssl_lib.c", 5373);
    return 0;
  }
  CRYPTO_free(*(_DWORD *)(*(_DWORD *)(a1 + 124) + 584), "ssl/ssl_lib.c", 5377);
  v9 = *(_DWORD *)(a1 + 124);
  *(_DWORD *)(v9 + 584) = 0;
  *(_DWORD *)(v9 + 588) = 0;
  if ( !a3 )
  {
    CRYPTO_free(0, "ssl/packet_local.h", 453);
    *(_DWORD *)(v9 + 588) = 0;
    v20 = a2[1];
    *(_DWORD *)(v9 + 584) = 0;
    if ( v20 )
    {
      v21 = sub_E9E68(*a2, v20, "ssl/packet_local.h", 462);
      *(_DWORD *)(v9 + 584) = v21;
      if ( !v21 )
      {
        sub_95494(a1, 80, 520, 68, "ssl/ssl_lib.c", 5423);
        return 0;
      }
      *(_DWORD *)(v9 + 588) = v20;
    }
    return 1;
  }
  v10 = a2[1];
  v11 = *a2;
  v12 = sub_189090(v10, v3);
  v13 = (_WORD *)CRYPTO_malloc(2 * v12, "ssl/ssl_lib.c", 5394);
  v14 = *(_DWORD *)(a1 + 124);
  *(_DWORD *)(v14 + 584) = v13;
  if ( v13 )
  {
    *(_DWORD *)(v14 + 588) = 0;
    if ( v10 )
    {
      v15 = v11 + 3;
      v16 = v10 - 3;
      for ( i = v10 - 1; ; i -= 3 )
      {
        if ( *(_BYTE *)(v15 - 3) )
        {
          if ( i <= 1 )
            goto LABEL_15;
        }
        else
        {
          if ( i <= 1 )
          {
LABEL_15:
            sub_95494(a1, 50, 520, 240, "ssl/ssl_lib.c", 5411);
            CRYPTO_free(*(_DWORD *)(*(_DWORD *)(a1 + 124) + 584), "ssl/ssl_lib.c", 5412);
            v18 = *(_DWORD *)(a1 + 124);
            *(_DWORD *)(v18 + 584) = 0;
            *(_DWORD *)(v18 + 588) = 0;
            return 0;
          }
          *v13 = *(_WORD *)(v15 - 2);
          *(_DWORD *)(*(_DWORD *)(a1 + 124) + 588) += 2;
        }
        ++v13;
        v15 += 3;
        if ( !v16 )
          return 1;
        v16 -= 3;
      }
    }
    return 1;
  }
  sub_95494(a1, 80, 520, 65, "ssl/ssl_lib.c", 5398);
  return 0;
}
