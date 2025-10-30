bool __fastcall sub_49164(int a1)
{
  unsigned int v2; // r5
  int v3; // r4
  int v5; // r3
  char v6[2052]; // [sp+0h] [bp-804h] BYREF

  if ( (unsigned int)dword_B308C > 4 )
  {
    snprintf(v6, 0x800u, "[DEBUG] Check if is recv nonce enough, chain = %d.\n", a1);
    sub_3B6AC(4, v6, 0, v5);
  }
  v2 = *(_DWORD *)(dword_535D8C + 4 * ((_DWORD)&unk_202802 + a1));
  v3 = sub_26A84();
  return v2 >= sub_26A44() * 8 * v3;
}
