int __fastcall sub_1BD20(int a1, int a2, int a3)
{
  int v4; // r5
  const char *v5; // r1

  v4 = sub_15ECAC(a3, 24);
  if ( v4 >= 0 )
    LOWORD(v5) = -24220;
  else
    LOWORD(v5) = -24244;
  HIWORD(v5) = 52;
  sub_25A418(a2, v5, HIBYTE(v4) & 0x7F);
  sub_25A6BC("mask: ", a2);
  sub_1BC7C(a2, SBYTE2(v4));
  sub_25A6BC("flags: ", a2);
  return sub_1BC7C(a2, v4);
}
