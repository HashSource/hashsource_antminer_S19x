int __fastcall sub_291FD0(int a1, int a2)
{
  int v2; // r6
  int v3; // r5
  int v4; // r1
  int v5; // r3
  int v6; // r2
  int v7; // r12
  bool v8; // zf
  int v9; // r2
  int v10; // t1
  bool v11; // zf
  int v13; // r12
  int v14; // r2
  int v15; // t1
  bool v16; // zf

  v2 = dword_4900D8;
  if ( dword_4900D8 )
  {
    if ( a1 < 1 )
      v3 = 1;
    else
      v3 = a1;
    v4 = dword_4900D8;
LABEL_6:
    if ( v3 )
    {
      v5 = v4 - 1;
      v6 = *(unsigned __int8 *)(dword_48AAD4 + v4 - 1);
      v7 = dword_48AAD4 + v4 - 1;
      v8 = v6 == 9;
      if ( v6 != 9 )
        v8 = v6 == 32;
      if ( v8 )
      {
        while ( 1 )
        {
          v8 = v5 == 0;
          dword_4900D8 = v5--;
          if ( v8 )
            break;
          v10 = *(unsigned __int8 *)--v7;
          v9 = v10;
          v11 = v10 == 9;
          if ( v10 != 9 )
            v11 = v9 == 32;
          if ( !v11 )
            goto LABEL_21;
        }
LABEL_17:
        v4 = 0;
      }
      else
      {
LABEL_21:
        v13 = dword_48AAD4 + v5;
        while ( 1 )
        {
          v8 = v5 == 0;
          v4 = v5;
          dword_4900D8 = v5--;
          if ( v8 )
            break;
          v15 = *(unsigned __int8 *)--v13;
          v14 = v15;
          v16 = v15 == 9;
          if ( v15 != 9 )
            v16 = v14 == 32;
          if ( v16 )
          {
            --v3;
            goto LABEL_6;
          }
        }
        if ( v3 != 1 )
          goto LABEL_17;
      }
    }
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
