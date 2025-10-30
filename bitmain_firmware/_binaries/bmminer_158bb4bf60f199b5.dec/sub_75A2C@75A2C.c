int __fastcall sub_75A2C(int a1, char a2)
{
  int v5; // [sp+Ch] [bp-8h] BYREF

  sub_75D9C(0, a1, 0, 24, &v5);
  LOBYTE(v5) = v5 & 0xF7 | (8 * (a2 & 1));
  return sub_748C4(a1, 1, 0, 24, v5);
}
