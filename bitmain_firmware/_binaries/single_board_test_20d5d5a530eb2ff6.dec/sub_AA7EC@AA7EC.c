int __fastcall sub_AA7EC(int a1, int a2)
{
  int v2; // r3
  int v3; // r4
  int result; // r0
  int v5; // r3
  int v6; // [sp+4h] [bp-4h]

  v2 = *(_DWORD *)(a1 + 12);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 192);
    result = *(_DWORD *)(v3 + 236);
    if ( result )
      return sub_10EC64(result, a2, 0) > 0;
  }
  else
  {
    v5 = *(_DWORD *)(a1 + 16);
    if ( !v5 )
      return 1;
    v3 = *(_DWORD *)(v5 + 1028);
    result = *(_DWORD *)(v3 + 236);
    if ( result )
      return sub_10EC64(result, a2, 0) > 0;
  }
  v6 = a2;
  result = sub_10F040();
  a2 = v6;
  *(_DWORD *)(v3 + 236) = result;
  if ( result )
    return sub_10EC64(result, a2, 0) > 0;
  return result;
}
