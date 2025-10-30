int __fastcall sub_A9EE8(int a1, int a2, int a3, int a4, int a5)
{
  int result; // r0
  int v7; // r3

  result = sub_A9C74(a1, a2, a3, a4, a5);
  v7 = *(_DWORD *)(a1 + 24);
  if ( *(_BYTE *)v7 == 23 )
  {
    do
      v7 = *(_DWORD *)(*(_DWORD *)(v7 + 20) + 24);
    while ( *(_BYTE *)v7 == 23 );
    if ( *(_DWORD *)(result + 24) == v7 )
      return a1;
  }
  return result;
}
