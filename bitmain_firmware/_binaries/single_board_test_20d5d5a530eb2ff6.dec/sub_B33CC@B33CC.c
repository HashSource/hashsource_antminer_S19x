int sub_B33CC()
{
  int result; // r0

  result = sub_DE05C(256, 0, 0);
  if ( result )
  {
    result = sub_B2DB0();
    if ( result )
    {
      if ( *(_DWORD *)(result + 4) )
        ++*(_DWORD *)(result + 8);
    }
  }
  return result;
}
