int __fastcall sub_37BF8(const char *a1, int a2)
{
  int v3; // r3
  char v5[2048]; // [sp+0h] [bp-800h] BYREF

  if ( a2 != 32 && (byte_5C0EFC || byte_4B9A21 || dword_B3094 > 2) )
  {
    snprintf(v5, 0x800u, "invald hash size %d\n", a2);
    sub_3B6AC(3, v5, 0, v3);
  }
  byte_534B68 = sub_379A0(a1);
  return 0;
}
