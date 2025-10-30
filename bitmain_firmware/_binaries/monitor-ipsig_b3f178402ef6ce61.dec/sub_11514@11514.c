int sub_11514()
{
  int v0; // r4
  int v1; // r5
  int result; // r0
  int v3; // r4

  v0 = 5;
  v1 = 0;
  do
  {
    if ( !sub_10E34() )
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
    sub_10DB8(0);
    while ( !sub_10E34() )
      usleep(0x3E8u);
    v3 = 5;
    do
    {
      sub_10DB8(1);
      usleep(0x186A0u);
      sub_10DB8(0);
      usleep(0x186A0u);
      --v3;
    }
    while ( v3 );
    return 1;
  }
  return result;
}
