void *__fastcall sub_17CE0(unsigned __int16 *a1)
{
  void *result; // r0
  int v3; // r1
  int v4; // r2
  int v5; // r3
  _DWORD s[8]; // [sp+8h] [bp-824h] BYREF
  char v7[2052]; // [sp+28h] [bp-804h] BYREF

  result = memset(s, 0, sizeof(s));
  if ( (unsigned int)dword_9E31C <= 3 )
    return result;
  snprintf(v7, 0x800u, "%-30s : 0x%04x\n", "fixture_header", *a1);
  result = (void *)sub_47AB4(3, v7, 0);
  if ( (unsigned int)dword_9E31C <= 3 )
    return result;
  snprintf(v7, 0x800u, "%-30s : 0x%04x\n", "fixture_version", a1[1]);
  sub_47AB4(3, v7, 0);
  v3 = *((_DWORD *)a1 + 2);
  v4 = *((_DWORD *)a1 + 3);
  v5 = *((_DWORD *)a1 + 4);
  s[0] = *((_DWORD *)a1 + 1);
  s[1] = v3;
  s[2] = v4;
  s[3] = v5;
  result = (void *)*((_DWORD *)a1 + 5);
  s[4] = result;
  if ( (unsigned int)dword_9E31C <= 3 )
    return result;
  snprintf(v7, 0x800u, "%-30s : %s\n", "hash_board_sn", (const char *)s);
  result = (void *)sub_47AB4(3, v7, 0);
  if ( (unsigned int)dword_9E31C <= 3 )
    goto LABEL_10;
  snprintf(v7, 0x800u, "%-30s : 0x%04x\n", "pcb_version", a1[12]);
  result = (void *)sub_47AB4(3, v7, 0);
  if ( (unsigned int)dword_9E31C <= 3 )
    return result;
  snprintf(v7, 0x800u, "%-30s : 0x%04x\n", "bom_version", a1[13]);
  result = (void *)sub_47AB4(3, v7, 0);
  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(v7, 0x800u, "%-30s : 0x%02x\n", "product_id", *((unsigned __int8 *)a1 + 28));
    result = (void *)sub_47AB4(3, v7, 0);
    if ( (unsigned int)dword_9E31C <= 3 )
      return result;
    snprintf(v7, 0x800u, "%-30s : 0x%02x\n", "board_bin", *((unsigned __int8 *)a1 + 29));
    result = (void *)sub_47AB4(3, v7, 0);
LABEL_10:
    if ( (unsigned int)dword_9E31C <= 3 )
      return result;
    snprintf(v7, 0x800u, "%-30s : A%dV%d\n", "chip_ft", *((unsigned __int8 *)a1 + 31), *((unsigned __int8 *)a1 + 32));
    result = (void *)sub_47AB4(3, v7, 0);
    if ( (unsigned int)dword_9E31C <= 3 )
      return result;
    snprintf(v7, 0x800u, "%-30s : BIN%d\n", "chip_bin", *((unsigned __int8 *)a1 + 30));
    result = (void *)sub_47AB4(3, v7, 0);
  }
  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(v7, 0x800u, "%-30s : %c%c\n", "chip_version", *((unsigned __int8 *)a1 + 33), *((unsigned __int8 *)a1 + 34));
    result = (void *)sub_47AB4(3, v7, 0);
    if ( (unsigned int)dword_9E31C > 3 )
    {
      strcpy(v7, "\n");
      return (void *)sub_47AB4(3, v7, 0);
    }
  }
  return result;
}
