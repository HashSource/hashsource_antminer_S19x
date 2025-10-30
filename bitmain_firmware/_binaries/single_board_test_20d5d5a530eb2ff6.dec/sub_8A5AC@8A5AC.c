int __fastcall sub_8A5AC(int a1)
{
  int v2; // r0
  int result; // r0
  int v4; // r1
  int v5; // [sp+8h] [bp-1Ch] BYREF
  _DWORD src[6]; // [sp+Ch] [bp-18h] BYREF

  if ( *(_DWORD *)(a1 + 24) )
  {
    sub_95DDC();
    (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)(a1 + 4) + 52))(a1, 0);
    v2 = sub_95448(a1);
    if ( v2 || (v2 = sub_95464(a1)) != 0 )
    {
      if ( (*(_DWORD *)(a1 + 1264) & 0x100) == 0 || sub_B33A8(v2) )
      {
        return (*(int (__fastcall **)(int))(a1 + 24))(a1);
      }
      else
      {
        v4 = *(_DWORD *)(a1 + 3912);
        src[0] = a1;
        memset(&src[1], 0, 16);
        if ( v4 || (v4 = sub_B3420(), (*(_DWORD *)(a1 + 3912) = v4) != 0) )
        {
          *(_DWORD *)(a1 + 20) = 1;
          switch ( sub_B300C(a1 + 3908, v4, (int)&v5, (int)&loc_878A8 + 1, src, 0x14u) )
          {
            case 0:
              *(_DWORD *)(a1 + 20) = 1;
              sub_D0048(20, 389, 405, "ssl/ssl_lib.c", 1707);
              result = -1;
              break;
            case 1:
              result = -1;
              *(_DWORD *)(a1 + 20) = 6;
              break;
            case 2:
              result = -1;
              *(_DWORD *)(a1 + 20) = 5;
              break;
            case 3:
              result = v5;
              *(_DWORD *)(a1 + 3908) = 0;
              break;
            default:
              *(_DWORD *)(a1 + 20) = 1;
              sub_D0048(20, 389, 68, "ssl/ssl_lib.c", 1720);
              result = -1;
              break;
          }
        }
        else
        {
          return -1;
        }
      }
    }
    else
    {
      return 1;
    }
  }
  else
  {
    sub_D0048(20, 180, 144, "ssl/ssl_lib.c", 3715);
    return -1;
  }
  return result;
}
