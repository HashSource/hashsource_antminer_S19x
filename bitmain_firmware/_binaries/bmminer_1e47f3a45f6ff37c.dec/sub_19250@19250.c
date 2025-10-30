int sub_19250()
{
  int v0; // r4
  int v1; // r10
  int v2; // r8
  int v3; // r6
  int v4; // r4
  int v5; // r0
  const char *v6; // r0
  int v7; // r0
  int v8; // r4
  int v9; // r5
  int v10; // r12
  int v11; // r3
  int v12; // kr00_4
  const char *v13; // r3
  int v14; // r3
  int v15; // r7
  int v16; // r10
  int v17; // r2
  int v18; // r0
  int v19; // r6
  int v20; // r0
  int v21; // r3
  int v22; // r12
  int v23; // r7
  int v24; // r0
  int v25; // r8
  int v26; // r6
  int v27; // r7
  int v28; // r4
  int v29; // r5
  int v30; // r0
  int v31; // r3
  int v32; // r5
  int v33; // r4
  const char *v34; // r0
  const char *v35; // r12
  int v36; // r0
  int v37; // r7
  int v38; // r4
  int v39; // r6
  int v40; // r5
  int v41; // r8
  int v42; // r10
  const char *v43; // r0
  int v44; // r6
  int v45; // r0
  int v46; // r6
  int v47; // r3
  int v48; // r0
  int v49; // r0
  int v51; // r3
  int v52; // r3
  int v53; // r0
  int v54; // r7
  int v55; // r3
  int v56; // r3
  int v57; // r4
  int v58; // r0
  size_t v59; // r0
  int v60; // r4
  int v61; // r0
  size_t v62; // r0
  int v63; // r0
  bool v64; // zf
  __int16 v65; // r8
  int v66; // r0
  int v67; // r0
  __int16 v68; // r3
  int v69; // r0
  int v70; // r3
  int v71; // r12
  int v72; // r3
  int v73; // r3
  int v74; // [sp+18h] [bp-844h]
  int i; // [sp+1Ch] [bp-840h]
  int v76; // [sp+1Ch] [bp-840h]
  int v77; // [sp+28h] [bp-834h]
  int v78; // [sp+34h] [bp-828h] BYREF
  int v79; // [sp+38h] [bp-824h]
  int v80; // [sp+3Ch] [bp-820h] BYREF
  int v81; // [sp+40h] [bp-81Ch]
  _DWORD v82[5]; // [sp+44h] [bp-818h] BYREF
  char v83[2040]; // [sp+58h] [bp-804h] BYREF

  prctl(15, "temp_mtr", 0, 0, 0);
  if ( (unsigned int)dword_B308C > 3 )
  {
    strcpy(v83, "temperature_monitor_thread start...");
    sub_3B6AC(3, v83, 0, *(_DWORD *)"tart...");
  }
  v0 = dword_B3C88;
  v74 = 0;
  while ( dword_B3C88 )
  {
    v1 = 0;
    for ( i = 0; i != 4; ++i )
    {
      if ( !sub_26C0C(i) )
        goto LABEL_54;
      v2 = 0;
      v3 = 0;
      v77 = v1;
LABEL_7:
      v4 = sub_179C4();
      v5 = sub_26AF4(v4);
      if ( v4 > v5 )
      {
        if ( v3 >= sub_179C4() )
          goto LABEL_35;
LABEL_9:
        v6 = (const char *)sub_26A14();
        v7 = strcmp(v6, "BHB28601");
        if ( dword_B3C84 )
          v8 = 3;
        else
          v8 = v7 == 0;
        dword_B3C70 = v8;
        v9 = 4 * v8;
        while ( 2 )
        {
          if ( v8 )
          {
LABEL_16:
            if ( dword_B3C54 )
            {
              if ( !dword_B3C90 )
              {
                v7 = sub_179C4();
                if ( v3 < v7 )
                {
LABEL_19:
                  pthread_mutex_lock(&stru_B3C94);
                  sub_3DFCC(&v78);
                  if ( v8 == 1 )
                  {
                    v74 = sub_179E4(i, v3, *(__int16 *)(*(_DWORD *)(*(_DWORD *)(dword_B3C50 + v77) + 4) + v2), 0);
                  }
                  else if ( v8 == 2 )
                  {
                    v74 = sub_179E4(i, v3, *(__int16 *)(*(_DWORD *)(*(_DWORD *)(dword_B3C50 + v77) + 8) + v2), 1);
                  }
                  sub_3DFCC(&v80);
                  v10 = v80 - v78;
                  v11 = v81 - v79;
                  if ( v81 - v79 < 0 )
                  {
                    --v10;
                    v11 += 1000000;
                  }
                  if ( (unsigned int)dword_B308C > 4 )
                  {
                    v12 = v11;
                    v13 = "chp";
                    if ( v8 == 1 )
                      v13 = "pcb";
                    snprintf(v83, 0x800u, "%s read %d on chain %d takes %ldms\n", v13, v3, i, v12 / 1000 + 1000 * v10);
                    sub_3B6AC(4, v83, 0, v14);
                  }
                  v15 = v2;
                  pthread_mutex_unlock(&stru_B3C94);
                  v16 = v77;
LABEL_29:
                  pthread_mutex_lock(&stru_B3C58);
                  if ( v74 == 255 )
                  {
                    v23 = *(_DWORD *)(*(_DWORD *)(dword_B3C50 + v16) + v9) + v15;
                    ++*(_WORD *)(v23 + 4);
                  }
                  else
                  {
                    v17 = dword_B3C50;
                    *(_WORD *)(*(_DWORD *)(*(_DWORD *)(dword_B3C50 + v16) + v9) + v15 + 2) = v74;
                    *(_WORD *)(*(_DWORD *)(*(_DWORD *)(v17 + v16) + v9) + v15 + 4) = 0;
                  }
                  v7 = pthread_mutex_unlock(&stru_B3C58);
LABEL_14:
                  ++v8;
                  v9 += 4;
                  if ( v8 == 4 )
                    goto LABEL_33;
                  continue;
                }
              }
            }
LABEL_13:
            if ( v8 != 3 )
              goto LABEL_14;
            if ( v3 >= sub_27348(v7) )
            {
LABEL_33:
              ++v3;
              v2 += 6;
              goto LABEL_7;
            }
            sub_3DFCC(&v78);
            v20 = sub_26C0C(i);
            if ( !v20 )
            {
              if ( (unsigned int)dword_B308C <= 4 )
                goto LABEL_40;
              snprintf(v83, 0x800u, "%s chain %d not pluged", "read_sensor_on_ctrlboard", i);
              v74 = 255;
              sub_3B6AC(4, v83, 0, 255);
LABEL_41:
              sub_3DFCC(&v80);
              v21 = v81 - v79 + (v81 - v79 < 0 ? 0xF4000 : 0);
              v22 = v80 - v78;
              if ( v81 - v79 < 0 )
              {
                --v22;
                v21 += 576;
              }
              if ( (unsigned int)dword_B308C <= 4 )
              {
                v15 = 6 * v3;
                v16 = 4 * i;
                goto LABEL_29;
              }
              v16 = 4 * i;
              snprintf(
                v83,
                0x800u,
                "ctrlborad read %d on chain %d takes %ldms temp:%d\n",
                v3,
                i,
                v21 / 1000 + 1000 * v22,
                v74);
LABEL_92:
              sub_3B6AC(4, v83, 0, v51);
              v15 = 6 * v3;
              goto LABEL_29;
            }
            if ( v3 >= sub_27348(v20) )
            {
              if ( (unsigned int)dword_B308C > 3 )
              {
                v74 = 255;
                snprintf(v83, 0x800u, "%s invalid index = %d on chain %d", "read_sensor_on_ctrlboard", v3, i);
                sub_3B6AC(3, v83, 0, v52);
                goto LABEL_41;
              }
              goto LABEL_40;
            }
            v53 = sub_6C02C(i, *(unsigned __int8 *)(dword_B3C84 + v3), 0, v82, 2);
            v54 = v53;
            if ( (unsigned int)dword_B308C > 4 )
            {
              snprintf(
                v83,
                0x800u,
                "%s read ctrlboard tsensor data on chain %d, slave addr %d,tmp %d",
                "read_sensor_on_ctrlboard",
                i,
                *(unsigned __int8 *)(dword_B3C84 + v3),
                SLOBYTE(v82[0]));
              sub_3B6AC(4, v83, 0, v56);
              if ( v54 != 2 )
              {
LABEL_103:
                if ( (unsigned int)dword_B308C > 3 )
                {
                  v74 = 255;
                  snprintf(v83, 0x800u, "fail to read pic temp for chain %d", i);
                  sub_3B6AC(3, v83, 0, v55);
                  goto LABEL_41;
                }
LABEL_40:
                v74 = 255;
                goto LABEL_41;
              }
            }
            else if ( v53 != 2 )
            {
              goto LABEL_103;
            }
            v74 = SLOBYTE(v82[0]);
            goto LABEL_41;
          }
          break;
        }
        v7 = sub_26AF4(v7);
        if ( v3 >= v7 )
        {
          if ( !dword_B3C54 )
          {
            v9 += 4;
            v8 = 1;
            goto LABEL_16;
          }
          if ( dword_B3C90 )
            goto LABEL_14;
          v7 = sub_179C4();
          if ( v3 < v7 )
            goto LABEL_19;
          goto LABEL_13;
        }
        sub_3DFCC(&v78);
        v69 = sub_26C0C(i);
        if ( v69 )
        {
          if ( v3 < sub_26AF4(v69) )
          {
            if ( sub_609D8((unsigned __int8)i, *(unsigned __int8 *)(dword_B3C80 + v3), 0, v82, 2) == 2 )
            {
              v74 = SLOBYTE(v82[0]);
              goto LABEL_134;
            }
            if ( (unsigned int)dword_B308C > 3 )
            {
              v74 = 255;
              snprintf(v83, 0x800u, "fail to read pic temp for chain %d", i);
              sub_3B6AC(3, v83, 0, v73);
              goto LABEL_134;
            }
          }
          else if ( (unsigned int)dword_B308C > 3 )
          {
            v74 = 255;
            snprintf(v83, 0x800u, "%s invalid index = %d on chain %d", "read_sensor_on_pic", v3, i);
            sub_3B6AC(3, v83, 0, v72);
            goto LABEL_134;
          }
LABEL_133:
          v74 = 255;
        }
        else
        {
          if ( (unsigned int)dword_B308C <= 4 )
            goto LABEL_133;
          snprintf(v83, 0x800u, "%s chain %d not pluged", "read_sensor_on_pic", i);
          v74 = 255;
          sub_3B6AC(4, v83, 0, 255);
        }
LABEL_134:
        sub_3DFCC(&v80);
        v70 = v81 - v79 + (v81 - v79 < 0 ? 0xF4000 : 0);
        v71 = v80 - v78;
        if ( v81 - v79 < 0 )
        {
          --v71;
          v70 += 576;
        }
        if ( (unsigned int)dword_B308C <= 4 )
        {
          v16 = v77;
          v15 = 6 * v3;
          goto LABEL_29;
        }
        v16 = v77;
        snprintf(v83, 0x800u, "pic read %d on chain %d takes %ldms\n", v3, i, v70 / 1000 + 1000 * v71);
        goto LABEL_92;
      }
      if ( v3 < sub_26AF4(v5) )
        goto LABEL_9;
LABEL_35:
      v1 = v77;
      v82[0] = "pic";
      v82[1] = "pcb";
      v82[2] = "chp";
      v82[3] = "ctrlboard";
      v82[4] = "max";
      memset(v83, 0, 0x100u);
      if ( !dword_B3CAC )
      {
        v60 = sub_179C4();
        v61 = sub_26AF4(v60);
        if ( v60 <= v61 )
          v62 = 4 * sub_26AF4(v61) + 1;
        else
          v62 = 4 * sub_179C4() + 1;
        dword_B3CAC = (int)malloc(v62);
      }
      if ( !dword_B3CB0 )
      {
        v57 = sub_179C4();
        v58 = sub_26AF4(v57);
        if ( v57 <= v58 )
          v59 = 4 * sub_26AF4(v58) + 1;
        else
          v59 = 4 * sub_179C4() + 1;
        dword_B3CB0 = (int)malloc(v59);
      }
      pthread_mutex_lock(&stru_B3C58);
      v18 = sub_18678();
      v19 = v18;
      switch ( v18 )
      {
        case 0:
          v24 = sub_26AF4(v18);
          goto LABEL_47;
        case 1:
        case 2:
          v24 = sub_179C4();
          if ( v24 <= 0 )
            goto LABEL_97;
          goto LABEL_48;
        case 3:
          v24 = sub_27348(v18);
LABEL_47:
          if ( v24 <= 0 )
          {
LABEL_97:
            v33 = -1;
            v26 = v19;
            v32 = -1;
          }
          else
          {
LABEL_48:
            v25 = 0;
            v26 = v19;
            v27 = 6 * v24;
            v28 = 0;
            v29 = 0;
            do
            {
              v30 = sprintf(
                      (char *)(dword_B3CAC + v29),
                      "%03d-",
                      *(__int16 *)(*(_DWORD *)(*(_DWORD *)(dword_B3C50 + v77) + v26 * 4) + v25 + 2));
              v31 = *(_DWORD *)(*(_DWORD *)(dword_B3C50 + v77) + v26 * 4) + v25;
              v25 += 6;
              v29 += v30;
              v28 += sprintf((char *)(dword_B3CB0 + v28), "%03d-", *(__int16 *)(v31 + 4));
            }
            while ( v25 != v27 );
            v32 = v29 - 1;
            v33 = v28 - 1;
          }
          break;
        default:
          v33 = -1;
          v26 = v18;
          v32 = -1;
          break;
      }
      v34 = (const char *)dword_B3CB0;
      v35 = (const char *)dword_B3CAC;
      *(_BYTE *)(dword_B3CB0 + v33) = 32;
      v35[v32] = 32;
      sprintf(v83, "chain %d %s temp: %s, failure:%s", i, (const char *)v82[v26], v35, v34);
      v36 = dword_B3CB4;
      if ( !dword_B3CB4 )
      {
        v36 = sub_7C918("bmminer_temp");
        dword_B3CB4 = v36;
      }
      sub_7E7C0(v36, "temperature/temperature.c", 25, "dump_temp_info", 14);
      pthread_mutex_unlock(&stru_B3C58);
LABEL_54:
      v1 += 4;
    }
    if ( dword_B3C70 == 3 )
      v37 = sub_191F8();
    else
      v37 = sub_18E28();
    v38 = 0;
    v39 = 0;
    v40 = 0;
    v41 = sub_191B8();
    v76 = sub_18EF4();
    do
    {
      if ( sub_26C0C(v40) )
      {
        v42 = 0;
        v39 = (unsigned __int8)(v39 + 1);
        while ( v42 < sub_179C4() )
        {
          if ( dword_B3C70 == 3 )
            v38 += sub_183EC(v40, 3u, (unsigned __int8)v42);
          else
            v38 += sub_18A9C(v40, (unsigned __int8)v42);
          ++v42;
        }
      }
      ++v40;
    }
    while ( v40 != 4 );
    v43 = (const char *)sub_26A14();
    if ( strcmp(v43, "BHB28601") || dword_B3C54 )
    {
      if ( v37 > 77 )
        sub_2A0D0(1);
      v44 = 2 * v39;
      v45 = sub_2A0EC(v38 >= v44);
      v46 = v38 >= v44 || v37 > 77;
      if ( v46 || v37 - v41 > 50 )
        goto LABEL_75;
      v63 = sub_40F64(v45);
      v64 = v63 == 3;
      if ( v63 == 3 )
        v64 = v37 == 0;
      if ( v64 )
      {
        v65 = 255;
        do
        {
          v66 = v46++;
          v67 = sub_19020(v66);
          v68 = v65;
          if ( v65 >= v67 )
            v68 = v67;
          v65 = v68;
        }
        while ( v46 != 4 );
        if ( !v68 && ++dword_B3CB8 > 10 )
        {
LABEL_75:
          if ( (unsigned int)dword_B308C > 3 )
          {
            snprintf(
              v83,
              0x800u,
              "over max temp, pcb temp %d (max %d), chip temp %d(max %d) pcb temp rise %d chip temp rise %d, total_exit_failure %d\n",
              v37,
              77,
              v76,
              95,
              0,
              0,
              v38);
            sub_3B6AC(3, v83, 0, v47);
          }
          if ( v37 <= 77 )
            v48 = 11;
          else
            v48 = 8;
          sub_481F0(v48, 0);
          sub_458A0(17, "over max temp");
        }
      }
    }
    v49 = sub_16CC4(400, 0);
    if ( sub_40F54(v49) && dword_B6EB4 != 1 && dword_B3CBC )
      sub_172BC();
    usleep((__useconds_t)&unk_F4240);
    v0 = dword_B3C88;
    if ( byte_B3C74 )
      ++dword_B3CBC;
  }
  if ( (unsigned int)dword_B308C > 3 )
  {
    strcpy(v83, "temp monitor thread exit");
    sub_3B6AC(3, v83, v0, *(_DWORD *)" thread exit");
  }
  return 0;
}
