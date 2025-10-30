int __fastcall sub_17908(int a1)
{
  int v2; // r7
  int v3; // r4
  int v4; // r5
  int v5; // r0
  int v6; // r6
  unsigned int v8; // r5
  int v9; // r3
  int v10; // r3
  int v11; // r3
  void *v12; // r3
  int v13; // r3
  int v14; // r3
  int v15; // r3
  int v16; // r6
  int v17; // r4
  char v18; // r4
  int v19; // r0
  int v20; // r3
  int v21; // r3
  int v22; // r3
  int v23; // [sp+Ch] [bp-828h]
  int v24; // [sp+10h] [bp-824h]
  int v25; // [sp+14h] [bp-820h]
  const char *v26; // [sp+24h] [bp-810h]
  char v27; // [sp+2Eh] [bp-806h] BYREF
  char v28; // [sp+2Fh] [bp-805h] BYREF
  char s[2052]; // [sp+30h] [bp-804h] BYREF

  v2 = 0;
  v24 = 4 * a1;
  v26 = 0;
LABEL_2:
  if ( sub_17674() <= v2 )
  {
    v12 = off_AFC24;
    goto LABEL_29;
  }
  v25 = 4 * v2;
  v3 = 4;
  v4 = (unsigned __int8)(*(_DWORD *)(dword_B0EDC + 4 * v2) * dword_B0ED8);
  sub_761FC((unsigned __int8)a1, v4);
  usleep(0x2710u);
  while ( 1 )
  {
    s[0] = 0;
    v5 = sub_174FC(a1, v4, 254, 0, s);
    if ( s[0] == 26 )
      break;
    if ( !--v3 )
    {
      v6 = 4;
      do
      {
        s[0] = 0;
        v5 = sub_174FC(a1, v4, 254, 0, s);
        if ( s[0] == 85 )
        {
          v8 = 1;
          v26 = "TMP451";
          goto LABEL_13;
        }
        --v6;
      }
      while ( v6 );
      if ( (unsigned int)off_AFC24 > 3 )
      {
        snprintf(s, 0x800u, "sensor %d @ chain %d manufacture id unknown", *(_DWORD *)(dword_B0EDC + 4 * v2), a1);
        sub_3AF5C(3, s, 0, v15);
      }
      return -1;
    }
  }
  v8 = 0;
  v26 = "NCT218";
LABEL_13:
  if ( (unsigned int)off_AFC24 > 3 )
  {
    snprintf(s, 0x800u, "sensor %d @ chain %d is %s", *(_DWORD *)(dword_B0EDC + 4 * v2), a1, v26);
    v5 = sub_3AF5C(3, s, 0, v9);
  }
  v27 = 4;
  if ( dword_B0ED8 )
  {
    if ( !sub_265C0(v5) )
    {
      if ( (unsigned int)off_AFC24 <= 3 )
        return 0;
      snprintf(s, 0x800u, "%s chain %d ,index %d not connected", "set_ext_mode", a1, v2);
      sub_3AF5C(3, s, 0, v10);
      goto LABEL_22;
    }
    if ( !sub_174FC(
            a1,
            (unsigned __int8)(*(_DWORD *)(dword_B0EDC + 4 * v2) * dword_B0ED8),
            (unsigned __int8)aReadSensorOnAs[16 * v8 + 31],
            1,
            &v27) )
    {
      if ( (unsigned int)off_AFC24 <= 3 )
        return 0;
      snprintf(s, 0x800u, "set ext mode failed for senser %d @ chain %d", *(_DWORD *)(dword_B0EDC + 4 * v2), a1);
      sub_3AF5C(3, s, 0, v13);
      goto LABEL_22;
    }
    v16 = 6 * v2;
    LOBYTE(v23) = 11;
    while ( 1 )
    {
      v18 = sub_17694(a1, v2, v8, 0);
      *(_WORD *)(*(_DWORD *)(*(_DWORD *)(dword_B0EE0 + v24) + 4) + v16 + 2) = v18;
      v19 = (char)sub_17694(a1, v2, v8, 1);
      v17 = (char)(v18 - v19);
      *(_WORD *)(*(_DWORD *)(*(_DWORD *)(dword_B0EE0 + v24) + 8) + v16 + 2) = (char)v19;
      if ( (unsigned __int8)(v17 + 2) <= 4u )
      {
        if ( (unsigned int)off_AFC24 <= 4 )
        {
LABEL_46:
          ++v2;
          goto LABEL_2;
        }
        ++v2;
        snprintf(
          s,
          0x800u,
          "sensor %d @ chain %d chip_temp_offset less than 2, no need to set offset",
          *(_DWORD *)(dword_B0EDC + v25),
          a1);
        sub_3AF5C(4, s, 0, v22);
        goto LABEL_2;
      }
      v28 = v17;
      if ( dword_B0ED8 )
      {
        if ( sub_265C0(v19) )
        {
          if ( sub_174FC(
                 a1,
                 (unsigned __int8)(*(_DWORD *)(dword_B0EDC + 4 * v2) * dword_B0ED8),
                 (unsigned __int8)aReadSensorOnAs[16 * v8 + 32],
                 1,
                 &v28) )
          {
            if ( (unsigned int)off_AFC24 > 3 )
            {
              snprintf(s, 0x800u, "sensor %d @ chain %d, offset = %d", *(_DWORD *)(dword_B0EDC + 4 * v2), a1, (char)v17);
LABEL_43:
              sub_3AF5C(3, s, 0, v20);
              if ( (v17 & 0x80u) != 0 )
                v17 = -(char)v17;
              if ( v17 <= 2 )
                goto LABEL_46;
              goto LABEL_37;
            }
          }
          else if ( (unsigned int)off_AFC24 > 3 )
          {
            snprintf(s, 0x800u, "set offset failed for senser %d @ chain %d", *(_DWORD *)(dword_B0EDC + 4 * v2), a1);
            sub_3AF5C(3, s, 0, v21);
          }
        }
        else if ( (unsigned int)off_AFC24 > 3 )
        {
          snprintf(s, 0x800u, "%s chain %d ,index %d not connected", "set_sensor_offset", a1, v2);
          goto LABEL_43;
        }
      }
      else if ( (unsigned int)off_AFC24 > 3 )
      {
        strcpy(s, "can not set ext mode before calibration");
        sub_3AF5C(3, s, 0, *(_DWORD *)"calibration");
      }
      if ( (v17 & 0x80u) != 0 )
        v17 = -(char)v17;
      if ( v17 <= 2 )
        goto LABEL_46;
LABEL_37:
      v23 = (unsigned __int8)(v23 - 1);
      if ( !v23 )
        goto LABEL_46;
    }
  }
  if ( (unsigned int)off_AFC24 <= 3 )
    return 0;
  strcpy(s, "can not set ext mode before calibration");
  sub_3AF5C(3, s, 0, *(_DWORD *)"calibration");
LABEL_22:
  if ( (unsigned int)off_AFC24 <= 3 )
    return 0;
  snprintf(s, 0x800u, "sensor %d @ chain %d fail to set to ext mode", *(_DWORD *)(dword_B0EDC + 4 * v2), a1);
  sub_3AF5C(3, s, 0, v11);
  v12 = off_AFC24;
LABEL_29:
  if ( (unsigned int)v12 > 3 )
  {
    snprintf(s, 0x800u, "chain %d temp sensor %s\n", a1, v26);
    sub_3AF5C(3, s, 0, v14);
  }
  return 0;
}
