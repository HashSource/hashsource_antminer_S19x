int __fastcall sub_5D738(int a1, unsigned __int8 a2, unsigned __int8 a3, int a4, int a5)
{
  int v5; // r3
  int v6; // r3
  int v7; // r3
  int v8; // r0
  char v14[12]; // [sp+18h] [bp-83Ch] BYREF
  __int16 v15; // [sp+818h] [bp-3Ch] BYREF
  int v16; // [sp+81Ch] [bp-38h] BYREF
  int v17; // [sp+820h] [bp-34h]
  int v18; // [sp+824h] [bp-30h]
  int v19; // [sp+828h] [bp-2Ch]
  int v20; // [sp+82Ch] [bp-28h]
  int v21; // [sp+830h] [bp-24h]
  int v22; // [sp+834h] [bp-20h]
  int v23; // [sp+838h] [bp-1Ch]
  __int16 v24; // [sp+83Fh] [bp-15h]
  char v25; // [sp+841h] [bp-13h]
  unsigned __int16 v26; // [sp+842h] [bp-12h]
  int i; // [sp+844h] [bp-10h]
  _BYTE v28[6]; // [sp+84Ah] [bp-Ah]
  int v29; // [sp+858h] [bp+4h]

  *(_WORD *)&v28[4] = 0;
  pthread_mutex_lock(&stru_536318);
  v25 = 0;
  v24 = (unsigned __int8)(a5 + 6);
  v16 = 889236053;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v15 = 0;
  *(_DWORD *)v28 = (unsigned __int16)((unsigned __int8)v24 + a2 + a3 + 53);
  BYTE2(v16) = a5 + 6;
  v17 = a2;
  v26 = 6;
  BYTE1(v17) = a3;
  v5 = a5;
  if ( a5 >= 16 )
    v5 = 16;
  v29 = v5;
  for ( i = 0; i < v29; ++i )
  {
    if ( (i & 1) == 0 && *(unsigned __int8 *)(a4 + i) > 0x3Fu )
    {
      snprintf(v14, 0x800u, "%s: the data[%d] must less than 0x3f\n", "_app_write_data_into_flash_1704_v8", i);
      sub_3B6AC(0, v14, 0, (int)v14);
    }
    *(_WORD *)v28 += *(unsigned __int8 *)(a4 + i);
    *((_BYTE *)&v16 + v26 + i) = *(_BYTE *)(a4 + i);
  }
  v26 += v29;
  v6 = v26++;
  *((_BYTE *)&v16 + v6) = v28[1];
  v7 = v26++;
  *((_BYTE *)&v16 + v7) = v28[0];
  v8 = sub_6F0DC(a1, &v16, v26);
  if ( v8 == v26 )
  {
    usleep(0x493E0u);
    if ( sub_6F030(a1, &v15, 2) == 2 )
    {
      if ( (unsigned __int8)v15 == 53 && HIBYTE(v15) == 1 )
      {
        *(_DWORD *)&v28[2] = v29;
      }
      else
      {
        snprintf(
          v14,
          0x800u,
          "%s failed 2! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x\n\n",
          "_app_write_data_into_flash_1704_v8",
          (unsigned __int8)v15,
          HIBYTE(v15));
        sub_3B6AC(0, v14, 0, (int)v14);
      }
    }
    else
    {
      snprintf(v14, 0x800u, "%s read iic 2 err\n", "_app_write_data_into_flash_1704_v8");
      sub_3B6AC(0, v14, 0, (int)v14);
    }
  }
  else
  {
    snprintf(v14, 0x800u, "%s write iic 2 err\n", "_app_write_data_into_flash_1704_v8");
    sub_3B6AC(0, v14, 0, (int)v14);
  }
  pthread_mutex_unlock(&stru_536318);
  return *(_DWORD *)&v28[2];
}
