_BYTE *__fastcall sub_39590(_BYTE *result, int a2, int a3, int a4, int a5, int a6, _DWORD *a7)
{
  char v7; // r6
  _BYTE *v9; // r4
  int v10; // r1
  int v11; // r9
  int *v12; // r3
  bool v13; // cc
  char v14; // r2
  _DWORD *v15; // lr
  unsigned int v16; // r5
  int v17; // r1
  int v18; // r2
  int v19; // r3
  int v20; // r1
  int v21; // r2
  int v22; // r3
  int v23; // r4
  int v24; // r6
  unsigned int v25; // r8
  int v26; // r0
  unsigned int v27; // r7
  int v28; // r3
  unsigned int v29; // r0
  bool v30; // cf
  unsigned int v31; // r7
  unsigned int *v32; // r1
  unsigned int v33; // r0
  char *v34; // r3
  int v35; // r2
  int v36; // r3
  int v37; // r3
  int v39; // [sp+Ch] [bp-808h]
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  if ( (unsigned __int8)byte_534B69 > (unsigned int)(a2 == 0) )
  {
    v7 = *result;
    v9 = result;
    if ( (*result & 0x80) != 0 )
    {
      if ( (v7 & 0x40) != 0 )
      {
        if ( (unsigned int)dword_B308C > 3 )
        {
          strcpy(s, "!!! nonce crc error\n");
          result = (_BYTE *)sub_3B6AC(3, s, 0, *(_DWORD *)"c error\n");
        }
        ++dword_5C40B8;
      }
      else
      {
        pthread_mutex_lock(&stru_535D28);
        v10 = a2;
        if ( (unsigned int)dword_5C40C8 > 0x1FE )
        {
          if ( !dword_4B9080 )
          {
            if ( (unsigned int)dword_B308C > 3 )
            {
              strcpy(s, "nonce_read_out buffer is full!\n");
              sub_3B6AC(3, s, dword_4B9080, *(_DWORD *)"l!\n");
            }
            dword_4B9080 = 1;
          }
        }
        else
        {
          v11 = dword_5C40C0[0] << 6;
          v39 = 4 * dword_5C40C0[0];
          v12 = &dword_5C40C0[15 * dword_5C40C0[0]];
          v13 = (unsigned int)dword_B308C > 4;
          v12[4] = *((_WORD *)v9 + 1) & 0x7FFF;
          v12[8] = *((_DWORD *)v9 + 1);
          v14 = *v9;
          v12[3] = v10;
          v12[9] = v14 & 0xF;
          if ( v13 )
          {
            snprintf(s, 0x800u, "blk ver = 0x%x\n", *(unsigned __int16 *)(v9 + 9));
            sub_3B6AC(4, s, 0, v28);
          }
          v15 = (int *)((char *)dword_5C40C0 + v11 - v39);
          v16 = bswap32(*(unsigned __int16 *)(v9 + 9) << 13) | a3;
          v15[6] = a5;
          v15[7] = a6;
          v15[5] = v16;
          v17 = a7[1];
          v18 = a7[2];
          v19 = a7[3];
          v15[10] = *a7;
          v15[11] = v17;
          v15[12] = v18;
          v15[13] = v19;
          v20 = a7[5];
          v21 = a7[6];
          v22 = a7[7];
          v15[14] = a7[4];
          v15[15] = v20;
          v15[16] = v21;
          v15[17] = v22;
          v23 = v15[8];
          v24 = v15[9];
          v25 = sub_7A6FC(v23);
          v26 = sub_26AB4();
          v27 = sub_7A704(v23, v26);
          if ( v24 > 3 || v27 >= sub_26A44() )
            goto LABEL_32;
          v29 = sub_26A74();
          v30 = 1;
          if ( v23 )
            v30 = v25 >= v29;
          if ( v30 )
          {
LABEL_32:
            if ( (unsigned int)dword_B308C > 4 )
            {
              snprintf(s, 0x800u, "buf [%x] is error!\n", v23);
              sub_3B6AC(4, s, 0, v36);
              if ( (unsigned int)dword_B308C > 4 )
              {
                snprintf(s, 0x800u, "chain = %d, chip = %d, core = %d\n", v24, v27, v25);
                sub_3B6AC(4, s, 0, v37);
              }
            }
          }
          else
          {
            v31 = v27 + (v24 << 8);
            v32 = &stru_B7038.__nusers + v31;
            v33 = v32[13];
            v34 = (char *)&stru_B7038 + 4096 * v31 + 4 * v25 + 4112;
            ++*((_DWORD *)&stru_B7038 + v24 + 13);
            v35 = *((_DWORD *)v34 + 13);
            v32[13] = v33 + 1;
            *((_DWORD *)v34 + 13) = v35 + 1;
          }
          v13 = (unsigned int)++dword_5C40C0[0] > 0x1FE;
          ++dword_5C40C8;
          if ( v13 )
            dword_5C40C0[0] = 0;
          dword_4B9080 = 0;
        }
        return (_BYTE *)pthread_mutex_unlock(&stru_535D28);
      }
    }
    else if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy(s, "!!! nonce invalid\n");
      return (_BYTE *)sub_3B6AC(3, s, v7 & 0x80, *(_DWORD *)"valid\n");
    }
  }
  return result;
}
