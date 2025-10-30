int __fastcall sub_A0584(_DWORD *a1)
{
  int (__fastcall *v2)(_DWORD *, _BYTE *); // r5
  int v3; // r0
  int v4; // r4
  int v6; // r4
  int v7; // r0
  _DWORD *v8; // r3
  int v9; // r5
  const void *v10; // r1
  int v11; // r0
  int v12; // r3
  _BYTE n[5]; // [sp+Bh] [bp-5h] BYREF

  v2 = *(int (__fastcall **)(_DWORD *, _BYTE *))(a1[308] + 368);
  *(_DWORD *)&n[1] = 0;
  if ( v2 && *(_DWORD *)(a1[31] + 840) )
  {
    v3 = v2(a1, &n[1]);
    if ( !v3 )
    {
      CRYPTO_free(*(_DWORD *)(a1[31] + 832), "ssl/statem/statem_srvr.c", 2178);
      v6 = a1[31];
      v7 = sub_E9E68(*(_DWORD *)&n[1], 0, "ssl/statem/statem_srvr.c", 2179);
      v8 = (_DWORD *)a1[31];
      *(_DWORD *)(v6 + 832) = v7;
      v4 = v8[208];
      if ( !v4 )
      {
        v8[209] = 0;
        sub_95494(a1, 80, 562, 68, (int)"ssl/statem/statem_srvr.c", 2183);
        return v4;
      }
      v9 = a1[285];
      v8[207] = 0;
      v10 = *(const void **)(v9 + 484);
      v8[209] = 0;
      if ( v10 )
      {
        if ( *(_DWORD *)(v9 + 488) || memcmp(*(const void **)&n[1], v10, 0) )
        {
          v4 = a1[35];
          a1[364] = 0;
          if ( !v4 )
          {
            sub_95494(a1, 80, 562, 68, (int)"ssl/statem/statem_srvr.c", 2209);
            return v4;
          }
        }
      }
      else
      {
        v4 = a1[35];
        a1[364] = 0;
        if ( !v4 )
        {
          v11 = sub_E9E68(*(_DWORD *)&n[1], 0, "ssl/statem/statem_srvr.c", 2213);
          v12 = a1[285];
          *(_DWORD *)(v9 + 484) = v11;
          if ( *(_DWORD *)(v12 + 484) )
          {
            v4 = 1;
            *(_DWORD *)(v12 + 488) = 0;
          }
          else
          {
            sub_95494(a1, 80, 562, 68, (int)"ssl/statem/statem_srvr.c", 2217);
          }
          return v4;
        }
      }
      return 1;
    }
    if ( v3 != 3 )
    {
      sub_95494(a1, 120, 562, 235, (int)"ssl/statem/statem_srvr.c", 2227);
      return 0;
    }
  }
  if ( *(_DWORD *)(a1[285] + 484) )
  {
    v4 = 1;
    a1[364] = 0;
    return v4;
  }
  return 1;
}
