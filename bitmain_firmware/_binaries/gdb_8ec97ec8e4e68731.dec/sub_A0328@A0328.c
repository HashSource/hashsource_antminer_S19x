int __fastcall sub_A0328(int a1, int a2)
{
  int v2; // r0
  int v3; // r4
  int result; // r0

  v2 = *(_DWORD *)(a1 + 24);
  v3 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v2 + 24) + 24 * a2 + 12) + 24);
  if ( *(_BYTE *)v3 == 4 )
    return 1;
  result = sub_9D140(v2, a2);
  if ( result )
    return **(char **)(*(_DWORD *)(v3 + 20) + 24) == 4;
  return result;
}
