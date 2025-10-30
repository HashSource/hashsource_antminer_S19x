int sub_2960B0()
{
  int v0; // r5
  int v1; // r3
  int v2; // r2
  int v3; // r1
  bool v4; // zf
  int v5; // r2
  int v6; // t1
  bool v7; // zf
  int v8; // r0
  int v9; // r3
  bool v10; // zf
  unsigned __int8 *v11; // r0
  unsigned __int8 *v12; // r3
  int v13; // r2
  int v14; // t1
  bool v15; // zf
  int v16; // r1

  v0 = dword_4900D8;
  if ( !dword_4900D8 )
  {
LABEL_12:
    v8 = dword_4900DC;
    if ( dword_4900DC <= 0 )
      return 0;
    v0 = 0;
    goto LABEL_15;
  }
  v1 = dword_4900D8 - 1;
  v2 = *(unsigned __int8 *)(dword_48AAD4 + dword_4900D8 - 1);
  v3 = dword_48AAD4 + dword_4900D8 - 1;
  v4 = v2 == 9;
  if ( v2 != 9 )
    v4 = v2 == 32;
  if ( v4 )
  {
    do
    {
      v4 = v1 == 0;
      dword_4900D8 = v1;
      v0 = v1--;
      if ( v4 )
        goto LABEL_12;
      v6 = *(unsigned __int8 *)--v3;
      v5 = v6;
      v7 = v6 == 9;
      if ( v6 != 9 )
        v7 = v5 == 32;
    }
    while ( v7 );
  }
  v8 = dword_4900DC;
  if ( v0 < dword_4900DC )
  {
LABEL_15:
    v9 = *(unsigned __int8 *)(dword_48AAD4 + v0);
    v10 = v9 == 9;
    if ( v9 != 9 )
      v10 = v9 == 32;
    if ( !v10 )
      goto LABEL_30;
    v11 = (unsigned __int8 *)(dword_48AAD4 + v8);
    v12 = (unsigned __int8 *)(dword_48AAD4 + v0 + 1);
    do
    {
      v16 = (int)&v12[-dword_48AAD4];
      dword_4900D8 = (int)&v12[-dword_48AAD4];
      if ( v12 == v11 )
        break;
      v14 = *v12++;
      v13 = v14;
      v15 = v14 == 9;
      if ( v14 != 9 )
        v15 = v13 == 32;
    }
    while ( v15 );
    if ( v16 == v0 )
    {
LABEL_30:
      v0 = dword_4900D8;
    }
    else
    {
      sub_294F5C(v0, v16);
      dword_4900D8 = v0;
    }
  }
  if ( v0 < 0 )
    dword_4900D8 = 0;
  return 0;
}
