int __fastcall sub_93638(_DWORD *a1, unsigned __int8 **a2)
{
  unsigned int v4; // r2
  int v5; // r3
  unsigned int v6; // r2
  unsigned int v7; // r5
  unsigned __int8 *v8; // r4
  unsigned __int8 *v9; // r3
  int v10; // r3
  int v11; // r2
  unsigned __int8 *v12; // r3
  int v13; // r11
  int v14; // r4
  int v15; // r11
  unsigned int v16; // r5
  unsigned __int8 *v17; // r9
  unsigned int v18; // r7
  int v19; // r1
  int v20; // r8
  int v21; // r4
  int v22; // r0
  int v23; // r3
  int v24; // [sp+Ch] [bp-10h]
  int v25; // [sp+10h] [bp-Ch] BYREF
  int v26; // [sp+14h] [bp-8h] BYREF

  if ( a1[35] && (a1[361] & 2) == 0 )
    return 1;
  if ( *(_DWORD *)(a1[31] + 856) )
  {
    sub_95494(a1, 80, 463, 68, "ssl/statem/extensions_srvr.c", 631);
    return 0;
  }
  v4 = (unsigned int)a2[1];
  if ( v4 > 1 )
  {
    v5 = (int)*a2;
    v6 = v4 - 2;
    v7 = (*a2)[1] | (**a2 << 8);
    if ( v7 <= v6 )
    {
      v8 = (unsigned __int8 *)(v5 + 2);
      v9 = (unsigned __int8 *)(v5 + 2 + v7);
      if ( v7 == v6 )
      {
        *a2 = v9;
        a2[1] = 0;
        sub_A278C(a1, &v25, &v26);
        v24 = a1[350];
        if ( !v24 )
        {
          sub_95494(a1, 109, 463, 209, "ssl/statem/extensions_srvr.c", 652);
          return 0;
        }
        v10 = a1[31];
        v11 = *(unsigned __int16 *)(v10 + 854);
        if ( *(_WORD *)(v10 + 854) )
        {
          if ( !v7 )
          {
            sub_95494(a1, 47, 463, 108, "ssl/statem/extensions_srvr.c", 663);
            return 0;
          }
          v12 = v8;
          v13 = 0;
        }
        else
        {
          v12 = v8;
          v13 = v11;
        }
        v14 = v13;
        v15 = a1[351];
        while ( v7 )
        {
          if ( v7 <= 3
            || (v16 = v7 - 4, v17 = v12 + 4, v18 = v12[3] | (v12[2] << 8), v18 > v16)
            || (v7 = v16 - v18, !v18) )
          {
            sub_95494(a1, 50, 463, 159, "ssl/statem/extensions_srvr.c", 672);
            return 0;
          }
          if ( v14 )
            goto LABEL_28;
          v19 = a1[31];
          v20 = v12[1] | (*v12 << 8);
          if ( *(_WORD *)(v19 + 854) && (*(unsigned __int16 *)(v19 + 854) != v20 || v7) )
          {
            sub_95494(a1, 47, 463, 108, "ssl/statem/extensions_srvr.c", 691);
            return 0;
          }
          if ( !sub_9D5FC(a1, _byteswap_ushort(*(_WORD *)v12), v15, v24, 0) )
          {
            sub_95494(a1, 47, 463, 108, "ssl/statem/extensions_srvr.c", 698);
            return 0;
          }
          if ( sub_9D5FC(a1, (unsigned __int16)v20, v25, v26, 1) )
          {
            v21 = a1[31];
            v22 = sub_830B4((unsigned __int16)v20);
            *(_DWORD *)(v21 + 856) = v22;
            if ( !v22 )
            {
              sub_95494(a1, 80, 463, 314, "ssl/statem/extensions_srvr.c", 710);
              return 0;
            }
            v23 = a1[31];
            *(_WORD *)(v23 + 854) = v20;
            if ( !sub_DA738(*(_DWORD *)(v23 + 856), v17, v18) )
            {
              sub_95494(a1, 47, 463, 306, "ssl/statem/extensions_srvr.c", 720);
              return 0;
            }
            v14 = 1;
            v12 = &v17[v18];
          }
          else
          {
LABEL_28:
            v12 = &v17[v18];
          }
        }
        return 1;
      }
    }
  }
  sub_95494(a1, 50, 463, 159, "ssl/statem/extensions_srvr.c", 637);
  return 0;
}
