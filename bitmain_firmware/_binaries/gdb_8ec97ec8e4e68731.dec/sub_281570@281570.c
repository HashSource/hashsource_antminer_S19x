int __fastcall sub_281570(int a1)
{
  int v1; // r3
  int v2; // r2
  bool v3; // zf
  int v4; // r2
  bool v5; // zf
  unsigned __int8 *v6; // r3
  int v7; // r2
  int v8; // t1
  bool v9; // zf
  unsigned __int8 *v10; // r1
  int v12; // r1
  int v13; // r3
  bool v14; // zf
  int v15; // r3
  int v16; // r7
  int v17; // r2
  int v18; // t1
  bool v19; // zf
  bool v20; // cc

  while ( a1 )
  {
    v1 = dword_4900D8;
    if ( dword_4900DC - 1 <= dword_4900D8 )
      return 0;
    v2 = *(unsigned __int8 *)(dword_48AAD4 + dword_4900D8);
    v3 = v2 == 32;
    if ( v2 != 32 )
      v3 = v2 == 9;
    if ( !v3 )
      v1 = ++dword_4900D8;
    if ( v1 < dword_4900DC )
    {
      v4 = *(unsigned __int8 *)(dword_48AAD4 + v1);
      v5 = v4 == 9;
      if ( v4 != 9 )
        v5 = v4 == 32;
      if ( !v5 )
      {
        if ( v1 )
        {
LABEL_22:
          v12 = dword_4900D8;
          if ( dword_4900DC > dword_4900D8 )
          {
            v13 = *(unsigned __int8 *)(dword_48AAD4 + dword_4900D8);
            v14 = v13 == 32;
            if ( v13 != 32 )
              v14 = v13 == 9;
            if ( !v14 )
            {
              v15 = dword_4900D8 + 1;
              v16 = dword_48AAD4 + dword_4900D8;
              do
              {
                v20 = v15 < dword_4900DC;
                dword_4900D8 = v15;
                v12 = v15++;
                if ( !v20 )
                  break;
                v18 = *(unsigned __int8 *)++v16;
                v17 = v18;
                v19 = v18 == 32;
                if ( v18 != 32 )
                  v19 = v17 == 9;
              }
              while ( !v19 );
            }
          }
          --a1;
          dword_4900D8 = v12 - 1;
        }
        else
        {
          --a1;
        }
        continue;
      }
      v6 = (unsigned __int8 *)(dword_48AAD4 + v1 + 1);
      while ( 1 )
      {
        v10 = &v6[-dword_48AAD4];
        dword_4900D8 = (int)&v6[-dword_48AAD4];
        if ( v6 == (unsigned __int8 *)(dword_48AAD4 + dword_4900DC) )
          break;
        v8 = *v6++;
        v7 = v8;
        v9 = v8 == 9;
        if ( v8 != 9 )
          v9 = v7 == 32;
        if ( !v9 )
        {
          if ( !v10 )
            break;
          goto LABEL_22;
        }
      }
    }
    --a1;
  }
  return 0;
}
