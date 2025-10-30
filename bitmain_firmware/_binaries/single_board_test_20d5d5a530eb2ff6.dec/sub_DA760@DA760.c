int __fastcall sub_DA760(int a1, int a2)
{
  int v2; // r2
  int (__fastcall *v3)(int, int, _DWORD, int); // r4
  int result; // r0

  v2 = *(_DWORD *)(a1 + 12);
  if ( !v2 )
    return 0;
  v3 = *(int (__fastcall **)(int, int, _DWORD, int))(v2 + 92);
  if ( !v3 )
    return 0;
  result = v3(a1, 10, 0, a2);
  if ( result <= 0 )
    return 0;
  return result;
}
