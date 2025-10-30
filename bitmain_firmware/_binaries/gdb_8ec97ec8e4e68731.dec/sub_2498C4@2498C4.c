int __fastcall sub_2498C4(int a1)
{
  int v1; // lr
  int v2; // r2
  int v3; // r3

  v1 = dword_48A910;
  if ( !dword_48A910 || !*(_DWORD *)dword_48A910 )
    return 0;
  if ( a1 != *(_DWORD *)(dword_48A910 + 12) )
  {
    v2 = dword_48A910;
    v3 = 0;
    while ( 1 )
    {
      ++v3;
      v2 += 40;
      if ( *(_DWORD *)dword_48A910 == v3 )
        break;
      if ( *(_DWORD *)(v2 + 12) == a1 )
      {
        v1 = dword_48A910 + 40 * v3;
        return v1 + 8;
      }
    }
    return 0;
  }
  return v1 + 8;
}
