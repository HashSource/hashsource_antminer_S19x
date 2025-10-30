bool __fastcall sub_95EC0(int a1)
{
  int v1; // r3
  _BOOL4 result; // r0

  v1 = *(_DWORD *)(a1 + 1452);
  if ( v1 == 2 )
    return 1;
  result = *(_DWORD *)(a1 + 28) == 0;
  if ( !v1 )
    return 0;
  return result;
}
