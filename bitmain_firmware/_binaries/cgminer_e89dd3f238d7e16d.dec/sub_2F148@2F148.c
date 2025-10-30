int __fastcall sub_2F148(const char *a1)
{
  char v3[8]; // [sp+Ch] [bp-808h] BYREF
  int v4; // [sp+80Ch] [bp-8h]

  v4 = sub_2EFB0();
  sub_2F028(v4, a1);
  if ( strstr(*(const char **)(v4 + 164), ".nicehash.com") || strstr(*(const char **)(v4 + 164), "#xnsub") )
  {
    *(_BYTE *)(v4 + 580) = 1;
    if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
    {
      snprintf(v3, 0x800u, "Pool %d extranonce subscribing enabled.", *(_DWORD *)v4);
      sub_1DB6C(7, v3, 0);
    }
  }
  return 0;
}
