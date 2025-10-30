int __fastcall sub_281B18(int a1)
{
  int v1; // r8
  int v2; // r4
  int v3; // r11
  int v4; // r10
  int v5; // r9
  int v6; // r6
  int v7; // r7
  int v8; // r3
  bool v9; // zf
  int v10; // r4
  int v11; // r2
  bool v12; // zf
  unsigned __int8 *v13; // r3
  int v14; // t1
  bool v15; // zf
  const unsigned __int16 **v17; // r0
  const unsigned __int16 *v18; // r1
  int v19; // r2
  int v20; // r2
  int v21; // r0
  int v22; // t1
  int v23; // r3
  bool v24; // cc
  int v25; // r3
  int v26; // r12
  bool v27; // zf
  int v28; // r2
  int v29; // t1
  int v30; // [sp+4h] [bp-8h]

  if ( a1 )
  {
    v1 = dword_4900DC;
    v2 = dword_4900D8;
    v3 = dword_4900DC - 1;
    if ( dword_4900D8 < dword_4900DC - 1 )
    {
      v4 = a1 - 1;
      v5 = 0;
      v6 = dword_48AAD4;
      v7 = dword_4900DC + dword_48AAD4;
      do
      {
        v8 = *(unsigned __int8 *)(v6 + v2);
        v9 = v8 == 32;
        if ( v8 != 32 )
          v9 = v8 == 9;
        if ( v9 )
        {
          v10 = dword_4900D8;
        }
        else
        {
          v10 = v2 + 1;
          dword_4900D8 = v10;
        }
        if ( v1 > v10 )
        {
          v11 = *(unsigned __int8 *)(v6 + v10);
          v12 = v11 == 9;
          if ( v11 != 9 )
            v12 = v11 == 32;
          if ( v12 )
          {
            v13 = (unsigned __int8 *)(v6 + v10 + 1);
            while ( 1 )
            {
              v10 = (int)&v13[-v6];
              dword_4900D8 = (int)&v13[-v6];
              if ( v13 == (unsigned __int8 *)v7 )
                break;
              v14 = *v13++;
              v11 = v14;
              v15 = v14 == 9;
              if ( v14 != 9 )
                v15 = v11 == 32;
              if ( !v15 )
                goto LABEL_23;
            }
          }
          else
          {
LABEL_23:
            v30 = v11;
            v17 = _ctype_b_loc();
            v18 = *v17;
            if ( v30 == 95 )
              v19 = 1;
            else
              v19 = ((*v17)[v30] >> 3) & 1;
            if ( v19 )
            {
              v20 = v10 + 1;
              v21 = v6 + v10;
              do
              {
                v24 = v20 < v1;
                dword_4900D8 = v20;
                v10 = v20++;
                if ( !v24 )
                  break;
                v22 = *(unsigned __int8 *)++v21;
                v23 = (v18[v22] >> 3) & 1;
                if ( v22 == 95 )
                  v23 |= 1u;
              }
              while ( v23 );
            }
            else
            {
              v25 = v10 + 1;
              v26 = v6 + v10;
              do
              {
                v24 = v25 < v1;
                dword_4900D8 = v25;
                v10 = v25++;
                if ( !v24 )
                  break;
                v29 = *(unsigned __int8 *)++v26;
                v28 = v29;
                if ( ((v29 != 95) & ((v18[v29] ^ 8u) >> 3)) == 0 )
                  break;
                v27 = v28 == 32;
                if ( v28 != 32 )
                  v27 = v28 == 9;
              }
              while ( !v27 );
            }
          }
        }
        v2 = v10 - 1;
        dword_4900D8 = v2;
        if ( v5 == v4 )
          break;
        ++v5;
      }
      while ( v2 < v3 );
    }
  }
  return 0;
}
