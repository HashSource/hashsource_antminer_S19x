int sub_22B10()
{
  unsigned int v0; // r5
  int v1; // r2
  int v2; // r7
  int v3; // r9
  int v4; // r4
  unsigned int v5; // r6
  unsigned int v7; // [sp+14h] [bp+0h] BYREF
  char s[2052]; // [sp+18h] [bp+4h] BYREF

  v0 = 0;
  v1 = dword_A0D68;
  v2 = 0;
  v3 = 0;
  v4 = 0;
  v5 = 0xFFFFFF;
  while ( 1 )
  {
    while ( *(_DWORD *)(v1 + 4 * v4 + 4) != 1 )
    {
      if ( ++v4 == 16 )
        goto LABEL_12;
    }
    if ( sub_18E08(v4, (unsigned __int8)dword_9EE38, &v7) )
      break;
    ++v2;
    v3 += v7;
    if ( v0 < v7 )
      v0 = v7;
    if ( v5 >= v7 )
      v5 = v7;
    if ( (unsigned int)dword_9E31C > 3 )
    {
      snprintf(s, 0x800u, "voltage[%d] = %d\n", v4, v7);
      sub_47AB4(3, s, 0);
    }
    ++v4;
    v1 = dword_A0D68;
    if ( v4 == 16 )
      goto LABEL_12;
  }
  v1 = dword_A0D68;
LABEL_12:
  if ( v2 == *(unsigned __int8 *)(v1 + 12935) )
  {
    if ( v3 == v2 * sub_772E8(v3) )
    {
      sub_1A0F0(v7);
      return 0;
    }
    else if ( (int)(v0 - v5) > 20 )
    {
      if ( (unsigned int)dword_9E31C <= 3 )
        return -1;
      snprintf(s, 0x800u, "Different voltage, min = %d, max = %d, diff is too large.\n", v5, v0);
      sub_47AB4(3, s, 0);
      return -1;
    }
    else
    {
      if ( (unsigned int)dword_9E31C > 3 )
      {
        snprintf(s, 0x800u, "Different voltage, min = %d, max = %d, use max one.\n", v5, v0);
        sub_47AB4(3, s, 0);
      }
      sub_1A0F0(v0);
      return 0;
    }
  }
  else
  {
    if ( (unsigned int)dword_9E31C <= 3 )
      return -1;
    strcpy(s, "Voltage read fail.\n");
    sub_47AB4(3, s, 0);
    return -1;
  }
}
