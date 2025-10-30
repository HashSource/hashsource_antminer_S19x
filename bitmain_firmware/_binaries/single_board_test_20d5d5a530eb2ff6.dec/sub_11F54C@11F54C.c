int __fastcall sub_11F54C(int a1, _DWORD *a2, int a3)
{
  int v5; // [sp+4h] [bp-8h] BYREF

  v5 = a3;
  sub_1225A4("Require Explicit Policy", *a2, &v5);
  sub_1225A4("Inhibit Policy Mapping", a2[1], &v5);
  return v5;
}
