int __fastcall sub_88ABC(_DWORD *a1, int a2, int a3, _DWORD *a4)
{
  int v5; // r3
  int v8; // r0
  int v9; // r0
  int v10; // r4
  int v11; // r3
  int v12; // r4
  int v13; // [sp+8h] [bp-20h]
  int v14; // [sp+Ch] [bp-1Ch]
  int v15; // [sp+10h] [bp-18h] BYREF
  _DWORD src[5]; // [sp+14h] [bp-14h] BYREF

  if ( a1[6] )
  {
    v5 = a1[10];
    if ( (v5 & 2) != 0 )
    {
      return 0;
    }
    else
    {
      if ( (a1[316] & 0x100) == 0 || (v14 = a3, v13 = a2, v9 = sub_B33A8(v5 << 30), a2 = v13, a3 = v14, v9) )
      {
        v8 = (*(int (__fastcall **)(_DWORD *, int, int, _DWORD *))(a1[1] + 36))(a1, a2, a3, a4);
      }
      else
      {
        v10 = a1[1];
        v11 = a1[978];
        src[0] = a1;
        v12 = *(_DWORD *)(v10 + 36);
        src[1] = v13;
        src[2] = v14;
        src[3] = 0;
        src[4] = v12;
        if ( v11 || (v11 = sub_B3420(), (a1[978] = v11) != 0) )
        {
          a1[5] = 1;
          switch ( sub_B300C((int)(a1 + 977), v11, (int)&v15, (int)sub_87874, src, 0x14u) )
          {
            case 0:
              a1[5] = 1;
              sub_D0048(20, 389, 405, "ssl/ssl_lib.c", 1707);
              v8 = -1;
              break;
            case 1:
              v8 = -1;
              a1[5] = 6;
              break;
            case 2:
              v8 = -1;
              a1[5] = 5;
              break;
            case 3:
              v8 = v15;
              a1[977] = 0;
              break;
            default:
              a1[5] = 1;
              sub_D0048(20, 389, 68, "ssl/ssl_lib.c", 1720);
              v8 = -1;
              break;
          }
        }
        else
        {
          v8 = -1;
        }
        *a4 = a1[979];
      }
      return v8 & ~(v8 >> 31);
    }
  }
  else
  {
    sub_D0048(20, 522, 276, "ssl/ssl_lib.c", 1883);
    return 0;
  }
}
