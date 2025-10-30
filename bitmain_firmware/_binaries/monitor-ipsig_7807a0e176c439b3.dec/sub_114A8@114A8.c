int sub_114A8()
{
  int v0; // r4
  int v1; // r5
  int result; // r0
  int v3; // r4

  v0 = 5;
  v1 = 0;
  do
  {
    if ( !sub_10E1C() )
    {
      ++v1;
      usleep(0x4E20u);
    }
    --v0;
  }
  while ( v0 );
  result = 0;
  if ( v1 == 5 )
  {
    sub_10DA0(0);
    while ( !sub_10E1C() )
      usleep(0x3E8u);
    v3 = 5;
    do
    {
      sub_10DA0(1);
      usleep(0x186A0u);
      sub_10DA0(0);
      usleep(0x186A0u);
      --v3;
    }
    while ( v3 );
    return 1;
  }
  return result;
}
