int __fastcall sub_375AC(const char *a1, int a2)
{
  int v3; // r3
  char v5[2048]; // [sp+0h] [bp-800h] BYREF

  if ( a2 != 32 && (byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 2) )
  {
    snprintf(v5, 0x800u, "invald hash size %d\n", a2);
    sub_3AF5C(3, v5, 0, v3);
  }
  byte_4B6CDC = sub_37380(a1);
  return 0;
}
