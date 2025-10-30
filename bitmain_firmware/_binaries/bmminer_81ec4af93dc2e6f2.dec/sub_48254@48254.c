bool __fastcall sub_48254(int a1)
{
  unsigned int v2; // r5
  int v3; // r4
  int v5; // r3
  char v6[2052]; // [sp+0h] [bp-804h] BYREF

  if ( (unsigned int)off_AFC24 > 4 )
  {
    snprintf(v6, 0x800u, "[DEBUG] Check if is recv nonce enough, chain = %d.\n", a1);
    sub_3AF5C(4, v6, 0, v5);
  }
  v2 = *(_DWORD *)(dword_530F04 + 4 * ((_DWORD)&unk_202802 + a1));
  v3 = 8 * sub_26580();
  return v2 >= sub_26540() * v3;
}
