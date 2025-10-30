unsigned int sub_73AD4()
{
  int v0; // r4
  int v2; // [sp+4h] [bp-8h] BYREF

  v0 = 601;
  v2 = 0;
  do
  {
    sub_6688C(12, &v2);
    if ( v2 < 0 )
      return (unsigned int)v2 >> 31;
    usleep(0x1388u);
    --v0;
  }
  while ( v0 );
  return 0;
}
