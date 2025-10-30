int __fastcall sub_75374(int a1, int a2, char a3, __int16 a4)
{
  char v8; // r3
  int v10; // [sp+Ch] [bp-8h] BYREF

  sub_75D9C(0, a1, 0, 164, &v10);
  LOWORD(v10) = a4;
  if ( a2 )
    v8 = HIBYTE(v10) | 0x80;
  else
    v8 = HIBYTE(v10) & 0x7F;
  HIBYTE(v10) = v8 & 0x8F | (16 * (a3 & 3)) & 0xBF;
  return sub_748C4(a1, 1, 0, 164, v10);
}
