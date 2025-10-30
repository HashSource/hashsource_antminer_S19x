int __fastcall sub_71BA4(int a1)
{
  int v2; // r1
  int v4; // [sp+4h] [bp-4h] BYREF

  v4 = 0;
  sub_6E060(0, &v4);
  v2 = v4;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v2 = v4 | 0x80000000;
      v4 |= 0x80000000;
    }
  }
  else
  {
    v2 = v4 & 0x7FFFFFFF;
    v4 &= ~0x80000000;
  }
  sub_6E0BC(0, v2);
  return 0;
}
