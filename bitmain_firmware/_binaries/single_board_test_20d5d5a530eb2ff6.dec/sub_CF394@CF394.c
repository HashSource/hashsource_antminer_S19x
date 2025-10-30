unsigned int __fastcall sub_CF394(_DWORD *a1)
{
  unsigned int v1; // r0

  v1 = (*a1 >> 12) & 0xFFF ^ *a1 ^ HIBYTE(*a1);
  return v1 ^ (13 * (v1 % 0x13));
}
