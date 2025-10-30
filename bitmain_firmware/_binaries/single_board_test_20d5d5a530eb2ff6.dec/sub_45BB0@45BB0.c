int __fastcall sub_45BB0(const void **a1, int *a2)
{
  float v2; // s0
  char *v5; // r8
  size_t v6; // r9
  int v7; // r3
  float *v8; // r2
  float v9; // s16
  int v10; // r0
  double v11; // d8
  void *v12; // r0
  const void *v13; // r1
  int v14; // r5
  float *p_dest; // r6
  float *v16; // r0
  float v17; // s16
  int v18; // r3
  int v19; // r1
  float *v20; // r8
  int v21; // r6
  int v22; // s16
  const char *v23; // r5
  bool v24; // zf
  int v25; // r3
  float v26; // s15
  float v27; // s15
  float *v28; // r0
  int v29; // r8
  int v30; // r1
  int v31; // r1
  int v32; // r3
  unsigned int v33; // r10
  unsigned int v34; // r0
  int v35; // r2
  unsigned int v36; // s18
  unsigned int v37; // s20
  unsigned int v38; // r0
  unsigned int v39; // s15
  int v40; // r5
  int v41; // r10
  float v42; // s16
  float *v43; // r11
  const char *v44; // r6
  unsigned int v45; // s19
  bool v46; // zf
  int v47; // r1
  int v48; // r3
  float *v49; // r2
  unsigned int v50; // r1
  float *v51; // r10
  char *v52; // r8
  char *v53; // r6
  float *v54; // r8
  int v55; // r10
  float *v56; // r1
  int i; // r2
  int v58; // r11
  int v59; // r5
  int v60; // r6
  time_t v61; // r0
  int v62; // r5
  int v64; // r11
  int v65; // r5
  int v66; // r0
  __int64 v67; // r2
  double v68; // [sp+0h] [bp-10h] BYREF
  const void **dest; // [sp+10h] [bp+0h] BYREF
  int v70; // [sp+14h] [bp+4h]
  int v71; // [sp+18h] [bp+8h]
  double *v72; // [sp+1Ch] [bp+Ch]
  int v73; // [sp+20h] [bp+10h]
  unsigned int v74; // [sp+24h] [bp+14h]
  unsigned int v75; // [sp+28h] [bp+18h]
  char *v76; // [sp+2Ch] [bp+1Ch]
  char *s2; // [sp+30h] [bp+20h]
  int v78; // [sp+34h] [bp+24h]
  int v79; // [sp+3Ch] [bp+2Ch] BYREF
  char s[8]; // [sp+40h] [bp+30h] BYREF

  v5 = 0;
  v73 = *(_DWORD *)(dword_705300 + 12) * *(_DWORD *)(dword_705300 + 8);
  sub_1E938(s, 0x30u);
  v6 = 4 * v73;
  printf("%s ", s);
  printf("%s : matix len%d\n", "sw_sweep", v73);
  snprintf(byte_6441DC, 0x100u, "matix len%d", v73);
  sub_3CC5C((int)byte_6441DC, s);
  v79 = 0;
  sub_3F4BC();
  if ( *(int *)(dword_705300 + 4) > 0 )
  {
    v7 = 0;
    do
    {
      v8 = (float *)((char *)*a1 + 4 * v7++);
      *v8 = flt_7050A8;
    }
    while ( *(_DWORD *)(dword_705300 + 4) > v7 );
  }
  memcpy(&dest, *a1, v6);
  v9 = flt_7050A8;
  if ( flt_7050A8 > flt_7050AC )
  {
LABEL_121:
    v71 = 0;
    goto LABEL_24;
  }
  v5 = (char *)&unk_643DD4;
  if ( dword_6442DC )
  {
LABEL_122:
    sub_1E938(s, 0x30u);
    v71 = 0;
    printf("%s ", s);
    printf("%s : usr stop sweep!\n", "sw_sweep");
    strcpy(byte_6442E0, "usr stop sweep!");
    sub_3CC5C((int)byte_6442E0, s);
    goto LABEL_24;
  }
  while ( 1 )
  {
    if ( v79 != 1 )
    {
      if ( dword_7050BC )
      {
        if ( dword_7050BC != 1 )
          goto LABEL_123;
        v2 = v9;
        v10 = sub_45ABC((float *)&dest, &v79, 0, *a2);
        if ( v10 )
        {
LABEL_19:
          v71 = v10;
          goto LABEL_24;
        }
        goto LABEL_11;
      }
LABEL_18:
      v10 = sub_44BFC((float *)*a1);
      if ( v10 )
        goto LABEL_19;
LABEL_11:
      if ( sub_45708() )
        break;
      goto LABEL_12;
    }
    if ( dword_7050BC != 1 )
    {
      if ( dword_7050BC )
      {
LABEL_123:
        sub_1E938(s, 0x30u);
        printf("%s ", s);
        printf("%s : not support sweep mode\n", "sw_sweep");
        strcpy(byte_6443E0, "not support sweep mode");
        sub_3CC5C((int)byte_6443E0, s);
        if ( dword_7050BC )
          sub_45220();
        __asm { POP.W           {R4-R11,PC} }
      }
      goto LABEL_18;
    }
    v79 = 2;
    v78 = 1;
    sub_440EC(*(_DWORD *)dword_705300);
    v2 = v9;
    v10 = sub_45ABC((float *)&dest, &v79, v78, *a2);
    if ( v10 )
      goto LABEL_19;
    if ( sub_45708() )
      break;
LABEL_12:
    if ( sub_4523C() )
      break;
    sub_454FC(a2, (float *)&dest, a1);
    sub_45438(*a2);
    memcpy(&dest, *a1, v6);
    v9 = v9 + flt_7050B0;
    v2 = v9;
    sub_45660((int *)a1, a2);
    snprintf(s, 0x10u, "%d", (int)v9);
    if ( flt_7050AC < v9 )
      goto LABEL_121;
    if ( dword_6442DC )
      goto LABEL_122;
  }
  sub_1E938(s, 0x30u);
  printf("%s ", s);
  v11 = v9;
  printf("%s : current freq %f, mode %d, trytime %d\n\n", "sw_sweep", v11, dword_7050BC, v79);
  snprintf(byte_6444E0, 0x100u, "current freq %f, mode %d, trytime %d\n", v11, dword_7050BC, v79);
  sub_3CC5C((int)byte_6444E0, s);
  if ( dword_7050BC != 1 )
    goto LABEL_23;
  if ( v79 )
  {
    ++v79;
LABEL_23:
    v12 = (void *)*a1;
    v71 = 0;
    memcpy(v12, &dest, v6);
  }
  else
  {
    v79 = 1;
    v71 = 0;
    sub_1E938(s, 0x30u);
    printf("%s ", s);
    printf("%s : set retest flag\n", "sw_sweep");
    strcpy(byte_6445E0, "set retest flag");
    sub_3CC5C((int)byte_6445E0, s);
    memcpy((void *)*a1, &dest, v6);
    qword_7050E0 = time(0);
    sub_3DFBC((float *)*a1, *(_DWORD *)(dword_705300 + 4));
    flt_7050C4 = v2;
    sub_3E000((float *)*a1, *(_DWORD *)(dword_705300 + 4));
    flt_7050C8 = v2;
    sub_3E040((float *)*a1, *(_DWORD *)(dword_705300 + 4));
    flt_7050CC = v2;
    sub_3EBD8((float *)*a1, *(_DWORD *)(dword_705300 + 4));
    flt_7050D0 = v2;
    dword_7050D4 = LODWORD(flt_70534C);
  }
LABEL_24:
  sub_1E938(s, 0x30u);
  printf("%s ", s);
  printf("%s : sweep stage 1 end\n", "sw_sweep");
  strcpy(byte_6446E0, "sweep stage 1 end");
  sub_3CC5C((int)byte_6446E0, s);
  if ( dword_7050BC )
    sub_45220();
  v72 = &v68;
  v13 = *a1;
  v14 = *(_DWORD *)(dword_705300 + 12) * *(_DWORD *)(dword_705300 + 8);
  p_dest = (float *)&dest;
  v78 = (int)&dest;
  memcpy(&dest, v13, 4 * v14);
  v16 = sub_3DFBC((float *)&dest, v14);
  if ( v14 > 0 )
  {
    v5 = 0;
    p_dest = (float *)v78;
  }
  v17 = (float)(flt_7050B4 + 1.0) * v2;
  if ( v14 > 0 )
  {
    do
    {
      ++v5;
      v2 = v17;
      v16 = (float *)sub_3DF8C();
      if ( !v16 )
        *p_dest = v17;
      ++p_dest;
    }
    while ( (char *)v14 != v5 );
  }
  v18 = dword_705300;
  v19 = *(_DWORD *)(dword_705300 + 4);
  if ( v19 > 0 )
  {
    v20 = (float *)v78;
    v21 = 0;
    s2 = (char *)v14;
    do
    {
      v22 = *(_DWORD *)(v18 + 44);
      *v20 = *v20 - (float)((float)sub_62E24(v16) + (float)v22);
      sub_1E938(s, 0x30u);
      printf("%s ", s);
      printf("%s : diff board name[%s], diff stragety\n", "normal_mode_level_sweep", (const char *)(dword_223680 + 32));
      snprintf(byte_6447E0, 0x100u, "diff board name[%s], diff stragety", (const char *)(dword_223680 + 32));
      sub_3CC5C((int)byte_6447E0, s);
      v23 = (const char *)(dword_223680 + 32);
      v16 = (float *)strcmp((const char *)(dword_223680 + 32), "BHB56902");
      if ( v16 )
      {
        v16 = (float *)strcmp(v23, "BHB56903");
        if ( !v16 || (v16 = (float *)strcmp(v23, "BHB56907")) == 0 )
        {
          if ( (unsigned int)(v21 - 5) <= 1 )
          {
            v27 = 20.0;
            if ( v21 != 6 )
              v27 = 10.0;
            *v20 = *v20 - v27;
          }
          v24 = v21 == 48;
          if ( v21 != 48 )
            v24 = v21 == 35;
          v25 = v24;
          if ( (unsigned int)(v21 - 20) <= 1 )
            v25 |= 1u;
          if ( v25 )
            *v20 = *v20 - 20.0;
          if ( v21 == 22 )
            *(float *)(v78 + 88) = *(float *)(v78 + 88) - 10.0;
        }
      }
      else if ( (unsigned int)(v21 - 19) <= 1 )
      {
        v26 = 20.0;
        if ( v21 != 20 )
          v26 = 10.0;
        *v20 = *v20 - v26;
      }
      v18 = dword_705300;
      ++v21;
      ++v20;
      v19 = *(_DWORD *)(dword_705300 + 4);
    }
    while ( v21 < v19 );
    v14 = (int)s2;
  }
  v28 = sub_3E040((float *)v78, v19);
  floorf(*(float *)&v28);
  sub_1E938(s, 0x30u);
  printf("%s ", s);
  printf("%s : normal mode sweep avg %d\n", "normal_mode_level_sweep", (int)v2);
  snprintf(byte_6448E0, 0x100u, "normal mode sweep avg %d", (int)v2);
  sub_3CC5C((int)byte_6448E0, s);
  v29 = dword_705300;
  v30 = *(_DWORD *)(dword_705300 + 364);
  if ( v30 <= 0 )
    goto LABEL_126;
  v31 = dword_705300 + 16 * v30;
  v32 = dword_705300;
  v33 = 0;
  v34 = 0xFFFFFFF;
  do
  {
    v35 = *(_DWORD *)(v32 + 200);
    v32 += 16;
    if ( (int)v2 >= v35 )
    {
      if ( !v33 )
        v33 = v35;
      if ( v34 >= v35 )
        v34 = v35;
    }
  }
  while ( v31 != v32 );
  v75 = v34;
  if ( v33 )
  {
    if ( *(int *)(dword_705300 + 4) > 0 )
    {
      v76 = "BHB56907";
      v36 = v33 + 5;
      v37 = v33 - 10;
      v38 = v33 - 20;
      v39 = v33;
      s2 = "BHB56903";
      v70 = v14;
      v74 = v33;
      v40 = -180;
      v41 = 0;
      dest = a1;
      v42 = (float)v39;
      v43 = (float *)v78;
      v44 = (const char *)(dword_223680 + 32);
      v45 = v38;
      do
      {
        if ( (float)(*v43 - v42) > 5.0 )
          *v43 = (float)v36;
        if ( !strcmp(v44, "BHB56902") )
        {
          if ( (unsigned int)(v41 - 19) <= 1 && (unsigned int)((int)(float)(v42 - *v43) + 19) <= 0x26 )
            *v43 = (float)(v74 - v40);
        }
        else if ( !strcmp(v44, s2) || !strcmp(v44, v76) )
        {
          if ( (unsigned int)(v41 - 5) <= 1 && (unsigned int)((int)(float)(v42 - *v43) + 19) <= 0x26 )
            *v43 = (float)(v74 - (v40 + 140));
          v46 = v41 == 35;
          if ( v41 != 35 )
            v46 = v41 == 48;
          v47 = v46;
          if ( (unsigned int)(v41 - 20) <= 1 )
            v47 |= 1u;
          if ( v47 )
            *v43 = (float)v45;
          if ( v41 == 22 )
            *(float *)(v78 + 88) = (float)v37;
        }
        ++v41;
        ++v43;
        v40 += 10;
      }
      while ( v41 < *(_DWORD *)(v29 + 4) );
      v14 = v70;
      v33 = v74;
      a1 = dest;
    }
    if ( v14 > 0 )
    {
      v48 = 0;
      v49 = (float *)v78;
      v50 = dword_7050F4 + v33 - v75;
      do
      {
        ++v48;
        *v49 = *v49 - (float)v50;
        ++v49;
      }
      while ( v14 != v48 );
    }
    if ( sub_44428((float *)v78, 1) )
    {
      sub_428C0();
      v60 = -1;
      sub_40D18(*(_DWORD *)dword_705300);
    }
    else
    {
      v51 = (float *)(v33 - dword_7050F4);
      s2 = (char *)(v75 - dword_7050F4);
      sub_1E938(s, 0x30u);
      printf("%s ", s);
      v52 = s2;
      printf("%s : matched_freq: %d, freq_min: %d, freq_step: %d\n", "normal_mode_level_sweep", v51, s2, 25);
      s2 = v52;
      snprintf(byte_6449E0, 0x100u, "matched_freq: %d, freq_min: %d, freq_step: %d", v51, v52, 25);
      sub_3CC5C((int)byte_6449E0, s);
      if ( v51 < (float *)s2 )
      {
LABEL_110:
        byte_7050F8 = 0;
        sub_1E938(s, 0x30u);
        v60 = v71;
        printf("%s ", s);
        printf("%s : diff_level: %d\n", "normal_mode_level_sweep", (unsigned __int8)byte_7050F8);
        snprintf(byte_644AE0, 0x100u, "diff_level: %d", (unsigned __int8)byte_7050F8);
        sub_3CC5C((int)byte_644AE0, s);
      }
      else
      {
        v53 = s2;
        v54 = (float *)v78;
        v78 = (int)v51;
        v55 = v14;
        v76 = (char *)a1;
        while ( 1 )
        {
          sub_3E2C0();
          sub_4298C(dword_7050BC);
          sub_3EA4C((int)v54, *(_DWORD *)(dword_705300 + 8), *(_DWORD *)(dword_705300 + 12));
          sub_417F4(v54, *(_DWORD *)(dword_705300 + 4));
          sub_7778C(*(unsigned __int8 *)dword_705300, *(_DWORD *)(dword_705300 + 80));
          if ( v55 > 0 )
          {
            v56 = v54;
            for ( i = 0; i != v55; ++i )
            {
              *v56 = *v56 + 25.0;
              ++v56;
            }
          }
          sub_440DC();
          sub_40BE8(*(_DWORD *)dword_705300, dword_6E3468);
          sub_440CC();
          sub_40A88((int)&unk_6E3470, byte_6E4A9C);
          sub_422E4();
          if ( sub_45708() || sub_4523C() )
            break;
          v58 = sub_62448(0);
          v59 = dword_7050F0;
          if ( sub_62EDC(v53) )
          {
            v64 = v58 - v59;
            v65 = *(_DWORD *)(dword_705300 + 196);
            v66 = sub_62EDC(v53);
            sub_3E06C(1500, v64 + v65 + v66, 10);
          }
          v53 += 25;
          if ( v78 < (unsigned int)v53 )
          {
            a1 = (const void **)v76;
            goto LABEL_110;
          }
        }
        a1 = (const void **)v76;
        if ( s2 == v53 )
        {
          sub_472C0(14, 0);
          v60 = -1;
        }
        else
        {
          v67 = 1374389535LL * (unsigned int)(v78 - (_DWORD)v53);
          v60 = v71;
          byte_7050F8 = (HIDWORD(v67) >> 3) + 1;
          sub_1E938(s, 0x30u);
          printf("%s ", s);
          printf("%s : diff_level: %d\n", "normal_mode_level_sweep", (unsigned __int8)byte_7050F8);
          snprintf(byte_644BE0, 0x100u, "diff_level: %d", (unsigned __int8)byte_7050F8);
          sub_3CC5C((int)byte_644BE0, s);
        }
      }
    }
  }
  else
  {
LABEL_126:
    v60 = -1;
  }
  sub_1E938(s, 0x30u);
  printf("%s ", s);
  printf("%s : sweep stage 2 end\n", "sw_sweep");
  strcpy(byte_644CE0, "sweep stage 2 end");
  sub_3CC5C((int)byte_644CE0, s);
  if ( dword_7050BC )
    sub_45220();
  if ( flt_70534C < 0.99 )
  {
    v60 = -1;
    sub_1E938(s, 0x30u);
    printf("%s ", s);
    printf("%s : test over but not nonce rate err,nonce_rate:%f\n", "sw_sweep", flt_70534C);
    snprintf(byte_644DE0, 0x100u, "test over but not nonce rate err,nonce_rate:%f", flt_70534C);
    sub_3CC5C((int)byte_644DE0, s);
    sub_472C0(14, 0);
  }
  else if ( v60 )
  {
    sub_1E938(s, 0x30u);
    printf("%s ", s);
    v60 = -1;
    printf("%s : sweep run err,exit.\n", "sw_sweep");
    strcpy(byte_644EE0, "sweep run err,exit.");
    sub_3CC5C((int)byte_644EE0, s);
    sub_472C0(14, 0);
  }
  else
  {
    sub_3EA4C((int)*a1, *(_DWORD *)(dword_705300 + 8), *(_DWORD *)(dword_705300 + 12));
    v61 = time(0);
    v62 = v73;
    *(_QWORD *)&dword_7050E8 = v61;
    sub_3DFBC((float *)*a1, v73);
    sub_3E000((float *)*a1, v62);
    sub_4549C((int)*a1);
    snprintf(s, 0x10u, "%d", (int)v2);
    sub_2146C("Sweep freq", s, 0);
  }
  return v60;
}
