void __fastcall sub_70EF8(unsigned __int8 *a1, unsigned int a2)
{
  unsigned int v4; // r4
  int v5; // r3
  unsigned int v6; // r4
  int v7; // r3
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  snprintf(s, 0x800u, "Dumping %u %s bytes from %p:\n", a2, "read return data", a1);
  v4 = 0;
  sub_47AB4(2, s, 0);
  do
  {
    while ( a2 > v4 )
    {
      v5 = a1[v4++];
      snprintf(s, 0x800u, "%02x ", v5);
      sub_47AB4(2, s, 0);
      if ( v4 == 16 )
        goto LABEL_5;
    }
    ++v4;
    *(_DWORD *)s = &unk_202020;
    sub_47AB4(2, s, 0);
  }
  while ( v4 != 16 );
LABEL_5:
  v6 = 0;
  do
  {
    while ( a2 <= v6 )
    {
      ++v6;
      strcpy(s, " ");
      sub_47AB4(2, s, 0);
      if ( v6 == 16 )
        goto LABEL_11;
    }
    v7 = a1[v6++];
    if ( (unsigned int)(v7 - 32) > 0x5E )
      v7 = 46;
    snprintf(s, 0x800u, "%c", v7);
    sub_47AB4(2, s, 0);
  }
  while ( v6 != 16 );
LABEL_11:
  strcpy(s, "\n");
  sub_47AB4(2, s, 0);
}
