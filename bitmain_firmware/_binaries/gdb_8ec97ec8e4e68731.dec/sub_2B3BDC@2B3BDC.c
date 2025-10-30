int __fastcall sub_2B3BDC(int a1, int a2)
{
  int v2; // r10
  int v5; // r6
  int v6; // r3
  unsigned int v7; // r2
  _DWORD *v8; // r5
  int v9; // r8
  int v10; // r6
  int v11; // r2
  int v12; // r4
  int i; // r11
  int v14; // r3
  unsigned int v15; // r3
  _DWORD *v17; // r4
  int v18; // r11
  unsigned int v19; // r0
  unsigned int v20; // r4
  unsigned int v21; // r10
  int v22; // r11
  int v23; // r2
  int v24; // t1
  int v25; // r1
  int v26; // [sp+4h] [bp-8h]

  v5 = 1;
  sub_2ED7A0();
  v6 = *(_DWORD *)(*(_DWORD *)(a1 + 48) + 160);
  v7 = *(_DWORD *)(v6 + 672);
  if ( v7 <= 0xF )
    v6 = 0;
  else
    v2 = *(_DWORD *)(v6 + 684);
  if ( v7 > 0xF )
    v6 = v2 == 77;
  v26 = v6;
  do
  {
    v8 = *(_DWORD **)(a1 + 56);
    if ( !v8 )
      break;
    v9 = 0;
    v10 = v5 & v26;
    do
    {
      if ( *(_DWORD *)(v8[1] + 4) == 5 )
      {
        v11 = v8[40];
        if ( v11 )
        {
          if ( (*(_BYTE *)(v11 + 2340) & 0x3F) == 4 )
          {
            v12 = v8[25];
            for ( i = *(_DWORD *)(v11 + 64); v12; v12 = *(_DWORD *)(v12 + 12) )
            {
              v14 = *(_DWORD *)(v12 + 140);
              if ( *(_DWORD *)(v14 + 4) == 1879048193 )
              {
                v15 = *(_DWORD *)(v14 + 28);
                if ( v15 )
                {
                  if ( v15 < *(_DWORD *)(v8[40] + 532)
                    && (*(_BYTE *)(v12 + 24) & 8) == 0
                    && (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(i + 4 * v15) + 44) + 24) & 8) != 0 )
                  {
                    v9 = 1;
                    if ( !sub_2ED50C(a1, v12, a2) )
                      return 0;
                  }
                }
              }
            }
            if ( v10 )
            {
              v17 = (_DWORD *)v8[40];
              v18 = v17[134];
              v19 = sub_347418(v17[24], *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)(v8[1] + 444) + 392) + 5));
              v20 = v17[26];
              v21 = v19;
              if ( v19 > v20 )
              {
                v22 = v18 - 4;
                do
                {
                  v24 = *(_DWORD *)(v22 + 4);
                  v22 += 4;
                  v23 = v24;
                  ++v20;
                  if ( (*(_BYTE *)(v24 + 50) & 4) != 0 )
                  {
                    v25 = *(_DWORD *)(v23 + 20);
                    if ( (*(_BYTE *)(v25 + 24) & 8) == 0 && !sub_2ED50C(a1, v25, a2) )
                      return 0;
                  }
                }
                while ( v21 != v20 );
              }
            }
          }
        }
      }
      v8 = (_DWORD *)v8[39];
    }
    while ( v8 );
    v5 = 0;
  }
  while ( v9 );
  return 1;
}
