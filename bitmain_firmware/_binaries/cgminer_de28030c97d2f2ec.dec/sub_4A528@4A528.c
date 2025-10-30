void __fastcall sub_4A528(int a1)
{
  char v1[4]; // [sp+8h] [bp-904h] BYREF
  char v2[256]; // [sp+808h] [bp-104h] BYREF

  sub_325F4(v2, 0xFFu, a1);
  if ( byte_91F58 || byte_87769 || dword_8697C > 3 )
  {
    snprintf(v1, 0x800u, "%s", v2);
    sub_1E4EC(4, v1, 0);
  }
}
