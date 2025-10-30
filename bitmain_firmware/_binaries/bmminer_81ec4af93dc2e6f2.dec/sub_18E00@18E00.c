int sub_18E00()
{
  int v0; // r12
  int i; // r10
  int v2; // r7
  int v3; // r10
  int v4; // r6
  int v5; // r5
  int v6; // r4
  int v7; // r0
  int v8; // r0
  const char *v9; // r0
  signed int v10; // r0
  unsigned int v11; // r4
  int v12; // r0
  int v13; // r3
  int v14; // r12
  int v15; // r2
  int v16; // r12
  int v17; // r3
  int v18; // kr00_4
  const char *v19; // r3
  int v20; // r12
  int v21; // r3
  int v22; // r3
  int v23; // r0
  int v24; // r6
  int v25; // r0
  int v26; // r9
  int v27; // r6
  int v28; // r5
  int v29; // r4
  int v30; // r10
  int v31; // r2
  int v32; // r5
  int v33; // r4
  const char *v34; // lr
  const char *v35; // r12
  int v36; // r0
  int v37; // r8
  int v38; // r6
  int j; // r4
  __int16 v40; // r0
  int v41; // r5
  int v42; // r7
  int v43; // r4
  int v44; // r9
  int v45; // r0
  int v46; // r10
  bool v47; // cc
  const char *v48; // r0
  int v49; // r7
  int v50; // r0
  int v52; // r3
  int v53; // r3
  int v54; // r3
  int v55; // r10
  int v56; // r3
  int v57; // r4
  int v58; // r0
  size_t v59; // r0
  int v60; // r4
  int v61; // r0
  size_t v62; // r0
  int v63; // r3
  int v64; // r0
  int v65; // r0
  bool v66; // zf
  int v67; // r6
  int v68; // r4
  int v69; // r0
  int v70; // r0
  bool v71; // nf
  int v72; // r3
  int v73; // r0
  int v74; // r3
  int v75; // r12
  int v76; // r3
  int v77; // r3
  int v78; // r3
  int v79; // r3
  int v80; // r3
  int v81; // [sp+20h] [bp-844h]
  int v82; // [sp+2Ch] [bp-838h]
  int v83; // [sp+3Ch] [bp-828h] BYREF
  int v84; // [sp+40h] [bp-824h]
  int v85; // [sp+44h] [bp-820h] BYREF
  int v86; // [sp+48h] [bp-81Ch]
  _DWORD v87[5]; // [sp+4Ch] [bp-818h] BYREF
  char v88[2048]; // [sp+60h] [bp-804h] BYREF

  prctl(15, "temp_mtr", 0, 0, 0);
  if ( (unsigned int)off_AFC24 > 3 )
  {
    strcpy(v88, "temperature_monitor_thread start...");
    sub_3AF5C(3, v88, 0, *(_DWORD *)"tart...");
  }
  v82 = 0;
LABEL_4:
  v0 = dword_B0F14;
  if ( !dword_B0F14 )
    goto LABEL_92;
  do
  {
    for ( i = 0; i != 4; ++i )
    {
      if ( !sub_266F0(i) )
        continue;
      v2 = 4 * i;
      v81 = i;
      v3 = v82;
      v4 = 0;
      v5 = 0;
LABEL_8:
      v6 = sub_17674();
      v7 = sub_265EC(v6);
      if ( v6 > v7 )
      {
        v8 = sub_17674();
        if ( v5 >= v8 )
          goto LABEL_50;
LABEL_10:
        v9 = (const char *)sub_26510(v8);
        v10 = strcmp(v9, "BHB28601");
        if ( dword_B0F10 )
          v11 = 3;
        else
          v11 = __clz(v10);
        if ( !dword_B0F10 )
          v11 >>= 5;
        dword_B0F00 = v11;
        while ( 1 )
        {
          if ( v11 )
            goto LABEL_17;
          v10 = sub_265EC(v10);
          if ( v10 > v5 )
          {
            sub_3D7A0(&v83);
            v73 = sub_266F0(v81);
            if ( v73 )
            {
              if ( v5 < sub_265EC(v73) )
              {
                if ( sub_621E4((unsigned __int8)v81, *(unsigned __int8 *)(dword_B0F0C + v5), 0, v87, 2) == 2 )
                {
                  v3 = SLOBYTE(v87[0]);
                  goto LABEL_138;
                }
                if ( (unsigned int)off_AFC24 > 3 )
                {
                  v3 = 255;
                  snprintf(v88, 0x800u, "fail to read pic temp for chain %d", v81);
                  sub_3AF5C(3, v88, 0, v80);
                  goto LABEL_138;
                }
              }
              else if ( (unsigned int)off_AFC24 > 3 )
              {
                v3 = 255;
                snprintf(v88, 0x800u, "%s invalid index = %d on chain %d", "read_sensor_on_pic", v5, v81);
                sub_3AF5C(3, v88, 0, v79);
                goto LABEL_138;
              }
LABEL_137:
              v3 = 255;
              goto LABEL_138;
            }
            if ( (unsigned int)off_AFC24 <= 4 )
              goto LABEL_137;
            snprintf(v88, 0x800u, "%s chain %d not pluged", "read_sensor_on_pic", v81);
            v3 = 255;
            sub_3AF5C(4, v88, 0, v78);
LABEL_138:
            sub_3D7A0(&v85);
            v74 = v86 - v84 + (v86 - v84 < 0 ? 0xF4000 : 0);
            v75 = v85 - v83;
            if ( v86 - v84 < 0 )
            {
              --v75;
              v74 += 576;
            }
            if ( (unsigned int)off_AFC24 > 4 )
            {
              snprintf(v88, 0x800u, "pic read %d on chain %d takes %ldms\n", v5, v81, v74 / 1000 + 1000 * v75);
              sub_3AF5C(4, v88, 0, v76);
            }
LABEL_30:
            pthread_mutex_lock(&stru_B0EE8);
            if ( v3 == 255 )
              goto LABEL_48;
            goto LABEL_31;
          }
          if ( !dword_B0EE4 )
            break;
          if ( dword_B0F1C )
            goto LABEL_20;
LABEL_37:
          v10 = sub_17674();
          if ( v10 > v5 )
          {
            pthread_mutex_lock(&stru_B0F20);
            sub_3D7A0(&v83);
            if ( v11 == 1 )
            {
              v3 = sub_17694(v81, v5, *(__int16 *)(*(_DWORD *)(*(_DWORD *)(dword_B0EE0 + v2) + 4) + v4), 0);
            }
            else if ( v11 == 2 )
            {
              v3 = sub_17694(v81, v5, *(__int16 *)(*(_DWORD *)(*(_DWORD *)(dword_B0EE0 + v2) + 8) + v4), 1);
            }
            sub_3D7A0(&v85);
            v16 = v85 - v83;
            v17 = v86 - v84;
            if ( v86 - v84 < 0 )
            {
              --v16;
              v17 += 1000000;
            }
            if ( (unsigned int)off_AFC24 > 4 )
            {
              v18 = v17;
              v19 = "chp";
              v20 = v18 / 1000 + 1000 * v16;
              if ( v11 == 1 )
                v19 = "pcb";
              snprintf(v88, 0x800u, "%s read %d on chain %d takes %ldms\n", v19, v5, v81, v20);
              sub_3AF5C(4, v88, 0, v21);
            }
            pthread_mutex_unlock(&stru_B0F20);
            pthread_mutex_lock(&stru_B0EE8);
            if ( v3 == 255 )
            {
LABEL_48:
              v22 = *(_DWORD *)(*(_DWORD *)(dword_B0EE0 + v2) + 4 * v11) + v4;
              ++*(_WORD *)(v22 + 4);
              goto LABEL_32;
            }
LABEL_31:
            v15 = dword_B0EE0;
            *(_WORD *)(*(_DWORD *)(*(_DWORD *)(dword_B0EE0 + v2) + 4 * v11) + v4 + 2) = v3;
            *(_WORD *)(*(_DWORD *)(*(_DWORD *)(v15 + v2) + 4 * v11) + v4 + 4) = 0;
LABEL_32:
            v10 = pthread_mutex_unlock(&stru_B0EE8);
            goto LABEL_20;
          }
LABEL_19:
          if ( v11 == 3 )
          {
            if ( sub_26DF8(v10) <= v5 )
            {
LABEL_21:
              ++v5;
              v4 += 6;
              goto LABEL_8;
            }
            sub_3D7A0(&v83);
            v12 = sub_266F0(v81);
            if ( v12 )
            {
              if ( v5 < sub_26DF8(v12) )
              {
                v55 = sub_6A234(v81, *(unsigned __int8 *)(dword_B0F10 + v5), 0, v87, 2);
                if ( (unsigned int)off_AFC24 > 4 )
                {
                  snprintf(
                    v88,
                    0x800u,
                    "%s read ctrlboard tsensor data on chain %d, slave addr %d,tmp %d",
                    "read_sensor_on_ctrlboard",
                    v81,
                    *(unsigned __int8 *)(dword_B0F10 + v5),
                    SLOBYTE(v87[0]));
                  sub_3AF5C(4, v88, 0, v63);
                }
                if ( v55 == 2 )
                {
                  v3 = SLOBYTE(v87[0]);
                  goto LABEL_26;
                }
                if ( (unsigned int)off_AFC24 > 3 )
                {
                  v3 = 255;
                  snprintf(v88, 0x800u, "fail to read pic temp for chain %d", v81);
                  sub_3AF5C(3, v88, 0, v56);
                  goto LABEL_26;
                }
              }
              else if ( (unsigned int)off_AFC24 > 3 )
              {
                v3 = 255;
                snprintf(v88, 0x800u, "%s invalid index = %d on chain %d", "read_sensor_on_ctrlboard", v5, v81);
                sub_3AF5C(3, v88, 0, v53);
                goto LABEL_26;
              }
LABEL_25:
              v3 = 255;
            }
            else
            {
              if ( (unsigned int)off_AFC24 <= 4 )
                goto LABEL_25;
              snprintf(v88, 0x800u, "%s chain %d not pluged", "read_sensor_on_ctrlboard", v81);
              v3 = 255;
              sub_3AF5C(4, v88, 0, v54);
            }
LABEL_26:
            sub_3D7A0(&v85);
            v13 = v86 - v84 + (v86 - v84 < 0 ? 0xF4000 : 0);
            v14 = v85 - v83;
            if ( v86 - v84 < 0 )
            {
              --v14;
              v13 += 576;
            }
            if ( (unsigned int)off_AFC24 > 4 )
            {
              snprintf(
                v88,
                0x800u,
                "ctrlborad read %d on chain %d takes %ldms temp:%d\n",
                v5,
                v81,
                v13 / 1000 + 1000 * v14,
                v3);
              sub_3AF5C(4, v88, 0, v52);
            }
            goto LABEL_30;
          }
LABEL_20:
          if ( ++v11 == 4 )
            goto LABEL_21;
        }
        v11 = 1;
LABEL_17:
        if ( !dword_B0EE4 || dword_B0F1C )
          goto LABEL_19;
        goto LABEL_37;
      }
      v8 = sub_265EC(v7);
      if ( v5 < v8 )
        goto LABEL_10;
LABEL_50:
      v82 = v3;
      i = v81;
      v87[0] = "pic";
      v87[1] = "pcb";
      v87[2] = "chp";
      v87[3] = "ctrlboard";
      v87[4] = "max";
      memset(v88, 0, 0x100u);
      if ( !dword_B0F38 )
      {
        v60 = sub_17674();
        v61 = sub_265EC(v60);
        if ( v60 <= v61 )
          v62 = 4 * sub_265EC(v61) + 1;
        else
          v62 = 4 * sub_17674() + 1;
        dword_B0F38 = (int)malloc(v62);
      }
      if ( !dword_B0F3C )
      {
        v57 = sub_17674();
        v58 = sub_265EC(v57);
        if ( v57 <= v58 )
          v59 = 4 * sub_265EC(v58) + 1;
        else
          v59 = 4 * sub_17674() + 1;
        dword_B0F3C = (int)malloc(v59);
      }
      pthread_mutex_lock(&stru_B0EE8);
      v23 = sub_1829C();
      v24 = v23;
      switch ( v23 )
      {
        case 0:
          v25 = sub_265EC(v23);
          goto LABEL_54;
        case 1:
        case 2:
          v25 = sub_17674();
          if ( v25 <= 0 )
            goto LABEL_99;
          goto LABEL_55;
        case 3:
          v25 = sub_26DF8(v23);
LABEL_54:
          if ( v25 <= 0 )
          {
LABEL_99:
            v33 = -1;
            v27 = v24;
            v32 = -1;
          }
          else
          {
LABEL_55:
            v26 = 0;
            v27 = v24;
            v28 = 0;
            v29 = 0;
            v30 = 6 * v25;
            do
            {
              v29 += sprintf(
                       (char *)(dword_B0F38 + v29),
                       "%03d-",
                       *(__int16 *)(*(_DWORD *)(*(_DWORD *)(dword_B0EE0 + v2) + v27 * 4) + v26 + 2));
              v31 = *(_DWORD *)(*(_DWORD *)(dword_B0EE0 + v2) + v27 * 4) + v26;
              v26 += 6;
              v28 += sprintf((char *)(dword_B0F3C + v28), "%03d-", *(__int16 *)(v31 + 4));
            }
            while ( v30 != v26 );
            i = v81;
            v32 = v28 - 1;
            v33 = v29 - 1;
          }
          break;
        default:
          v33 = -1;
          v27 = v23;
          v32 = -1;
          break;
      }
      v34 = (const char *)dword_B0F3C;
      v35 = (const char *)dword_B0F38;
      *(_BYTE *)(dword_B0F3C + v32) = 32;
      v35[v33] = 32;
      sprintf(v88, "chain %d %s temp: %s, failure:%s", i, (const char *)v87[v27], v35, v34);
      v36 = dword_B0F40;
      if ( !dword_B0F40 )
      {
        v36 = sub_79514("bmminer_temp");
        dword_B0F40 = v36;
      }
      sub_7B3D8(v36, "temperature/temperature.c", 25, "dump_temp_info", 14);
      pthread_mutex_unlock(&stru_B0EE8);
    }
    if ( dword_B0F00 == 3 )
      v37 = sub_18DB4();
    else
      v37 = sub_18A2C();
    v38 = 255;
    for ( j = 0; j != 4; ++j )
    {
      v40 = sub_18B34(j, 3u);
      if ( v40 < v38 )
        v38 = v40;
    }
    v41 = 0;
    v42 = 0;
    v43 = 0;
    v44 = sub_18AE8();
    do
    {
      v45 = sub_266F0(v43);
      if ( v45 )
      {
        v46 = 0;
        v42 = (unsigned __int8)(v42 + 1);
        while ( 1 )
        {
          v47 = v46 < sub_17674();
          v45 = v43;
          if ( !v47 )
            break;
          if ( dword_B0F00 == 3 )
            v41 += sub_18028(v43, 3, (unsigned __int8)v46);
          else
            v41 += sub_186A4(v43, (unsigned __int8)v46);
          ++v46;
        }
      }
      ++v43;
    }
    while ( v43 != 4 );
    v48 = (const char *)sub_26510(v45);
    if ( !strcmp(v48, "BHB28601") && !dword_B0EE4 )
      goto LABEL_86;
    v49 = 2 * v42;
    if ( v37 > 77 )
    {
      sub_29B50(1);
      if ( v41 < v49 )
        sub_29B68(0);
      else
        sub_29B68(1);
      if ( (unsigned int)off_AFC24 > 3 )
      {
        snprintf(
          v88,
          0x800u,
          "over max temp, pcb temp %d (max %d), chip temp %d(max %d) pcb temp rise %d chip temp rise %d, total_exit_failure %d\n",
          v37,
          77,
          v44,
          95,
          0,
          0,
          v41);
        sub_3AF5C(3, v88, 0, v77);
      }
      sub_46318(8, 0);
LABEL_85:
      sub_43B4C(17, "over max temp");
      goto LABEL_86;
    }
    if ( v41 >= v49 )
    {
      sub_29B68(1);
      goto LABEL_83;
    }
    v64 = sub_29B68(0);
    if ( v37 - v38 > 50 )
    {
LABEL_83:
      if ( (unsigned int)off_AFC24 > 3 )
      {
        snprintf(
          v88,
          0x800u,
          "over max temp, pcb temp %d (max %d), chip temp %d(max %d) pcb temp rise %d chip temp rise %d, total_exit_failure %d\n",
          v37,
          77,
          v44,
          95,
          0,
          0,
          v41);
LABEL_144:
        sub_3AF5C(3, v88, 0, v72);
      }
LABEL_84:
      sub_46318(11, 0);
      goto LABEL_85;
    }
    v65 = sub_3F37C(v64);
    v66 = v37 == 0;
    if ( !v37 )
      v66 = v65 == 3;
    if ( v66 )
    {
      v67 = 255;
      v68 = 0;
      do
      {
        v69 = v68++;
        v70 = sub_18BFC(v69);
        if ( v70 < v67 )
          LOWORD(v67) = v70;
        v67 = (__int16)v67;
      }
      while ( v68 != 4 );
      if ( !(_WORD)v67 )
      {
        v71 = dword_B0F44 - 9 < 0;
        ++dword_B0F44;
        if ( !(v71 ^ __OFSUB__(dword_B0F44, 10) | (dword_B0F44 == 10)) )
        {
          if ( (unsigned int)off_AFC24 > 3 )
          {
            snprintf(
              v88,
              0x800u,
              "over max temp, pcb temp %d (max %d), chip temp %d(max %d) pcb temp rise %d chip temp rise %d, total_exit_failure %d\n",
              0,
              77,
              v44,
              95,
              0,
              0,
              v41);
            goto LABEL_144;
          }
          goto LABEL_84;
        }
      }
    }
LABEL_86:
    v50 = sub_169F4(400, 0);
    if ( sub_3F36C(v50) && dword_B413C != 1 && dword_B0F48 )
      sub_16FAC();
    usleep((__useconds_t)&unk_F4240);
    if ( !byte_B0F04 )
      goto LABEL_4;
    v0 = dword_B0F14;
    ++dword_B0F48;
  }
  while ( dword_B0F14 );
LABEL_92:
  if ( (unsigned int)off_AFC24 > 3 )
  {
    strcpy(v88, "temp monitor thread exit");
    sub_3AF5C(3, v88, v0, *(_DWORD *)" thread exit");
  }
  return 0;
}
