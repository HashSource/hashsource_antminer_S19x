int __fastcall sub_88970(_DWORD *a1, int a2, int a3)
{
  int result; // r0
  int v6; // r0
  int v7; // r2
  int v8; // r3
  int v9; // r2
  int v10; // [sp+Ch] [bp-1Ch]
  int v11; // [sp+10h] [bp-18h] BYREF
  _DWORD src[5]; // [sp+14h] [bp-14h] BYREF

  if ( a3 < 0 )
  {
    sub_D0048(20, 270, 271, "ssl/ssl_lib.c", 1914);
    return -1;
  }
  else if ( a1[6] )
  {
    if ( (a1[10] & 2) != 0 )
    {
      return 0;
    }
    else
    {
      if ( (a1[316] & 0x100) == 0 || (v10 = a2, v6 = sub_B33A8(a1), a2 = v10, v6) )
      {
        result = (*(int (__fastcall **)(_DWORD *, int, int, int *))(a1[1] + 36))(a1, a2, a3, &v11);
      }
      else
      {
        v7 = a1[1];
        v8 = a1[978];
        src[0] = a1;
        v9 = *(_DWORD *)(v7 + 36);
        src[1] = v10;
        src[2] = a3;
        src[3] = 0;
        src[4] = v9;
        if ( v8 || (v8 = sub_B3420(), (a1[978] = v8) != 0) )
        {
          a1[5] = 1;
          switch ( sub_B300C((int)(a1 + 977), v8, (int)&v11, (int)sub_87874, src, 0x14u) )
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
              result = v11;
              a1[977] = 0;
              break;
            default:
              a1[5] = 1;
              sub_D0048(20, 389, 68, "ssl/ssl_lib.c", 1720);
              result = -1;
              break;
          }
        }
        else
        {
          result = -1;
        }
        v11 = a1[979];
      }
      if ( result > 0 )
        return v11;
    }
  }
  else
  {
    sub_D0048(20, 522, 276, "ssl/ssl_lib.c", 1883);
    return -1;
  }
  return result;
}
