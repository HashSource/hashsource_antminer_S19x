int sub_15B7B0()
{
  int result; // r0
  _DWORD *v1; // r4

  result = sub_CE32C();
  if ( result )
  {
    v1 = (_DWORD *)result;
    do
    {
      sub_15B770(v1);
      result = sub_CE484((int)v1);
      v1 = (_DWORD *)result;
    }
    while ( result );
  }
  return result;
}
