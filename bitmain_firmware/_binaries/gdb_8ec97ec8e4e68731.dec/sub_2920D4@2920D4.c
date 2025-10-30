int __fastcall sub_2920D4(int a1, int a2)
{
  int v2; // r5
  int v3; // lr
  int v4; // r1
  bool v5; // cf
  int v6; // r3
  unsigned __int8 *v7; // r6
  int v8; // r2
  bool v9; // zf
  int v10; // r12
  int v11; // t1
  int v13; // r2
  int v14; // r6
  int v15; // r12
  int v16; // t1
  bool v17; // zf
  bool v18; // r3
  bool v19; // r3

  v2 = dword_4900D8;
  if ( dword_4900D8 )
  {
    if ( a1 < 1 )
      v3 = 1;
    else
      v3 = a1;
    v4 = dword_4900D8;
    while ( 1 )
    {
      v5 = v3-- != 0;
      if ( !v5 )
        break;
      while ( 1 )
      {
        v6 = v4 - 1;
        v7 = (unsigned __int8 *)(dword_48AAD4 + v4 - 1);
        v8 = *v7;
        if ( v4 )
          break;
LABEL_20:
        v5 = v3-- != 0;
        v4 = 0;
        if ( !v5 )
          goto LABEL_21;
      }
      while ( 1 )
      {
        v9 = v8 == 9;
        if ( v8 != 9 )
          v9 = v8 == 32;
        v10 = v9;
        if ( v8 == 47 )
          v10 |= 1u;
        if ( !v10 )
          break;
        dword_4900D8 = v6;
        v4 = v6;
        v11 = *--v7;
        v8 = v11;
        if ( !v6 )
          goto LABEL_20;
        --v6;
      }
      if ( v8 != 47 )
      {
        v13 = v4 - 1;
        v14 = dword_48AAD4 + v4 - 1;
        do
        {
          dword_4900D8 = v13;
          v4 = v13;
          v16 = *(unsigned __int8 *)--v14;
          v15 = v16;
          if ( !v13 )
            break;
          v17 = v15 == 9;
          if ( v15 != 9 )
            v17 = v15 == 32;
          --v13;
          v18 = v17;
          v19 = !v18;
        }
        while ( v15 != 47 && v19 );
      }
    }
LABEL_21:
    sub_291D70(v2, v4);
    if ( dword_46DED4 == 1 )
      dword_4900D4 = dword_4900D8;
    return 0;
  }
  else
  {
    sub_2945C8(a1, a2);
    return 0;
  }
}
