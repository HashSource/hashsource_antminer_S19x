int sub_11780()
{
  int v2; // [sp+0h] [bp-Ch]
  int i; // [sp+4h] [bp-8h]

  v2 = 0;
  for ( i = 0; i <= 4; ++i )
  {
    if ( !sub_10E88() )
    {
      usleep(0x4E20u);
      ++v2;
    }
  }
  if ( v2 != 5 )
    return 0;
  sub_10E60();
  return 1;
}
