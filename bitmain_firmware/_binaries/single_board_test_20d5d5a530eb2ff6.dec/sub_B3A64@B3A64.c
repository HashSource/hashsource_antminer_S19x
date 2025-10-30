int __fastcall sub_B3A64(int result)
{
  int v1; // r3
  int v2; // r3

  v1 = result;
  if ( result )
  {
    result = *(_DWORD *)(result + 12);
    if ( !result && *(_DWORD *)(v1 + 4) != 1 )
    {
      v2 = *(_DWORD *)(v1 + 8);
      if ( v2 == 1 )
      {
        return 6;
      }
      else if ( v2 == 2 )
      {
        return 17;
      }
    }
  }
  return result;
}
