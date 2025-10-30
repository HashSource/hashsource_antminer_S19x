int sub_1AE00()
{
  int v0; // r4
  int v1; // r3
  int v2; // r6
  char v4[2052]; // [sp+0h] [bp-804h] BYREF

  if ( byte_1AECC5 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
  {
    snprintf(v4, 0x800u, "--- %s\n", "dhash_chip_set_addr_all");
    sub_47AB4(7, v4, 0);
  }
  v0 = 0;
  v1 = dword_A0D68;
  *(_BYTE *)(dword_A0D68 + 12954) = 3;
  while ( *(_DWORD *)(v1 + 4 * v0 + 4) != 1 || !*(_BYTE *)(v1 + v0 + 12918) )
  {
    if ( ++v0 == 16 )
      return sub_4A804(10);
LABEL_7:
    v1 = dword_A0D68;
  }
  v2 = (unsigned __int8)v0++;
  sub_74AC8(v2);
  sub_4A804(30);
  sub_74AC8(v2);
  sub_4A804(30);
  sub_74AC8(v2);
  sub_4A804(30);
  sub_74ACC(v2, *(unsigned __int8 *)(dword_A0D68 + 12954));
  if ( v0 != 16 )
    goto LABEL_7;
  return sub_4A804(10);
}
