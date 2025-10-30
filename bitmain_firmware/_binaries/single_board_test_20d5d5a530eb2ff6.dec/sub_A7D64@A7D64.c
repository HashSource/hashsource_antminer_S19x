int __fastcall sub_A7D64(int result)
{
  int v1; // r3
  int v2; // r3

  v1 = result;
  if ( result )
  {
    result = *(_DWORD *)(result + 1508);
    if ( !result )
    {
      v2 = *(_DWORD *)(v1 + 1232);
      if ( v2 )
        return *(_DWORD *)(v2 + 528);
    }
  }
  return result;
}
