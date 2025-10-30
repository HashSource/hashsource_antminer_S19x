size_t __fastcall sub_600CC(int a1, unsigned __int8 a2, void *a3, int a4)
{
  int v4; // r3
  int v5; // r3
  int v6; // r3
  int v7; // r3
  int v8; // r3
  int v9; // r3
  int v10; // r3
  int v11; // r3
  int v12; // r3
  int v13; // r0
  int v14; // r0
  size_t n; // [sp+10h] [bp-844h]
  char v21[4]; // [sp+20h] [bp-834h] BYREF
  _BYTE v22[20]; // [sp+820h] [bp-34h] BYREF
  __int16 v23; // [sp+834h] [bp-20h]
  _DWORD v24[2]; // [sp+838h] [bp-1Ch] BYREF
  int v25; // [sp+840h] [bp-14h]
  unsigned __int8 v26; // [sp+847h] [bp-Dh]
  unsigned __int16 v27; // [sp+848h] [bp-Ch]
  __int16 v28; // [sp+84Ah] [bp-Ah]
  size_t v29; // [sp+84Ch] [bp-8h]

  pthread_mutex_lock(&stru_531508);
  v29 = 0;
  v26 = 6;
  v28 = 0;
  v27 = 0;
  v24[0] = 0;
  v24[1] = 0;
  memset(v22, 0, sizeof(v22));
  v23 = 0;
  v25 = 0;
  v4 = a4;
  if ( a4 >= 16 )
    v4 = 16;
  n = v4;
  v28 = v26 + a2 + v4 + 60;
  v25 = v4 + 5;
  v5 = v27++;
  *((_BYTE *)v24 + v5) = 85;
  v6 = v27++;
  *((_BYTE *)v24 + v6) = -86;
  v7 = v27++;
  *((_BYTE *)v24 + v7) = v26;
  v8 = v27++;
  *((_BYTE *)v24 + v8) = 60;
  v9 = v27++;
  *((_BYTE *)v24 + v9) = a2;
  v10 = v27++;
  *((_BYTE *)v24 + v10) = n;
  v11 = v27++;
  *((_BYTE *)v24 + v11) = HIBYTE(v28);
  v12 = v27++;
  *((_BYTE *)v24 + v12) = v28;
  v13 = sub_6A9E8(a1, v24, v27);
  if ( v13 == v27 )
  {
    usleep(0x2710u);
    v14 = sub_6A93C(a1, v22, v25);
    if ( v25 == v14 )
    {
      if ( v25 == v22[0] && v22[1] == 60 && v22[2] == 1 )
      {
        v27 = 0;
        v28 = 0;
        while ( v27 < v25 - 2 )
          v28 += (unsigned __int8)v22[v27++];
        if ( HIBYTE(v28) == (unsigned __int8)v22[v25 - 2] && (unsigned __int8)v28 == (unsigned __int8)v22[v25 - 1] )
        {
          memcpy(a3, &v22[3], n);
          v29 = n;
        }
        else
        {
          snprintf(v21, 0x800u, "%s failed 2!\n", "_pic_read_iic");
          sub_3AF5C(0, v21, 0, (int)v21);
        }
      }
      else
      {
        snprintf(
          v21,
          0x800u,
          "%s failed! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x, read_back_data[2] = 0x%02x\n\n",
          "_pic_read_iic",
          v22[0],
          v22[1],
          v22[2]);
        sub_3AF5C(0, v21, 0, (int)v21);
      }
    }
    else
    {
      snprintf(v21, 0x800u, "%s read iic err\n", "_pic_read_iic");
      sub_3AF5C(0, v21, 0, (int)v21);
    }
  }
  else
  {
    snprintf(v21, 0x800u, "%s write iic err\n", "_pic_read_iic");
    sub_3AF5C(0, v21, 0, (int)v21);
  }
  pthread_mutex_unlock(&stru_531508);
  return v29;
}
