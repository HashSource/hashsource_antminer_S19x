int __fastcall sub_17810(int a1, int a2)
{
  int v4; // r4
  int v5; // r3

  v4 = 8;
  do
  {
    v5 = sub_39018(28, a1, a2);
    if ( v5 )
      return v5;
    usleep(0x3E8u);
    --v4;
  }
  while ( v4 );
  return 0;
}
