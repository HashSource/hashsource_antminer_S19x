int __fastcall sub_DA710(int a1, int a2)
{
  int v2; // r2

  v2 = *(_DWORD *)(a1 + 12);
  if ( !v2 )
    return -2;
  if ( *(_DWORD *)(v2 + 92) )
    return (*(int (__fastcall **)(int, int, _DWORD, int))(v2 + 92))(a1, 3, 0, a2);
  return -2;
}
