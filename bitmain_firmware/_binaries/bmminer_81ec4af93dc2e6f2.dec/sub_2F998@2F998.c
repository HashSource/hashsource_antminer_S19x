unsigned int __fastcall sub_2F998(int a1, int a2)
{
  unsigned int v4; // r4
  int v6; // r0
  _DWORD *v7; // r3
  _DWORD *v8; // r0
  unsigned int v9; // r2
  unsigned int v10; // t1
  _DWORD s[260]; // [sp+4h] [bp-410h] BYREF

  memset(s, 0, 0x40Cu);
  if ( sub_1C8EC(a1, (int)s) )
    return dword_B1070[a1];
  v4 = s[2];
  v6 = sub_26540();
  if ( v6 > 0 )
  {
    v7 = &s[1];
    v8 = &s[v6 + 1];
    do
    {
      v10 = v7[1];
      ++v7;
      v9 = v10;
      if ( a2 )
      {
        if ( v4 < v9 )
          v4 = v9;
      }
      else if ( v4 >= v9 )
      {
        v4 = v9;
      }
    }
    while ( v7 != v8 );
  }
  return v4;
}
