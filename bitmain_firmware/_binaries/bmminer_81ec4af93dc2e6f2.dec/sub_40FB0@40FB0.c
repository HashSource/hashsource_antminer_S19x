int sub_40FB0()
{
  char *v0; // r3
  void *v1; // r1
  _BOOL4 v2; // r0
  int v3; // r5
  int v5; // r3
  int v6; // r3
  int v7; // r5
  int v8; // r3
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r7
  int v13; // r0
  int i; // r5
  int v15; // r0
  int v16; // r11
  int v17; // r0
  int v18; // r1
  int v19; // r3
  int v20; // r3
  int v21; // r3
  int v22; // r0
  int v23; // r3
  int v24; // r7
  size_t v25; // r0
  size_t v26; // r0
  const char *v27; // r0
  size_t v28; // r0
  size_t v29; // r2
  int v30; // r3
  int v31; // r3
  int v32; // r3
  int v33; // r3
  int v34; // r3
  char s1[4]; // [sp+Ch] [bp-830h] BYREF
  int v36; // [sp+10h] [bp-82Ch]
  char v37; // [sp+14h] [bp-828h]
  _DWORD v38[8]; // [sp+18h] [bp-824h] BYREF
  char s[2040]; // [sp+38h] [bp-804h] BYREF

  v36 = 0;
  v37 = 0;
  *(_DWORD *)s1 = 0;
  sub_3C1FC();
  v1 = off_AFC24;
  dword_AFE58 = 2;
  byte_4B6CCD = 1;
  if ( (unsigned int)off_AFC24 <= 3 || (sub_3F280(), v1 = off_AFC24, (unsigned int)off_AFC24 <= 3) )
  {
    if ( byte_B3F78 )
      goto LABEL_3;
  }
  else
  {
    snprintf(s, 0x800u, "Miner compile time: %s type: %s\n", byte_B3D78, dest);
    sub_3AF5C(3, s, 0, v5);
    v0 = &byte_B3F78;
    v1 = off_AFC24;
    if ( byte_B3F78 )
    {
      if ( (unsigned int)off_AFC24 <= 3 )
        goto LABEL_3;
      snprintf(s, 0x800u, "Miner sn: %s\n", &byte_B3F78);
      sub_3AF5C(3, s, 0, v6);
      v1 = off_AFC24;
    }
  }
  if ( (unsigned int)v1 <= 3 )
    goto LABEL_14;
  strcpy(s, "commit version: 3c182d4d 2025-01-16 15:11:29, build by: jenkins 2025-02-05 17:19:36\n");
  sub_3AF5C(3, s, 0, (int)v0);
  if ( (unsigned int)off_AFC24 <= 3 )
    goto LABEL_3;
  snprintf(s, 0x800u, "opt_multi_version     = %d\n", dword_AFBE0);
  sub_3AF5C(3, s, 0, v19);
  if ( (unsigned int)off_AFC24 <= 3 )
  {
LABEL_14:
    v2 = sub_40F20();
    v7 = v2;
    if ( !v2 )
      goto LABEL_15;
LABEL_4:
    if ( !dword_B413C )
      dword_B413C = 2;
LABEL_6:
    if ( !sub_52308(v2) )
      goto LABEL_17;
    return 0;
  }
  snprintf(s, 0x800u, "opt_bitmain_ab        = %d\n", (unsigned __int8)byte_AFBE4);
  sub_3AF5C(3, s, 0, v20);
  if ( (unsigned int)off_AFC24 <= 3 )
  {
LABEL_3:
    v2 = sub_40F20();
    if ( !v2 )
      goto LABEL_6;
    goto LABEL_4;
  }
  snprintf(s, 0x800u, "mid_auto_gen          = %d\n", 0);
  sub_3AF5C(3, s, 0, v21);
  v2 = sub_40F20();
  v7 = v2;
  if ( v2 )
    goto LABEL_4;
LABEL_15:
  if ( (unsigned int)off_AFC24 <= 3 )
    goto LABEL_6;
  snprintf(s, 0x800u, "opt_bitmain_work_mode = %d\n", dword_B413C);
  v9 = sub_3AF5C(3, s, v7, v8);
  if ( sub_52308(v9) )
    return 0;
LABEL_17:
  sub_1730C();
  v10 = sub_173DC();
  v11 = sub_570AC(v10);
  sub_57124(v11);
  byte_AFBE4 = 1;
  sub_2DC00();
  sub_2EB8C();
  if ( sub_2606C() )
    return 0;
  sub_1829C();
  sub_40968();
  sub_21C14();
  v12 = 2;
  sub_16E7C(100);
  v13 = sub_400C8();
  sub_5A828(v13);
  while ( 2 )
  {
    sub_3F9DC();
    if ( sub_266E0() != 3 )
    {
      if ( (unsigned int)off_AFC24 > 3 )
      {
        strcpy(s, "Not enough chain, exit.\n");
        sub_3AF5C(3, s, 0, *(int *)"hain, exit.\n");
      }
      sub_46318(2, 0);
      return -1;
    }
    if ( !sub_266E0() )
    {
      if ( (unsigned int)off_AFC24 > 3 )
      {
        v3 = -1;
        strcpy(s, "No chain exist, exit.\n");
        sub_3AF5C(3, s, 0, *(unsigned __int16 *)"");
        return v3;
      }
      return -1;
    }
    if ( byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 4 )
    {
      v22 = sub_266E0();
      snprintf(s, 0x800u, "chain num = %d", v22);
      sub_3AF5C(5, s, 0, v23);
    }
    for ( i = 0; i != 4; ++i )
    {
      v15 = i;
      v16 = (unsigned __int8)i;
      if ( sub_266F0(v15) )
        sub_751EC(v16);
    }
    v17 = sub_19B0C();
    v3 = v17;
    if ( !v17 )
    {
      if ( (unsigned int)off_AFC24 > 3 )
      {
        snprintf(s, 0x800u, "eeprom load ret:%d", 0);
        sub_3AF5C(3, s, 0, v34);
      }
      if ( v12 != 1 )
      {
        v24 = 0;
        memset(v38, 0, sizeof(v38));
        do
        {
          if ( sub_266F0(v24) )
          {
            memset(v38, 0, sizeof(v38));
            if ( sub_1CF70(v24, (int)v38) )
            {
              if ( (unsigned int)off_AFC24 <= 3 )
                return 0;
              snprintf(s, 0x800u, "get board name failed for chain:%d\n", v24);
              sub_3AF5C(3, s, 0, v32);
              goto LABEL_64;
            }
            v29 = strlen((const char *)v38);
            if ( s1[0] )
            {
              if ( strncmp(s1, (const char *)v38, v29) && !sub_27500((char *)v38) && !sub_27500(s1) )
              {
                if ( (unsigned int)off_AFC24 <= 3 )
                  return 0;
                snprintf(
                  s,
                  0x800u,
                  "get a different board name for chain:%d, pre board_name:%s, current board_name:%s\n",
                  v24,
                  s1,
                  (const char *)v38);
                sub_3AF5C(3, s, 0, v30);
LABEL_64:
                if ( (unsigned int)off_AFC24 <= 3 )
                  return 0;
                strcpy(s, "eeprom not find board_name!!!");
                sub_3AF5C(3, s, 0, *(int *)"!");
                return v3;
              }
            }
            else
            {
              strncpy(s1, (const char *)v38, v29);
            }
          }
          ++v24;
        }
        while ( v24 != 4 );
        if ( sub_40F20() )
        {
          if ( !strncmp(s1, "BHB56902", 8u) || !strncmp(s1, "BHB56903", 8u) )
          {
            if ( (unsigned int)off_AFC24 <= 3 )
              return -1;
            v3 = -1;
            strcpy(s, "firmware type err");
            sub_3AF5C(3, s, 0, *(int *)"e err");
            return v3;
          }
          v25 = strlen(s1);
          s1[v25 - 1] -= 2;
        }
        v26 = strlen(s1);
        strncpy(byte_4B6CE0, s1, v26);
        v3 = sub_1D1C4(s1);
        if ( v3 )
          return v3;
        v27 = (const char *)sub_26510();
        v3 = strncmp(v27, s1, 9u);
        if ( v3 )
        {
          memset(&v38[3], 0, 20);
          strcpy((char *)v38, "/etc/topol_");
          v28 = strlen(s1);
          strncat((char *)v38, s1, v28);
          strcat((char *)v38, ".conf");
          if ( !sub_26EE8((int)v38) )
            sub_27370();
          if ( (unsigned int)off_AFC24 > 3 )
          {
            strcpy(s, "reload start.\n");
            sub_3AF5C(3, s, 0, *(int *)".\n");
          }
          v12 = 1;
          continue;
        }
        if ( (unsigned int)off_AFC24 > 4 )
        {
          snprintf(s, 0x800u, "eeprom and topol.conf has same board_name: %s, no need update config\n", s1);
          sub_3AF5C(4, s, 0, v33);
        }
        return v3;
      }
      return 0;
    }
    break;
  }
  if ( v17 <= 0 )
    v18 = 255;
  else
    v18 = v17 >> 16;
  sub_46318(3, v18);
  if ( (unsigned int)off_AFC24 <= 3 )
    return -1;
  strcpy(s, "Fixture data load failed, exit.\n");
  sub_3AF5C(3, s, 0, *(int *)"it.\n");
  if ( (unsigned int)off_AFC24 <= 3 )
    return -1;
  snprintf(s, 0x800u, "eeprom load ret:%d", -1);
  sub_3AF5C(3, s, 0, v31);
  return -1;
}
