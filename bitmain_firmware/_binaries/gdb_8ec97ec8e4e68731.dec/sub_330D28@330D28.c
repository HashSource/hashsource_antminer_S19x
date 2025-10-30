int __fastcall sub_330D28(int a1, int a2, int a3)
{
  char v4; // r4

  v4 = *(_BYTE *)(a3 + 8);
  sub_32AB6C(a1, a2);
  *(_BYTE *)(a1 + 8) = v4 & 0x80 | *(_BYTE *)(a1 + 8) & 0x7F;
  return a1;
}
