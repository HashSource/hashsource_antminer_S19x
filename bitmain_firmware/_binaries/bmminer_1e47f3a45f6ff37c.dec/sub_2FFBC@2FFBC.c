unsigned int __fastcall sub_2FFBC(int a1, int a2)
{
  unsigned int v5; // r4
  int v6; // r0
  unsigned int *v7; // r3
  unsigned int *v8; // r0
  unsigned int v9; // r2
  _DWORD s[260]; // [sp+4h] [bp-410h] BYREF

  memset(s, 0, 0x40Cu);
  if ( sub_1C7C4(a1, (int)s) )
    return dword_B3DE4[a1];
  v5 = s[2];
  v6 = sub_26A44();
  if ( v6 > 0 )
  {
    v7 = &s[2];
    v8 = &s[v6 + 2];
    do
    {
      while ( 1 )
      {
        v9 = *v7;
        if ( !a2 )
          break;
        ++v7;
        if ( v5 < v9 )
          v5 = v9;
        if ( v7 == v8 )
          return v5;
      }
      ++v7;
      if ( v5 >= v9 )
        v5 = v9;
    }
    while ( v7 != v8 );
  }
  return v5;
}
