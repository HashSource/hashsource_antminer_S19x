int __fastcall sub_247A8(int a1)
{
  unsigned int v1; // r5
  unsigned int v2; // r3
  char v3; // r4
  char v4; // r2
  char *v5; // r1
  int result; // r0
  int v7; // r4
  char *v8; // r9
  int v9; // r1
  char *v10; // r3
  int v11; // r4
  int v12; // r3
  char *v13; // lr
  unsigned int v14; // r3
  int v15; // r9
  unsigned int v16; // r2
  int v17; // [sp+8h] [bp-4Ch]
  char v18; // [sp+Ch] [bp-48h]
  __int16 v20; // [sp+18h] [bp-3Ch] BYREF
  _WORD v21[2]; // [sp+1Ch] [bp-38h] BYREF
  char v22[52]; // [sp+20h] [bp-34h] BYREF

  v20 = 0;
  v21[0] = 0;
  sub_1E938(v22, 0x30u);
  printf("%s ", v22);
  printf("%s : Start %s\n", "read_temperature_from_CtrlBoard_N_times", "read_temperature_from_CtrlBoard_N_times");
  snprintf(byte_607CC4, 0x100u, "Start %s", "read_temperature_from_CtrlBoard_N_times");
  sub_3CC5C(byte_607CC4, v22);
  v1 = dword_227094;
  if ( dword_227094 )
  {
    v2 = 0;
    v3 = byte_6005B8;
    do
    {
      v4 = *((_BYTE *)&word_227298 + v2);
      v5 = &v22[v2 + 48];
      v2 = (unsigned __int8)(v2 + 1);
      *(v5 - 52) = v4 + v3;
    }
    while ( v2 < v1 );
  }
  result = sub_7619C(dword_21B3A4, v21);
  if ( result < 0 )
  {
    sub_1E938(v22, 0x30u);
    printf("%s ", v22);
    printf(
      "%s : %s: chain %d tsensor_open failed\n\n",
      "read_temperature_from_CtrlBoard_N_times",
      "read_temperature_from_CtrlBoard_N_times",
      dword_21B3A4);
    snprintf(
      byte_607DC4,
      0x100u,
      "%s: chain %d tsensor_open failed\n",
      "read_temperature_from_CtrlBoard_N_times",
      dword_21B3A4);
    return sub_3CC5C(byte_607DC4, v22);
  }
  else if ( a1 )
  {
    v17 = 1;
    v18 = 0;
    while ( 1 )
    {
      v7 = 0;
      if ( dword_227094 )
      {
        do
        {
          v8 = &v22[v7 + 48];
          v9 = *((unsigned __int8 *)v21 + v7);
          v20 = 0;
          if ( sub_76468(dword_21B3A4, v9, (unsigned __int8)byte_2333A2, &v20, 2) == 2 )
          {
            if ( (_BYTE)v20 )
            {
              v10 = &byte_2333A8[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 264192 + v7];
              v10[1614] = v20;
              v10[1600] = 1;
              sub_1E938(v22, 0x30u);
              printf("%s ", v22);
              printf(
                "%s : gHistory_Result[%d].sensor_local_temperature_from_ctrlboard[%d] = %d\n",
                "read_temperature_from_CtrlBoard_N_times",
                (unsigned __int8)byte_5FE894,
                v7,
                byte_2333A8[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 265806 + v7]);
              snprintf(
                byte_607FC4,
                0x100u,
                "gHistory_Result[%d].sensor_local_temperature_from_ctrlboard[%d] = %d",
                (unsigned __int8)byte_5FE894,
                v7,
                byte_2333A8[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 265806 + v7]);
              sub_3CC5C(byte_607FC4, v22);
            }
          }
          else
          {
            sub_1E938(v22, 0x30u);
            printf("%s ", v22);
            printf(
              "%s : Read CtrlBoard sensor fail,addr: %d\n",
              "read_temperature_from_CtrlBoard_N_times",
              (unsigned __int8)*(v8 - 52));
            snprintf(byte_607EC4, 0x100u, "Read CtrlBoard sensor fail,addr: %d", (unsigned __int8)*(v8 - 52));
            sub_3CC5C(byte_607EC4, v22);
          }
          result = usleep(0xC350u);
          v7 = (unsigned __int8)(v7 + 1);
        }
        while ( (unsigned __int8)v7 < (unsigned int)dword_227094 );
        if ( dword_227094 )
        {
          v11 = 0;
          do
          {
            sub_1E938(v22, 0x30u);
            printf("%s ", v22);
            printf(
              "%s : Read from CtrlBoard ::    Sensor %d:      local: %d\n",
              "read_temperature_from_CtrlBoard_N_times",
              v11,
              byte_2333A8[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 265806 + v11]);
            v12 = v11;
            v13 = &byte_2333A8[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + v11];
            v11 = (unsigned __int8)(v11 + 1);
            snprintf(byte_6080C4, 0x100u, "Read from CtrlBoard ::    Sensor %d:      local: %d", v12, v13[265806]);
            result = sub_3CC5C(byte_6080C4, v22);
          }
          while ( (unsigned __int8)v11 < (unsigned int)dword_227094 );
          if ( dword_227094 )
          {
            v14 = 0;
            LOBYTE(v15) = v17;
            result = (int)&byte_2333A8[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894];
            do
            {
              v16 = result + v14;
              v14 = (unsigned __int8)(v14 + 1);
              v15 = (unsigned __int8)(v15 & *(_BYTE *)(v16 + 265792));
            }
            while ( dword_227094 > v14 );
            v17 = v15;
          }
        }
      }
      if ( v17 )
        break;
      if ( a1 == (unsigned __int8)++v18 )
        return result;
    }
    sub_1E938(v22, 0x30u);
    printf("%s ", v22);
    printf("%s : All CtrlBoard sensor read out data\n", "read_temperature_from_CtrlBoard_N_times");
    strcpy(byte_6081C4, "All CtrlBoard sensor read out data");
    sub_3CC5C(byte_6081C4, v22);
    byte_2333A8[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 1037] = 1;
    return 1;
  }
  return result;
}
