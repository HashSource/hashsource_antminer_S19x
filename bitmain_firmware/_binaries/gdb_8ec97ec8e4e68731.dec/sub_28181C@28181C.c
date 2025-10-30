int __fastcall sub_28181C(int a1)
{
  int v1; // r7
  int v2; // r6
  int v3; // r4
  int v4; // r8
  bool v5; // zf
  int v6; // r9
  bool v7; // zf
  const unsigned __int16 **v8; // r0
  const unsigned __int16 *v9; // r1
  unsigned int v10; // r2
  unsigned int v11; // r3
  int v12; // r0
  int v13; // r2
  int v14; // r3
  _BOOL4 v15; // r8
  int v16; // r2
  int v17; // r3
  bool v18; // zf
  int v19; // t1
  bool v20; // zf
  int v22; // r2
  int v23; // r4
  int v24; // t1
  int v25; // r2
  int v26; // r12
  int v27; // r4
  bool v28; // zf
  int v29; // r2
  int v30; // t1

  v1 = a1;
  v2 = dword_48AAD4;
  if ( a1 )
  {
    while ( 1 )
    {
      v3 = dword_4900D8;
      if ( dword_4900D8 <= 0 )
        return 0;
      v4 = *(unsigned __int8 *)(v2 + dword_4900D8);
      v5 = v4 == 32;
      if ( v4 != 32 )
        v5 = v4 == 9;
      v6 = *(unsigned __int8 *)(v2 + dword_4900D8 - 1);
      if ( !v5 )
      {
        v7 = v6 == 9;
        if ( v6 != 9 )
          v7 = v6 == 32;
        if ( v7 )
        {
          v3 = dword_4900D8 - 1;
          dword_4900D8 = v3;
          v6 = *(unsigned __int8 *)(v2 + v3 - 1);
          v4 = *(unsigned __int8 *)(v2 + v3);
        }
      }
      v8 = _ctype_b_loc();
      v9 = *v8;
      v10 = (*v8)[v4];
      v11 = (*v8)[v6];
      v12 = (v10 >> 3) & 1;
      v13 = v10 & 8;
      if ( v4 == 95 )
        v12 |= 1u;
      v14 = (v11 >> 3) & 1;
      if ( v6 == 95 )
        v14 |= 1u;
      if ( !v12 )
        break;
      if ( !v14 )
        goto LABEL_46;
      v15 = v4 != 95;
      if ( v13 )
        v15 = 0;
      if ( v15 )
        goto LABEL_46;
LABEL_19:
      if ( v3 > 0 )
      {
        v16 = *(unsigned __int8 *)(v2 + v3);
        v17 = v2 + v3;
        v18 = v16 == 9;
        if ( v16 != 9 )
          v18 = v16 == 32;
        if ( !v18 )
        {
LABEL_32:
          if ( v16 == 95 )
            v22 = 1;
          else
            v22 = (v9[v16] >> 3) & 1;
          if ( v22 )
          {
            v23 = v3 - 1;
            do
            {
              v5 = v23 == -1;
              dword_4900D8 = v23;
              v26 = v23--;
              if ( v5 )
                break;
              v24 = *(unsigned __int8 *)--v17;
              v25 = (v9[v24] >> 3) & 1;
              if ( v24 == 95 )
                v25 |= 1u;
            }
            while ( v25 );
          }
          else
          {
            v27 = v3 - 1;
            do
            {
              v5 = v27 == -1;
              dword_4900D8 = v27;
              v26 = v27--;
              if ( v5 )
                break;
              v30 = *(unsigned __int8 *)--v17;
              v29 = v30;
              if ( ((v30 != 95) & ((v9[v30] ^ 8u) >> 3)) == 0 )
              {
                dword_4900D8 = v26 + 1;
                goto LABEL_44;
              }
              v28 = v29 == 32;
              if ( v29 != 32 )
                v28 = v29 == 9;
            }
            while ( !v28 );
          }
          dword_4900D8 = v26 + 1;
LABEL_44:
          --v1;
          goto LABEL_30;
        }
        while ( 1 )
        {
          dword_4900D8 = --v3;
          if ( !v3 )
            break;
          v19 = *(unsigned __int8 *)--v17;
          v16 = v19;
          v20 = v19 == 9;
          if ( v19 != 9 )
            v20 = v16 == 32;
          if ( !v20 )
          {
            v17 = v2 + v3;
            goto LABEL_32;
          }
        }
      }
      --v1;
LABEL_30:
      if ( !v1 )
        return 0;
    }
    if ( !v14 )
      goto LABEL_19;
LABEL_46:
    dword_4900D8 = --v3;
    goto LABEL_19;
  }
  return 0;
}
