int __fastcall sub_76264(int a1, int a2, int a3, __int16 a4)
{
  char v7; // r3
  int v9; // [sp+Ch] [bp-4h] BYREF

  sub_7740C(0, a1, 0, 164, &v9);
  LOWORD(v9) = a4;
  if ( a2 )
    v7 = HIBYTE(v9) | 0x80;
  else
    v7 = HIBYTE(v9) & 0x7F;
  HIBYTE(v9) = v7 & 0x8F | 0x10;
  return sub_751F0(a1, 1, 0, 164, v9);
}
