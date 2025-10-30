int __fastcall sub_5F850(int a1, int a2)
{
  int v3; // r0
  _BYTE v7[12]; // [sp+8h] [bp-14h] BYREF
  int v8; // [sp+14h] [bp-8h]

  if ( sub_64248(v7) )
    return 0;
  if ( sub_5FA5C(a1, 387092, v7, a2) )
  {
    v8 = 0;
  }
  else
  {
    v3 = sub_64360(v7);
    v8 = sub_640F8(v3);
  }
  sub_642C4(v7);
  return v8;
}
