int __fastcall sub_25ACB4(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v7; // r0
  int v8; // r3
  int v9; // r0
  signed int v10; // r2

  v7 = ((int (*)(void))loc_16666C)();
  if ( (unsigned int)v7 > 0x1F )
  {
    if ( v7 > 32 )
    {
      v9 = a2;
      v10 = 16;
      return sub_98B60(v9, 0, v10, v8, a5, a6);
    }
  }
  else
  {
    v8 = -1;
    a2 &= ~(-1 << v7);
  }
  v9 = a2;
  v10 = 8;
  return sub_98B60(v9, 0, v10, v8, a5, a6);
}
