int __fastcall sub_887B8(_DWORD *a1, int a2, int a3, _DWORD *a4)
{
  int v6; // r4
  int v8; // r3
  bool v9; // zf
  int v11; // r0
  int v13; // r3
  int v14; // r1
  int v15; // r3
  int v16; // [sp+8h] [bp-18h] BYREF
  _DWORD src[5]; // [sp+Ch] [bp-14h] BYREF

  if ( !a1[6] )
  {
    v6 = -1;
    sub_D0048(20, 523, 276, "ssl/ssl_lib.c", 1751);
    return v6;
  }
  v6 = a1[10] & 2;
  if ( !v6 )
  {
    v8 = a1[26];
    v9 = v8 == 8;
    if ( v8 != 8 )
      v9 = v8 == 1;
    if ( v9 )
    {
      sub_D0048(20, 523, 66, "ssl/ssl_lib.c", 1762);
    }
    else
    {
      v11 = sub_95DDC();
      if ( (a1[316] & 0x100) == 0 || sub_B33A8(v11) )
        return (*(int (__fastcall **)(_DWORD *, int, int, _DWORD *))(a1[1] + 32))(a1, a2, a3, a4);
      v13 = a1[1];
      v14 = a1[978];
      src[0] = a1;
      v15 = *(_DWORD *)(v13 + 32);
      src[1] = a2;
      src[2] = a3;
      src[3] = 0;
      src[4] = v15;
      if ( v14 || (v14 = sub_B3420(), (a1[978] = v14) != 0) )
      {
        a1[5] = 1;
        switch ( sub_B300C((int)(a1 + 977), v14, (int)&v16, (int)sub_87874, src, 0x14u) )
        {
          case 0:
            a1[5] = 1;
            v6 = -1;
            sub_D0048(20, 389, 405, "ssl/ssl_lib.c", 1707);
            break;
          case 1:
            v6 = -1;
            a1[5] = 6;
            break;
          case 2:
            v6 = -1;
            a1[5] = 5;
            break;
          case 3:
            v6 = v16;
            a1[977] = 0;
            break;
          default:
            a1[5] = 1;
            v6 = -1;
            sub_D0048(20, 389, 68, "ssl/ssl_lib.c", 1720);
            break;
        }
      }
      else
      {
        v6 = -1;
      }
      *a4 = a1[979];
    }
    return v6;
  }
  a1[5] = 1;
  return 0;
}
