int __fastcall sub_9F1EC(int a1, unsigned __int8 **a2)
{
  unsigned int v2; // r3
  unsigned int v4; // r3
  int v5; // r7
  unsigned int v6; // r5
  int v7; // r8
  int v8; // r4
  unsigned int v9; // r0
  size_t v10; // r4
  int v11; // r8
  int v12; // r3
  _BYTE v14[256]; // [sp+8h] [bp-100h] BYREF

  v2 = (unsigned int)a2[1];
  if ( v2 <= 1 || (v4 = v2 - 2, v5 = (int)(*a2 + 2), v6 = (*a2)[1] | (**a2 << 8), v6 > v4) )
  {
    sub_95494((_DWORD *)a1, 50, 414, 159, (int)"ssl/statem/statem_srvr.c", 2938);
    return 0;
  }
  else
  {
    *a2 = (unsigned __int8 *)(v5 + v6);
    a2[1] = (unsigned __int8 *)(v4 - v6);
    if ( v6 > 0x80 )
    {
      sub_95494((_DWORD *)a1, 50, 414, 146, (int)"ssl/statem/statem_srvr.c", 2943);
      return 0;
    }
    else if ( *(_DWORD *)(a1 + 1220) )
    {
      v7 = *(_DWORD *)(a1 + 1140);
      CRYPTO_free(*(_DWORD *)(v7 + 404), "ssl/statem/../packet_local.h", 482);
      v8 = sub_E9EF4(v5, v6, "ssl/statem/../packet_local.h", 485);
      *(_DWORD *)(v7 + 404) = v8;
      if ( v8 )
      {
        v9 = (*(int (__fastcall **)(int, _DWORD, _BYTE *, int))(a1 + 1220))(
               a1,
               *(_DWORD *)(*(_DWORD *)(a1 + 1140) + 404),
               v14,
               256);
        v10 = v9;
        if ( v9 > 0x100 )
        {
          sub_95494((_DWORD *)a1, 80, 414, 68, (int)"ssl/statem/statem_srvr.c", 2963);
          return 0;
        }
        else if ( v9 )
        {
          CRYPTO_free(*(_DWORD *)(*(_DWORD *)(a1 + 124) + 600), "ssl/statem/statem_srvr.c", 2975);
          v11 = *(_DWORD *)(a1 + 124);
          *(_DWORD *)(v11 + 600) = sub_E9E68(v14, v10, "ssl/statem/statem_srvr.c", 2976);
          sub_E07F8((int)v14, v10);
          v12 = *(_DWORD *)(a1 + 124);
          if ( *(_DWORD *)(v12 + 600) )
          {
            *(_DWORD *)(v12 + 604) = v10;
            return 1;
          }
          else
          {
            *(_DWORD *)(v12 + 604) = 0;
            sub_95494((_DWORD *)a1, 80, 414, 65, (int)"ssl/statem/statem_srvr.c", 2982);
            return 0;
          }
        }
        else
        {
          sub_95494((_DWORD *)a1, 115, 414, 223, (int)"ssl/statem/statem_srvr.c", 2971);
          return v10;
        }
      }
      else
      {
        sub_95494((_DWORD *)a1, 80, 414, 68, (int)"ssl/statem/statem_srvr.c", 2954);
        return 0;
      }
    }
    else
    {
      sub_95494((_DWORD *)a1, 80, 414, 225, (int)"ssl/statem/statem_srvr.c", 2948);
      return 0;
    }
  }
}
