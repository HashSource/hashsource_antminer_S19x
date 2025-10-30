int __fastcall sub_77720(int a1, int a2)
{
  int v4; // r0
  int v5; // r4
  int v6; // r6
  int v7; // r5

  v4 = sub_189090(256, a2);
  if ( v4 )
  {
    v5 = 0;
    v6 = v4;
    v7 = 0;
    do
    {
      sub_776BC(a1, v7);
      ++v5;
      usleep(0x2710u);
      v7 += a2;
    }
    while ( v5 != v6 );
  }
  return 0;
}
