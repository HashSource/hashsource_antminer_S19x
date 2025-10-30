int sub_42B9C()
{
  char *v0; // r3
  unsigned int v1; // r2
  _BOOL4 v2; // r0
  int v3; // r8
  int v5; // r3
  int v6; // r3
  int v7; // r3
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r6
  int v12; // r0
  int v13; // r3
  int i; // r4
  int v15; // r8
  int v17; // r0
  int v18; // r1
  int v19; // r3
  int v20; // r3
  int v21; // r3
  int v22; // r8
  size_t v23; // r0
  size_t v24; // r0
  int v25; // r0
  const char *v26; // r0
  size_t v27; // r0
  size_t v28; // r0
  int v29; // r3
  unsigned int v30; // r3
  size_t v31; // r0
  int v32; // r3
  int v33; // r3
  int v34; // r3
  int v35; // r3
  int v36; // [sp+Ch] [bp-838h]
  char v37[4]; // [sp+14h] [bp-830h] BYREF
  int v38; // [sp+18h] [bp-82Ch]
  char v39; // [sp+1Ch] [bp-828h]
  char v40[12]; // [sp+20h] [bp-824h] BYREF
  int v41; // [sp+2Ch] [bp-818h]
  int v42; // [sp+30h] [bp-814h]
  int v43; // [sp+34h] [bp-810h]
  int v44; // [sp+38h] [bp-80Ch]
  int v45; // [sp+3Ch] [bp-808h]
  char s[2048]; // [sp+40h] [bp-804h] BYREF

  *(_DWORD *)v37 = 0;
  v38 = 0;
  v39 = 0;
  sub_3C9B0();
  v1 = dword_B308C;
  dword_B32C0 = 2;
  byte_534B59 = 1;
  if ( (unsigned int)dword_B308C <= 3 || (sub_40DBC(), v1 = dword_B308C, (unsigned int)dword_B308C <= 3) )
  {
    if ( byte_B6CEC )
      goto LABEL_3;
  }
  else
  {
    snprintf(s, 0x800u, "Miner compile time: %s type: %s\n", dest, byte_B6BEC);
    sub_3B6AC(3, s, 0, v5);
    v0 = &byte_B6CEC;
    v1 = dword_B308C;
    if ( byte_B6CEC )
    {
      if ( (unsigned int)dword_B308C <= 3 )
        goto LABEL_3;
      snprintf(s, 0x800u, "Miner sn: %s\n", &byte_B6CEC);
      sub_3B6AC(3, s, 0, v6);
      v1 = dword_B308C;
    }
  }
  if ( v1 <= 3 )
    goto LABEL_12;
  strcpy(s, "commit version: 3c182d4d 2025-01-16 15:11:29, build by: jenkins 2025-02-05 17:05:32\n");
  sub_3B6AC(3, s, 0, (int)v0);
  if ( (unsigned int)dword_B308C <= 3 )
    goto LABEL_3;
  snprintf(s, 0x800u, "opt_multi_version     = %d\n", dword_B3048);
  sub_3B6AC(3, s, 0, v19);
  if ( (unsigned int)dword_B308C <= 3 )
    goto LABEL_12;
  snprintf(s, 0x800u, "opt_bitmain_ab        = %d\n", (unsigned __int8)byte_B304C);
  sub_3B6AC(3, s, 0, v20);
  if ( (unsigned int)dword_B308C <= 3 )
  {
LABEL_3:
    v2 = sub_42B0C();
    if ( !v2 )
      goto LABEL_4;
    goto LABEL_34;
  }
  snprintf(s, 0x800u, "mid_auto_gen          = %d\n", 1);
  sub_3B6AC(3, s, 0, v21);
LABEL_12:
  v2 = sub_42B0C();
  if ( v2 )
  {
LABEL_34:
    if ( !dword_B6EB4 )
      dword_B6EB4 = 2;
LABEL_4:
    if ( !sub_53F6C(v2) )
      goto LABEL_15;
    return 0;
  }
  if ( (unsigned int)dword_B308C <= 3 )
    goto LABEL_4;
  snprintf(s, 0x800u, "opt_bitmain_work_mode = %d\n", dword_B6EB4);
  v8 = sub_3B6AC(3, s, 0, v7);
  if ( sub_53F6C(v8) )
    return 0;
LABEL_15:
  sub_1765C();
  v9 = sub_1772C();
  v10 = sub_55AF0(v9);
  sub_55B50(v10);
  byte_B304C = 1;
  sub_2E204();
  sub_2F1B0();
  v11 = sub_26530();
  if ( v11 )
    return 0;
  sub_18678();
  sub_4251C();
  sub_2212C();
  sub_1718C(100);
  sub_41CF8();
  while ( 2 )
  {
    sub_4162C();
    if ( sub_26BFC() != 3 )
    {
      if ( (unsigned int)dword_B308C > 3 )
      {
        strcpy(s, "Not enough chain, exit.\n");
        sub_3B6AC(3, s, 0, *(int *)"hain, exit.\n");
      }
      sub_481F0(2, 0);
      return -1;
    }
    if ( sub_26BFC() )
    {
      if ( byte_5C0EFC || byte_4B9A21 || dword_B3094 > 4 )
      {
        v12 = sub_26BFC();
        snprintf(s, 0x800u, "chain num = %d", v12);
        sub_3B6AC(5, s, 0, v13);
      }
      for ( i = 0; i != 4; ++i )
      {
        v15 = (unsigned __int8)i;
        if ( sub_26C0C(i) )
          sub_78648(v15);
      }
      v17 = sub_19F64();
      v36 = v17;
      if ( v17 )
      {
        if ( v17 <= 0 )
          v18 = 255;
        else
          v18 = v17 >> 16;
        sub_481F0(3, v18);
        if ( (unsigned int)dword_B308C <= 3 )
          return -1;
        strcpy(s, "Fixture data load failed, exit.\n");
        sub_3B6AC(3, s, 0, *(int *)"it.\n");
        if ( (unsigned int)dword_B308C <= 3 )
          return -1;
        v36 = -1;
        snprintf(s, 0x800u, "eeprom load ret:%d", -1);
        sub_3B6AC(3, s, 0, v33);
        return v36;
      }
      if ( (unsigned int)dword_B308C > 3 )
      {
        snprintf(s, 0x800u, "eeprom load ret:%d", 0);
        sub_3B6AC(3, s, 0, v32);
      }
      if ( v11 )
        return v36;
      v22 = 0;
      memset(v40, 0, sizeof(v40));
      v42 = 0;
      v43 = 0;
      v41 = 0;
      v44 = 0;
      v45 = 0;
      do
      {
        if ( sub_26C0C(v22) )
        {
          memset(v40, 0, sizeof(v40));
          v41 = 0;
          v42 = 0;
          v43 = 0;
          v44 = 0;
          v45 = 0;
          if ( sub_1CE40(v22, (int)v40) )
          {
            if ( (unsigned int)dword_B308C <= 3 )
              return v36;
            snprintf(s, 0x800u, "get board name failed for chain:%d\n", v22);
            sub_3B6AC(3, s, 0, v34);
            v30 = dword_B308C;
            goto LABEL_65;
          }
          if ( v37[0] )
          {
            v28 = strlen(v40);
            if ( strncmp(v37, v40, v28) && !sub_27A7C(v40) && !sub_27A7C(v37) )
            {
              if ( (unsigned int)dword_B308C <= 3 )
                return v36;
              snprintf(
                s,
                0x800u,
                "get a different board name for chain:%d, pre board_name:%s, current board_name:%s\n",
                v22,
                v37,
                v40);
              sub_3B6AC(3, s, 0, v29);
              v30 = dword_B308C;
LABEL_65:
              if ( v30 > 3 )
              {
                strcpy(s, "eeprom not find board_name!!!");
                sub_3B6AC(3, s, 0, *(int *)"!");
              }
              return v36;
            }
          }
          else
          {
            v31 = strlen(v40);
            strncpy(v37, v40, v31);
          }
        }
        ++v22;
      }
      while ( v22 != 4 );
      if ( sub_42B0C() )
      {
        if ( !strncmp(v37, "BHB56902", 8u) || !strncmp(v37, "BHB56903", 8u) )
        {
          if ( (unsigned int)dword_B308C <= 3 )
            return -1;
          v3 = -1;
          strcpy(s, "firmware type err");
          sub_3B6AC(3, s, 0, *(int *)"e err");
          return v3;
        }
        v23 = strlen(v37);
        v37[v23 - 1] -= 2;
      }
      v24 = strlen(v37);
      strncpy(byte_534B6C, v37, v24);
      v25 = sub_1D098(v37);
      if ( v25 )
        return v25;
      v26 = (const char *)sub_26A14();
      v3 = strncmp(v26, v37, 9u);
      if ( v3 )
      {
        v41 = 0;
        v42 = 0;
        v43 = 0;
        v44 = 0;
        v45 = 0;
        strcpy(v40, "/etc/topol_");
        v27 = strlen(v37);
        strncat(v40, v37, v27);
        strcat(v40, ".conf");
        if ( !sub_27440((int)v40) )
          sub_278E8();
        if ( (unsigned int)dword_B308C > 3 )
        {
          strcpy(s, "reload start.\n");
          sub_3B6AC(3, s, 0, *(int *)".\n");
        }
        v11 = 1;
        continue;
      }
      if ( (unsigned int)dword_B308C > 4 )
      {
        snprintf(s, 0x800u, "eeprom and topol.conf has same board_name: %s, no need update config\n", v37);
        sub_3B6AC(4, s, 0, v35);
      }
    }
    else if ( (unsigned int)dword_B308C > 3 )
    {
      v3 = -1;
      strcpy(s, "No chain exist, exit.\n");
      sub_3B6AC(3, s, 0, *(unsigned __int16 *)"");
    }
    else
    {
      return -1;
    }
    return v3;
  }
}
