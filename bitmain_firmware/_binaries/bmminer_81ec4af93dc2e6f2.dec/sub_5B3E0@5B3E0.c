int __fastcall sub_5B3E0(char a1)
{
  int v3; // [sp+Ch] [bp-8h] BYREF

  v3 = 0;
  sub_52E24(13, &v3);
  return sub_52EA0(13, v3 & ~(1 << a1));
}
