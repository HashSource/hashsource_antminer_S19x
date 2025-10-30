int __fastcall sub_77E98(int a1, int a2)
{
  char v4; // r3
  int v6; // [sp+Ch] [bp-8h] BYREF

  if ( sub_78850(0, a1, 0, 24, &v6) < 0 )
    return -1;
  if ( a2 )
    v4 = v6 | 0x80;
  else
    v4 = v6 & 0x7F;
  LOBYTE(v6) = v4;
  return sub_771FC(a1, 1, 0, 24, v6);
}
