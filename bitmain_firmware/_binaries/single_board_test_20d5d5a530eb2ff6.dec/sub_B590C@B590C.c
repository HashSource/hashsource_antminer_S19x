bool __fastcall sub_B590C(int a1, int a2)
{
  int v3; // [sp+Ch] [bp-4h] BYREF

  v3 = a2;
  return setsockopt(a1, 6, 1, &v3, 4u) == 0;
}
