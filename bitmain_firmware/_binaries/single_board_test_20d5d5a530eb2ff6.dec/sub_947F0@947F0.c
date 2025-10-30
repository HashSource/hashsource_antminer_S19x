int __fastcall sub_947F0(int a1, int a2)
{
  int v5; // r9
  unsigned int v6; // r4
  int v7; // r5
  int v8; // r1
  int v9; // r1
  int v10; // r3
  int v11; // r3
  int v12; // [sp+8h] [bp-28h] BYREF
  unsigned int v13; // [sp+Ch] [bp-24h] BYREF

  if ( !*(_WORD *)(*(_DWORD *)(a1 + 124) + 854) )
    return 2;
  sub_A278C(a1, &v12, &v13);
  if ( v13 )
  {
    v5 = 1;
    v6 = 0;
    do
    {
      v7 = *(unsigned __int16 *)(v12 + 2 * v6++);
      if ( sub_A2808(a1, v7, &loc_20004) )
      {
        if ( v5 )
        {
          v9 = *(unsigned __int16 *)(*(_DWORD *)(a1 + 124) + 854);
          if ( v9 == v7 )
            return 2;
          if ( !sub_A8450(a2, v9, 10, 0, 2) || !sub_A8398(a2, 2) || !sub_A8398(a2, 2) )
          {
            v10 = 1450;
            goto LABEL_16;
          }
        }
        v5 = 0;
        if ( !sub_A8450(a2, v8, v7, 0, 2) )
        {
          v11 = 1459;
          goto LABEL_20;
        }
      }
    }
    while ( v13 > v6 );
    if ( !sub_A7EDC(a2) || !sub_A7EDC(a2) )
    {
      v10 = 1468;
LABEL_16:
      sub_95494(a1, 80, 544, 68, "ssl/statem/extensions_srvr.c", v10);
      return 0;
    }
    return 1;
  }
  else
  {
    v11 = 1426;
LABEL_20:
    sub_95494(a1, 80, 544, 68, "ssl/statem/extensions_srvr.c", v11);
    return 0;
  }
}
