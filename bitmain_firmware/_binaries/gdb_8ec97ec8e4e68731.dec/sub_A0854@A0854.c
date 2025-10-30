int __fastcall sub_A0854(int result)
{
  int v1; // r3

  if ( result )
  {
    v1 = *(_DWORD *)(result + 24);
    result = *(_DWORD *)(v1 + 8);
    if ( !result )
      return *(_DWORD *)(v1 + 12);
  }
  return result;
}
