unsigned int sub_11C568()
{
  int v0; // r4
  int v1; // r5
  int v2; // r2
  int v4; // r3
  int v5; // r0
  unsigned int v6; // [sp+4h] [bp-8h] BYREF

  v0 = 0;
  v1 = dword_4872D8;
  v6 = 0;
  v2 = *(_DWORD *)(dword_4872D8 + 352);
  if ( v2 <= 0 )
    return 0;
  do
  {
    v4 = *(_DWORD *)(*(_DWORD *)(v1 + 348) + 4 * v0++);
    v5 = *(_DWORD *)(v4 + 24);
    if ( v5 )
    {
      if ( !*(_DWORD *)(v5 + 24) )
      {
        sub_11C4FC(v5, (int *)&v6);
        v2 = *(_DWORD *)(v1 + 352);
      }
    }
  }
  while ( v2 > v0 );
  return v6 >> 2;
}
