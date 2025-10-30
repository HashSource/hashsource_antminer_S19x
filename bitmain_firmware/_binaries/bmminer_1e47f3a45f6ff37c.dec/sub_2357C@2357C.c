int __fastcall sub_2357C(int a1, unsigned int a2, unsigned int a3, int a4)
{
  float v4; // s0
  int v7; // r8
  unsigned int v8; // r6
  int v9; // r4
  int v10; // r6
  double v11; // d8
  int i; // r8
  unsigned int v13; // r3
  unsigned int v14; // s31
  float v15; // s27
  int v16; // r8
  float v17; // s30
  float v18; // s29
  float v19; // s15
  float v20; // s26
  int v21; // r0
  double v22; // d9
  float v23; // s15
  int v24; // r4
  float v25; // s16
  int j; // r4
  int v27; // r0
  int v28; // r0
  int k; // r4
  int result; // r0
  int v31; // r3
  int v32; // r3
  int v33; // r4
  int v34; // r0
  int v35; // r3
  int v36; // r4
  int v37; // r0
  int v38; // r3
  int v39; // r3
  int v40; // r3
  int v41; // r3
  int v42; // r3
  unsigned int v43; // [sp+14h] [bp-840h]
  int v44; // [sp+18h] [bp-83Ch]
  unsigned int v45; // [sp+1Ch] [bp-838h]
  int useconds; // [sp+24h] [bp-830h]
  _BYTE v48[4]; // [sp+34h] [bp-820h] BYREF
  int v49; // [sp+38h] [bp-81Ch] BYREF
  int v50; // [sp+3Ch] [bp-818h]
  struct timeval tv; // [sp+40h] [bp-814h] BYREF
  struct timeval v52; // [sp+48h] [bp-80Ch] BYREF
  char s[2052]; // [sp+50h] [bp-804h] BYREF

  tv.tv_sec = 0;
  v7 = (40 - dword_9CD8D0) / 2 + 100;
  tv.tv_usec = 0;
  v52.tv_sec = 0;
  v8 = dword_533B38 * dword_533B38 * a3;
  v52.tv_usec = 0;
  v9 = (dword_9CD8D0 / -10 + 6) * a4;
  if ( dword_9CD8D0 < -5 )
  {
    if ( dword_9CD8D0 < -10 )
      v9 += 700;
    else
      v9 += 300;
  }
  if ( sub_1ABF0() && dword_9CD8D0 < -15 )
    v9 += 800;
  if ( sub_1ABF0() && dword_9CD8D0 < -17 )
    v9 += 2700;
  v45 = v7 * (v8 / 0x64);
  v10 = sub_273A8();
  if ( (unsigned int)dword_B308C > 4 )
  {
    snprintf(
      s,
      0x800u,
      "power_ajust = %d, delay = %d, g_voltage = %d, g_bringup_temp = %d, target_power_value = %d\n",
      v7,
      v9,
      dword_533B38,
      dword_9CD8D0,
      v45);
    sub_3B6AC(4, s, 0, v39);
    v11 = v4;
    if ( (unsigned int)dword_B308C > 4 )
    {
      snprintf(s, 0x800u, "fixed step freq_start = %d, freq_end = %d, freq_step = %.2f\n", a2, a3, v4);
      sub_3B6AC(4, s, 0, v40);
    }
  }
  else
  {
    v11 = v4;
  }
  for ( i = 0; i != 4; ++i )
  {
    if ( sub_26C0C(i) )
      sub_28314(i, 1);
  }
  if ( a3 <= a2 )
    v13 = a2 - a3;
  else
    v13 = a3 - a2;
  v14 = (unsigned int)(((float)((float)v13 + v4) - 0.01) / v11);
  if ( !v14 )
    goto LABEL_46;
  v15 = 0.0;
  v16 = 1;
  v44 = 1;
  v43 = 1;
  useconds = 1000 * v9;
  v17 = (float)a2;
  v18 = (float)a3;
  do
  {
    v49 = 0;
    v50 = 0;
    v19 = (float)v43;
    if ( a3 <= a2 )
    {
      v20 = v17 - (float)(v19 * v4);
      if ( v20 < v18 )
        v20 = (float)a3;
    }
    else
    {
      v20 = v17 + (float)(v19 * v4);
      if ( v20 > v18 )
        v20 = (float)a3;
    }
    v21 = sub_191B8();
    if ( v21 <= 25 )
    {
      v22 = (double)(v10 - 1350) * 25.0 / 10.0;
      v23 = (double)(v21 + 45) * 20.0 / 5.0 + 330.0 + v22;
      if ( v23 < v15 )
      {
        sleep(1u);
        LOBYTE(v24) = 119;
        v23 = v22 + (double)(sub_191B8() + 45) * 20.0 / 5.0 + 330.0;
        do
        {
          if ( v23 >= v15 )
            break;
          sleep(1u);
          v24 = (unsigned __int8)(v24 - 1);
          v23 = v22 + (double)(sub_191B8() + 45) * 20.0 / 5.0 + 330.0;
        }
        while ( v24 );
      }
      if ( v23 <= v15 )
      {
        sub_481F0(9, 0);
        sub_2A0D0(1);
        sub_458A0(18, "temp can't support freq!");
        while ( 1 )
          sleep(1u);
      }
    }
    v25 = v15;
    for ( j = 0; j != 4; ++j )
    {
      v27 = sub_26C0C(j);
      if ( !v27 )
        continue;
      if ( v20 <= (float)sub_32C60(j) )
      {
        v25 = v20;
      }
      else
      {
        v27 = sub_32C60(j);
        if ( v4 <= (float)(v20 - (float)v27) )
        {
          v25 = v20;
          continue;
        }
        v25 = (float)sub_32C60(j);
      }
      sub_791C0(&v49, v48, 0);
      BYTE2(v50) = v48[0];
      v27 = sub_283A0(j, 1, 0, a1, v49, v50);
      if ( !v27 )
      {
        sub_481F0(21, 0);
        v27 = sub_458A0(13, "Unbalance happened, waiting!\n");
      }
      if ( (unsigned int)dword_B308C > 4 )
      {
        snprintf(s, 0x800u, "chain = %d set freq to %.2f", j, v25);
        v27 = sub_3B6AC(4, s, 0, v32);
      }
      dword_B3DE4[j] = (int)v25;
      dword_B3DF4[j] = (int)v25;
    }
    sub_31108(v27);
    v15 = v25;
    v28 = gettimeofday(&tv, 0);
    if ( v25 >= 200.0 )
    {
      if ( v44 )
      {
        LOWORD(v33) = sub_191B8();
        while ( 1 )
        {
          v28 = sub_27A38();
          if ( (__int16)v33 >= v28 )
            break;
          v33 = sub_191B8();
          if ( (unsigned int)dword_B308C > 3 )
          {
            v34 = sub_27A38();
            snprintf(s, 0x800u, "freq %.0f waiting board temp to %d,curr temp %d", v25, v34, v33);
            sub_3B6AC(3, s, 0, v35);
          }
          if ( !sub_31140(1, (int)v25, 10) )
          {
            sub_481F0(9, 0);
            sub_2A0D0(1);
            sub_458A0(18, "protect machine!");
            while ( 1 )
              sleep(1u);
          }
          sleep(0xAu);
          v28 = gettimeofday(&v52, 0);
          if ( v52.tv_sec - tv.tv_sec > 119 )
          {
            if ( (unsigned int)dword_B308C <= 4 )
              break;
            v44 = 0;
            snprintf(s, 0x800u, "200M can not heat up to %d", (__int16)v33);
            v28 = sub_3B6AC(4, s, 0, v41);
            goto LABEL_37;
          }
        }
      }
      v44 = 0;
    }
LABEL_37:
    sub_31108(v28);
    gettimeofday(&tv, 0);
    if ( v25 >= 400.0 )
    {
      if ( v16 )
      {
        LOWORD(v36) = sub_191B8();
        while ( (__int16)v36 < sub_27A38() )
        {
          v36 = sub_191B8();
          if ( (unsigned int)dword_B308C > 3 )
          {
            v37 = sub_27A38();
            snprintf(s, 0x800u, "freq %.0f waiting board temp to %d,curr temp %d", v25, v37, v36);
            sub_3B6AC(3, s, 0, v38);
          }
          if ( !sub_31140(1, (int)v25, 10) )
          {
            sub_481F0(9, 0);
            sub_2A0D0(1);
            sub_458A0(18, "protect machine!");
            while ( 1 )
              sleep(1u);
          }
          sleep(0xAu);
          gettimeofday(&v52, 0);
          if ( v52.tv_sec - tv.tv_sec > 119 )
          {
            if ( (unsigned int)dword_B308C <= 4 )
              break;
            v16 = 0;
            snprintf(s, 0x800u, "400M can not heat up to %d", (__int16)v36);
            sub_3B6AC(4, s, 0, v42);
            goto LABEL_40;
          }
        }
      }
      v16 = 0;
    }
LABEL_40:
    if ( v45 < (unsigned int)(float)((float)(v10 * v10) * v20) )
    {
      v10 -= 20;
      if ( v10 < dword_533B38 )
        v10 = dword_533B38;
      if ( sub_226A8() > v10 )
        sub_223A0(v10);
    }
    ++v43;
    usleep(useconds);
  }
  while ( v14 >= v43 );
LABEL_46:
  for ( k = 0; k != 4; ++k )
  {
    result = sub_26C0C(k);
    if ( result )
    {
      v31 = dword_534B44[k];
      dword_B3DE4[k] = v31;
      dword_B3DF4[k] = v31;
    }
  }
  return result;
}
