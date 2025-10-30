int __fastcall sub_42000(unsigned __int8 *a1)
{
  int v2; // r3
  int v4; // r8
  int v5; // r3
  size_t v6; // r8
  int *v7; // r0
  int *v8; // r5
  int v9; // r2
  int v10; // r3
  int v11; // r3
  int v12; // r0
  char v13; // r3
  int v14; // r1
  int v15; // r8
  unsigned __int8 *v16; // r3
  int v17; // r7
  int v18; // r0
  int v19; // r1
  int v20; // lr
  int v21; // r12
  int v22; // r3
  __int64 v23; // r8
  int v24; // r3
  int v25; // r3
  int v26; // r3
  int v27; // r3
  int v28; // r3
  _DWORD v29[16]; // [sp+10h] [bp-854h] BYREF
  __int64 v30; // [sp+50h] [bp-814h]
  int v31; // [sp+58h] [bp-80Ch]
  int v32; // [sp+5Ch] [bp-808h]
  char s[2052]; // [sp+60h] [bp-804h] BYREF

  if ( *a1 == 82 )
  {
    v4 = *((_DWORD *)a1 + 1);
    if ( byte_4B9A22 && (byte_5C0EFC || byte_4B9A21 || dword_B3094 > 6) )
    {
      snprintf(s, 0x800u, "%s: len = 0x%x\n", "dhash_chip_send_job", *((_DWORD *)a1 + 1));
      sub_3B6AC(7, s, 0, v5);
    }
    v6 = v4 + 8;
    v7 = (int *)malloc(v6);
    v8 = v7;
    if ( v7 )
    {
      memset(v7, 0, v6);
      memcpy(v8, a1, v6);
      if ( byte_534B68 )
      {
        v9 = *((unsigned __int8 *)v8 + 80);
        if ( *((_BYTE *)v8 + 80) )
        {
          v10 = v8[21];
          v9 = v8[22];
          dword_B3048 = v10;
        }
        else
        {
          v10 = 1;
          dword_B3048 = 1;
        }
        dword_B6EF0 = v9;
        if ( dword_B32DC != v10 )
        {
          if ( (unsigned int)dword_B308C > 3 )
          {
            snprintf(s, 0x800u, "Version num %d\n", v10);
            sub_3B6AC(3, s, 0, v28);
            v10 = dword_B3048;
          }
          dword_B32DC = v10;
        }
        v11 = dword_B6EF0;
        if ( dword_B32E0 != dword_B6EF0 )
        {
          if ( (unsigned int)dword_B308C > 3 )
          {
            snprintf(s, 0x800u, "Mask num 0x%x\n", dword_B6EF0);
            sub_3B6AC(3, s, 0, v27);
            v11 = dword_B6EF0;
          }
          dword_B32E0 = v11;
          v12 = sub_41228(dword_534B54, dword_B3048, 90);
          sub_69F14(v12);
          sub_27CC4((unsigned __int16)((unsigned int)dword_B6EF0 >> 13));
        }
        v13 = *((_BYTE *)v8 + 9);
        if ( (v13 & 2) != 0 )
        {
          sub_6A4CC(*((unsigned __int8 *)v8 + 10));
          v13 = *((_BYTE *)v8 + 9);
        }
        v14 = *((unsigned __int16 *)v8 + 30);
        v15 = v8[3];
        v32 = v13 & 1;
        v16 = &a1[v14 + 96];
        v29[1] = dword_B3048;
        v29[10] = dword_B6EF0;
        v17 = v8[4];
        v31 = dword_9CD8D4;
        v29[3] = v14;
        v18 = v8[14];
        v19 = *((unsigned __int16 *)v8 + 31);
        v20 = *((unsigned __int16 *)v8 + 33);
        v29[4] = v16;
        v21 = *((unsigned __int16 *)v8 + 32);
        v22 = v8[13];
        v29[8] = v15;
        v23 = *((_QWORD *)v8 + 9);
        v29[7] = v18;
        v29[13] = v19;
        v29[6] = v22;
        v29[2] = a1 + 96;
        if ( !byte_534B69 )
          byte_534B69 = 1;
        v29[9] = v17;
        v29[5] = v20;
        v29[14] = v21;
        v30 = v23;
        v29[11] = v8 + 5;
        v29[12] = 32;
        v29[0] = 1;
        if ( (unsigned int)dword_B308C > 4 )
        {
          snprintf(s, 0x800u, "start to send job, mid_auto_gen = %d", 1);
          sub_3B6AC(4, s, 0, v26);
        }
        sub_3FDB4((int)v29);
        free(v8);
        if ( byte_4B9A22 && (byte_5C0EFC || byte_4B9A21 || dword_B3094 > 6) )
        {
          snprintf(s, 0x800u, "--- %s end\n", "dhash_chip_send_job");
          sub_3B6AC(7, s, 0, v24);
        }
        sub_3DFCC(dword_534B60);
        sub_3E0F0();
        return 0;
      }
      else
      {
        if ( (unsigned int)dword_B308C > 3 )
        {
          strcpy(s, "only support asic boost");
          sub_3B6AC(3, s, (unsigned __int8)byte_534B68, *(int *)" asic boost");
        }
        free(v8);
        return 0;
      }
    }
    else if ( byte_4B9A22 && (byte_5C0EFC || byte_4B9A21 || dword_B3094 > 6) )
    {
      snprintf(s, 0x800u, "%s: malloc buffer failed.\n", "dhash_chip_send_job");
      sub_3B6AC(7, s, 0, v25);
      return -2;
    }
    else
    {
      return -2;
    }
  }
  else if ( byte_4B9A22 && (byte_5C0EFC || byte_4B9A21 || dword_B3094 > 6) )
  {
    snprintf(s, 0x800u, "%s: SEND_JOB_TYPE is wrong : 0x%x\n", "dhash_chip_send_job", *a1);
    sub_3B6AC(7, s, 0, v2);
    return -1;
  }
  else
  {
    return -1;
  }
}
