int __fastcall sub_77E08(int a1, int a2, int a3)
{
  char v6; // r3
  int v8; // [sp+Ch] [bp-4h] BYREF

  sub_78850(1, a1, a2, 24, &v8);
  if ( a3 )
    v6 = BYTE1(v8) | 3;
  else
    v6 = BYTE1(v8) & 0xFC;
  BYTE1(v8) = v6;
  return sub_771FC(a1, 0, a2, 24, v8);
}
