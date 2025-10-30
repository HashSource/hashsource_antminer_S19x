int __fastcall sub_281380(int a1)
{
  int v1; // r2
  int v2; // r1
  _BOOL4 v3; // r6
  int v4; // r7
  bool v5; // zf
  int v6; // r3
  int v7; // r3
  int v8; // t1
  bool v9; // zf
  int v10; // r8
  bool v11; // zf
  int v12; // r1
  int v13; // r1
  int v14; // r7
  int v15; // r3
  int v16; // t1
  bool v17; // zf
  char v18; // r2
  int v19; // r3

  for ( ; a1; --a1 )
  {
    v1 = dword_4900D8;
    if ( dword_4900DC - 1 <= dword_4900D8 )
      break;
    v2 = *(unsigned __int8 *)(dword_48AAD4 + dword_4900D8);
    v3 = dword_4900DC > dword_4900D8;
    v4 = dword_48AAD4 + dword_4900D8;
    v5 = v2 == 32;
    if ( v2 != 32 )
      v5 = v2 == 9;
    v6 = !v5;
    if ( (v3 & v6) != 0 )
    {
      v7 = dword_4900D8 + 1;
      do
      {
        dword_4900D8 = v7;
        v8 = *(unsigned __int8 *)++v4;
        v2 = v8;
        v3 = v7 < dword_4900DC;
        v1 = v7++;
        v9 = v8 == 32;
        if ( v8 != 32 )
          v9 = v2 == 9;
        v10 = !v9;
      }
      while ( (v3 & v10) != 0 );
    }
    v11 = v2 == 9;
    if ( v2 != 9 )
      v11 = v2 == 32;
    v12 = v11;
    if ( (v3 & v12) != 0 )
    {
      v13 = v1 + 1;
      v14 = dword_48AAD4 + v1;
      do
      {
        dword_4900D8 = v13;
        v16 = *(unsigned __int8 *)++v14;
        v15 = v16;
        v17 = v16 == 9;
        if ( v16 != 9 )
          v17 = v15 == 32;
        v18 = v17;
        if ( v13 < dword_4900DC )
          v19 = v18 & 1;
        else
          v19 = 0;
        ++v13;
      }
      while ( v19 );
    }
  }
  return 0;
}
