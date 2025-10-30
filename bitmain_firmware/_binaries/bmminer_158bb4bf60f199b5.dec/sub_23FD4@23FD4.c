int __fastcall sub_23FD4(unsigned __int8 *a1)
{
  int *v1; // r9
  int v4; // r7
  size_t v5; // r7
  _DWORD *v6; // r0
  _DWORD *v7; // r6
  int v8; // r2
  char v9; // r2
  int v10; // r3
  int v11; // r0
  int v12; // r3
  unsigned int v13; // r3
  int v14; // r1
  int v15; // r2
  int v16; // lr
  int v17; // r0
  int v18; // r0
  __int64 v19; // r2
  int v20; // r0
  int v21; // r3
  bool v22; // zf
  int v23; // r0
  int v24; // r0
  int v25; // r0
  _DWORD v26[14]; // [sp+8h] [bp-848h] BYREF
  __int64 v27; // [sp+40h] [bp-810h]
  unsigned int v28; // [sp+48h] [bp-808h]
  int v29; // [sp+4Ch] [bp-804h]
  char s[2048]; // [sp+50h] [bp-800h] BYREF

  if ( *a1 == 82 )
  {
    v4 = *((_DWORD *)a1 + 1);
    if ( byte_1AECC5 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
    {
      snprintf(s, 0x800u, "%s: len = 0x%x\n", "dhash_chip_send_job", *((_DWORD *)a1 + 1));
      sub_47AB4(7, s, 0);
    }
    v5 = v4 + 8;
    v6 = calloc(v5, 1u);
    v7 = v6;
    if ( v6 )
    {
      memcpy(v6, a1, v5);
      if ( byte_A0D90 )
      {
        v21 = *((unsigned __int8 *)v7 + 80);
        v22 = v21 == 0;
        if ( *((_BYTE *)v7 + 80) )
        {
          v21 = v7[21];
        }
        else
        {
          v1 = &dword_9EE34;
          v8 = 1;
        }
        if ( v22 )
        {
          v21 = v8;
          *v1 = v8;
        }
        else
        {
          v1 = &dword_9EE34;
          dword_9EE34 = v21;
        }
        if ( dword_9C2A0 != v21 )
        {
          if ( (unsigned int)dword_9E31C > 3 )
          {
            snprintf(s, 0x800u, "Version num %d\n", v21);
            sub_47AB4(3, s, 0);
            v21 = *v1;
          }
          dword_9C2A0 = v21;
        }
      }
      else
      {
        v1 = &dword_9EE34;
      }
      v9 = *((_BYTE *)v7 + 9);
      if ( (v9 & 2) != 0 )
      {
        sub_6FE4C(*((unsigned __int8 *)v7 + 10));
        v10 = dword_A0D68;
        *(_BYTE *)(dword_A0D68 + 12976) = *((_BYTE *)v7 + 10);
        v9 = *((_BYTE *)v7 + 9);
      }
      else
      {
        v10 = dword_A0D68;
      }
      v11 = *v1;
      v12 = *(_DWORD *)(v10 + 72);
      v29 = v9 & 1;
      v26[1] = v11;
      v13 = v12 * v11;
      v14 = *((unsigned __int16 *)v7 + 30);
      v26[9] = v7[4];
      v15 = *((unsigned __int16 *)v7 + 32);
      v16 = *((unsigned __int16 *)v7 + 33);
      v26[8] = v7[3];
      v17 = v7[14];
      v28 = v13 >> 2;
      v26[13] = v15;
      v26[7] = v17;
      v18 = *((unsigned __int16 *)v7 + 31);
      v26[10] = v7 + 5;
      v19 = *((_QWORD *)v7 + 9);
      v26[12] = v18;
      v20 = v7[13];
      v26[3] = v14;
      v26[2] = a1 + 88;
      v26[4] = &a1[v14 + 88];
      v26[5] = v16;
      v27 = v19;
      v26[11] = 32;
      v26[6] = v20;
      v26[0] = 0;
      if ( !byte_A0D91 )
      {
        v23 = sub_702AC();
        v24 = sub_702CC(v23 | 0x10000);
        v25 = sub_6F79C(v24);
        sub_6F7C4(v25 | 0x80);
        byte_A0D91 = 1;
      }
      if ( (unsigned int)dword_9E31C > 4 )
      {
        snprintf(s, 0x800u, "start to send job, mid_auto_gen = %d", v26[0]);
        sub_47AB4(4, s, 0);
      }
      sub_70330(v26);
      free(v7);
      if ( byte_1AECC5 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
      {
        snprintf(s, 0x800u, "--- %s end\n", "dhash_chip_send_job");
        sub_47AB4(7, s, 0);
      }
      sub_4A60C(&dword_A0D7C);
      sub_4A804(1);
      return 0;
    }
    else if ( byte_1AECC5 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
    {
      snprintf(s, 0x800u, "%s: malloc buffer failed.\n", "dhash_chip_send_job");
      sub_47AB4(7, s, 0);
      return -2;
    }
    else
    {
      return -2;
    }
  }
  else if ( byte_1AECC5 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
  {
    snprintf(s, 0x800u, "%s: SEND_JOB_TYPE is wrong : 0x%x\n", "dhash_chip_send_job", *a1);
    sub_47AB4(7, s, 0);
    return -1;
  }
  else
  {
    return -1;
  }
}
