int __fastcall sub_12B38(int a1, int a2)
{
  _DWORD *v3; // r0
  _DWORD *v4; // r5
  int v5; // r3
  _DWORD *v6; // r0
  _DWORD *v7; // r7
  int v8; // r0
  int v9; // r3
  _DWORD *v10; // r0
  _DWORD *v11; // r7
  int v12; // r0
  int v13; // r3
  _DWORD *v14; // r0
  _DWORD *v15; // r7
  int v16; // r0
  int v17; // r3
  int v18; // r0
  float v19; // s15
  _DWORD *v20; // r0
  _DWORD *v21; // r7
  int v22; // r0
  int v23; // r3
  _DWORD *v24; // r0
  _DWORD *v25; // r7
  int v26; // r0
  int v27; // r3
  _DWORD *v28; // r0
  _DWORD *v29; // r7
  int v30; // r3
  _DWORD *v31; // r0
  _DWORD *v32; // r7
  int v33; // r0
  int v34; // r3
  _DWORD *v35; // r0
  _DWORD *v36; // r7
  int v37; // r0
  int v38; // r3
  _DWORD *v39; // r0
  _DWORD *v40; // r7
  int v41; // r3
  _DWORD *v42; // r0
  _DWORD *v43; // r7
  int v44; // r0
  int v45; // r3
  _DWORD *v46; // r0
  _DWORD *v47; // r7
  int v48; // r0
  int v49; // r3
  _DWORD *v50; // r0
  _DWORD *v51; // r7
  int v52; // r0
  int v53; // r3
  _DWORD *v54; // r0
  _DWORD *v55; // r7
  int v56; // r0
  int v57; // r3
  _DWORD *v58; // r0
  int v59; // r3
  _DWORD *v60; // r5
  int v61; // r0
  int v62; // r3
  int v63; // r0
  char v65[2052]; // [sp+0h] [bp-804h] BYREF

  v3 = (_DWORD *)sub_75FEC(a1, "strategy");
  v4 = v3;
  if ( v3 && !*v3 )
  {
    if ( (unsigned int)dword_B308C > 4 )
    {
      strcpy(v65, "strategy:\n");
      ((void (__fastcall *)(int, char *, _DWORD))sub_3B6AC)(4, v65, 0);
    }
    v6 = (_DWORD *)sub_75FEC(v4, "open_core_high_voltage");
    v7 = v6;
    if ( v6 && *v6 == 3 )
    {
      if ( (unsigned int)dword_B308C > 4 )
      {
        v8 = ((int (*)(void))sub_77C98)();
        snprintf(v65, 0x800u, "open_core_high_voltage: %d\n", v8);
        ((void (__fastcall *)(int, char *, _DWORD, int))sub_3B6AC)(4, v65, 0, v9);
      }
      *(_DWORD *)(a2 + 144) = sub_77C98(v7);
    }
    else if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy(v65, "get open_core_high_voltage failed\n");
      ((void (__fastcall *)(int, char *, _DWORD, _DWORD))sub_3B6AC)(3, v65, 0, *(_DWORD *)"ailed\n");
    }
    v10 = (_DWORD *)sub_75FEC(v4, "inc_freq_voltage");
    v11 = v10;
    if ( v10 && *v10 == 3 )
    {
      if ( (unsigned int)dword_B308C > 4 )
      {
        v12 = sub_77C98(v10);
        snprintf(v65, 0x800u, "inc_freq_voltage: %d\n", v12);
        ((void (__fastcall *)(int, char *, _DWORD, int))sub_3B6AC)(4, v65, 0, v13);
      }
      *(_DWORD *)(a2 + 148) = sub_77C98(v11);
    }
    else if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy(v65, "get version array failed\n");
      ((void (__fastcall *)(int, char *, _DWORD, _DWORD))sub_3B6AC)(3, v65, 0, *(_DWORD *)"array failed\n");
    }
    v14 = (_DWORD *)sub_75FEC(v4, "inc_freq_step");
    v15 = v14;
    if ( v14 && *v14 == 3 )
    {
      if ( (unsigned int)dword_B308C > 4 )
      {
        v16 = sub_77C98(v14);
        snprintf(v65, 0x800u, "inc_freq_step: %d\n", v16);
        ((void (__fastcall *)(int, char *, _DWORD, int))sub_3B6AC)(4, v65, 0, v17);
      }
      v18 = sub_77C98(v15);
      v19 = sub_8FDC4(v18) / 100.0;
      *(float *)(a2 + 152) = v19;
    }
    else if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy(v65, "get inc_freq_step failed\n");
      ((void (__fastcall *)(int, char *, _DWORD, _DWORD))sub_3B6AC)(3, v65, 0, *(_DWORD *)"_step failed\n");
    }
    v20 = (_DWORD *)sub_75FEC(v4, "inc_freq_delay");
    v21 = v20;
    if ( v20 && *v20 == 3 )
    {
      if ( (unsigned int)dword_B308C > 4 )
      {
        v22 = sub_77C98(v20);
        snprintf(v65, 0x800u, "inc_freq_delay: %d\n", v22);
        ((void (__fastcall *)(int, char *, _DWORD, int))sub_3B6AC)(4, v65, 0, v23);
      }
      *(_DWORD *)(a2 + 156) = sub_77C98(v21);
    }
    else if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy(v65, "get inc_freq_delay failed\n");
      ((void (__fastcall *)(int, char *, _DWORD, _DWORD))sub_3B6AC)(3, v65, 0, *(unsigned __int16 *)"");
    }
    v24 = (_DWORD *)sub_75FEC(v4, "poweron_with_reset_high");
    v25 = v24;
    if ( v24 && *v24 == 3 )
    {
      if ( (unsigned int)dword_B308C > 4 )
      {
        v26 = sub_77C98(v24);
        snprintf(v65, 0x800u, "poweron_with_reset_high: %d\n", v26);
        ((void (__fastcall *)(int, char *, _DWORD, int))sub_3B6AC)(4, v65, 0, v27);
      }
      *(_DWORD *)(a2 + 160) = sub_77C98(v25);
    }
    else if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy(v65, "get poweron_with_reset_high failed\n");
      ((void (__fastcall *)(int, char *, _DWORD, _DWORD))sub_3B6AC)(3, v65, 0, *(_DWORD *)"failed\n");
    }
    v28 = (_DWORD *)sub_75FEC(v4, "test_loop_securely_find_asic_num");
    v29 = v28;
    if ( v28 && *v28 == 5 )
    {
      if ( (unsigned int)dword_B308C > 4 )
      {
        snprintf(v65, 0x800u, "test_loop_securely_find_asic_num: %d\n", 1);
        ((void (__fastcall *)(int, char *, _DWORD, int))sub_3B6AC)(4, v65, 0, v30);
      }
      *(_BYTE *)(a2 + 172) = *v29 == 5;
    }
    else
    {
      if ( (unsigned int)dword_B308C > 3 )
      {
        strcpy(v65, "get test_loop_securely_find_asic_num failed\n");
        ((void (__fastcall *)(int, char *, _DWORD, _DWORD))sub_3B6AC)(3, v65, 0, *(_DWORD *)"");
      }
      *(_BYTE *)(a2 + 172) = 0;
    }
    v31 = (_DWORD *)sub_75FEC(v4, "pid_target_temp");
    v32 = v31;
    if ( v31 && *v31 == 3 )
    {
      if ( (unsigned int)dword_B308C > 4 )
      {
        v33 = sub_77C98(v31);
        snprintf(v65, 0x800u, "pid_target_temp: %d\n", v33);
        ((void (__fastcall *)(int, char *, _DWORD, int))sub_3B6AC)(4, v65, 0, v34);
      }
      *(_DWORD *)(a2 + 164) = sub_77C98(v32);
    }
    else if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy(v65, "get pid_target_temp failed\n");
      ((void (__fastcall *)(int, char *, _DWORD, _DWORD))sub_3B6AC)(3, v65, 0, *(_DWORD *)"et_temp failed\n");
    }
    v35 = (_DWORD *)sub_75FEC(v4, "voltage_adjust_setp");
    v36 = v35;
    if ( v35 && *v35 == 3 )
    {
      if ( (unsigned int)dword_B308C > 4 )
      {
        v37 = sub_77C98(v35);
        snprintf(v65, 0x800u, "voltage_adjust_setp: %d\n", v37);
        ((void (__fastcall *)(int, char *, _DWORD, int))sub_3B6AC)(4, v65, 0, v38);
      }
      *(_DWORD *)(a2 + 168) = sub_77C98(v36);
    }
    else if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy(v65, "get voltage_adjust_setp failed\n");
      ((void (__fastcall *)(int, char *, _DWORD, _DWORD))sub_3B6AC)(3, v65, 0, *(_DWORD *)"ed\n");
    }
    v39 = (_DWORD *)sub_75FEC(v4, "low_freq_miner_mode");
    v40 = v39;
    if ( v39 && *v39 == 5 )
    {
      if ( (unsigned int)dword_B308C > 4 )
      {
        snprintf(v65, 0x800u, "low_freq_miner_mode: %d\n", 1);
        ((void (__fastcall *)(int, char *, _DWORD, int))sub_3B6AC)(4, v65, 0, v41);
      }
      *(_BYTE *)(a2 + 173) = *v40 == 5;
    }
    else
    {
      if ( (unsigned int)dword_B308C > 3 )
      {
        strcpy(v65, "get low_freq_miner_mode failed\n");
        ((void (__fastcall *)(int, char *, _DWORD, _DWORD))sub_3B6AC)(3, v65, 0, *(_DWORD *)"ed\n");
      }
      *(_BYTE *)(a2 + 173) = 0;
    }
    v42 = (_DWORD *)sub_75FEC(v4, "low_freq_base_freq");
    v43 = v42;
    if ( v42 && *v42 == 3 )
    {
      if ( (unsigned int)dword_B308C > 4 )
      {
        v44 = sub_77C98(v42);
        snprintf(v65, 0x800u, "low_freq_base_freq: %d\n", v44);
        ((void (__fastcall *)(int, char *, _DWORD, int))sub_3B6AC)(4, v65, 0, v45);
      }
      *(_DWORD *)(a2 + 176) = sub_77C98(v43);
    }
    else
    {
      if ( (unsigned int)dword_B308C > 3 )
      {
        strcpy(v65, "get low_freq_base_freq failed\n");
        ((void (__fastcall *)(int, char *, _DWORD, _DWORD))sub_3B6AC)(3, v65, 0, *(_DWORD *)"d\n");
      }
      if ( *(_BYTE *)(a2 + 173) )
        *(_DWORD *)(a2 + 176) = 0;
    }
    v46 = (_DWORD *)sub_75FEC(v4, "low_freq_inc_freq_temp");
    v47 = v46;
    if ( v46 && *v46 == 3 )
    {
      if ( (unsigned int)dword_B308C > 4 )
      {
        v48 = sub_77C98(v46);
        snprintf(v65, 0x800u, "low_freq_inc_freq_temp: %d\n", v48);
        ((void (__fastcall *)(int, char *, _DWORD, int))sub_3B6AC)(4, v65, 0, v49);
      }
      *(_DWORD *)(a2 + 180) = sub_77C98(v47);
    }
    else
    {
      if ( (unsigned int)dword_B308C > 3 )
      {
        strcpy(v65, "get low_freq_inc_freq_temp failed\n");
        ((void (__fastcall *)(int, char *, _DWORD, _DWORD))sub_3B6AC)(3, v65, 0, *(_DWORD *)"ailed\n");
      }
      if ( *(_BYTE *)(a2 + 173) )
        *(_DWORD *)(a2 + 180) = 22;
    }
    v50 = (_DWORD *)sub_75FEC(v4, "low_freq_wait_time");
    v51 = v50;
    if ( v50 && *v50 == 3 )
    {
      if ( (unsigned int)dword_B308C > 4 )
      {
        v52 = sub_77C98(v50);
        snprintf(v65, 0x800u, "low_freq_wait_time: %d\n", v52);
        ((void (__fastcall *)(int, char *, _DWORD, int))sub_3B6AC)(4, v65, 0, v53);
      }
      *(_DWORD *)(a2 + 184) = sub_77C98(v51);
    }
    else
    {
      if ( (unsigned int)dword_B308C > 3 )
      {
        strcpy(v65, "get low_freq_wait_time failed\n");
        ((void (__fastcall *)(int, char *, _DWORD, _DWORD))sub_3B6AC)(3, v65, 0, *(_DWORD *)"d\n");
      }
      if ( *(_BYTE *)(a2 + 173) )
        *(_DWORD *)(a2 + 184) = 0;
    }
    v54 = (_DWORD *)sub_75FEC(v4, "max_rise_vol");
    v55 = v54;
    if ( v54 && *v54 == 3 )
    {
      if ( (unsigned int)dword_B308C > 4 )
      {
        v56 = sub_77C98(v54);
        snprintf(v65, 0x800u, "max_rise_vol: %d\n", v56);
        ((void (__fastcall *)(int, char *, _DWORD, int))sub_3B6AC)(4, v65, 0, v57);
      }
      *(_DWORD *)(a2 + 188) = sub_77C98(v55);
    }
    else
    {
      if ( (unsigned int)dword_B308C > 3 )
      {
        strcpy(v65, "get max_rise_vol failed,set default max_rise_vol = 120\n");
        ((void (__fastcall *)(int, char *, _DWORD, _DWORD))sub_3B6AC)(3, v65, 0, *(_DWORD *)"_vol = 120\n");
      }
      *(_DWORD *)(a2 + 188) = 120;
    }
    v58 = (_DWORD *)sub_75FEC(v4, "high_temp_sub_freq");
    v60 = v58;
    if ( v58 && *v58 == 3 )
    {
      if ( (unsigned int)dword_B308C > 4 )
      {
        v61 = sub_77C98(v58);
        snprintf(v65, 0x800u, "high_temp_sub_freq: %d\n", v61);
        ((void (__fastcall *)(int, char *, _DWORD, int))sub_3B6AC)(4, v65, 0, v62);
      }
      v63 = sub_77C98(v60);
      v5 = 0;
      *(_DWORD *)(a2 + 192) = v63;
    }
    else
    {
      if ( (unsigned int)dword_B308C > 3 )
      {
        strcpy(v65, "get high_temp_sub_freq failed,set default high_temp_sub_freq = 10\n");
        ((void (__fastcall *)(int, char *, _DWORD, int))sub_3B6AC)(3, v65, 0, v59);
      }
      v5 = 0;
      *(_DWORD *)(a2 + 192) = 10;
    }
  }
  else
  {
    if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy(v65, "get strategy failed\n");
      ((void (__fastcall *)(int, char *, _DWORD, _DWORD))sub_3B6AC)(3, v65, 0, *(_DWORD *)" failed\n");
    }
    return -1;
  }
  return v5;
}
