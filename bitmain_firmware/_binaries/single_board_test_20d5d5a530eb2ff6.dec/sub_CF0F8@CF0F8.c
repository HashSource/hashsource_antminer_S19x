int sub_CF0F8()
{
  int result; // r0
  int v1; // r4

  result = sub_CE32C();
  if ( result )
  {
    v1 = result;
    do
    {
      sub_CF0C0(v1);
      result = sub_CE484(v1);
      v1 = result;
    }
    while ( result );
  }
  return result;
}
