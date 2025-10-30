int __fastcall sub_243CC(int a1)
{
  int result; // r0
  int v3; // r9
  int v4; // r4
  unsigned __int8 v5; // r1
  char *v6; // r3
  unsigned int v7; // r2
  unsigned int v8; // r1
  int v9; // r4
  int v10; // r3
  char *v11; // lr
  unsigned int v12; // r3
  char *v13; // r5
  char *v14; // r2
  int v15; // r4
  char *v16; // r1
  int v17; // lr
  int v18; // t1
  int v19; // r2
  int v20; // lr
  int v21; // t1
  unsigned int v22; // r2
  char *v23; // r1
  unsigned __int8 i; // [sp+14h] [bp-50h]
  __int16 v26; // [sp+2Ch] [bp-38h] BYREF
  char v27[52]; // [sp+30h] [bp-34h] BYREF

  v26 = 0;
  sub_1E938(v27, 0x30u);
  printf("%s ", v27);
  printf("%s : Start %s\n", "read_temperature_from_PIC_N_times", "read_temperature_from_PIC_N_times");
  snprintf(byte_6077C4, 0x100u, "Start %s", "read_temperature_from_PIC_N_times");
  result = sub_3CC5C(byte_6077C4, v27);
  if ( a1 )
  {
    v3 = 1;
    for ( i = 0; a1 != i; ++i )
    {
      if ( dword_226084 )
      {
        v4 = 0;
        do
        {
          v5 = byte_6004B4 + *((_BYTE *)&dword_226288 + v4);
          v26 = 0;
          if ( sub_73868((unsigned __int8)dword_21B3A4, v5, (unsigned __int8)byte_2333A2, &v26, 2) == 2 )
          {
            if ( (_BYTE)v26 )
            {
              v6 = &byte_2333A8[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 264192 + v4];
              v6[1610] = v26;
              v6[1592] = 1;
              sub_1E938(v27, 0x30u);
              printf("%s ", v27);
              printf(
                "%s : gHistory_Result[%d].sensor_local_temperature_from_pic[%d] = %d\n",
                "read_temperature_from_PIC_N_times",
                (unsigned __int8)byte_5FE894,
                v4,
                byte_2333A8[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 265802 + v4]);
              snprintf(
                byte_6079C4,
                0x100u,
                "gHistory_Result[%d].sensor_local_temperature_from_pic[%d] = %d",
                (unsigned __int8)byte_5FE894,
                v4,
                byte_2333A8[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 265802 + v4]);
              sub_3CC5C(byte_6079C4, v27);
            }
          }
          else
          {
            sub_1E938(v27, 0x30u);
            printf("%s ", v27);
            printf("%s : Read PIC sensor %d fail\n", "read_temperature_from_PIC_N_times", v4);
            snprintf(byte_6078C4, 0x100u, "Read PIC sensor %d fail", v4);
            sub_3CC5C(byte_6078C4, v27);
          }
          result = usleep(0xC350u);
          v4 = (unsigned __int8)(v4 + 1);
        }
        while ( (unsigned __int8)v4 < (unsigned int)dword_226084 );
        if ( dword_226084 )
        {
          v9 = 0;
          do
          {
            sub_1E938(v27, 0x30u);
            printf("%s ", v27);
            printf(
              "%s : Read from Pic ::    Sensor %d:      local: %d\n",
              "read_temperature_from_PIC_N_times",
              v9,
              byte_2333A8[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 265802 + v9]);
            v10 = v9;
            v11 = &byte_2333A8[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + v9];
            v9 = (unsigned __int8)(v9 + 1);
            snprintf(byte_607AC4, 0x100u, "Read from Pic ::    Sensor %d:      local: %d", v10, v11[265802]);
            sub_3CC5C(byte_607AC4, v27);
            v12 = dword_226084;
          }
          while ( (unsigned __int8)v9 < (unsigned int)dword_226084 );
          result = (unsigned __int8)byte_5FE894;
          if ( !(_BYTE)dword_226084 )
            goto LABEL_10;
          v13 = (char *)&unk_2337B0 + (_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 264769;
          v14 = v13;
          v15 = -128;
          v16 = (char *)&unk_2337B0
              + (_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894
              + (unsigned __int8)(dword_226084 - 1)
              + 264770;
          do
          {
            v18 = *++v14;
            v17 = v18;
            if ( v15 < v18 )
              v15 = v17;
          }
          while ( v14 != v16 );
          v19 = 127;
          do
          {
            v21 = *++v13;
            v20 = v21;
            if ( v19 >= v21 )
              v19 = v20;
          }
          while ( v13 != v16 );
          if ( v15 - v19 > 10 )
          {
            if ( !dword_226084 )
              goto LABEL_13;
            v22 = 0;
            do
            {
              v23 = &byte_2333A8[(_DWORD)&loc_40A50 * result + v22];
              v22 = (unsigned __int8)(v22 + 1);
              v23[265784] = 0;
            }
            while ( v12 > v22 );
          }
          else
          {
LABEL_10:
            if ( !dword_226084 )
              goto LABEL_13;
          }
          v7 = 0;
          result = (int)&byte_2333A8[(_DWORD)&loc_40A50 * result];
          do
          {
            v8 = result + v7;
            v7 = (unsigned __int8)(v7 + 1);
            v3 = (unsigned __int8)(v3 & *(_BYTE *)(v8 + 265784));
          }
          while ( v7 < v12 );
        }
      }
LABEL_13:
      if ( v3 )
      {
        sub_1E938(v27, 0x30u);
        printf("%s ", v27);
        printf("%s : All PIC sensor read out data\n", "read_temperature_from_PIC_N_times");
        strcpy(byte_607BC4, "All PIC sensor read out data");
        sub_3CC5C(byte_607BC4, v27);
        byte_2333A8[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 1035] = 1;
        return 1;
      }
    }
  }
  return result;
}
