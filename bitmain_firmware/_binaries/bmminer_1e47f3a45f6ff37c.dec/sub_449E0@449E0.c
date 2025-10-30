int sub_449E0()
{
  int v0; // r10
  int v1; // r4
  __int16 v2; // r7
  int v3; // r0
  int v4; // r0
  int v5; // r3
  int v6; // r8
  const char *v7; // r0
  int v8; // r4
  int v9; // r3
  int v10; // r4
  int i; // r1
  const char *v12; // r0
  int v13; // r3
  const char *v15; // r0
  int v16; // r7
  const char *v17; // r0
  int v18; // r0
  int v19; // r3
  int v20; // lr
  int v21; // r5
  int v22; // r2
  int *v23; // r1
  bool v24; // zf
  int v25; // r0
  int v26; // r3
  int v27; // t1
  int v28; // r8
  _DWORD *v29; // r1
  int v30; // r3
  int v31; // r8
  _DWORD *v32; // r0
  int v33; // t1
  int v34; // r9
  int v35; // r2
  int v36; // r3
  int v37; // t1
  int v38; // r12
  int v39; // r12
  int v40; // r2
  int v41; // r3
  int v42; // r6
  _BOOL4 v43; // r3
  int v44; // r0
  int v45; // r9
  int v46; // r10
  int v47; // r3
  __int16 v48; // r5
  const char *v49; // r0
  int v50; // r0
  int v51; // r3
  int v53; // r4
  int v54; // r9
  int v55; // r0
  int v56; // r3
  int v57; // r3
  int v58; // r3
  int v59; // r3
  int v60; // r3
  bool v61; // cc
  int v62; // r3
  char s[2048]; // [sp+10h] [bp-800h] BYREF

  v1 = sub_27A58();
  if ( sub_18678() == 3 )
  {
    v48 = sub_191B8();
    v2 = v48 - 12;
    v49 = (const char *)sub_26A14();
    if ( !strcmp(v49, "BHB56903") )
    {
      if ( v2 > 9 )
      {
        if ( v2 > 19 )
        {
          if ( v2 <= 24 )
            v2 = v48 - 15;
        }
        else
        {
          v2 = v48 - 20;
        }
      }
      else
      {
        v2 = v48 - 22;
      }
    }
  }
  else
  {
    v2 = 0;
  }
  v3 = sub_191B8();
  if ( v3 < -11 )
    v1 = 10 * ((int)((double)v1 + (double)(-12 - v3) * 2.5) / 10);
  if ( dword_533B38 <= 0 || dword_B6EB4 == 1 )
    return 0;
  v4 = sub_226A8();
  v5 = dword_B3708;
  v6 = v4;
  if ( v2 < dword_B3708 )
  {
    if ( sub_26E38() <= 79 )
    {
      v43 = dword_B6EB4 == 0;
      if ( v2 >= -1 )
        v43 = 0;
      if ( v43 )
      {
        v45 = (dword_B3708 - v2) * (v1 + 20) / 20;
        v61 = v1 + 49 < v45;
        if ( v1 + 49 >= v45 )
          v0 = v1 + 50;
        else
          v45 = v1 + 50;
        if ( v61 )
          v0 = v45;
      }
      else
      {
        sub_1ABF0();
        if ( sub_1ABF0() )
          v44 = 40;
        else
          v44 = 30;
        if ( v1 + 39 >= sub_8F800((dword_B3708 - v2) * (v44 + v1)) )
        {
          if ( sub_1ABF0() )
            v50 = 40;
          else
            v50 = 30;
          v45 = sub_8F800((dword_B3708 - v2) * (v50 + v1));
        }
        else
        {
          sub_1ABF0();
          v45 = v1 + 40;
        }
        if ( sub_1ABF0() )
          v46 = 40;
        else
          v46 = 30;
        v0 = v1 + v46;
      }
      if ( (unsigned int)dword_B308C > 4 )
      {
        v59 = v6 - (dword_533B38 + v45);
        if ( v59 < 0 )
          v59 = dword_533B38 + v45 - v6;
        snprintf(
          s,
          0x800u,
          "curr_vol1 = %d, g_voltage = %d, compensate_voltage = %d, abs = %d",
          v6,
          dword_533B38,
          v45,
          v59);
        sub_3B6AC(4, s, 0, v60);
      }
      if ( v6 - (dword_533B38 + v45) > 9 )
      {
        v10 = (int)&unk_535948;
        if ( ++dword_534CCC <= 30 )
          return 0;
        sub_223A0(v6 - 10);
        usleep((__useconds_t)&unk_F4240);
        goto LABEL_27;
      }
      if ( dword_533B38 + v45 - v6 > 9 || v0 == v45 )
      {
        v53 = 2 * v45;
        v54 = v6 + 19;
        if ( v53 >= v0 )
          v53 = v0;
        v55 = dword_533B38 + v53;
        if ( dword_533B38 + v53 > v54 )
        {
          while ( 1 )
          {
            v61 = sub_226B8() <= v54;
            v54 += 10;
            if ( v61 )
              break;
            if ( (unsigned int)dword_B308C > 4 )
            {
              snprintf(s, 0x800u, "curr_vol2 = %d, g_voltage = %d,entrance_temp = %d", v6, dword_533B38, v2);
              sub_3B6AC(4, s, 0, v56);
            }
            if ( v6 > 1489 )
            {
              if ( sub_226A8() <= 1499 )
              {
                sub_223A0(1500);
                v55 = v53 + dword_533B38;
                goto LABEL_124;
              }
              break;
            }
            v6 += 10;
            sub_223A0(v6);
            usleep((__useconds_t)sub_30D40);
            v55 = v53 + dword_533B38;
            if ( v53 + dword_533B38 <= v54 )
              goto LABEL_124;
          }
          v55 = v53 + dword_533B38;
        }
LABEL_124:
        if ( v6 != v55 )
        {
          if ( v55 <= 1499 )
          {
            sub_223A0(v55);
          }
          else if ( sub_226A8() <= 1499 )
          {
            sub_223A0(1500);
          }
          if ( (unsigned int)dword_B308C > 4 )
          {
            snprintf(s, 0x800u, "curr_vol3 = %d, g_voltage = %d,entrance_temp = %d", v6, dword_533B38, v2);
            v10 = (int)&unk_535948;
            sub_3B6AC(4, s, 0, v58);
            goto LABEL_27;
          }
        }
      }
LABEL_26:
      v10 = (int)&unk_535948;
LABEL_27:
      *(_DWORD *)(v10 - 3196) = 0;
      return 0;
    }
    v5 = dword_B3708;
  }
  if ( v2 <= v5 + 1 )
  {
    v12 = (const char *)sub_26A14();
    v8 = v2 + 12;
    if ( !strcmp(v12, "BHB56903") )
      v13 = 39;
    else
      v13 = 42;
    goto LABEL_25;
  }
  v7 = (const char *)sub_26A14();
  v8 = v2 + 12;
  if ( !strcmp(v7, "BHB56903") )
    v9 = 41;
  else
    v9 = 43;
  if ( v9 <= v8 )
  {
    v15 = (const char *)sub_26A14();
    if ( !strcmp(v15, "BHB56903") )
      goto LABEL_31;
    v13 = 42;
LABEL_25:
    if ( v13 > v8 )
      goto LABEL_26;
LABEL_31:
    if ( (unsigned int)dword_B308C > 4 )
    {
      snprintf(s, 0x800u, "curr_vol = %d, g_voltage = %d, entrance_temp = %d", v6, dword_533B38, v2);
      sub_3B6AC(4, s, 0, v51);
    }
    v16 = sub_18E28();
    v17 = (const char *)sub_26A14();
    if ( !strcmp(v17, "BHB56903") && dword_B6EB4 == 2 )
      sub_4473C(&dword_B3710);
    v18 = sub_226A8();
    v21 = dword_533B38;
    v10 = 22856;
    v22 = dword_B3790;
    v23 = &dword_B3710;
    v24 = v18 == dword_533B38;
    v25 = dword_B3790 - 1;
    if ( v24 )
      v19 = 0;
    else
      HIWORD(v10) = 83;
    if ( v24 )
    {
      HIWORD(v10) = 83;
      v20 = v19;
      *(_DWORD *)(v10 + 0xFFFFF388) = v19;
    }
    v26 = 0;
    if ( !v24 )
      v20 = *(_DWORD *)(v10 - 3192);
    while ( 1 )
    {
      v27 = *v23++;
      v28 = v22 - 1;
      if ( v16 <= v27 )
        break;
      if ( ++v26 >= v25 )
        goto LABEL_47;
    }
    v28 = v26;
LABEL_47:
    v29 = &unk_B374C;
    v30 = 0;
    v31 = dword_B32C0[v28 + 292];
    v32 = &unk_B374C;
    while ( 1 )
    {
      v33 = v32[1];
      ++v32;
      v34 = v22 - 1;
      if ( v33 >= v20 )
        break;
      if ( ++v30 >= v22 - 1 )
        goto LABEL_51;
    }
    v34 = v30;
LABEL_51:
    v35 = v22 - 1;
    v36 = 0;
    while ( 1 )
    {
      v37 = v29[1];
      ++v29;
      v38 = v35;
      if ( v31 <= v37 )
        break;
      if ( ++v36 >= v35 )
        goto LABEL_55;
    }
    v38 = v36;
LABEL_55:
    v39 = v34 - v38;
    if ( v39 < 0 )
    {
      v40 = 5;
      v41 = *(_DWORD *)(v10 - 3188) + 1;
      *(_DWORD *)(v10 - 3188) = v41;
    }
    else if ( v39 <= 1 )
    {
      if ( v31 )
        v57 = 0;
      else
        v57 = v39;
      if ( v57 )
      {
        v41 = *(_DWORD *)(v10 - 3188);
        if ( v16 < dword_B3710 - 2 )
        {
          ++v41;
          v40 = 15;
          v31 = 0;
          *(_DWORD *)(v10 - 3188) = v41;
        }
        else
        {
          v40 = 60;
          v31 = 0;
        }
      }
      else
      {
        if ( v39 != 1 )
        {
          *(_DWORD *)(v10 - 3188) = 0;
          goto LABEL_27;
        }
        v40 = 15;
        v41 = *(_DWORD *)(v10 - 3188) + 1;
        *(_DWORD *)(v10 - 3188) = v41;
      }
    }
    else
    {
      v40 = 15;
      v31 = dword_B32C0[v34 + 291];
      v41 = *(_DWORD *)(v10 - 3188) + 1;
      *(_DWORD *)(v10 - 3188) = v41;
    }
    if ( v40 <= v41 )
    {
      *(_DWORD *)(v10 - 3188) = 0;
      if ( sub_42B0C() )
      {
        if ( v31 >= 15 )
          v42 = 30;
        else
          v42 = 20;
        v31 += v42;
      }
      else
      {
        v42 = 0;
      }
      sub_223A0(v21 - v31);
      if ( sub_42B0C() )
        v31 -= v42;
      *(_DWORD *)(v10 - 3192) = v31;
    }
    goto LABEL_27;
  }
  v10 = (int)&unk_535948;
  if ( ++dword_534CCC > 30 && (dword_9CD8D0 > 14 || v2 > dword_B3708 + 2) )
  {
    for ( i = dword_533B38; v6 - 9 > dword_533B38; i = dword_533B38 )
    {
      if ( (unsigned int)dword_B308C > 4 )
      {
        snprintf(s, 0x800u, "curr_vol4 = %d, g_voltage = %d, entrance_temp = %d", v6, i, v2);
        sub_3B6AC(4, s, 0, v47);
      }
      v6 -= 10;
      sub_223A0(v6);
      usleep((__useconds_t)&unk_F4240);
    }
    if ( v6 != i )
    {
      if ( (unsigned int)dword_B308C > 4 )
      {
        snprintf(s, 0x800u, "curr_vol5 = %d, g_voltage = %d,entrance_temp = %d", v6, i, v2);
        sub_3B6AC(4, s, 0, v62);
      }
      sub_223A0(dword_533B38);
    }
    goto LABEL_27;
  }
  return 0;
}
