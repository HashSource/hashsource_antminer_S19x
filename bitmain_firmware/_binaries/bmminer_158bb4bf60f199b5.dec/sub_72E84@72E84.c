int __fastcall sub_72E84(int a1, unsigned __int8 *a2, unsigned int a3, unsigned __int8 *a4)
{
  unsigned int v7; // r4
  unsigned __int8 *v8; // r4
  unsigned __int8 *v9; // r1
  int v10; // r3
  __int16 v11; // t1
  int v12; // r4
  unsigned __int8 *v13; // r7
  int v14; // t1
  int v15; // r3
  int v16; // r4
  int v18; // [sp+0h] [bp-834h]
  int v20; // [sp+10h] [bp-824h]
  unsigned __int8 *v22; // [sp+18h] [bp-81Ch]
  unsigned __int8 *v23; // [sp+1Ch] [bp-818h]
  unsigned __int8 *v24; // [sp+20h] [bp-814h]
  char v25; // [sp+2Fh] [bp-805h] BYREF
  char s[2048]; // [sp+30h] [bp-804h] BYREF

  v25 = 17;
  v24 = a4 + 8;
  v22 = a4 + 1;
  pthread_mutex_lock(&stru_1B1494);
  v23 = a4 + 5;
  v20 = 0;
  while ( 1 )
  {
    LOBYTE(v7) = 0;
    do
    {
      v7 = (unsigned __int8)(v7 + 1);
      sub_73A24(a1, &v25);
    }
    while ( v7 < a3 );
    v8 = a4;
    usleep((__useconds_t)&loc_61A80);
    do
    {
      ++v8;
      sub_73984(a1, &v25);
    }
    while ( v24 != v8 );
    usleep(0x186A0u);
    v9 = v22;
    LOWORD(v10) = 0;
    do
    {
      v11 = *++v9;
      v10 = (unsigned __int16)(v10 + v11);
    }
    while ( v9 != v23 );
    if ( v10 != (unsigned __int16)(a4[6] + (a4[7] << 8)) )
    {
      snprintf(
        s,
        0x800u,
        "power reply the bad crc, crc = 0x%04x, crc_read = 0x%04x\n",
        v10,
        (unsigned __int16)(a4[6] + (a4[7] << 8)));
      sub_47AB4(0, s, 0);
      goto LABEL_10;
    }
    if ( *a2 == *a4 && a2[1] == a4[1] && a2[3] == a4[3] && a4[2] == 6 )
      break;
    strcpy(s, "power reply the bad data\n");
    sub_47AB4(0, s, 0);
LABEL_10:
    v12 = 0;
    v13 = a4 - 1;
    do
    {
      v14 = *++v13;
      v15 = v12++;
      snprintf(s, 0x800u, "read_back_data[%d] = 0x%02x", v15, v14);
      sub_47AB4(0, s, 0);
    }
    while ( v12 != 8 );
    v18 = v20++;
    snprintf(s, 0x800u, "Send power cmd(0x%02x) failed, retry %d\n", a2[3], v18);
    sub_47AB4(0, s, 0);
    if ( v20 == 3 )
    {
      v16 = -2147482880;
      goto LABEL_14;
    }
  }
  v16 = 0;
LABEL_14:
  pthread_mutex_unlock(&stru_1B1494);
  return v16;
}
