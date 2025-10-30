int sub_D1260()
{
  int result; // r0
  int v1; // r2

  result = (int)sub_CFCDC();
  if ( result )
  {
    v1 = *(_DWORD *)(result + 384);
    if ( *(_DWORD *)(result + 388) == v1 )
    {
      return 0;
    }
    else
    {
      *(_DWORD *)(result + 4 * v1) |= 1u;
      return 1;
    }
  }
  return result;
}
