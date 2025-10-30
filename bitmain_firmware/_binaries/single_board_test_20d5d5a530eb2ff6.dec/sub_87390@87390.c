int __fastcall sub_87390(int result)
{
  int v1; // r3
  int v2; // r2
  int v3; // r1

  if ( result )
  {
    v1 = 0;
    while ( 1 )
    {
      v2 = dword_1A9064[2 * v1];
      v3 = 2 * v1++;
      if ( *(_DWORD *)(result + 24) == v2 )
        break;
      if ( v1 == 22 )
        return 0;
    }
    return dword_1A9064[v3 + 1];
  }
  return result;
}
