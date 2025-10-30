int sub_B33F4()
{
  int result; // r0
  int v1; // r3

  result = sub_DE05C(256, 0, 0);
  if ( result )
  {
    result = sub_B2DB0();
    if ( result )
    {
      if ( *(_DWORD *)(result + 4) )
      {
        v1 = *(_DWORD *)(result + 8);
        if ( v1 )
          *(_DWORD *)(result + 8) = v1 - 1;
      }
    }
  }
  return result;
}
