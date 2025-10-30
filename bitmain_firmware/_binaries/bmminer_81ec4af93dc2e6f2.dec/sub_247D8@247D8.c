int __fastcall sub_247D8(int a1, _DWORD *a2)
{
  _DWORD *v3; // r0
  _DWORD *v4; // r5
  void *v5; // r3
  _DWORD *v6; // r0
  void *v7; // r3
  int v8; // r3
  _DWORD *v10; // r0
  _DWORD *v11; // r7
  void *v12; // r3
  const char *v13; // r0
  int v14; // r0
  const char *v15; // r0
  int v16; // r3
  int v17; // r3
  _DWORD *v18; // r0
  _DWORD *v19; // r7
  void *v20; // r3
  const char *v21; // r0
  int v22; // r3
  int v23; // r0
  int v24; // r3
  _DWORD *v25; // r0
  _DWORD *v26; // r7
  void *v27; // r3
  const char *v28; // r12
  int v29; // r0
  int v30; // r1
  int v31; // r2
  int v32; // r3
  _DWORD *v33; // r12
  int v34; // r1
  int v35; // r2
  int v36; // r3
  int v37; // r0
  int v38; // r3
  _DWORD *v39; // r0
  _DWORD *v40; // r7
  _DWORD *v41; // r0
  _DWORD *v42; // r7
  int v43; // r0
  int v44; // r3
  int v45; // r0
  int v46; // r3
  _DWORD *v47; // r0
  _DWORD *v48; // r5
  int v49; // r0
  int v50; // r3
  int v51; // r0
  _DWORD v52[513]; // [sp+0h] [bp-804h] BYREF

  v3 = (_DWORD *)sub_72B10(a1, "asic");
  v4 = v3;
  if ( v3 )
  {
    v5 = off_AFC24;
    if ( !*v3 )
    {
      if ( (unsigned int)off_AFC24 > 4 )
      {
        strcpy((char *)v52, "asic:\n");
        sub_3AF5C(4, v52, 0, *(unsigned __int16 *)"");
      }
      v6 = (_DWORD *)sub_72B10(v4, "asic_id");
      if ( !v6 )
      {
        v7 = off_AFC24;
        goto LABEL_8;
      }
      v7 = off_AFC24;
      if ( *v6 != 2 )
      {
LABEL_8:
        if ( (unsigned int)v7 > 3 )
        {
          strcpy((char *)v52, "get asic_id failed\n");
          sub_3AF5C(3, v52, 0, *(_DWORD *)"failed\n");
          return -1;
        }
        return -1;
      }
      if ( (unsigned int)off_AFC24 > 4 )
      {
        v15 = (const char *)sub_74300(v6);
        snprintf((char *)v52, 0x800u, "asic_id: %s\n", v15);
        sub_3AF5C(4, v52, 0, v16);
      }
      v10 = (_DWORD *)sub_72B10(v4, "asic_addr");
      v11 = v10;
      if ( !v10 )
      {
        v12 = off_AFC24;
        goto LABEL_20;
      }
      v12 = off_AFC24;
      if ( *v10 != 2 )
      {
LABEL_20:
        if ( (unsigned int)v12 > 3 )
        {
          strcpy((char *)v52, "get asic_addr failed\n");
          sub_3AF5C(3, v52, 0, *(_DWORD *)"r failed\n");
          return -1;
        }
        return -1;
      }
      if ( (unsigned int)off_AFC24 > 4 )
      {
        v21 = (const char *)sub_74300(v10);
        snprintf((char *)v52, 0x800u, "asic_addr : %s\n", v21);
        sub_3AF5C(4, v52, 0, v22);
      }
      v13 = (const char *)sub_74300(v11);
      v14 = strtol(v13, 0, 0);
      a2[8] = v14;
      if ( !v14 )
      {
        if ( (unsigned int)off_AFC24 > 3 )
        {
          strcpy((char *)v52, "convert asic_addr failed\n");
          sub_3AF5C(3, v52, 0, *(_DWORD *)"_addr failed\n");
          return -1;
        }
        return -1;
      }
      if ( (unsigned int)off_AFC24 > 4 )
      {
        snprintf((char *)v52, 0x800u, "asic_addr 0x%x\n", v14);
        sub_3AF5C(4, v52, 0, v17);
      }
      v18 = (_DWORD *)sub_72B10(v4, "asic_core_num");
      v19 = v18;
      if ( !v18 )
      {
        v20 = off_AFC24;
        goto LABEL_32;
      }
      v20 = off_AFC24;
      if ( *v18 != 3 )
      {
LABEL_32:
        if ( (unsigned int)v20 > 3 )
        {
          strcpy((char *)v52, "get asic_core_num failed\n");
          sub_3AF5C(3, v52, 0, *(_DWORD *)"e_num failed\n");
          return -1;
        }
        return -1;
      }
      if ( (unsigned int)off_AFC24 > 4 )
      {
        v23 = sub_747D0(v18);
        snprintf((char *)v52, 0x800u, "asic_core_num: %d\n", v23);
        sub_3AF5C(4, v52, 0, v24);
      }
      a2[9] = sub_747D0(v19);
      v25 = (_DWORD *)sub_72B10(v4, "asic_small_core_num");
      v26 = v25;
      if ( v25 )
      {
        v27 = off_AFC24;
        if ( *v25 == 3 )
        {
          if ( (unsigned int)off_AFC24 > 4 )
          {
            v37 = sub_747D0(v25);
            snprintf((char *)v52, 0x800u, "asic_small_core_num: %d\n", v37);
            sub_3AF5C(4, v52, 0, v38);
          }
          a2[10] = sub_747D0(v26);
          v39 = (_DWORD *)sub_72B10(v4, "core_small_core_num");
          v40 = v39;
          if ( v39 && *v39 == 3 )
          {
            if ( (unsigned int)off_AFC24 > 4 )
            {
              v43 = sub_747D0(v39);
              snprintf((char *)v52, 0x800u, "core_small_core_num: %d\n", v43);
              sub_3AF5C(4, v52, 0, v44);
            }
            a2[11] = sub_747D0(v40);
            v41 = (_DWORD *)sub_72B10(v4, "asic_domain_num");
            v42 = v41;
            if ( v41 && *v41 == 3 )
            {
              if ( (unsigned int)off_AFC24 > 4 )
              {
                v45 = sub_747D0(v41);
                snprintf((char *)v52, 0x800u, "asic_domain_num : %d\n", v45);
                sub_3AF5C(4, v52, 0, v46);
              }
              a2[12] = sub_747D0(v42);
              v47 = (_DWORD *)sub_72B10(v4, "asic_addr_interval");
              v48 = v47;
              if ( v47 && *v47 == 3 )
              {
                if ( (unsigned int)off_AFC24 > 4 )
                {
                  v49 = sub_747D0(v47);
                  snprintf((char *)v52, 0x800u, "asic_addr_interval : %d\n", v49);
                  sub_3AF5C(4, v52, 0, v50);
                }
                v51 = sub_747D0(v48);
                v8 = 0;
                a2[13] = v51;
                return v8;
              }
              if ( (unsigned int)off_AFC24 > 3 )
              {
                strcpy((char *)v52, "get asic_addr_interval failed\n");
                sub_3AF5C(3, v52, 0, *(_DWORD *)"d\n");
                return -1;
              }
              return -1;
            }
            if ( (unsigned int)off_AFC24 <= 3 )
              return -1;
            v36 = *(_DWORD *)"ain_num failed\n";
            strcpy((char *)v52, "get asic_domain_num failed\n");
LABEL_43:
            sub_3AF5C(3, v52, 0, v36);
            return -1;
          }
          if ( (unsigned int)off_AFC24 <= 3 )
            return -1;
          v28 = "get core_small_core_num failed\n";
LABEL_42:
          v29 = *(_DWORD *)v28;
          v30 = *((_DWORD *)v28 + 1);
          v31 = *((_DWORD *)v28 + 2);
          v32 = *((_DWORD *)v28 + 3);
          v33 = v28 + 16;
          v52[0] = v29;
          v52[1] = v30;
          v52[2] = v31;
          v52[3] = v32;
          v34 = v33[1];
          v35 = v33[2];
          v36 = v33[3];
          v52[4] = *v33;
          v52[5] = v34;
          v52[6] = v35;
          v52[7] = v36;
          goto LABEL_43;
        }
      }
      else
      {
        v27 = off_AFC24;
      }
      if ( (unsigned int)v27 <= 3 )
        return -1;
      v28 = "get asic_small_core_num failed\n";
      goto LABEL_42;
    }
  }
  else
  {
    v5 = off_AFC24;
  }
  if ( (unsigned int)v5 <= 3 )
    return -1;
  strcpy((char *)v52, "get asic failed\n");
  sub_3AF5C(3, v52, 0, *(_DWORD *)"led\n");
  return -1;
}
