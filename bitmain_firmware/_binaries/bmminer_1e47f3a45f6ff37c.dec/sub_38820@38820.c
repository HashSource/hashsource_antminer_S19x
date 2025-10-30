int __fastcall sub_38820(int a1, int a2)
{
  int v2; // r3
  int v3; // r0
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  if ( byte_5C0EFC || byte_4B9A21 || dword_B3094 > 4 )
  {
    snprintf(s, 0x800u, "%s %d\n", "bitmain_shutdown_cb", a2);
    a1 = sub_3B6AC(5, s, 0, v2);
  }
  sub_40E04(a1);
  sub_3DB9C(dword_B6684);
  sub_3DB9C(dword_B6688);
  sub_3DB9C(dword_B6680);
  sub_3DB9C(dword_B667C);
  v3 = sub_3DB9C(dword_5C0EF8);
  sub_40554(v3);
  *(_BYTE *)(dword_5BFE4C + 364) = 1;
  return 0;
}
