int __fastcall sub_24CE8(int a1, _DWORD *a2)
{
  _DWORD *v3; // r0
  _DWORD *v4; // r4
  _DWORD *v5; // r0
  int v6; // r3
  _DWORD *v8; // r0
  _DWORD *v9; // r7
  const char *v10; // r0
  int v11; // r3
  const char *v12; // r0
  int v13; // r0
  unsigned int v14; // r3
  _DWORD *v15; // r0
  _DWORD *v16; // r7
  const char *v17; // r0
  int v18; // r3
  int v19; // r3
  _DWORD *v20; // r0
  _DWORD *v21; // r7
  const char *v22; // r12
  int v23; // r0
  int v24; // r1
  int v25; // r2
  int v26; // r3
  _DWORD *v27; // r12
  int v28; // r1
  int v29; // r2
  int v30; // r3
  int v31; // r0
  int v32; // r3
  _DWORD *v33; // r0
  _DWORD *v34; // r7
  int v35; // r0
  int v36; // r3
  _DWORD *v37; // r0
  _DWORD *v38; // r7
  int v39; // r0
  int v40; // r3
  int v41; // r0
  int v42; // r3
  _DWORD *v43; // r0
  _DWORD *v44; // r4
  int v45; // r0
  int v46; // r3
  int v47; // r0
  _DWORD v48[513]; // [sp+0h] [bp-804h] BYREF

  v3 = (_DWORD *)sub_75FEC(a1, "asic");
  v4 = v3;
  if ( !v3 || *v3 )
  {
    if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy((char *)v48, "get asic failed\n");
      sub_3B6AC(3, v48, 0, *(_DWORD *)"led\n");
    }
    return -1;
  }
  if ( (unsigned int)dword_B308C > 4 )
  {
    strcpy((char *)v48, "asic:\n");
    sub_3B6AC(4, v48, 0, *(unsigned __int16 *)"");
  }
  v5 = (_DWORD *)sub_75FEC(v4, "asic_id");
  if ( !v5 || *v5 != 2 )
  {
    if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy((char *)v48, "get asic_id failed\n");
      sub_3B6AC(3, v48, 0, *(_DWORD *)"failed\n");
      return -1;
    }
    return -1;
  }
  if ( (unsigned int)dword_B308C > 4 )
  {
    v10 = (const char *)sub_777D0(v5);
    snprintf((char *)v48, 0x800u, "asic_id: %s\n", v10);
    sub_3B6AC(4, v48, 0, v11);
  }
  v8 = (_DWORD *)sub_75FEC(v4, "asic_addr");
  v9 = v8;
  if ( !v8 || *v8 != 2 )
  {
    if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy((char *)v48, "get asic_addr failed\n");
      sub_3B6AC(3, v48, 0, *(_DWORD *)"r failed\n");
      return -1;
    }
    return -1;
  }
  if ( (unsigned int)dword_B308C > 4 )
  {
    v17 = (const char *)sub_777D0(v8);
    snprintf((char *)v48, 0x800u, "asic_addr : %s\n", v17);
    sub_3B6AC(4, v48, 0, v18);
  }
  v12 = (const char *)sub_777D0(v9);
  v13 = strtol(v12, 0, 0);
  v14 = dword_B308C;
  a2[8] = v13;
  if ( !v13 )
  {
    if ( v14 > 3 )
    {
      strcpy((char *)v48, "convert asic_addr failed\n");
      sub_3B6AC(3, v48, 0, *(_DWORD *)"_addr failed\n");
      return -1;
    }
    return -1;
  }
  if ( v14 > 4 )
  {
    snprintf((char *)v48, 0x800u, "asic_addr 0x%x\n", v13);
    sub_3B6AC(4, v48, 0, v19);
  }
  v15 = (_DWORD *)sub_75FEC(v4, "asic_core_num");
  v16 = v15;
  if ( !v15 || *v15 != 3 )
  {
    if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy((char *)v48, "get asic_core_num failed\n");
      sub_3B6AC(3, v48, 0, *(_DWORD *)"e_num failed\n");
      return -1;
    }
    return -1;
  }
  if ( (unsigned int)dword_B308C > 4 )
  {
    v31 = sub_77C98(v15);
    snprintf((char *)v48, 0x800u, "asic_core_num: %d\n", v31);
    sub_3B6AC(4, v48, 0, v32);
  }
  a2[9] = sub_77C98(v16);
  v20 = (_DWORD *)sub_75FEC(v4, "asic_small_core_num");
  v21 = v20;
  if ( !v20 || *v20 != 3 )
  {
    if ( (unsigned int)dword_B308C > 3 )
    {
      v22 = "get asic_small_core_num failed\n";
LABEL_37:
      v23 = *(_DWORD *)v22;
      v24 = *((_DWORD *)v22 + 1);
      v25 = *((_DWORD *)v22 + 2);
      v26 = *((_DWORD *)v22 + 3);
      v27 = v22 + 16;
      v48[0] = v23;
      v48[1] = v24;
      v48[2] = v25;
      v48[3] = v26;
      v28 = v27[1];
      v29 = v27[2];
      v30 = v27[3];
      v48[4] = *v27;
      v48[5] = v28;
      v48[6] = v29;
      v48[7] = v30;
LABEL_38:
      sub_3B6AC(3, v48, 0, v30);
      return -1;
    }
    return -1;
  }
  if ( (unsigned int)dword_B308C > 4 )
  {
    v35 = sub_77C98(v20);
    snprintf((char *)v48, 0x800u, "asic_small_core_num: %d\n", v35);
    sub_3B6AC(4, v48, 0, v36);
  }
  a2[10] = sub_77C98(v21);
  v33 = (_DWORD *)sub_75FEC(v4, "core_small_core_num");
  v34 = v33;
  if ( !v33 || *v33 != 3 )
  {
    if ( (unsigned int)dword_B308C > 3 )
    {
      v22 = "get core_small_core_num failed\n";
      goto LABEL_37;
    }
    return -1;
  }
  if ( (unsigned int)dword_B308C > 4 )
  {
    v39 = sub_77C98(v33);
    snprintf((char *)v48, 0x800u, "core_small_core_num: %d\n", v39);
    sub_3B6AC(4, v48, 0, v40);
  }
  a2[11] = sub_77C98(v34);
  v37 = (_DWORD *)sub_75FEC(v4, "asic_domain_num");
  v38 = v37;
  if ( !v37 || *v37 != 3 )
  {
    if ( (unsigned int)dword_B308C > 3 )
    {
      v30 = *(_DWORD *)"ain_num failed\n";
      strcpy((char *)v48, "get asic_domain_num failed\n");
      goto LABEL_38;
    }
    return -1;
  }
  if ( (unsigned int)dword_B308C > 4 )
  {
    v41 = sub_77C98(v37);
    snprintf((char *)v48, 0x800u, "asic_domain_num : %d\n", v41);
    sub_3B6AC(4, v48, 0, v42);
  }
  a2[12] = sub_77C98(v38);
  v43 = (_DWORD *)sub_75FEC(v4, "asic_addr_interval");
  v44 = v43;
  if ( !v43 || *v43 != 3 )
  {
    if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy((char *)v48, "get asic_addr_interval failed\n");
      sub_3B6AC(3, v48, 0, *(_DWORD *)"d\n");
      return -1;
    }
    return -1;
  }
  if ( (unsigned int)dword_B308C > 4 )
  {
    v45 = sub_77C98(v43);
    snprintf((char *)v48, 0x800u, "asic_addr_interval : %d\n", v45);
    sub_3B6AC(4, v48, 0, v46);
  }
  v47 = sub_77C98(v44);
  v6 = 0;
  a2[13] = v47;
  return v6;
}
