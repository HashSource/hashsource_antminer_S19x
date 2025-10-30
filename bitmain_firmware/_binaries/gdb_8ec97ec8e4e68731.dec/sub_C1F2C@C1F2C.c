int __fastcall sub_C1F2C(int *a1, unsigned int a2)
{
  int v3; // r1
  int v4; // r2
  int v5; // r1
  int v6; // r3
  int v7; // t1

  if ( !a1[1] )
  {
    v3 = *a1;
    if ( *a1 <= 1 )
    {
      sub_94700(
        (int)"block.c",
        151,
        "%s: Assertion `%s' failed.",
        "block* find_block_in_blockvector(const blockvector*, CORE_ADDR)",
        "BLOCKVECTOR_NBLOCKS (bl) >= 2");
      JUMPOUT(0xC2008);
    }
    v4 = 1;
    while ( v3 - v4 > 1 )
    {
      if ( *(_DWORD *)a1[v4 + 2 + ((v3 - v4 + 1) >> 1)] <= a2 )
        v4 += (v3 - v4 + 1) >> 1;
      else
        v3 = v4 + ((v3 - v4 + 1) >> 1);
    }
    if ( v4 > 0 )
    {
      v5 = a1[v4 + 2];
      if ( a2 < *(_DWORD *)(v5 + 4) )
        return v5;
      v6 = (int)&a1[v4 + 2];
      while ( --v4 )
      {
        v7 = *(_DWORD *)(v6 - 4);
        v6 -= 4;
        v5 = v7;
        if ( *(_DWORD *)(v7 + 4) > a2 )
          return v5;
      }
    }
    return 0;
  }
  return sub_B71F0(a1[1]);
}
