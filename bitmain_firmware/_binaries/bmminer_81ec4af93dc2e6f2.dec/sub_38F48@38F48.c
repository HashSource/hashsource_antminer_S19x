int __fastcall sub_38F48(int result)
{
  int v1; // r4
  int v2; // r11
  int v3; // r7
  int v4; // r8
  int *v5; // r10
  int v6; // r0
  void *v7; // r3
  int v8; // r3
  int v9; // r4
  int *v10; // r5
  __int64 v11; // r4
  unsigned int v12; // r7
  int v13; // r0
  unsigned int v14; // r8
  unsigned int v15; // r3
  bool v16; // cc
  unsigned int v17; // r0
  bool v18; // cf
  unsigned int v19; // r2
  unsigned int v20; // r3
  int v21; // r0
  int v22; // r12
  int v23; // r3
  int v24; // r3
  char s[2088]; // [sp+8h] [bp-828h] BYREF

  if ( byte_4B6CDD )
  {
    v1 = result;
    result = sub_5B1B4(*(_WORD *)(result + 2) & 0x7FFF);
    if ( result )
    {
      if ( (*(_BYTE *)v1 & 0x80) != 0 )
      {
        if ( (*(_BYTE *)v1 & 0x40) != 0 )
        {
          if ( (unsigned int)off_AFC24 > 3 )
          {
            strcpy(s, "!!! nonce crc error\n");
            result = sub_3AF5C(3, s, 0, *(_DWORD *)"c error\n");
          }
          ++dword_5BF200;
        }
        else
        {
          pthread_mutex_lock(&stru_530E9C);
          if ( (unsigned int)dword_5BF210 <= 0x1FE )
          {
            v2 = dword_5BF208[0];
            v3 = 16 * dword_5BF208[0];
            v4 = *(_WORD *)(v1 + 2) & 0x7FFF;
            v5 = &dword_5BF208[15 * dword_5BF208[0]];
            v5[4] = v4;
            v5[8] = *(_DWORD *)(v1 + 4);
            v5[9] = *(_BYTE *)v1 & 0xF;
            v6 = sub_5B1B4(v4);
            v7 = off_AFC24;
            v5[3] = v6;
            if ( (unsigned int)v7 > 4 )
            {
              snprintf(s, 0x800u, "blk ver = 0x%x\n", *(unsigned __int16 *)(v1 + 9));
              sub_3AF5C(4, s, 0, v8);
            }
            v9 = v3 - v2;
            v10 = &dword_5BF208[v9];
            v10[5] = sub_5B1F8(v4);
            *((_QWORD *)v10 + 3) = sub_5B11C(v4);
            sub_5B23C(v4, &dword_5BF208[v9 + 10], 32);
            v11 = *(_QWORD *)&dword_5BF208[v9 + 8];
            v12 = sub_772B0(v11);
            v13 = sub_265B0();
            v14 = sub_772B8(v11, v13);
            if ( SHIDWORD(v11) > 3 || v14 >= sub_26540() )
              goto LABEL_35;
            v17 = sub_26570();
            v18 = 1;
            if ( (_DWORD)v11 )
              v18 = v12 >= v17;
            if ( v18 )
            {
LABEL_35:
              if ( (unsigned int)off_AFC24 > 4 )
              {
                snprintf(s, 0x800u, "buf [%x] is error!\n", (_DWORD)v11);
                sub_3AF5C(4, s, 0, v23);
                if ( (unsigned int)off_AFC24 > 4 )
                {
                  snprintf(s, 0x800u, "chain = %d, chip = %d, core = %d\n", HIDWORD(v11), v14, v12);
                  sub_3AF5C(4, s, 0, v24);
                }
              }
            }
            else
            {
              v19 = v14 + (HIDWORD(v11) << 8);
              v20 = v12 + (v19 << 10);
              v19 += 4;
              v20 += 1028;
              v21 = dword_B42F8[v20];
              v22 = dword_B42F8[v19] + 1;
              ++dword_B42F8[HIDWORD(v11)];
              dword_B42F8[v19] = v22;
              dword_B42F8[v20] = v21 + 1;
            }
            v15 = dword_5BF208[0] + 1;
            v16 = (unsigned int)(dword_5BF208[0] + 1) > 0x1FE;
            dword_5BF208[0] = v15;
            if ( v15 > 0x1FE )
              v15 = 0;
            if ( v16 )
              dword_5BF208[0] = v15;
            ++dword_5BF210;
            dword_B42F0 = 0;
          }
          else if ( !dword_B42F0 )
          {
            if ( (unsigned int)off_AFC24 > 3 )
            {
              strcpy(s, "nonce_read_out buffer is full!\n");
              sub_3AF5C(3, s, dword_B42F0, *(_DWORD *)"l!\n");
            }
            dword_B42F0 = 1;
          }
          return pthread_mutex_unlock(&stru_530E9C);
        }
      }
      else if ( (unsigned int)off_AFC24 > 3 )
      {
        strcpy(s, "!!! nonce invalid\n");
        return sub_3AF5C(3, s, 0, *(unsigned __int16 *)"");
      }
    }
  }
  return result;
}
