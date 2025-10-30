void __fastcall sub_582C8(_DWORD *a1)
{
  int v2; // r3
  int v3; // r5
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  v2 = dword_1AEEB8;
  a1[7] = 0;
  if ( v2 || (v3 = a1[1], v3 >= sub_5821C()) )
  {
    if ( byte_244080 || byte_1AECC4 || dword_9E320 > 5 )
    {
      snprintf(s, 0x800u, "Pool %d %s alive", *a1, (const char *)a1[41]);
      sub_47AB4(6, s, 0);
    }
  }
  else if ( byte_244080 || byte_1AECC4 || dword_9E320 > 3 )
  {
    snprintf(s, 0x800u, "Pool %d %s alive, testing stability", *a1, (const char *)a1[41]);
    sub_47AB4(4, s, 0);
  }
}
