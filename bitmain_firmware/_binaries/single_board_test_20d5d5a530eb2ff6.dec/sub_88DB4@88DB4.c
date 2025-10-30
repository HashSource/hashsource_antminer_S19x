int __fastcall sub_88DB4(_DWORD *a1)
{
  int result; // r0
  int v3; // r2
  int v4; // r1
  int v5; // r2
  int v6; // [sp+8h] [bp-1Ch] BYREF
  _DWORD src[6]; // [sp+Ch] [bp-18h] BYREF

  if ( !a1[6] )
  {
    sub_D0048(20, 224, 276, "ssl/ssl_lib.c", 2093);
    return -1;
  }
  if ( sub_95448(a1) )
  {
    sub_D0048(20, 224, 407, "ssl/ssl_lib.c", 2111);
    return -1;
  }
  if ( (a1[316] & 0x100) == 0 || sub_B33A8(0) )
    return (*(int (__fastcall **)(_DWORD *))(a1[1] + 44))(a1);
  v3 = a1[1];
  v4 = a1[978];
  src[1] = 0;
  v5 = *(_DWORD *)(v3 + 44);
  src[2] = 0;
  src[0] = a1;
  src[4] = v5;
  src[3] = 2;
  if ( !v4 )
  {
    v4 = sub_B3420();
    a1[978] = v4;
    if ( !v4 )
      return -1;
  }
  a1[5] = 1;
  switch ( sub_B300C((int)(a1 + 977), v4, (int)&v6, (int)sub_87874, src, 0x14u) )
  {
    case 0:
      a1[5] = 1;
      sub_D0048(20, 389, 405, "ssl/ssl_lib.c", 1707);
      result = -1;
      break;
    case 1:
      result = -1;
      a1[5] = 6;
      break;
    case 2:
      result = -1;
      a1[5] = 5;
      break;
    case 3:
      result = v6;
      a1[977] = 0;
      break;
    default:
      a1[5] = 1;
      sub_D0048(20, 389, 68, "ssl/ssl_lib.c", 1720);
      result = -1;
      break;
  }
  return result;
}
