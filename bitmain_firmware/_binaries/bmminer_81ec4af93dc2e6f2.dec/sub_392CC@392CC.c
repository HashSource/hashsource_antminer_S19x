int __fastcall sub_392CC(int result)
{
  int v1; // r5
  int v2; // r6
  int v3; // r5
  int v4; // r0
  int v5; // r3
  int v6; // r2
  int v7; // r4
  unsigned int v8; // r0
  int *v9; // r1
  int v10; // lr
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  if ( (*(_BYTE *)result & 0x40) != 0 )
  {
    if ( (unsigned int)off_AFC24 > 3 )
    {
      strcpy(s, "!!! reg crc error\n");
      result = sub_3AF5C(3, s, 0, *(unsigned __int16 *)"");
    }
    ++dword_5BF1FC;
  }
  else
  {
    v1 = result;
    if ( (*(_BYTE *)(result + 3) & 0x60) != 0 )
    {
      if ( (unsigned int)off_AFC24 > 3 )
      {
        v2 = *(unsigned __int8 *)(result + 2);
        v3 = *(_DWORD *)result;
        sub_265B0();
        v4 = sub_8C490(v2);
        snprintf(s, 0x800u, "!!! REG_TYPE = 1. %u asic %d\n", v3, v4);
        return sub_3AF5C(3, s, 0, v5);
      }
    }
    else
    {
      pthread_mutex_lock(&stru_B42BC);
      v6 = dword_5BE200;
      if ( (unsigned int)dword_5BE200 > 0x1FE )
      {
        if ( (unsigned int)off_AFC24 > 3 )
        {
          strcpy(s, "reg_value_buf buffer is full!\n");
          sub_3AF5C(3, s, 0, *(_DWORD *)"!\n");
        }
      }
      else
      {
        v7 = (unsigned __int8)byte_B42EC;
        v8 = dword_5BE1F8[0] + 1;
        v9 = &dword_5BE1F8[2 * dword_5BE1F8[0] + 2];
        v9[1] = *(_DWORD *)(v1 + 4);
        *((_BYTE *)v9 + 8) = *(_BYTE *)(v1 + 3) & 0x1F;
        *((_BYTE *)v9 + 9) = *(_BYTE *)(v1 + 2);
        v10 = *(unsigned __int8 *)(v1 + 1);
        if ( v10 != 64 )
          v7 |= 1u;
        *((_BYTE *)v9 + 10) = v10;
        *((_BYTE *)v9 + 11) = *(_BYTE *)v1 & 0xF;
        if ( v7 )
        {
          dword_5BE1F8[0] = v8;
          dword_5BE200 = v6 + 1;
          if ( v8 > 0x1FE )
            dword_5BE1F8[0] = 0;
        }
      }
      return pthread_mutex_unlock(&stru_B42BC);
    }
  }
  return result;
}
