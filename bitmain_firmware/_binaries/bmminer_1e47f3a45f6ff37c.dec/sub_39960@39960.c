_BYTE *__fastcall sub_39960(_BYTE *result)
{
  _BYTE *v1; // r5
  int v2; // r4
  int v3; // r6
  int v4; // r5
  int v5; // r0
  int v6; // r3
  int v7; // r2
  unsigned int v8; // r0
  int v9; // lr
  int *v10; // r1
  int v11; // r4
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  v1 = result;
  v2 = *result & 0x40;
  if ( (*result & 0x40) != 0 )
  {
    if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy(s, "!!! reg crc error\n");
      result = (_BYTE *)sub_3B6AC(3, s, 0, *(_DWORD *)"error\n");
    }
    ++dword_5C40B4;
  }
  else if ( (result[3] & 0x60) != 0 )
  {
    if ( (unsigned int)dword_B308C > 3 )
    {
      v3 = *(_DWORD *)result;
      v4 = (unsigned __int8)result[2];
      sub_26AB4();
      v5 = sub_8F800(v4);
      snprintf(s, 0x800u, "!!! REG_TYPE = 1. %u asic %d\n", v3, v5);
      return (_BYTE *)sub_3B6AC(3, s, v2, v6);
    }
  }
  else
  {
    pthread_mutex_lock(&stru_B7038);
    v7 = dword_5C30B8;
    if ( (unsigned int)dword_5C30B8 > 0x1FE )
    {
      if ( (unsigned int)dword_B308C > 3 )
      {
        strcpy(s, "reg_value_buf buffer is full!\n");
        sub_3B6AC(3, s, 0, *(_DWORD *)"!\n");
      }
    }
    else
    {
      v8 = dword_5C30B0[0] + 1;
      v9 = (unsigned __int8)byte_B7068;
      v10 = &dword_5C30B0[2 * dword_5C30B0[0] + 2];
      v10[1] = *((_DWORD *)v1 + 1);
      *((_BYTE *)v10 + 8) = v1[3] & 0x1F;
      *((_BYTE *)v10 + 9) = v1[2];
      v11 = (unsigned __int8)v1[1];
      if ( v11 != 64 )
        v9 |= 1u;
      *((_BYTE *)v10 + 10) = v11;
      *((_BYTE *)v10 + 11) = *v1 & 0xF;
      if ( v9 )
      {
        dword_5C30B0[0] = v8;
        dword_5C30B8 = v7 + 1;
        if ( v8 > 0x1FE )
          dword_5C30B0[0] = 0;
      }
    }
    return (_BYTE *)pthread_mutex_unlock(&stru_B7038);
  }
  return result;
}
