int __fastcall sub_BFF0(_BYTE *a1, int *a2)
{
  int v3; // r6
  unsigned int v4; // r0
  int v6[2]; // [sp+4h] [bp-Ch] BYREF

  sub_B2A4(v6, a2);
  v3 = v6[0];
  v4 = sub_B6AC(a1, v6[1]);
  return sub_B50C((int)a1, v4 + v3 + 693596);
}
