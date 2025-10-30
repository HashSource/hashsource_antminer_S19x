const char *__fastcall sub_5000C(int a1)
{
  _DWORD *v2; // r0
  int v3; // r4
  unsigned int *v4; // r3
  unsigned int v5; // r5
  const char *v6; // r5
  _DWORD *v8; // r0
  _DWORD *v9; // r0
  _DWORD *v10; // r0
  _DWORD *v11; // r6
  int v12; // r0
  unsigned int *v13; // r3
  unsigned int v14; // r2
  unsigned int v15; // r2
  int v16; // r3
  int v17; // r3
  unsigned int *v18; // r3
  unsigned int v19; // r2
  unsigned int v20; // r2
  int v21; // r0
  int v22; // r3
  int v23; // r0
  int v24; // r0
  int v25; // r0
  int v26; // r0
  int v27; // r0
  int v28; // r0
  _DWORD v29[23]; // [sp+Ch] [bp-8FCh] BYREF
  char v30[160]; // [sp+68h] [bp-8A0h] BYREF
  char s[2048]; // [sp+108h] [bp-800h] BYREF

  v2 = (_DWORD *)sub_711EC(
                   "{\"id\": 0, \"jsonrpc\": \"2.0\", \"method\": \"fixture.submit_result\", \"params\": {\"version\": \""
                   "1.0.0\", \"key\": \"1212121212121212121212121212\", \"software_commit_id\": \"drop_level\", \"datas\""
                   ": [{\"miner_type\": \"S19k Pro\", \"board_name\": \"BHB56903\", \"sn\": \"JYZZYRNBDJAAA163V\", \"orde"
                   "r_id\": \"JYZZ20240101003-Y1\", \"hardware_version\": \"300\", \"bom_version\": \"10\", \"chip_techno"
                   "logy\": \"AL\", \"ft_version\": \"F1V23B3C2R\", \"bin\": 3, \"rule_version\": \"1\", \"rule_level\": "
                   "2, \"rule_result\": {\"result\": true, \"sensors\": [{\"name\": \"CTRLBOARD\", \"datas\": [{\"id\": 0"
                   ", \"type\": \"\", \"code\": \"0\", \"msg\": \"ok\", \"values\": [38, 38]}, {\"id\": 1, \"type\": \"\""
                   ", \"code\": \"0\", \"msg\": \"ok\", \"values\": [49, 49]}]}], \"pattern\": {\"nonce_rate\": 9991, \"c"
                   "ode\": \"1\", \"msg\": \"ok\", \"asic_number\": 77, \"asic_nonces\": [7152, 7152, 7150, 7151, 7150, 7"
                   "152, 7152, 7152, 7149, 7152, 7152, 7152, 7152, 7149, 7152, 7152, 7151, 7152, 7152, 7151, 7151, 7151, "
                   "7119, 7152, 7151, 7152, 7152, 7152, 7152, 7150, 7152, 7149, 7152, 7152, 7152, 7152, 7152, 7150, 7152,"
                   " 7152, 7152, 7152, 7150, 7152, 7152, 7152, 7152, 7151, 7151, 7135, 7152, 7152, 7152, 7144, 7152, 7152"
                   ", 7152, 7152, 7150, 7152, 7152, 7152, 7152, 7148, 7152, 7152, 7150, 7152, 7151, 7151, 7151, 7152, 715"
                   "0, 7144, 7150, 7152, 7148]}, \"commons\": [{\"name\": \"eeprom\", \"code\": \"0\", \"msg\": \"ok\"}, "
                   "{\"name\": \"pic\", \"code\": \"0\", \"msg\": \"ng\"}, {\"name\": \"power\", \"code\": \"0\", \"msg\": \"ok\"}]}}]}}",
                   0,
                   v29);
  v3 = (int)v2;
  if ( !v2 )
  {
    if ( (unsigned int)off_AFC24 > 3 )
    {
      v6 = 0;
      snprintf(s, 0x800u, "error: on line %d: %s\n", v29[0], v30);
      sub_3AF5C(3, s, 0, v17);
      return v6;
    }
    return 0;
  }
  if ( *v2 )
  {
    if ( (unsigned int)off_AFC24 > 3 )
    {
      strcpy(s, "error: root is not an object\n");
      sub_3AF5C(3, s, 0, *(int *)"\n");
    }
    if ( *(_DWORD *)(v3 + 4) == -1 )
      return 0;
    v4 = (unsigned int *)(v3 + 4);
    __dmb(0xBu);
    do
    {
      v5 = __ldrex(v4);
      v6 = (const char *)(v5 - 1);
    }
    while ( __strex((unsigned int)v6, v4) );
    if ( v6 )
      return 0;
LABEL_37:
    sub_74C7C(v3);
    return v6;
  }
  v8 = (_DWORD *)sub_72B10(v2, "params");
  if ( v8 )
  {
    if ( !*v8 )
    {
      v9 = (_DWORD *)sub_72B10(v8, "datas");
      if ( v9 )
      {
        if ( *v9 == 1 )
        {
          v10 = (_DWORD *)sub_736A8(v9, 0);
          v11 = v10;
          if ( v10 )
          {
            if ( !*v10 )
            {
              v12 = sub_74258(a1);
              if ( sub_72C40(v11, "board_name", v12) )
              {
                if ( (unsigned int)off_AFC24 > 3 )
                {
                  strcpy(s, "error: unable to set new board_name\n");
                  sub_3AF5C(3, s, 0, *(int *)"rd_name\n");
                  if ( (unsigned int)off_AFC24 > 3 )
                  {
                    snprintf(s, 0x800u, "boardname:%s", (const char *)a1);
                    sub_3AF5C(3, s, 0, v22);
                  }
                }
                goto LABEL_19;
              }
              v21 = sub_74258(a1 + 48);
              if ( sub_72C40(v11, "sn", v21) )
              {
                if ( (unsigned int)off_AFC24 > 3 )
                {
                  strcpy(s, "error: unable to set new sn\n");
                  sub_3AF5C(3, s, 0, *(int *)"");
                }
                goto LABEL_19;
              }
              v23 = sub_74258(a1 + 96);
              if ( sub_72C40(v11, "order_id", v23) )
              {
                if ( (unsigned int)off_AFC24 > 3 )
                {
                  strcpy(s, "error: unable to set new order_id\n");
                  sub_3AF5C(3, s, 0, *(unsigned __int16 *)"");
                }
                goto LABEL_19;
              }
              v24 = sub_74258(a1 + 144);
              if ( sub_72C40(v11, "bom_version", v24) )
              {
                if ( (unsigned int)off_AFC24 > 3 )
                {
                  strcpy(s, "error: unable to set new bom_version\n");
                  sub_3AF5C(3, s, 0, *(int *)"_version\n");
                }
                goto LABEL_19;
              }
              v25 = sub_74258(a1 + 192);
              if ( sub_72C40(v11, "chip_technology", v25) )
              {
                if ( (unsigned int)off_AFC24 > 3 )
                {
                  strcpy(s, "error: unable to set new chip_tech\n");
                  sub_3AF5C(3, s, 0, *(int *)"p_tech\n");
                }
                goto LABEL_19;
              }
              v26 = sub_74258(a1 + 240);
              if ( sub_72C40(v11, "ft_version", v26) )
              {
                if ( (unsigned int)off_AFC24 > 3 )
                {
                  strcpy(s, "error: unable to set new ft_ver\n");
                  sub_3AF5C(3, s, 0, *(int *)"ver\n");
                }
                goto LABEL_19;
              }
              v27 = sub_74774(*(_DWORD *)(a1 + 288), 0);
              if ( sub_72C40(v11, "bin", v27) )
              {
                if ( (unsigned int)off_AFC24 > 3 )
                {
                  strcpy(s, "error: unable to set new bin\n");
                  sub_3AF5C(3, s, 0, *(int *)"\n");
                }
                goto LABEL_19;
              }
              v28 = sub_74774(*(_DWORD *)(a1 + 292), 0);
              if ( sub_72C40(v11, "rule_level", v28) )
              {
                if ( (unsigned int)off_AFC24 > 3 )
                {
                  strcpy(s, "error: unable to set new rule_level\n");
                  sub_3AF5C(3, s, 0, *(int *)"e_level\n");
                }
LABEL_19:
                if ( *(_DWORD *)(v3 + 4) != -1 )
                {
                  v6 = 0;
                  sub_4FFE4(v3);
                  return v6;
                }
                return 0;
              }
            }
          }
        }
      }
    }
  }
  v6 = (const char *)sub_6D06C(v3, 0);
  if ( !v6 )
  {
    if ( (unsigned int)off_AFC24 > 3 )
    {
      strcpy(s, "error: unable to dump json to string\n");
      sub_3AF5C(3, s, 0, *(int *)"o string\n");
    }
    if ( *(_DWORD *)(v3 + 4) == -1 )
      return 0;
    v18 = (unsigned int *)(v3 + 4);
    __dmb(0xBu);
    do
    {
      v19 = __ldrex(v18);
      v20 = v19 - 1;
    }
    while ( __strex(v20, v18) );
    if ( v20 )
      return 0;
    goto LABEL_37;
  }
  if ( *(_DWORD *)(v3 + 4) != -1 )
  {
    v13 = (unsigned int *)(v3 + 4);
    __dmb(0xBu);
    do
    {
      v14 = __ldrex(v13);
      v15 = v14 - 1;
    }
    while ( __strex(v15, v13) );
    if ( !v15 )
      sub_74C7C(v3);
  }
  if ( (unsigned int)off_AFC24 > 3 )
  {
    snprintf(s, 0x800u, "Updated JSON string:\n%s\n", v6);
    sub_3AF5C(3, s, 0, v16);
  }
  return v6;
}
