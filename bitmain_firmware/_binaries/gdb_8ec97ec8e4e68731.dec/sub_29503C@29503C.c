int __fastcall sub_29503C(int result)
{
  int v1; // r2

  v1 = dword_4900DC;
  if ( dword_4900D8 <= dword_4900DC )
  {
    if ( dword_4900D8 < 0 )
      dword_4900D8 = 0;
  }
  else
  {
    dword_4900D8 = dword_4900DC;
  }
  if ( result )
  {
    if ( dword_4900DC >= dword_4900D4 )
    {
      if ( dword_4900D4 >= 0 )
        return result;
      v1 = 0;
    }
    dword_4900D4 = v1;
  }
  return result;
}
