int __fastcall sub_5F124(int a1, unsigned __int8 a2, unsigned __int8 a3, int a4, int a5)
{
  int v5; // r3
  int v6; // r3
  int v7; // r3
  int v8; // r0
  char v14[12]; // [sp+18h] [bp-83Ch] BYREF
  __int16 v15; // [sp+818h] [bp-3Ch] BYREF
  _BYTE s[35]; // [sp+81Ch] [bp-38h] BYREF
  __int16 v17; // [sp+83Fh] [bp-15h]
  char v18; // [sp+841h] [bp-13h]
  unsigned __int16 v19; // [sp+842h] [bp-12h]
  int i; // [sp+844h] [bp-10h]
  _BYTE v21[6]; // [sp+84Ah] [bp-Ah]
  int v22; // [sp+858h] [bp+4h]

  *(_WORD *)&v21[4] = 0;
  pthread_mutex_lock(&stru_531508);
  v18 = 0;
  v17 = (unsigned __int8)(a5 + 6);
  memset(s, 0, 0x20u);
  v15 = 0;
  *(_DWORD *)v21 = (unsigned __int16)((unsigned __int8)v17 + a2 + a3 + 53);
  s[0] = 85;
  s[1] = -86;
  s[2] = a5 + 6;
  s[3] = 53;
  s[4] = a2;
  v19 = 6;
  s[5] = a3;
  v5 = a5;
  if ( a5 >= 16 )
    v5 = 16;
  v22 = v5;
  for ( i = 0; i < v22; ++i )
  {
    if ( (i & 1) == 0 && *(unsigned __int8 *)(a4 + i) > 0x3Fu )
    {
      snprintf(v14, 0x800u, "%s: the data[%d] must less than 0x3f\n", "_app_write_data_into_flash_1704_v8", i);
      sub_3AF5C(0, v14, 0, (int)v14);
    }
    *(_WORD *)v21 += *(unsigned __int8 *)(a4 + i);
    s[v19 + i] = *(_BYTE *)(a4 + i);
  }
  v19 += v22;
  v6 = v19++;
  s[v6] = v21[1];
  v7 = v19++;
  s[v7] = v21[0];
  v8 = sub_6A9E8(a1, s, v19);
  if ( v8 == v19 )
  {
    usleep(0x493E0u);
    if ( sub_6A93C(a1, &v15, 2) == 2 )
    {
      if ( (unsigned __int8)v15 == 53 && HIBYTE(v15) == 1 )
      {
        *(_DWORD *)&v21[2] = v22;
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
        sub_3AF5C(0, v14, 0, (int)v14);
      }
    }
    else
    {
      snprintf(v14, 0x800u, "%s read iic 2 err\n", "_app_write_data_into_flash_1704_v8");
      sub_3AF5C(0, v14, 0, (int)v14);
    }
  }
  else
  {
    snprintf(v14, 0x800u, "%s write iic 2 err\n", "_app_write_data_into_flash_1704_v8");
    sub_3AF5C(0, v14, 0, (int)v14);
  }
  pthread_mutex_unlock(&stru_531508);
  return *(_DWORD *)&v21[2];
}
