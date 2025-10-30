int __fastcall sub_255AC(int a1)
{
  int result; // r0
  int v2; // r4
  int v3; // r1
  int v4; // r7
  unsigned int v5; // r4
  int v6; // r0
  int v7; // r4
  int v8; // r3
  char *v9; // lr
  unsigned int v10; // r3
  int v11; // r12
  unsigned int v12; // r4
  char *v13; // r5
  char *v14; // r2
  int v15; // r0
  char *v16; // r1
  int v17; // lr
  int v18; // t1
  int v19; // r2
  int v20; // lr
  int v21; // t1
  unsigned int v22; // r2
  char *v23; // r1
  int v24; // r5
  unsigned int v25; // r2
  char *v26; // r1
  char *v27; // r0
  int v28; // lr
  int v29; // t1
  int v30; // r0
  unsigned int v31; // r2
  int v32; // lr
  int v33; // t1
  unsigned int v34; // r2
  char *v35; // r1
  unsigned int v36; // r2
  char *v37; // r1
  char v38; // [sp+Ch] [bp-48h]
  char v40[52]; // [sp+20h] [bp-34h] BYREF

  sub_1E938(v40, 0x30u);
  printf("%s ", v40);
  printf("%s : Start %s\n", "read_temperature_from_asic_N_times", "read_temperature_from_asic_N_times");
  snprintf(byte_608DCC, 0x100u, "Start %s", "read_temperature_from_asic_N_times");
  result = sub_3CC5C(byte_608DCC, v40);
  if ( dword_22688C )
  {
    v2 = 0;
    do
    {
      sub_77D20((unsigned __int8)dword_21B3A4, *((unsigned __int8 *)&dword_226A90 + v2), 0);
      usleep(0x2710u);
      sub_787C0((unsigned __int8)dword_21B3A4, *((unsigned __int8 *)&dword_226A90 + v2));
      usleep(0x2710u);
      v3 = *((unsigned __int8 *)&dword_226A90 + v2);
      v2 = (unsigned __int8)(v2 + 1);
      sub_787DC((unsigned __int8)dword_21B3A4, v3, (unsigned __int8)byte_6003B0, 9, 4);
      result = usleep(0xC350u);
    }
    while ( (unsigned __int8)v2 < (unsigned int)dword_22688C );
  }
  if ( a1 )
  {
    v38 = 0;
    v4 = 1;
    while ( 1 )
    {
      if ( !dword_22688C )
        goto LABEL_39;
      v5 = 0;
      do
      {
        sub_787D4((unsigned __int8)dword_21B3A4, 0, (unsigned __int8)byte_6003B0);
        usleep(0xC350u);
        sub_24C80(*((unsigned __int8 *)&dword_226A90 + v5) - 1, 8, 0, (const char *)(dword_223680 + 48));
        usleep(0xC350u);
        sub_787D4((unsigned __int8)dword_21B3A4, 0, (unsigned __int8)byte_6003B0);
        usleep(0xC350u);
        v6 = *((unsigned __int8 *)&dword_226A90 + v5) - 1;
        v5 = (unsigned __int8)(v5 + 1);
        sub_24C80(v6, 9, 0, (const char *)(dword_223680 + 48));
        result = usleep(0xC350u);
      }
      while ( v5 < dword_22688C );
      if ( !dword_22688C )
        goto LABEL_39;
      v7 = 0;
      do
      {
        sub_1E938(v40, 0x30u);
        printf("%s ", v40);
        printf(
          "%s : Read from Asic :: Sensor %d:\t\tlocal: %d,\t remote: %d\n",
          "read_temperature_from_asic_N_times",
          v7,
          byte_2333A8[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 265794 + v7],
          byte_2333A8[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 265798 + v7]);
        v8 = v7;
        v9 = &byte_2333A8[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + v7];
        v7 = (unsigned __int8)(v7 + 1);
        snprintf(
          byte_608ECC,
          0x100u,
          "Read from Asic :: Sensor %d:\t\tlocal: %d,\t remote: %d",
          v8,
          v9[265794],
          v9[265798]);
        result = sub_3CC5C(byte_608ECC, v40);
        v10 = dword_22688C;
      }
      while ( (unsigned __int8)v7 < (unsigned int)dword_22688C );
      v11 = (unsigned __int8)byte_5FE894;
      v12 = (unsigned __int8)dword_22688C;
      if ( (_BYTE)dword_22688C )
      {
        v13 = (char *)&unk_2337B0 + (_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 264761;
        v14 = v13;
        v15 = -128;
        v16 = (char *)&unk_2337B0
            + (_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894
            + (unsigned __int8)(dword_22688C - 1)
            + 264762;
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
        if ( v15 - v19 > 10 && dword_22688C )
        {
          v22 = 0;
          do
          {
            v23 = &byte_2333A8[(_DWORD)&loc_40A50 * v11 + v22];
            v22 = (unsigned __int8)(v22 + 1);
            v23[265788] = 0;
          }
          while ( v10 > v22 );
        }
        v24 = -128;
        LOBYTE(v25) = 0;
        v26 = (char *)&unk_2337B0 + (_DWORD)&loc_40A50 * v11 + 264765;
        v27 = v26;
        do
        {
          v29 = *++v27;
          v28 = v29;
          v25 = (unsigned __int8)(v25 + 1);
          if ( v24 < v29 )
            v24 = v28;
        }
        while ( v25 < v12 );
        v30 = 127;
        LOBYTE(v31) = 0;
        do
        {
          v33 = *++v26;
          v32 = v33;
          v31 = (unsigned __int8)(v31 + 1);
          if ( v30 >= v33 )
            v30 = v32;
        }
        while ( v31 < v12 );
        result = v24 - v30;
        if ( result > 10 )
          break;
      }
      if ( v10 )
        goto LABEL_37;
      if ( v4 )
      {
LABEL_44:
        sub_1E938(v40, 0x30u);
        printf("%s ", v40);
        printf("%s : All ASIC sensor read out data\n", "read_temperature_from_asic_N_times");
        strcpy(byte_608FCC, "All ASIC sensor read out data");
        sub_3CC5C(byte_608FCC, v40);
        byte_2333A8[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 1036] = 1;
        return 1;
      }
LABEL_40:
      if ( a1 == (unsigned __int8)++v38 )
        return result;
    }
    if ( v10 )
    {
      v34 = 0;
      do
      {
        result = v34 + 1;
        v35 = &byte_2333A8[(_DWORD)&loc_40A50 * v11 + v34];
        v34 = (unsigned __int8)(v34 + 1);
        v35[265788] = 0;
      }
      while ( v34 < v10 );
LABEL_37:
      v36 = 0;
      do
      {
        v37 = &byte_2333A8[(_DWORD)&loc_40A50 * v11 + v36];
        v36 = (unsigned __int8)(v36 + 1);
        v4 = (unsigned __int8)(v4 & v37[265788]);
      }
      while ( v10 > v36 );
    }
LABEL_39:
    if ( v4 )
      goto LABEL_44;
    goto LABEL_40;
  }
  return result;
}
