int __fastcall sub_5CB78(int a1)
{
  int v3; // [sp+Ch] [bp-8h] BYREF

  v3 = 0;
  sub_52E24(0, &v3);
  if ( a1 )
  {
    if ( a1 == 1 )
      v3 |= 0x80000000;
  }
  else
  {
    v3 &= ~0x80000000;
  }
  sub_52EA0(0, v3);
  return 0;
}
