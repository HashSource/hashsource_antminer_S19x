unsigned int __fastcall sub_468E0(int a1)
{
  unsigned int v1; // r6
  int v2; // r10
  int i; // r4
  int v5; // r9
  int v6; // r7
  int j; // r5
  int v8; // t1

  v1 = 0;
  v2 = a1 - 4;
  for ( i = 0; i != 4; ++i )
  {
    if ( sub_266F0(i) )
    {
      v5 = sub_26540();
      if ( v5 )
      {
        v6 = v2 + (i << 10);
        for ( j = 0; j != v5; ++j )
        {
          v8 = *(_DWORD *)(v6 + 4);
          v6 += 4;
          v1 += v8 * sub_26580();
        }
      }
    }
  }
  return v1 / 0x3E8;
}
