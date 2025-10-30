int __fastcall sub_75984(int a1, int a2)
{
  int v4; // r6
  int v5; // r4
  int v6; // r5

  v4 = sub_8C218(256, a2);
  if ( v4 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      sub_758E0(a1, v6);
      ++v5;
      usleep(0x2710u);
      v6 += a2;
    }
    while ( v5 != v4 );
  }
  return 0;
}
