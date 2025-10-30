int __fastcall sub_759D4(int a1, int a2, int a3)
{
  int v4; // r4
  int v7; // r5

  if ( a3 )
  {
    v4 = 0;
    v7 = 0;
    do
    {
      sub_758E0(a1, v7);
      ++v4;
      usleep(0x2710u);
      v7 += a2;
    }
    while ( a3 != v4 );
  }
  return 0;
}
