unsigned int __fastcall sub_487B0(int a1)
{
  unsigned int v1; // r5
  int v2; // r10
  int i; // r9
  int v5; // r8
  int v6; // r6
  int j; // r4
  int v8; // t1

  v1 = 0;
  v2 = a1 - 4;
  for ( i = 0; i != 4; ++i )
  {
    if ( sub_26C0C(i) )
    {
      v5 = sub_26A44();
      if ( v5 )
      {
        v6 = v2;
        for ( j = 0; j != v5; ++j )
        {
          v8 = *(_DWORD *)(v6 + 4);
          v6 += 4;
          v1 += v8 * sub_26A84();
        }
      }
    }
    v2 += 1024;
  }
  return v1 / 0x3E8;
}
