int __fastcall sub_785E0(int a1, int a2)
{
  char v4; // r3
  int v6; // [sp+Ch] [bp-8h] BYREF

  sub_78850(0, a1, 0, 24, &v6);
  if ( a2 )
    v4 = BYTE1(v6) | 1;
  else
    v4 = BYTE1(v6) & 0xFE;
  BYTE1(v6) = v4;
  return sub_771FC(a1, 1, 0, 24, v6);
}
