int __fastcall sub_88BE4(_DWORD *a1, int a2, int a3, _DWORD *a4)
{
  int v7; // r3
  bool v8; // zf
  int v10; // r0
  int v11; // r5
  int v13; // r2
  int v14; // r1
  int v15; // r2
  int v16; // [sp+8h] [bp-18h] BYREF
  _DWORD src[5]; // [sp+Ch] [bp-14h] BYREF

  if ( !a1[6] )
  {
    v11 = -1;
    sub_D0048(20, 524, 276, "ssl/ssl_lib.c", 1943);
    return v11;
  }
  if ( (a1[10] & 1) != 0 )
  {
    a1[5] = 1;
    v11 = -1;
    sub_D0048(20, 524, 207, "ssl/ssl_lib.c", 1949);
    return v11;
  }
  v7 = a1[26];
  v8 = v7 == 1;
  if ( v7 != 1 )
    v8 = (v7 & 0xFFFFFFFD) == 8;
  if ( !v8 )
  {
    v10 = sub_95DDC();
    if ( (a1[316] & 0x100) == 0 || sub_B33A8(v10) )
      return (*(int (__fastcall **)(_DWORD *, int, int, _DWORD *))(a1[1] + 40))(a1, a2, a3, a4);
    v13 = a1[1];
    v14 = a1[978];
    src[0] = a1;
    v15 = *(_DWORD *)(v13 + 40);
    src[1] = a2;
    src[2] = a3;
    src[4] = v15;
    src[3] = 1;
    if ( v14 || (v14 = sub_B3420(), (a1[978] = v14) != 0) )
    {
      a1[5] = 1;
      switch ( sub_B300C((int)(a1 + 977), v14, (int)&v16, (int)sub_87874, src, 0x14u) )
      {
        case 0:
          a1[5] = 1;
          v11 = -1;
          sub_D0048(20, 389, 405, "ssl/ssl_lib.c", 1707);
          break;
        case 1:
          v11 = -1;
          a1[5] = 6;
          break;
        case 2:
          v11 = -1;
          a1[5] = 5;
          break;
        case 3:
          v11 = v16;
          a1[977] = 0;
          break;
        default:
          a1[5] = 1;
          v11 = -1;
          sub_D0048(20, 389, 68, "ssl/ssl_lib.c", 1720);
          break;
      }
    }
    else
    {
      v11 = -1;
    }
    *a4 = a1[979];
    return v11;
  }
  sub_D0048(20, 524, 66, "ssl/ssl_lib.c", 1956);
  return 0;
}
