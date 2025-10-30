int sub_152C84()
{
  void *v0; // r4
  int v1; // r5
  int result; // r0

  do
  {
    while ( 1 )
    {
      v0 = sub_92E28();
      if ( !sub_15239C() )
        break;
      sub_92E40((int)v0);
    }
    v1 = sub_152AF8();
    result = sub_92E40((int)v0);
  }
  while ( v1 >= 0 );
  return result;
}
