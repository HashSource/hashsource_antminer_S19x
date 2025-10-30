int __fastcall sub_78900(int a1, int a2, int a3)
{
  int result; // r0
  int v7; // [sp+8h] [bp-8h] BYREF
  int v8; // [sp+Ch] [bp-4h] BYREF

  if ( a2 == 1 )
  {
    sub_7A850(0, a1, 0, 168, &v7);
    sub_7A850(0, a1, 0, 24, &v8);
  }
  else
  {
    sub_7A850(1, a1, a3, 168, &v7);
    sub_7A850(1, a1, a3, 24, &v8);
  }
  LOWORD(v7) = v7 | 0x1F0;
  BYTE2(v8) &= 0xF0u;
  HIBYTE(v8) = -16;
  result = sub_7864C(a1, a2, a3, 168, v7);
  if ( !result )
  {
    usleep(0x2710u);
    return sub_7864C(a1, a2, a3, 24, v8);
  }
  return result;
}
