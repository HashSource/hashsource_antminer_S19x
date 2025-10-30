void sub_2306C()
{
  int i; // r4
  int v1; // r0
  int v2; // r0
  int v3; // r3
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  for ( i = 0; i != 16; ++i )
  {
    while ( 1 )
    {
      if ( *(_DWORD *)(dword_A0D68 + 4 * i + 4) == 1 && (unsigned int)dword_9E31C > 3 )
      {
        v1 = sub_189C8(i);
        snprintf(s, 0x800u, "Chain [%d] PCB Version: 0x%04x\n", i, v1);
        sub_47AB4(3, s, 0);
        if ( (unsigned int)dword_9E31C > 3 )
          break;
      }
      if ( ++i == 16 )
        return;
    }
    v2 = sub_18A54(i);
    v3 = i;
    snprintf(s, 0x800u, "Chain [%d] BOM Version: 0x%04x\n", v3, v2);
    sub_47AB4(3, s, 0);
  }
}
