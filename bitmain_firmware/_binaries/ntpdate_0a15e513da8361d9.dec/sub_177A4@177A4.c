int __fastcall sub_177A4(int a1, int a2)
{
  int v3; // r3
  int result; // r0

  if ( !a1 )
    return 0;
  v3 = *(_DWORD *)(a1 + 52);
  if ( !v3 )
    return 0;
  if ( *(_DWORD *)(v3 + 28) >= a2 )
    return 1;
  result = *(_DWORD *)(v3 + 36);
  if ( result )
    return a2 <= *(_DWORD *)(a1 + 24);
  return result;
}
