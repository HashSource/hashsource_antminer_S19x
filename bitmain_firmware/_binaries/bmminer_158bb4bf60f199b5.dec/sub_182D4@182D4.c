int sub_182D4()
{
  int i; // r4
  int v1; // r0
  int v2; // r4
  int v3; // r8
  int result; // r0
  int v5; // r7
  unsigned __int16 *v6; // r6
  const char *v7; // r2
  int v8; // r3
  int v9; // r3
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  for ( i = 0; i != 16; ++i )
  {
    while ( *(_DWORD *)(dword_A0D68 + 4 * i + 4) != 1 )
    {
      if ( ++i == 16 )
        goto LABEL_5;
    }
    v1 = i;
    sub_6F13C(v1);
  }
LABEL_5:
  v2 = 0;
  v3 = 0;
  result = sub_4A804(10);
  do
  {
    while ( 1 )
    {
      if ( *(_DWORD *)(dword_A0D68 + 4 * v2 + 4) != 1 )
        goto LABEL_6;
      if ( byte_244080 || byte_1AECC4 || dword_9E320 > 4 )
      {
        snprintf(s, 0x800u, "load eeprom for chain %d", v2);
        sub_47AB4(5, s, 0);
      }
      v5 = dword_A05EC;
      v6 = *(unsigned __int16 **)(dword_A05EC + 4 * v2);
      result = sub_6F3AC(v2, 0, v6, 256);
      if ( result )
      {
        v3 |= result;
        if ( (unsigned int)dword_9E31C > 3 )
        {
          v7 = "Read configuration fail for chain %d.\n";
          v8 = v2;
          goto LABEL_15;
        }
        goto LABEL_6;
      }
      sub_1823C(v2, v6);
      if ( v6[19] == sub_514F8(v6, 38) )
      {
        v9 = *v6;
        if ( v9 == 5014 )
        {
          *(_BYTE *)(v5 + v2 + 64) = 1;
          goto LABEL_22;
        }
        if ( (unsigned int)dword_9E31C <= 3 )
          goto LABEL_21;
        snprintf(s, 0x800u, "Fixture header check fail, fixture_header = 0x%x\n", v9);
        sub_47AB4(3, s, 0);
      }
      else
      {
        if ( (unsigned int)dword_9E31C <= 3 )
          goto LABEL_21;
        strcpy(s, "Fixture CRC check fail.\n");
        sub_47AB4(3, s, 0);
      }
      if ( (unsigned int)dword_9E31C <= 3 )
      {
LABEL_21:
        v3 = -1;
        goto LABEL_22;
      }
      snprintf(s, 0x800u, "Fixture data load fail for chain %d.\n", v2);
      v3 = -1;
      sub_47AB4(3, s, 0);
LABEL_22:
      result = sub_514F8(v6 + 20, 214);
      if ( v6[127] != result )
      {
        if ( (unsigned int)dword_9E31C > 3 )
        {
          strcpy(s, "Miner CRC check fail.\n");
          result = sub_47AB4(3, s, 0);
        }
        goto LABEL_6;
      }
      v8 = v6[20];
      if ( v8 == 5014 )
      {
        *(_BYTE *)(v5 + v2 + 80) = 1;
        goto LABEL_6;
      }
      if ( (unsigned int)dword_9E31C > 3 )
        break;
LABEL_6:
      if ( ++v2 == 16 )
        goto LABEL_16;
    }
    v7 = "Miner header check fail, miner_header = 0x%x\n";
LABEL_15:
    ++v2;
    snprintf(s, 0x800u, v7, v8);
    result = sub_47AB4(3, s, 0);
  }
  while ( v2 != 16 );
LABEL_16:
  if ( !v3 )
    *(_BYTE *)(dword_A05EC + 96) = 1;
  return result;
}
