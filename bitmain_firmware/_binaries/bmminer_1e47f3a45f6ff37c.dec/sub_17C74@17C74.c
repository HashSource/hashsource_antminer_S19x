int __fastcall sub_17C74(int a1)
{
  int v2; // r10
  int v3; // r4
  int v4; // r5
  int v5; // r0
  int v6; // r8
  unsigned int v8; // r8
  int v9; // r3
  int v10; // r3
  unsigned int v11; // r3
  int v12; // r3
  int v13; // r3
  int v14; // r3
  int v15; // r3
  int v16; // r5
  int v17; // r4
  char v18; // r4
  int v19; // r0
  int v20; // r3
  int v21; // r3
  int v22; // r3
  int v23; // r3
  int v24; // [sp+8h] [bp-824h]
  int v25; // [sp+18h] [bp-814h]
  const char *v26; // [sp+1Ch] [bp-810h]
  char v27; // [sp+26h] [bp-806h] BYREF
  char v28; // [sp+27h] [bp-805h] BYREF
  char s[2052]; // [sp+28h] [bp-804h] BYREF

  v2 = 0;
  v24 = 0;
  v26 = 0;
LABEL_2:
  if ( v2 >= sub_179C4() )
    goto LABEL_24;
  v3 = 4;
  v4 = (unsigned __int8)(*(_DWORD *)(dword_B3C4C + 4 * v2) * dword_B3C48);
  sub_79648((unsigned __int8)a1, v4);
  usleep(0x2710u);
  while ( 1 )
  {
    s[0] = 0;
    v5 = sub_17858(a1, v4, 254, 0, s);
    if ( s[0] == 26 )
      break;
    if ( !--v3 )
    {
      v6 = 4;
      do
      {
        s[0] = 0;
        v5 = sub_17858(a1, v4, 254, 0, s);
        if ( s[0] == 85 )
        {
          v8 = 1;
          goto LABEL_13;
        }
        --v6;
      }
      while ( v6 );
      if ( (unsigned int)dword_B308C > 3 )
      {
        snprintf(s, 0x800u, "sensor %d @ chain %d manufacture id unknown", *(_DWORD *)(dword_B3C4C + 4 * v2), a1);
        sub_3B6AC(3, s, 0, v15);
      }
      return -1;
    }
  }
  v8 = 0;
LABEL_13:
  v25 = 16 * v8;
  v26 = *(const char **)&aReadSensorOnAs[16 * v8 + 20];
  if ( (unsigned int)dword_B308C > 3 )
  {
    snprintf(s, 0x800u, "sensor %d @ chain %d is %s", *(_DWORD *)(dword_B3C4C + 4 * v2), a1, v26);
    v5 = sub_3B6AC(3, s, 0, v9);
  }
  v27 = 4;
  if ( dword_B3C48 )
  {
    if ( !sub_26AC4(v5) )
    {
      if ( (unsigned int)dword_B308C <= 3 )
        return 0;
      snprintf(s, 0x800u, "%s chain %d ,index %d not connected", "set_ext_mode", a1, v2);
      sub_3B6AC(3, s, 0, v10);
      v11 = dword_B308C;
      goto LABEL_22;
    }
    if ( !sub_17858(
            a1,
            (unsigned __int8)(*(_DWORD *)(dword_B3C4C + 4 * v2) * dword_B3C48),
            (unsigned __int8)aReadSensorOnAs[v25 + 31],
            1,
            &v27) )
    {
      if ( (unsigned int)dword_B308C <= 3 )
        return 0;
      snprintf(s, 0x800u, "set ext mode failed for senser %d @ chain %d", *(_DWORD *)(dword_B3C4C + 4 * v2), a1);
      sub_3B6AC(3, s, 0, v14);
      v11 = dword_B308C;
      goto LABEL_22;
    }
    LOBYTE(v16) = 11;
    while ( 1 )
    {
      v18 = sub_179E4(a1, v2, v8, 0);
      *(_WORD *)(*(_DWORD *)(*(_DWORD *)(dword_B3C50 + 4 * a1) + 4) + v24 + 2) = v18;
      v19 = (char)sub_179E4(a1, v2, v8, 1);
      *(_WORD *)(*(_DWORD *)(*(_DWORD *)(dword_B3C50 + 4 * a1) + 8) + v24 + 2) = (char)v19;
      LOBYTE(v17) = v18 - v19;
      if ( (unsigned __int8)(v17 + 2) <= 4u )
      {
        if ( (unsigned int)dword_B308C > 4 )
        {
          snprintf(
            s,
            0x800u,
            "sensor %d @ chain %d chip_temp_offset less than 2, no need to set offset",
            *(_DWORD *)(dword_B3C4C + 4 * v2),
            a1);
          sub_3B6AC(4, s, 0, v21);
        }
LABEL_45:
        ++v2;
        v24 += 6;
        goto LABEL_2;
      }
      v28 = v17;
      if ( dword_B3C48 )
      {
        if ( sub_26AC4(v19) )
        {
          if ( sub_17858(
                 a1,
                 (unsigned __int8)(*(_DWORD *)(dword_B3C4C + 4 * v2) * dword_B3C48),
                 (unsigned __int8)aReadSensorOnAs[v25 + 32],
                 1,
                 &v28) )
          {
            if ( (unsigned int)dword_B308C > 3 )
            {
              v17 = (char)v17;
              snprintf(s, 0x800u, "sensor %d @ chain %d, offset = %d", *(_DWORD *)(dword_B3C4C + 4 * v2), a1, (char)v17);
              sub_3B6AC(3, s, 0, v23);
              goto LABEL_34;
            }
          }
          else if ( (unsigned int)dword_B308C > 3 )
          {
            snprintf(s, 0x800u, "set offset failed for senser %d @ chain %d", *(_DWORD *)(dword_B3C4C + 4 * v2), a1);
            sub_3B6AC(3, s, 0, v22);
          }
        }
        else if ( (unsigned int)dword_B308C > 3 )
        {
          snprintf(s, 0x800u, "%s chain %d ,index %d not connected", "set_sensor_offset", a1, v2);
          sub_3B6AC(3, s, 0, v20);
        }
      }
      else if ( (unsigned int)dword_B308C > 3 )
      {
        strcpy(s, "can not set ext mode before calibration");
        sub_3B6AC(3, s, 0, *(_DWORD *)"calibration");
      }
      v17 = (char)v17;
LABEL_34:
      if ( v17 < 0 )
        v17 = -v17;
      if ( v17 > 2 )
      {
        v16 = (unsigned __int8)(v16 - 1);
        if ( v16 )
          continue;
      }
      goto LABEL_45;
    }
  }
  if ( (unsigned int)dword_B308C <= 3 )
    return 0;
  strcpy(s, "can not set ext mode before calibration");
  sub_3B6AC(3, s, 0, *(_DWORD *)"calibration");
  v11 = dword_B308C;
LABEL_22:
  if ( v11 <= 3 )
    return 0;
  snprintf(s, 0x800u, "sensor %d @ chain %d fail to set to ext mode", *(_DWORD *)(dword_B3C4C + 4 * v2), a1);
  sub_3B6AC(3, s, 0, v12);
LABEL_24:
  if ( (unsigned int)dword_B308C <= 3 )
    return 0;
  snprintf(s, 0x800u, "chain %d temp sensor %s\n", a1, v26);
  sub_3B6AC(3, s, 0, v13);
  return 0;
}
