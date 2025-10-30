int sub_300B0()
{
  double v0; // d0
  int v1; // r0
  int v2; // r6
  int v4; // r3
  int v5; // r3
  int v6; // r7
  unsigned __int64 v7; // r10
  char v8; // r9
  int v9; // r0
  int v10; // r8
  int v11; // r0
  double v12; // d8
  double v13; // d17
  int v14; // r3
  int v15; // r3
  int v16; // r3
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r3
  int v21; // r0
  int v22; // r0
  int v23; // r3
  int v24; // r3
  const char *v25; // r0
  int v26; // r3
  int v27; // r3
  int v28; // r0
  int v29; // r0
  int v30; // r3
  int v31; // r3
  int v33; // r0
  int v34; // r0
  int v35; // r3
  int v36; // r0
  int v37; // r0
  int v38; // r3
  int v39; // r0
  int v40; // r3
  const char *v41; // r3
  int v42; // r3
  int v43; // r3
  bool v44; // r0
  int v46; // r0
  int v47; // r0
  int v48; // r3
  int v49; // r0
  int v50; // r0
  int v51; // r3
  bool v52; // r0
  int v54; // r0
  int v55; // r0
  int v56; // r3
  int v57; // r0
  int v58; // r0
  int v59; // r3
  int v60; // [sp+4h] [bp-818h]
  int v61; // [sp+14h] [bp-808h]
  char s[2052]; // [sp+18h] [bp-804h] BYREF

  prctl(15, "heart_beat", 0, 0, 0);
  v1 = sub_66404(1);
  v2 = v1;
  if ( (unsigned int)dword_B308C <= 3 )
  {
    if ( v1 != 1 )
      return 0;
    goto LABEL_7;
  }
  snprintf(s, 0x800u, "enable power watchdog: 0x%04x\n", v1);
  v1 = sub_3B6AC(3, s, 0, v4);
  if ( v2 == 1 )
  {
LABEL_7:
    v6 = 1;
    v7 = 0;
    v8 = 1;
    v61 = 1;
    while ( 1 )
    {
      while ( 1 )
      {
        v9 = sub_65B38(v1);
        if ( byte_B4128 )
          break;
        if ( !byte_B4138 )
          goto LABEL_11;
LABEL_14:
        pthread_setcancelstate(1, 0);
        v11 = sub_226A8();
        if ( v0 < 0.0 )
        {
          if ( (unsigned int)dword_B308C > 3 )
          {
            strcpy(s, "read_feedback_voltage failed!");
            sub_3B6AC(3, s, 0, *(_DWORD *)"!");
          }
          sub_458A0(11, "power voltage read failed, pls check!");
          return 0;
        }
        v12 = v0 * 100.0;
        v13 = (double)(unsigned int)v11;
        if ( v0 * 100.0 > (double)(unsigned int)v11 * 1.1 || v12 < v13 * 0.9 )
        {
          if ( (unsigned int)dword_B308C > 3 )
          {
            v41 = "rise";
            if ( v12 - v13 <= 0.0 )
              v41 = "drop";
            snprintf(s, 0x800u, "chain avg vol %s from %d to %.2f", v41, v11, v60, v12);
            sub_3B6AC(3, s, 0, v42);
          }
          sub_458A0(11, "power voltage rise or drop, pls check!");
          return 0;
        }
        if ( (unsigned int)dword_B308C > 4 )
        {
          snprintf(s, 0x800u, "power_heart_beat_thread cur_voltage = %d, avg_voltage = %.2f", v11, v12);
          v11 = sub_3B6AC(4, s, 0, v24);
        }
        if ( sub_65C64(v11) )
        {
LABEL_34:
          sub_458A0(11, "power status error!");
          return 0;
        }
        pthread_setcancelstate(0, 0);
        pthread_testcancel();
        if ( dword_B6EB4 )
        {
          if ( v7 <= 0x3C )
            v14 = 0;
          else
            v14 = v8 & 1;
          if ( v14 )
          {
            v21 = sub_273D8();
            sub_177F4((int)(float)(v21 - 2));
            if ( (unsigned int)dword_B308C > 3 )
            {
              v22 = sub_273D8();
              v8 = 0;
              snprintf(s, 0x800u, "10m later restore pid to %d", v22 - 2);
              sub_3B6AC(3, s, 0, v23);
            }
            else
            {
              v8 = 0;
            }
          }
          if ( v7 <= 0x5A )
            v15 = 0;
          else
            v15 = v61;
          if ( v15 )
          {
            v18 = sub_273D8();
            sub_177F4((int)(float)(v18 - 4));
            if ( (unsigned int)dword_B308C > 3 )
            {
              v19 = sub_273D8();
              v61 = 0;
              snprintf(s, 0x800u, "15m later restore pid to %d", v19 - 4);
              sub_3B6AC(3, s, 0, v20);
            }
            else
            {
              v61 = 0;
            }
          }
          if ( v7 <= 0x78 )
            v16 = 0;
          else
            v16 = v6;
          if ( v16 )
          {
            v17 = sub_273D8();
            sub_177F4((int)(float)(v17 - 6));
            if ( (unsigned int)dword_B308C <= 3 )
              goto LABEL_36;
            v39 = sub_273D8();
            v6 = 0;
            snprintf(s, 0x800u, "20m later restore pid to %d", v39 - 6);
LABEL_73:
            sub_3B6AC(3, s, 0, v40);
            goto LABEL_33;
          }
          goto LABEL_33;
        }
        v25 = (const char *)sub_26A14();
        if ( strcmp(v25, "BHB56902") )
        {
          if ( v7 <= 0x12 )
            v26 = 0;
          else
            v26 = v8 & 1;
          if ( v26 )
          {
            v36 = sub_273D8();
            sub_177F4((int)(float)(v36 - 3));
            if ( (unsigned int)dword_B308C > 3 )
            {
              v37 = sub_273D8();
              v8 = 0;
              snprintf(s, 0x800u, "5m later restore pid to %d", v37 - 3);
              sub_3B6AC(3, s, 0, v38);
            }
            else
            {
              v8 = 0;
            }
          }
          if ( v7 <= 0x24 )
            v27 = 0;
          else
            v27 = v61;
          if ( v27 )
          {
            v28 = sub_273D8();
            sub_177F4((int)(float)(v28 - 5));
            if ( (unsigned int)dword_B308C > 3 )
            {
              v29 = sub_273D8();
              v61 = 0;
              snprintf(s, 0x800u, "10m later restore pid to %d", v29 - 5);
              sub_3B6AC(3, s, 0, v30);
            }
            else
            {
              v61 = 0;
            }
          }
          goto LABEL_33;
        }
        if ( sub_1ABF0() )
        {
          if ( v7 <= 0x1E )
            v31 = 0;
          else
            v31 = v8 & 1;
          if ( v31 )
          {
            v49 = sub_273D8();
            sub_177F4((int)(float)(v49 - 2));
            if ( (unsigned int)dword_B308C > 3 )
            {
              v50 = sub_273D8();
              v8 = 0;
              snprintf(s, 0x800u, "5m later restore pid to %d", v50 - 2);
              sub_3B6AC(3, s, 0, v51);
            }
            else
            {
              v8 = 0;
            }
          }
          if ( !sub_1AA28() && !sub_1AB0C() )
          {
            if ( v7 <= 0x48 ? 0 : v61 )
            {
              v33 = sub_273D8();
              sub_177F4((int)(float)(v33 - 5));
              if ( (unsigned int)dword_B308C > 3 )
              {
                v34 = sub_273D8();
                v61 = 0;
                snprintf(s, 0x800u, "12m later restore pid to %d", v34 - 5);
                sub_3B6AC(3, s, 0, v35);
              }
              else
              {
                v61 = 0;
              }
            }
          }
          goto LABEL_33;
        }
        if ( v7 <= 0x1E )
          v43 = 0;
        else
          v43 = v8 & 1;
        if ( v43 )
        {
          v57 = sub_273D8();
          sub_177F4((int)(float)(v57 - 3));
          if ( (unsigned int)dword_B308C > 3 )
          {
            v58 = sub_273D8();
            v8 = 0;
            snprintf(s, 0x800u, "5m later restore pid to %d", v58 - 3);
            sub_3B6AC(3, s, 0, v59);
          }
          else
          {
            v8 = 0;
          }
        }
        if ( !v61 )
          goto LABEL_84;
        v52 = sub_1A930();
        if ( v7 > 0x3C && v52 )
        {
          v54 = sub_273D8();
          sub_177F4((int)(float)(v54 - 6));
          if ( (unsigned int)dword_B308C > 3 )
          {
            v55 = sub_273D8();
            v61 = 0;
            snprintf(s, 0x800u, "10m later restore pid to %d", v55 - 6);
            sub_3B6AC(3, s, 0, v56);
            goto LABEL_85;
          }
LABEL_84:
          v61 = 0;
        }
LABEL_85:
        if ( v6 )
        {
          v44 = sub_1A930();
          if ( v7 > 0x5A && v44 )
          {
            v46 = sub_273D8();
            sub_177F4((int)(float)(v46 - 9));
            if ( (unsigned int)dword_B308C <= 3 )
            {
LABEL_36:
              v6 = 0;
              goto LABEL_33;
            }
            v47 = sub_273D8();
            v6 = 0;
            snprintf(s, 0x800u, "15m later restore pid to %d", v47 - 9);
            goto LABEL_73;
          }
        }
LABEL_33:
        ++v7;
        v1 = sleep(0xAu);
      }
      v10 = (unsigned __int8)byte_B4138;
      if ( byte_B4138 )
        goto LABEL_14;
      if ( v0 * 100.0 < (double)dword_533B38 * 0.9 )
      {
        if ( (unsigned int)dword_B308C > 3 )
        {
          snprintf(s, 0x800u, "read_feedback_voltage %lf is too low", v0);
          sub_3B6AC(3, s, v10, v48);
        }
        sub_458A0(11, "power voltage abnormity, pls check!");
        return 0;
      }
LABEL_11:
      if ( sub_65C64(v9) )
        goto LABEL_34;
      v1 = sleep(0xAu);
    }
  }
  if ( (unsigned int)dword_B308C > 3 )
  {
    snprintf(s, 0x800u, "%s power enable watchdog error.\n", "power_heart_beat_thread");
    sub_3B6AC(3, s, 0, v5);
  }
  return 0;
}
