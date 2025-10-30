int __fastcall sub_72900(int a1, __int16 a2, __int16 a3, int a4, int a5)
{
  int v8; // r5
  __int16 v10; // r4
  int v11; // r2
  int i; // r0
  __int16 v13; // r3
  int v14; // r2
  int v15; // lr
  int v16; // r3
  int v17; // r8
  const char *v19; // r2
  __int16 v20; // [sp+Ch] [bp-4h] BYREF
  _BYTE v21[6]; // [sp+10h] [bp+0h] BYREF
  __int16 v22; // [sp+16h] [bp+6h]
  int v23; // [sp+18h] [bp+8h]
  int v24; // [sp+1Ch] [bp+Ch]
  int v25; // [sp+20h] [bp+10h]
  int v26; // [sp+24h] [bp+14h]
  char s[2048]; // [sp+28h] [bp+18h] BYREF

  v8 = a5;
  if ( a5 >= 16 )
    v8 = 16;
  pthread_mutex_lock(&stru_65E42C);
  v22 = 0;
  v21[2] = a5 + 6;
  v10 = a3 + 59 + a2 + (unsigned __int8)(a5 + 6);
  v21[0] = 85;
  v21[1] = -86;
  v21[3] = 59;
  v23 = 0;
  v21[4] = a2;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v21[5] = a3;
  v20 = 0;
  if ( v8 <= 0 )
  {
    v17 = 8;
    v15 = 7;
    v14 = 8;
    v16 = 6;
  }
  else
  {
    v11 = 0;
    for ( i = 6; ; i = (unsigned __int16)(i + 1) )
    {
      v13 = *(unsigned __int8 *)(a4 + v11);
      v11 = (unsigned __int16)(v11 + 1);
      v21[i] = v13;
      v10 += v13;
      if ( v8 <= v11 )
        break;
    }
    v14 = (unsigned __int16)(i + 3);
    v15 = (unsigned __int16)(i + 2);
    v16 = (unsigned __int16)(i + 1);
    v17 = (unsigned __int16)v14;
  }
  v21[v16] = HIBYTE(v10);
  v21[v15] = v10;
  if ( sub_76744(a1, v21, v14) != v17 )
  {
    v19 = "%s write iic err\n";
LABEL_15:
    v8 = -2147483136;
    snprintf(s, 0x800u, v19, "_pic_write_iic");
    nullsub_8();
    goto LABEL_12;
  }
  usleep(0x2710u);
  if ( sub_766E8(a1, &v20, 2) != 2 )
  {
    v19 = "%s read iic err\n";
    goto LABEL_15;
  }
  if ( (unsigned __int8)v20 != 59 || HIBYTE(v20) != 1 )
  {
    snprintf(
      s,
      0x800u,
      "%s failed! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x\n\n",
      "_pic_write_iic",
      (unsigned __int8)v20,
      HIBYTE(v20));
    v8 = -2147483136;
    nullsub_8();
  }
LABEL_12:
  pthread_mutex_unlock(&stru_65E42C);
  return v8;
}
