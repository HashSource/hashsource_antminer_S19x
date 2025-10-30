int __fastcall sub_77330(int a1, int a2, int a3, int a4)
{
  int result; // r0
  int v9; // [sp+8h] [bp-Ch] BYREF
  int v10[2]; // [sp+Ch] [bp-8h] BYREF

  if ( a2 == 1 )
  {
    sub_78850(0, a1, 0, 168, &v9);
    sub_78850(0, a1, 0, 24, v10);
  }
  else
  {
    sub_78850(1, a1, a3, 168, &v9);
    sub_78850(1, a1, a3, 24, v10);
  }
  if ( a4 )
  {
    LOWORD(v9) = v9 | 0x10F;
    HIWORD(v10[0]) = BYTE2(v10[0]) & 0xF0;
  }
  else
  {
    HIBYTE(v10[0]) = -1;
    LOBYTE(v9) = v9 & 0xF0;
    BYTE2(v10[0]) |= 0xFu;
  }
  result = sub_771FC(a1, a2, a3, 168, v9);
  if ( !result )
    return sub_771FC(a1, a2, a3, 24, v10[0]);
  return result;
}
