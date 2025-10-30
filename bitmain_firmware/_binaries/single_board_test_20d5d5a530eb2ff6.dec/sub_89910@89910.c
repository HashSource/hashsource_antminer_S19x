int __fastcall sub_89910(int result)
{
  int v1; // r3
  int v2; // r3

  v1 = result;
  if ( result )
  {
    result = *(_DWORD *)(result + 188);
    if ( !result )
    {
      v2 = *(_DWORD *)(v1 + 1232);
      if ( v2 )
        return *(_DWORD *)(v2 + 4);
    }
  }
  return result;
}
