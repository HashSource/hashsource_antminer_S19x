int sub_2FAB8()
{
  double v0; // d0
  int v1; // r0
  int v2; // r6
  int v4; // r8
  int v5; // r10
  char v6; // r9
  unsigned __int64 v7; // r6
  int v8; // r0
  int v9; // r11
  int v10; // r0
  double v11; // d8
  double v12; // d7
  int v13; // r3
  int v14; // r3
  int v15; // r3
  int v16; // r3
  int v17; // r3
  int v18; // r3
  int v19; // r3
  const char *v20; // r0
  int v21; // r3
  int v22; // r3
  int v23; // r0
  int v24; // r0
  int v25; // r0
  int v26; // r0
  int v27; // r3
  int v28; // r0
  int v29; // r0
  int v30; // r3
  int v31; // r0
  int v32; // r3
  int v33; // r0
  int v34; // r0
  int v35; // r3
  _BOOL4 v36; // r0
  int v37; // r3
  int v39; // r0
  int v40; // r0
  int v41; // r3
  bool v42; // r0
  int v44; // r0
  int v45; // r0
  const char *v46; // r3
  int v47; // r3
  int v48; // r0
  int v49; // r3
  int v50; // r0
  int v51; // r0
  int v52; // r3
  bool v53; // r0
  int v55; // r0
  int v56; // r0
  int v57; // r3
  int v58; // r0
  int v59; // r0
  int v60; // r3
  int v61; // [sp+4h] [bp-818h]
  char s[2052]; // [sp+18h] [bp-804h] BYREF

  prctl(15, "heart_beat", 0, 0, 0);
  v1 = sub_67024(1);
  v2 = v1;
  if ( (unsigned int)off_AFC24 <= 3 )
  {
    if ( v1 != 1 )
      return 0;
    goto LABEL_4;
  }
  snprintf(s, 0x800u, "enable power watchdog: 0x%04x\n", v1);
  v1 = sub_3AF5C(3, s, 0, v16);
  if ( v2 == 1 )
  {
LABEL_4:
    v4 = 1;
    v5 = 1;
    v6 = 1;
    v7 = 0;
    while ( 1 )
    {
      v8 = sub_66750(v1);
      if ( byte_B13B8 )
      {
        v9 = (unsigned __int8)byte_B13C8;
        if ( byte_B13C8 )
          goto LABEL_7;
        if ( v0 * 100.0 < (double)dword_4B6CAC * 0.9 )
        {
          if ( (unsigned int)off_AFC24 > 3 )
          {
            snprintf(s, 0x800u, "read_feedback_voltage %lf is too low", v0);
            sub_3AF5C(3, s, v9, v18);
          }
          sub_43B4C(11, "power voltage abnormity, pls check!");
          return 0;
        }
LABEL_28:
        if ( sub_6687C(v8) )
          goto LABEL_29;
        v1 = sleep(0xAu);
      }
      else
      {
        if ( !byte_B13C8 )
          goto LABEL_28;
LABEL_7:
        pthread_setcancelstate(1, 0);
        v10 = sub_22178();
        if ( v0 < 0.0 )
        {
          if ( (unsigned int)off_AFC24 > 3 )
          {
            strcpy(s, "read_feedback_voltage failed!");
            sub_3AF5C(3, s, 0, *(_DWORD *)"!");
          }
          sub_43B4C(11, "power voltage read failed, pls check!");
          return 0;
        }
        v11 = v0 * 100.0;
        v12 = (double)(unsigned int)v10;
        if ( v0 * 100.0 > (double)(unsigned int)v10 * 1.1 || v11 < v12 * 0.9 )
        {
          if ( (unsigned int)off_AFC24 > 3 )
          {
            v46 = "drop";
            if ( v11 - v12 > 0.0 )
              v46 = "rise";
            snprintf(s, 0x800u, "chain avg vol %s from %d to %.2f", v46, v10, v61, v11);
            sub_3AF5C(3, s, 0, v47);
          }
          sub_43B4C(11, "power voltage rise or drop, pls check!");
          return 0;
        }
        if ( (unsigned int)off_AFC24 > 4 )
        {
          snprintf(s, 0x800u, "power_heart_beat_thread cur_voltage = %d, avg_voltage = %.2f", v10, v11);
          v10 = sub_3AF5C(4, s, 0, v19);
        }
        if ( sub_6687C(v10) )
        {
LABEL_29:
          sub_43B4C(11, "power status error!");
          return 0;
        }
        pthread_setcancelstate(0, 0);
        pthread_testcancel();
        if ( dword_B413C )
        {
          if ( v7 > 0x3C )
            v13 = v6 & 1;
          else
            v13 = 0;
          if ( v13 )
          {
            v28 = sub_26E84();
            sub_174A4((int)(float)(v28 - 2));
            if ( (unsigned int)off_AFC24 > 3 )
            {
              v29 = sub_26E84();
              v6 = 0;
              snprintf(s, 0x800u, "10m later restore pid to %d", v29 - 2);
              sub_3AF5C(3, s, 0, v30);
            }
            else
            {
              v6 = 0;
            }
          }
          if ( v7 > 0x5A )
            v14 = v5;
          else
            v14 = 0;
          if ( v14 )
          {
            v25 = sub_26E84();
            sub_174A4((int)(float)(v25 - 4));
            if ( (unsigned int)off_AFC24 > 3 )
            {
              v26 = sub_26E84();
              snprintf(s, 0x800u, "15m later restore pid to %d", v26 - 4);
              v5 = 0;
              sub_3AF5C(3, s, 0, v27);
            }
            else
            {
              v5 = 0;
            }
          }
          if ( v7 > 0x78 )
            v15 = v4;
          else
            v15 = 0;
          if ( v15 )
          {
            v24 = sub_26E84();
            sub_174A4((int)(float)(v24 - 6));
            if ( (unsigned int)off_AFC24 <= 3 )
              goto LABEL_50;
            v31 = sub_26E84();
            snprintf(s, 0x800u, "20m later restore pid to %d", v31 - 6);
LABEL_58:
            v4 = 0;
            sub_3AF5C(3, s, 0, v32);
            goto LABEL_26;
          }
          goto LABEL_26;
        }
        v20 = (const char *)sub_26510();
        if ( strcmp(v20, "BHB56902") )
        {
          if ( v7 > 0x12 )
            v21 = v6 & 1;
          else
            v21 = 0;
          if ( v21 )
          {
            v33 = sub_26E84();
            sub_174A4((int)(float)(v33 - 3));
            if ( (unsigned int)off_AFC24 > 3 )
            {
              v34 = sub_26E84();
              snprintf(s, 0x800u, "5m later restore pid to %d", v34 - 3);
              v6 = 0;
              sub_3AF5C(3, s, 0, v35);
            }
            else
            {
              v6 = 0;
            }
          }
          if ( v7 > 0x24 )
            v22 = v5;
          else
            v22 = 0;
          if ( v22 )
          {
            v23 = sub_26E84();
            sub_174A4((int)(float)(v23 - 5));
            if ( (unsigned int)off_AFC24 <= 3 )
              goto LABEL_47;
            v48 = sub_26E84();
            snprintf(s, 0x800u, "10m later restore pid to %d", v48 - 5);
            v5 = 0;
            sub_3AF5C(3, s, 0, v49);
          }
          goto LABEL_26;
        }
        v36 = sub_1A760();
        if ( v7 > 0x1E )
          v37 = v6 & 1;
        else
          v37 = 0;
        if ( v36 )
        {
          if ( v37 )
          {
            v50 = sub_26E84();
            sub_174A4((int)(float)(v50 - 2));
            if ( (unsigned int)off_AFC24 > 3 )
            {
              v51 = sub_26E84();
              v6 = 0;
              snprintf(s, 0x800u, "5m later restore pid to %d", v51 - 2);
              sub_3AF5C(3, s, 0, v52);
            }
            else
            {
              v6 = 0;
            }
          }
          if ( !sub_1A598() && !sub_1A67C() )
          {
            if ( v7 > 0x48 ? v5 : 0 )
            {
              v39 = sub_26E84();
              sub_174A4((int)(float)(v39 - 5));
              if ( (unsigned int)off_AFC24 <= 3 )
              {
LABEL_47:
                v5 = 0;
                goto LABEL_26;
              }
              v40 = sub_26E84();
              v5 = 0;
              snprintf(s, 0x800u, "12m later restore pid to %d", v40 - 5);
              sub_3AF5C(3, s, 0, v41);
            }
          }
          goto LABEL_26;
        }
        if ( v37 )
        {
          v58 = sub_26E84();
          sub_174A4((int)(float)(v58 - 3));
          if ( (unsigned int)off_AFC24 > 3 )
          {
            v59 = sub_26E84();
            snprintf(s, 0x800u, "5m later restore pid to %d", v59 - 3);
            v6 = 0;
            sub_3AF5C(3, s, 0, v60);
          }
          else
          {
            v6 = 0;
          }
        }
        if ( !v5 )
          goto LABEL_77;
        v53 = sub_1A4A0();
        if ( v7 > 0x3C && v53 )
        {
          v55 = sub_26E84();
          sub_174A4((int)(float)(v55 - 6));
          if ( (unsigned int)off_AFC24 > 3 )
          {
            v56 = sub_26E84();
            v5 = 0;
            snprintf(s, 0x800u, "10m later restore pid to %d", v56 - 6);
            sub_3AF5C(3, s, 0, v57);
            goto LABEL_78;
          }
LABEL_77:
          v5 = 0;
        }
LABEL_78:
        if ( v4 )
        {
          v42 = sub_1A4A0();
          if ( v7 > 0x5A && v42 )
          {
            v44 = sub_26E84();
            sub_174A4((int)(float)(v44 - 9));
            if ( (unsigned int)off_AFC24 <= 3 )
            {
LABEL_50:
              v4 = 0;
              goto LABEL_26;
            }
            v45 = sub_26E84();
            snprintf(s, 0x800u, "15m later restore pid to %d", v45 - 9);
            goto LABEL_58;
          }
        }
LABEL_26:
        v1 = sleep(0xAu);
        ++v7;
      }
    }
  }
  if ( (unsigned int)off_AFC24 > 3 )
  {
    snprintf(s, 0x800u, "%s power enable watchdog error.\n", "power_heart_beat_thread");
    sub_3AF5C(3, s, 0, v17);
  }
  return 0;
}
