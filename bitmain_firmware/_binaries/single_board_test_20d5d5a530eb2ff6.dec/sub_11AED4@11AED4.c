int __fastcall sub_11AED4(int result)
{
  if ( result )
  {
    if ( *(_DWORD *)result && !**(_DWORD **)result )
    {
      return 1;
    }
    else
    {
      result = *(_DWORD *)(result + 4);
      if ( result )
        return *(_DWORD *)result == 0;
    }
  }
  return result;
}
