int sub_15B988()
{
  int result; // r0
  _DWORD *v1; // r4

  result = sub_CE32C();
  if ( result )
  {
    v1 = (_DWORD *)result;
    do
    {
      sub_15B950(v1);
      result = sub_CE484((int)v1);
      v1 = (_DWORD *)result;
    }
    while ( result );
  }
  return result;
}
