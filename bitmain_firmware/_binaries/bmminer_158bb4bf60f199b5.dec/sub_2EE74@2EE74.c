_BYTE *__fastcall sub_2EE74(_BYTE *result)
{
  _BYTE *v1; // r4
  int v2; // r8
  int v3; // r5
  int *v4; // r7
  int v5; // r5
  int v6; // r7
  int v7; // r4
  unsigned int v8; // r8
  int v9; // r2
  unsigned int v10; // r0
  unsigned int v11; // r4
  _BOOL4 v12; // r3
  _BOOL4 v13; // r3
  int v14; // r3
  unsigned int v15; // r3
  bool v16; // cc
  char s[2080]; // [sp+8h] [bp-820h] BYREF

  if ( byte_A0D91 )
  {
    v1 = result;
    if ( (*result & 0x80) != 0 )
    {
      if ( (*result & 0x40) != 0 )
      {
        if ( (unsigned int)dword_9E31C > 3 )
        {
          strcpy(s, "!!! nonce crc error\n");
          result = (_BYTE *)sub_47AB4(3, s, 0);
        }
        ++dword_242D70;
      }
      else
      {
        pthread_mutex_lock(&stru_138564);
        if ( (unsigned int)dword_23A2B8 <= 0x1FE )
        {
          v2 = *((_WORD *)v1 + 1) & 0x7FFF;
          v3 = 15 * dword_23A2B0[0];
          v4 = &dword_23A2B0[15 * dword_23A2B0[0]];
          v4[4] = v2;
          v4[8] = *((_DWORD *)v1 + 1);
          v4[9] = *v1 & 0xF;
          v4[3] = sub_6F69C(v2);
          v4[5] = sub_6F6B0(v2);
          *((_QWORD *)v4 + 3) = sub_6F684(v2);
          sub_6F6C8(v2, &dword_23A2B0[v3 + 10], 32);
          v5 = v4[8];
          v6 = v4[9];
          v7 = *(unsigned __int8 *)(dword_A0D68 + 12954);
          if ( !*(_BYTE *)(dword_A0D68 + 12954) )
            v7 = 3;
          v8 = sub_75CEC(v5);
          v10 = sub_75CF4(v5, v7, v9);
          v11 = v10;
          v12 = v10 > 0x4D;
          if ( v6 > 15 )
            v12 = 1;
          if ( v12 )
            goto LABEL_33;
          v13 = v5 == 0;
          if ( v8 > 0x5F )
            v13 = 1;
          if ( v13 )
          {
LABEL_33:
            if ( (unsigned int)dword_9E31C > 4 )
            {
              snprintf(s, 0x800u, "buf [%x] is error!\n", v5);
              sub_47AB4(4, s, 0);
              if ( (unsigned int)dword_9E31C > 4 )
              {
                snprintf(s, 0x800u, "chain = %d, chip = %d, core = %d\n", v6, v11, v8);
                sub_47AB4(4, s, 0);
              }
            }
          }
          else
          {
            v14 = 7488 * v6 + 96 * v10 + v8 + 1264;
            ++dword_13864C[v14];
          }
          v15 = dword_23A2B0[0] + 1;
          v16 = (unsigned int)(dword_23A2B0[0] + 1) > 0x1FE;
          dword_23A2B0[0] = v15;
          if ( v15 > 0x1FE )
            v15 = 0;
          ++dword_23A2B8;
          if ( v16 )
            dword_23A2B0[0] = v15;
        }
        else if ( (unsigned int)dword_9E31C > 3 )
        {
          strcpy(s, "nonce_read_out buffer is full!\n");
          sub_47AB4(3, s, 0);
        }
        return (_BYTE *)pthread_mutex_unlock(&stru_138564);
      }
    }
    else if ( (unsigned int)dword_9E31C > 3 )
    {
      strcpy(s, "!!! nonce invalid\n");
      return (_BYTE *)sub_47AB4(3, s, 0);
    }
  }
  return result;
}
