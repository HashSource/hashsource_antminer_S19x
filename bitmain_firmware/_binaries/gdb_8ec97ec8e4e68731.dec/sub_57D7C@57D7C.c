int __fastcall sub_57D7C(int result)
{
  int v1; // r4
  const char *v2; // r7

  v1 = dword_47480C;
  if ( dword_47480C )
  {
    dword_47480C = 0;
  }
  else if ( dword_47476C || dword_474768 )
  {
    v2 = (const char *)result;
    if ( dword_46B144 > 0 )
    {
      do
      {
        ++v1;
        sub_259F10("+");
      }
      while ( dword_46B144 > v1 );
    }
    return sub_259F10("%s\n", v2);
  }
  return result;
}
