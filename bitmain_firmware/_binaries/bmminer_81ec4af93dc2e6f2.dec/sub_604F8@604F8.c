int __fastcall sub_604F8(int a1, unsigned __int8 a2, unsigned __int8 a3, int a4, int a5)
{
  int v5; // r3
  int v6; // r3
  int v7; // r3
  int v8; // r3
  int v9; // r3
  int v10; // r3
  int v11; // r3
  int v12; // r3
  int v13; // r3
  int v14; // r3
  int v15; // r0
  int v16; // r0
  char v22[16]; // [sp+1Ch] [bp-830h] BYREF
  __int16 v23; // [sp+81Ch] [bp-30h] BYREF
  _BYTE v24[24]; // [sp+820h] [bp-2Ch] BYREF
  int v25; // [sp+838h] [bp-14h]
  unsigned __int8 v26; // [sp+83Dh] [bp-Fh]
  unsigned __int16 i; // [sp+83Eh] [bp-Eh]
  unsigned __int16 v28; // [sp+840h] [bp-Ch]
  __int16 v29; // [sp+842h] [bp-Ah]
  int v30; // [sp+844h] [bp-8h]
  int v31; // [sp+850h] [bp+4h]

  pthread_mutex_lock(&stru_531508);
  v30 = -2147483136;
  v26 = a5 + 6;
  v29 = 0;
  v28 = 0;
  i = 0;
  memset(v24, 0, sizeof(v24));
  v23 = 0;
  v25 = 2;
  v5 = a5;
  if ( a5 >= 16 )
    v5 = 16;
  v31 = v5;
  v29 = v26 + a2 + a3 + 59;
  v6 = v28++;
  v24[v6] = 85;
  v7 = v28++;
  v24[v7] = -86;
  v8 = v28++;
  v24[v8] = v26;
  v9 = v28++;
  v24[v9] = 59;
  v10 = v28++;
  v24[v10] = a2;
  v11 = v28++;
  v24[v11] = a3;
  for ( i = 0; v31 > i; ++i )
  {
    v12 = v28++;
    v24[v12] = *(_BYTE *)(a4 + i);
    v29 += *(unsigned __int8 *)(a4 + i);
  }
  v13 = v28++;
  v24[v13] = HIBYTE(v29);
  v14 = v28++;
  v24[v14] = v29;
  v15 = sub_6A9E8(a1, v24, v28);
  if ( v15 == v28 )
  {
    usleep(0x2710u);
    v16 = sub_6A93C(a1, &v23, v25);
    if ( v25 == v16 )
    {
      if ( (unsigned __int8)v23 == 59 && HIBYTE(v23) == 1 )
      {
        v30 = v31;
      }
      else
      {
        snprintf(
          v22,
          0x800u,
          "%s failed! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x\n\n",
          "_pic_write_iic",
          (unsigned __int8)v23,
          HIBYTE(v23));
        sub_3AF5C(0, v22, 0, (int)v22);
      }
    }
    else
    {
      snprintf(v22, 0x800u, "%s read iic err\n", "_pic_write_iic");
      sub_3AF5C(0, v22, 0, (int)v22);
    }
  }
  else
  {
    snprintf(v22, 0x800u, "%s write iic err\n", "_pic_write_iic");
    sub_3AF5C(0, v22, 0, (int)v22);
  }
  pthread_mutex_unlock(&stru_531508);
  return v30;
}
