int __fastcall sub_30290(const char *a1)
{
  char v3[8]; // [sp+Ch] [bp-808h] BYREF
  int v4; // [sp+80Ch] [bp-8h]

  v4 = sub_30104();
  sub_3017C(v4, a1);
  if ( strstr(*(const char **)(v4 + 164), ".nicehash.com") || strstr(*(const char **)(v4 + 164), "#xnsub") )
  {
    *(_BYTE *)(v4 + 580) = 1;
    if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
    {
      snprintf(v3, 0x800u, "Pool %d extranonce subscribing enabled.", *(_DWORD *)v4);
      sub_1E4EC(7, v3, 0);
    }
  }
  return 0;
}
