void __fastcall sub_71DF8(unsigned __int8 *a1, int a2)
{
  int v2; // r5
  unsigned __int8 *v3; // r6
  unsigned int i; // r4
  int v5; // r3
  unsigned int v6; // r4
  int v7; // r3
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  v2 = a2;
  v3 = a1;
  snprintf(s, 0x800u, "Dumping %u %s bytes from %p:\n", a2, "read return data", a1);
  sub_47AB4(2, s, 0);
  if ( v2 > 0 )
  {
    while ( 1 )
    {
      for ( i = 0; i != 16; ++i )
      {
        while ( v2 > i )
        {
          v5 = v3[i++];
          snprintf(s, 0x800u, "%02x ", v5);
          sub_47AB4(2, s, 0);
          if ( i == 16 )
            goto LABEL_6;
        }
        *(_DWORD *)s = &unk_202020;
        sub_47AB4(2, s, 0);
      }
LABEL_6:
      v6 = 0;
      do
      {
        while ( v2 <= v6 )
        {
          ++v6;
          strcpy(s, " ");
          sub_47AB4(2, s, 0);
          if ( v6 == 16 )
            goto LABEL_12;
        }
        v7 = v3[v6++];
        if ( (unsigned int)(v7 - 32) > 0x5E )
          v7 = 46;
        snprintf(s, 0x800u, "%c", v7);
        sub_47AB4(2, s, 0);
      }
      while ( v6 != 16 );
LABEL_12:
      strcpy(s, "\n");
      v3 += 16;
      sub_47AB4(2, s, 0);
      if ( v2 <= 16 )
        break;
      v2 -= 16;
    }
  }
}
