int __fastcall sub_22A04(int a1)
{
  int v3; // r4
  int v4; // r4
  int v5; // [sp+4h] [bp-4h] BYREF

  v5 = 0;
  if ( dword_B32C0 == 2 )
  {
    if ( sub_2740C() )
    {
      v3 = dword_B3DE4[a1];
      v4 = sub_26A44() * v3;
      return sub_26A84() * v4 / 1000 + v5;
    }
  }
  else
  {
    sub_1C70C(a1, (unsigned __int8)dword_B6EB4, &v5);
  }
  return v5;
}
