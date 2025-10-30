int __fastcall sub_281488(int a1)
{
  int v1; // r2
  int v2; // r3
  bool v3; // zf
  int v4; // r3
  bool v5; // zf
  int v6; // r12
  int v7; // r1
  int v8; // r2
  int v9; // t1
  bool v10; // zf
  bool v12; // zf
  int v13; // r3
  int v14; // r2
  int v15; // r1
  int v16; // t1
  bool v17; // zf

  if ( a1 )
  {
    while ( 1 )
    {
      v1 = dword_4900D8;
      if ( dword_4900D8 <= 0 )
        return 0;
      v2 = *(unsigned __int8 *)(dword_48AAD4 + dword_4900D8);
      v3 = v2 == 32;
      if ( v2 != 32 )
        v3 = v2 == 9;
      if ( v3 )
        goto LABEL_21;
      v4 = *(unsigned __int8 *)(dword_48AAD4 + dword_4900D8 - 1);
      v5 = v4 == 9;
      if ( v4 != 9 )
        v5 = v4 == 32;
      if ( !v5 )
        goto LABEL_9;
      v1 = dword_4900D8 - 1;
      dword_4900D8 = v1;
      if ( v1 )
        break;
LABEL_17:
      if ( !--a1 )
        return 0;
    }
    v2 = *(unsigned __int8 *)(dword_48AAD4 + v1);
LABEL_21:
    v12 = v2 == 32;
    if ( v2 != 32 )
      v12 = v2 == 9;
    if ( v12 )
    {
      v13 = v1 - 1;
      v14 = dword_48AAD4 + v1;
      while ( 1 )
      {
        v3 = v13 == 0;
        dword_4900D8 = v13;
        v6 = v13--;
        if ( v3 )
          goto LABEL_17;
        v16 = *(unsigned __int8 *)--v14;
        v15 = v16;
        v17 = v16 == 9;
        if ( v16 != 9 )
          v17 = v15 == 32;
        if ( !v17 )
          goto LABEL_10;
      }
    }
LABEL_9:
    v6 = dword_4900D8;
LABEL_10:
    v7 = dword_48AAD4 + v6;
    while ( 1 )
    {
      dword_4900D8 = v6 - 1;
      if ( v6 - 1 < 0 )
        break;
      v9 = *(unsigned __int8 *)--v7;
      v8 = v9;
      v10 = v9 == 32;
      if ( v9 != 32 )
        v10 = v8 == 9;
      if ( v10 )
        break;
      --v6;
    }
    dword_4900D8 = v6;
    goto LABEL_17;
  }
  return 0;
}
