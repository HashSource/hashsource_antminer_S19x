int __fastcall sub_26FCD8(int a1)
{
  int v1; // r3
  int result; // r0

  v1 = *(_DWORD *)(a1 + 104);
  if ( !*(_DWORD *)(v1 + 4) )
    return -1;
  result = *(_DWORD *)(v1 + 28);
  if ( result <= 0 )
    return -1;
  return result;
}
