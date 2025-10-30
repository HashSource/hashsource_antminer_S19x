int __fastcall sub_AA838(int a1, int a2)
{
  int v2; // r3
  int v3; // r4
  int v4; // r2
  int result; // r0
  int v6; // r3

  v2 = *(_DWORD *)(a1 + 12);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 192);
    v4 = a2;
    result = *(_DWORD *)(v3 + 232);
    if ( result )
      return sub_10EC64(result, 0, v4) > 0;
  }
  else
  {
    v6 = *(_DWORD *)(a1 + 16);
    if ( !v6 )
      return 1;
    v3 = *(_DWORD *)(v6 + 1028);
    v4 = a2;
    result = *(_DWORD *)(v3 + 232);
    if ( result )
      return sub_10EC64(result, 0, v4) > 0;
  }
  result = sub_10F040();
  v4 = a2;
  *(_DWORD *)(v3 + 232) = result;
  if ( result )
    return sub_10EC64(result, 0, v4) > 0;
  return result;
}
