int sub_42CB4()
{
  int v0; // r4
  int v1; // r6
  int v2; // r0
  int v3; // r0
  int v4; // r3
  int v5; // r9
  int v6; // r4
  const char *v7; // r0
  int v8; // r3
  bool v9; // nf
  int i; // r1
  int v11; // r3
  _BOOL4 v12; // r3
  int v13; // r0
  int v14; // r0
  int v15; // r8
  int v16; // r7
  int v17; // r10
  int v18; // r3
  int v19; // r2
  int v20; // r1
  const char *v22; // r0
  int v23; // r3
  int v24; // r4
  const char *v25; // r0
  int v26; // r0
  int v27; // r3
  int v28; // lr
  int v29; // r6
  int v30; // r3
  int *v31; // r2
  int v32; // t1
  _DWORD *v33; // r1
  _DWORD *v34; // r0
  int v35; // r7
  int v36; // r2
  int v37; // t1
  int v38; // r3
  int v39; // t1
  int v40; // r3
  int v41; // r1
  int v42; // r3
  int v43; // r4
  __int16 v44; // r5
  const char *v45; // r0
  int v46; // r2
  int v47; // r3
  int v49; // r7
  int v50; // r8
  int v51; // r0
  bool v52; // cc
  int v53; // r3
  int v54; // r3
  int v55; // r3
  int v56; // r3
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  v0 = sub_274DC();
  if ( sub_1829C() == 3 )
  {
    v44 = sub_18D7C();
    v1 = (__int16)(v44 - 12);
    v45 = (const char *)sub_26510();
    if ( !strcmp(v45, "BHB56903") )
    {
      if ( v1 > 9 )
      {
        if ( v1 > 19 )
        {
          if ( v1 <= 24 )
            v1 = (__int16)(v44 - 15);
        }
        else
        {
          v1 = (__int16)(v44 - 20);
        }
      }
      else
      {
        v1 = (__int16)(v44 - 22);
      }
    }
  }
  else
  {
    v1 = 0;
  }
  v2 = sub_18D7C();
  if ( v2 < -11 )
    v0 = 10 * ((int)((double)v0 + (double)(-12 - v2) * 2.5) / 10);
  if ( dword_4B6CAC <= 0 || dword_B413C == 1 )
    return 0;
  v3 = sub_22178();
  v4 = dword_B02A0;
  v5 = v3;
  if ( v1 < dword_B02A0 )
  {
    if ( sub_26910() <= 79 )
    {
      v12 = v1 < -1;
      if ( dword_B413C )
        v12 = 0;
      if ( v12 )
      {
        v17 = v0 + 50;
        v15 = (v0 + 20) * (dword_B02A0 - v1) / 20;
        if ( v0 + 49 < v15 )
          v15 = v0 + 50;
      }
      else
      {
        sub_1A760();
        if ( sub_1A760() )
          v13 = 40;
        else
          v13 = 30;
        if ( v0 + 39 < sub_8C490((v0 + v13) * (dword_B02A0 - v1)) )
        {
          v15 = v0 + 40;
          sub_1A760();
        }
        else
        {
          if ( sub_1A760() )
            v14 = 40;
          else
            v14 = 30;
          v15 = sub_8C490((v0 + v14) * (dword_B02A0 - v1));
        }
        if ( sub_1A760() )
          v16 = 40;
        else
          v16 = 30;
        v17 = v0 + v16;
      }
      v18 = dword_4B6CAC;
      v19 = v15 + dword_4B6CAC;
      v20 = v5 - (v15 + dword_4B6CAC);
      if ( (unsigned int)off_AFC24 > 4 )
      {
        if ( v20 < 0 )
          v20 = v15 + dword_4B6CAC - v5;
        snprintf(
          s,
          0x800u,
          "curr_vol1 = %d, g_voltage = %d, compensate_voltage = %d, abs = %d",
          v5,
          dword_4B6CAC,
          v15,
          v20);
        sub_3AF5C(4, s, 0, v55);
        v18 = dword_4B6CAC;
        v19 = v15 + dword_4B6CAC;
        v20 = v5 - (v15 + dword_4B6CAC);
      }
      if ( v20 <= 9 )
      {
        if ( v19 - v5 > 9 || v17 == v15 )
        {
          v49 = 2 * v15;
          v50 = v5 + 19;
          if ( v49 >= v17 )
            v49 = v17;
          v51 = v49 + v18;
          if ( v49 + v18 > v50 )
          {
            while ( 1 )
            {
              v52 = sub_22188() <= v50;
              v50 += 10;
              if ( v52 )
                break;
              if ( (unsigned int)off_AFC24 > 4 )
              {
                snprintf(s, 0x800u, "curr_vol2 = %d, g_voltage = %d,entrance_temp = %d", v5, dword_4B6CAC, v1);
                sub_3AF5C(4, s, 0, v53);
              }
              if ( v5 > 1489 )
              {
                if ( sub_22178() <= 1499 )
                {
                  sub_21E80(1500);
                  v51 = v49 + dword_4B6CAC;
                  goto LABEL_123;
                }
                break;
              }
              v5 += 10;
              sub_21E80(v5);
              usleep((__useconds_t)&loc_30D40);
              v51 = v49 + dword_4B6CAC;
              if ( v49 + dword_4B6CAC <= v50 )
                goto LABEL_123;
            }
            v51 = v49 + dword_4B6CAC;
          }
LABEL_123:
          if ( v5 != v51 )
          {
            if ( v51 <= 1499 )
            {
              sub_21E80(v51);
            }
            else if ( sub_22178() <= 1499 )
            {
              sub_21E80(1500);
            }
            if ( (unsigned int)off_AFC24 > 4 )
            {
              snprintf(s, 0x800u, "curr_vol3 = %d, g_voltage = %d,entrance_temp = %d", v5, dword_4B6CAC, v1);
              sub_3AF5C(4, s, 0, v54);
            }
          }
        }
        goto LABEL_41;
      }
      v9 = dword_4B6E40 - 29 < 0;
      ++dword_4B6E40;
      if ( v9 ^ __OFSUB__(dword_4B6E40, 30) | (dword_4B6E40 == 30) )
        return 0;
      sub_21E80(v5 - 10);
      usleep((__useconds_t)&unk_F4240);
      goto LABEL_41;
    }
    v4 = dword_B02A0;
  }
  v6 = v1 + 12;
  if ( v1 <= v4 + 1 || ((v7 = (const char *)sub_26510(), !strcmp(v7, "BHB56903")) ? (v8 = 41) : (v8 = 43), v8 <= v6) )
  {
    v22 = (const char *)sub_26510();
    if ( !strcmp(v22, "BHB56903") )
      v23 = 39;
    else
      v23 = 42;
    if ( v23 <= v6 )
    {
      if ( (unsigned int)off_AFC24 > 4 )
      {
        snprintf(s, 0x800u, "curr_vol = %d, g_voltage = %d, entrance_temp = %d", v5, dword_4B6CAC, v1);
        sub_3AF5C(4, s, 0, v47);
      }
      v24 = sub_18A2C();
      v25 = (const char *)sub_26510();
      if ( !strcmp(v25, "BHB56903") && dword_B413C == 2 )
        sub_42A10(&dword_B02A8);
      v26 = sub_22178();
      v29 = dword_4B6CAC;
      if ( v26 == dword_4B6CAC )
        v27 = 0;
      else
        v28 = dword_4B6E44;
      if ( v26 == dword_4B6CAC )
      {
        v28 = v27;
        dword_4B6E44 = v27;
      }
      v30 = 0;
      v31 = &dword_B02A8;
      while ( 1 )
      {
        v32 = *v31++;
        if ( v24 <= v32 )
          break;
        if ( ++v30 >= dword_B0328 - 1 )
        {
          v30 = dword_B0328 - 1;
          break;
        }
      }
      v33 = &unk_B02E4;
      v34 = &unk_B02E4;
      v35 = dword_AFE58[v30 + 292];
      v36 = 0;
      while ( 1 )
      {
        v37 = v34[1];
        ++v34;
        if ( v37 >= v28 )
          break;
        if ( ++v36 >= dword_B0328 - 1 )
        {
          v36 = dword_B0328 - 1;
          break;
        }
      }
      v38 = 0;
      while ( 1 )
      {
        v39 = v33[1];
        ++v33;
        if ( v35 <= v39 )
          break;
        if ( ++v38 >= dword_B0328 - 1 )
        {
          v38 = dword_B0328 - 1;
          break;
        }
      }
      v40 = v36 - v38;
      if ( v40 < 0 )
      {
        v41 = 5;
        v42 = ++dword_4B6E48;
        goto LABEL_69;
      }
      if ( v40 > 1 )
      {
        v41 = 15;
        v35 = dword_AFE58[v36 + 291];
        v42 = ++dword_4B6E48;
        goto LABEL_69;
      }
      if ( v35 )
        v46 = 0;
      else
        v46 = v40;
      if ( v46 )
      {
        v42 = dword_4B6E48;
        if ( v24 < dword_B02A8 - 2 )
        {
          v42 = dword_4B6E48 + 1;
          v41 = 15;
          ++dword_4B6E48;
        }
        else
        {
          v41 = 60;
        }
        v35 = 0;
LABEL_69:
        if ( v41 <= v42 )
        {
          dword_4B6E48 = 0;
          v43 = sub_40F20();
          if ( v43 )
          {
            if ( v35 <= 14 )
              v43 = 20;
            else
              v43 = 30;
            v35 += v43;
          }
          sub_21E80(v29 - v35);
          if ( sub_40F20() )
            v35 -= v43;
          dword_4B6E44 = v35;
        }
        goto LABEL_41;
      }
      if ( v40 == 1 )
      {
        v41 = 15;
        v42 = ++dword_4B6E48;
        goto LABEL_69;
      }
      dword_4B6E48 = 0;
    }
LABEL_41:
    dword_4B6E40 = 0;
    return 0;
  }
  v9 = dword_4B6E40 - 29 < 0;
  ++dword_4B6E40;
  if ( !(v9 ^ __OFSUB__(dword_4B6E40, 30) | (dword_4B6E40 == 30)) && (dword_9C8A18 > 14 || v1 > dword_B02A0 + 2) )
  {
    for ( i = dword_4B6CAC; dword_4B6CAC < v5 - 9; i = dword_4B6CAC )
    {
      if ( (unsigned int)off_AFC24 > 4 )
      {
        snprintf(s, 0x800u, "curr_vol4 = %d, g_voltage = %d, entrance_temp = %d", v5, i, v1);
        sub_3AF5C(4, s, 0, v11);
      }
      v5 -= 10;
      sub_21E80(v5);
      usleep((__useconds_t)&unk_F4240);
    }
    if ( v5 != i )
    {
      if ( (unsigned int)off_AFC24 > 4 )
      {
        snprintf(s, 0x800u, "curr_vol5 = %d, g_voltage = %d,entrance_temp = %d", v5, i, v1);
        sub_3AF5C(4, s, 0, v56);
      }
      sub_21E80(dword_4B6CAC);
    }
    goto LABEL_41;
  }
  return 0;
}
