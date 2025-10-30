int __fastcall sub_2F194(int result)
{
  int v1; // r5
  int v2; // r2
  int v3; // r4
  unsigned int v4; // r0
  int *v5; // r1
  int v6; // lr
  char v7[2048]; // [sp+0h] [bp-800h] BYREF

  if ( (*(_BYTE *)result & 0x40) != 0 )
  {
    if ( (unsigned int)dword_9E31C > 3 )
    {
      strcpy(v7, "!!! reg crc error\n");
      result = sub_47AB4(3, v7, 0);
    }
    ++dword_242D6C;
  }
  else
  {
    v1 = result;
    if ( (*(_BYTE *)(result + 3) & 0x60) != 0 )
    {
      if ( (unsigned int)dword_9E31C > 3 )
      {
        snprintf(v7, 0x800u, "!!! REG_TYPE = 1. %u\n", *(_DWORD *)result);
        return sub_47AB4(3, v7, 0);
      }
    }
    else
    {
      pthread_mutex_lock(&stru_138630);
      v2 = dword_241D70;
      if ( (unsigned int)dword_241D70 > 0x1FE )
      {
        if ( (unsigned int)dword_9E31C > 3 )
        {
          strcpy(v7, "reg_value_buf buffer is full!\n");
          sub_47AB4(3, v7, 0);
        }
      }
      else
      {
        v3 = (unsigned __int8)byte_138648;
        v4 = dword_241D68[0] + 1;
        v5 = &dword_241D68[2 * dword_241D68[0] + 2];
        v5[1] = *(_DWORD *)(v1 + 4);
        *((_BYTE *)v5 + 8) = *(_BYTE *)(v1 + 3) & 0x1F;
        *((_BYTE *)v5 + 9) = *(_BYTE *)(v1 + 2);
        v6 = *(unsigned __int8 *)(v1 + 1);
        if ( v6 != 64 )
          v3 |= 1u;
        *((_BYTE *)v5 + 10) = v6;
        *((_BYTE *)v5 + 11) = *(_BYTE *)v1 & 0xF;
        if ( v3 )
        {
          dword_241D68[0] = v4;
          dword_241D70 = v2 + 1;
          if ( v4 > 0x1FE )
            dword_241D68[0] = 0;
        }
      }
      return pthread_mutex_unlock(&stru_138630);
    }
  }
  return result;
}
