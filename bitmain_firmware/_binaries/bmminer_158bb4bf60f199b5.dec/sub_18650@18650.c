int sub_18650()
{
  int v0; // r4
  int v1; // r9
  int v2; // r10
  unsigned __int16 s[128]; // [sp+8h] [bp-904h] BYREF
  char v5[2052]; // [sp+108h] [bp-804h] BYREF

  if ( dword_A05EC && *(_BYTE *)(dword_A05EC + 96) )
  {
    v0 = 0;
    v1 = 0;
    while ( 1 )
    {
      if ( *(_DWORD *)(dword_A0D68 + 4 * v0 + 4) != 1 )
        goto LABEL_4;
      v2 = *(_DWORD *)(dword_A05EC + 4 * v0);
      if ( (unsigned int)dword_9E31C > 3 )
      {
        snprintf(v5, 0x800u, "Flush miner configuration for chain %d.\n", v0);
        sub_47AB4(3, v5, 0);
      }
      *(_BYTE *)(v2 + 40) = -106;
      *(_BYTE *)(v2 + 41) = 19;
      *(_WORD *)(v2 + 254) = sub_514F8(v2 + 40, 214);
      if ( sub_6F254(v0, 40, v2 + 40, 216) )
      {
        if ( (unsigned int)dword_9E31C > 3 )
        {
          v1 = -1;
          snprintf(v5, 0x800u, "Flush miner configuration for chain %d failed.\n", v0);
          sub_47AB4(3, v5, 0);
          goto LABEL_4;
        }
LABEL_10:
        ++v0;
        v1 = -1;
        if ( v0 == 16 )
          return v1;
      }
      else
      {
        memset(s, 255, sizeof(s));
        if ( sub_6F3AC(v0, 40, &s[20], 216) )
        {
          if ( (unsigned int)dword_9E31C <= 3 )
            goto LABEL_10;
          v1 = -1;
          snprintf(v5, 0x800u, "Read miner configuration for chain %d failed.\n", v0);
          sub_47AB4(3, v5, 0);
        }
        else if ( !memcmp((const void *)(v2 + 40), &s[20], 0xD8u) )
        {
          sub_1823C(v0, s);
        }
        else
        {
          if ( (unsigned int)dword_9E31C <= 3 )
            goto LABEL_10;
          v1 = -1;
          snprintf(v5, 0x800u, "Flush miner configration for chain %d failed.\n", v0);
          sub_47AB4(3, v5, 0);
        }
LABEL_4:
        if ( ++v0 == 16 )
          return v1;
      }
    }
  }
  if ( (unsigned int)dword_9E31C > 3 )
  {
    strcpy(v5, "No fixture configuration for flush.\n");
    sub_47AB4(3, v5, 0);
    return -1;
  }
  else
  {
    return -1;
  }
}
