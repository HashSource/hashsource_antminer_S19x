int __fastcall sub_725B8(int a1, int a2)
{
  int result; // r0
  int v4; // r3

  if ( !a1 )
    return 0;
  v4 = *(_DWORD *)(a1 + 52);
  if ( !v4 )
    return 0;
  if ( *(_DWORD *)(v4 + 28) >= a2 )
    return 1;
  result = *(_DWORD *)(v4 + 36);
  if ( result )
    return *(_DWORD *)(a1 + 24) >= a2;
  return result;
}
