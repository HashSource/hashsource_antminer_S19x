int __fastcall sub_170CC4(int a1)
{
  int v1; // r3
  int result; // r0

  v1 = *(_DWORD *)(a1 + 24);
  result = *(_DWORD *)(v1 + 12);
  if ( !result )
    return *(_DWORD *)(v1 + 8);
  return result;
}
