int __fastcall sub_78DFC(int a1, int a2)
{
  int v4; // r6
  int v5; // r4
  int v6; // r5

  v4 = sub_8F588(256, a2);
  if ( v4 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      sub_78D5C(a1, v6);
      ++v5;
      v6 += a2;
      usleep(0x2710u);
    }
    while ( v5 != v4 );
  }
  return 0;
}
