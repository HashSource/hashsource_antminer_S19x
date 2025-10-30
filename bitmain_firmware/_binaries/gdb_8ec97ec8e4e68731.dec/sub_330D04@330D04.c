int __fastcall sub_330D04(int a1, int a2)
{
  sub_32AB6C(a1, a2);
  *(_BYTE *)(a1 + 8) = ~(*(_BYTE *)(a1 + 8) ^ 0x7F);
  return a1;
}
