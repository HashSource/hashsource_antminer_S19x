int __fastcall sub_23090(int a1, unsigned int a2, unsigned int a3, int a4)
{
  float v4; // s0
  int v7; // r7
  unsigned int v8; // r5
  int v9; // r4
  int v10; // r5
  double v11; // d8
  int i; // r7
  unsigned int v13; // r3
  unsigned int v14; // s26
  float v15; // s31
  float v16; // s16
  float v17; // s28
  float v18; // s15
  float v19; // s17
  int v20; // r0
  double v21; // d11
  float v22; // s14
  int v23; // r4
  int v24; // r4
  int v25; // r0
  int v26; // r0
  int k; // r4
  int result; // r0
  int v29; // r3
  int v30; // r3
  int v31; // r4
  int v32; // r0
  int v33; // r3
  int v34; // r3
  int v35; // r4
  int v36; // r0
  int v37; // r3
  int v38; // r3
  int v39; // r3
  int v40; // r3
  int v41; // r3
  int v42; // r3
  unsigned int j; // [sp+10h] [bp-844h]
  int v44; // [sp+14h] [bp-840h]
  int v45; // [sp+18h] [bp-83Ch]
  unsigned int v46; // [sp+1Ch] [bp-838h]
  int useconds; // [sp+24h] [bp-830h]
  int v49; // [sp+28h] [bp-82Ch]
  _BYTE v50[4]; // [sp+34h] [bp-820h] BYREF
  __int64 v51; // [sp+38h] [bp-81Ch] BYREF
  struct timeval tv; // [sp+40h] [bp-814h] BYREF
  struct timeval v53; // [sp+48h] [bp-80Ch] BYREF
  char s[2052]; // [sp+50h] [bp-804h] BYREF

  tv.tv_sec = 0;
  v7 = (40 - dword_9C8A18) / 2 + 100;
  tv.tv_usec = 0;
  v8 = a3 * dword_4B6CAC * dword_4B6CAC;
  v53.tv_sec = 0;
  v9 = a4 * (dword_9C8A18 / -10 + 6);
  v53.tv_usec = 0;
  if ( dword_9C8A18 < -5 )
  {
    if ( dword_9C8A18 < -10 )
      v9 += 700;
    else
      v9 += 300;
  }
  if ( sub_1A760() && dword_9C8A18 < -15 )
    v9 += 800;
  if ( sub_1A760() && dword_9C8A18 < -17 )
    v9 += 2700;
  v46 = v7 * (v8 / 0x64);
  v10 = sub_26E54();
  if ( (unsigned int)off_AFC24 > 4 )
  {
    snprintf(
      s,
      0x800u,
      "power_ajust = %d, delay = %d, g_voltage = %d, g_bringup_temp = %d, target_power_value = %d\n",
      v7,
      v9,
      dword_4B6CAC,
      dword_9C8A18,
      v46);
    sub_3AF5C(4, s, 0, v39);
    v11 = v4;
    if ( (unsigned int)off_AFC24 > 4 )
    {
      snprintf(s, 0x800u, "fixed step freq_start = %d, freq_end = %d, freq_step = %.2f\n", a2, a3, v4);
      sub_3AF5C(4, s, 0, v40);
    }
  }
  else
  {
    v11 = v4;
  }
  for ( i = 0; i != 4; ++i )
  {
    if ( sub_266F0(i) )
      sub_27D94(i, 1);
  }
  if ( a3 <= a2 )
    v13 = a2 - a3;
  else
    v13 = a3 - a2;
  v14 = (unsigned int)(((float)((float)v13 + v4) - 0.01) / v11);
  if ( !v14 )
    goto LABEL_46;
  v16 = 0.0;
  v17 = (float)a3;
  useconds = 1000 * v9;
  v45 = 1;
  v44 = 1;
  for ( j = 1; j <= v14; ++j )
  {
    v15 = (float)a2;
    v51 = 0;
    v18 = (float)j;
    if ( a3 <= a2 )
    {
      v19 = v15 - (float)(v18 * v4);
      if ( v17 > v19 )
        v19 = (float)a3;
    }
    else
    {
      v19 = v15 + (float)(v18 * v4);
      if ( v17 < v19 )
        v19 = (float)a3;
    }
    v20 = sub_18D7C();
    if ( v20 <= 25 )
    {
      v21 = (double)(v10 - 1350) * 25.0 / 10.0;
      v22 = (double)(v20 + 45) * 20.0 / 5.0 + 330.0 + v21;
      if ( v16 > v22 )
      {
        sleep(1u);
        LOBYTE(v23) = 119;
        v22 = (double)(sub_18D7C() + 45) * 20.0 / 5.0 + 330.0 + v21;
        do
        {
          if ( v22 >= v16 )
            break;
          sleep(1u);
          v23 = (unsigned __int8)(v23 - 1);
          v22 = (double)(sub_18D7C() + 45) * 20.0 / 5.0 + 330.0 + v21;
        }
        while ( v23 );
      }
      if ( v16 >= v22 )
      {
        sub_46318(9, 0);
        sub_29B50(1);
        sub_43B4C(18, "temp can't support freq!");
        while ( 1 )
          sleep(1u);
      }
    }
    v24 = 0;
    v49 = v10;
    do
    {
      v25 = sub_266F0(v24);
      if ( !v25 )
        goto LABEL_33;
      if ( (float)sub_325F8(v24) >= v19 )
      {
        v16 = v19;
      }
      else
      {
        v25 = sub_325F8(v24);
        if ( (float)(v19 - (float)v25) >= v4 )
        {
          v16 = v19;
          goto LABEL_33;
        }
        v16 = (float)sub_325F8(v24);
      }
      sub_75D54(&v51, v50, 0);
      BYTE6(v51) = v50[0];
      v25 = sub_27E18(v24, 1, 0, a1, v51, HIDWORD(v51));
      if ( !v25 )
      {
        sub_46318(21, 0);
        v25 = sub_43B4C(13, "Unbalance happened, waiting!\n");
      }
      if ( (unsigned int)off_AFC24 > 4 )
      {
        snprintf(s, 0x800u, "chain = %d set freq to %.2f", v24, v16);
        v25 = sub_3AF5C(4, s, 0, v30);
      }
      dword_B1070[v24] = (int)v16;
      dword_B1080[v24] = (int)v16;
LABEL_33:
      ++v24;
    }
    while ( v24 != 4 );
    sub_30AF0(v25);
    v26 = gettimeofday(&tv, 0);
    if ( v16 >= 200.0 )
    {
      if ( v44 )
      {
        v31 = sub_18D7C();
        while ( 1 )
        {
          v26 = sub_274BC();
          if ( v31 >= v26 )
            break;
          v31 = sub_18D7C();
          if ( (unsigned int)off_AFC24 > 3 )
          {
            v32 = sub_274BC();
            snprintf(s, 0x800u, "freq %.0f waiting board temp to %d,curr temp %d", v33, v16, v32, v31);
            sub_3AF5C(3, s, 0, v34);
          }
          if ( !sub_30B28(1, (int)v16, 10) )
          {
            sub_46318(9, 0);
            sub_29B50(1);
            sub_43B4C(18, "protect machine!");
            while ( 1 )
              sleep(1u);
          }
          sleep(0xAu);
          v26 = gettimeofday(&v53, 0);
          if ( v53.tv_sec - tv.tv_sec > 119 )
          {
            if ( (unsigned int)off_AFC24 <= 4 )
              break;
            v44 = 0;
            snprintf(s, 0x800u, "200M can not heat up to %d", v31);
            v26 = sub_3AF5C(4, s, 0, v41);
            goto LABEL_37;
          }
        }
      }
      v44 = 0;
    }
LABEL_37:
    sub_30AF0(v26);
    gettimeofday(&tv, 0);
    if ( v16 >= 400.0 )
    {
      if ( v45 )
      {
        v35 = sub_18D7C();
        while ( v35 < sub_274BC() )
        {
          v35 = sub_18D7C();
          if ( (unsigned int)off_AFC24 > 3 )
          {
            v36 = sub_274BC();
            snprintf(s, 0x800u, "freq %.0f waiting board temp to %d,curr temp %d", v37, v16, v36, v35);
            sub_3AF5C(3, s, 0, v38);
          }
          if ( !sub_30B28(1, (int)v16, 10) )
          {
            sub_46318(9, 0);
            sub_29B50(1);
            sub_43B4C(18, "protect machine!");
            while ( 1 )
              sleep(1u);
          }
          sleep(0xAu);
          gettimeofday(&v53, 0);
          if ( v53.tv_sec - tv.tv_sec > 119 )
          {
            if ( (unsigned int)off_AFC24 <= 4 )
              break;
            v45 = 0;
            snprintf(s, 0x800u, "400M can not heat up to %d", v35);
            sub_3AF5C(4, s, 0, v42);
            goto LABEL_40;
          }
        }
      }
      v45 = 0;
    }
LABEL_40:
    if ( v46 < (unsigned int)(float)((float)(v10 * v10) * v19) )
    {
      v10 -= 20;
      if ( v49 - 20 < dword_4B6CAC )
        v10 = dword_4B6CAC;
      if ( sub_22178() > v10 )
        sub_21E80(v10);
    }
    usleep(useconds);
  }
LABEL_46:
  for ( k = 0; k != 4; ++k )
  {
    result = sub_266F0(k);
    if ( result )
    {
      v29 = dword_4B6CB8[k];
      dword_B1070[k] = v29;
      dword_B1080[k] = v29;
    }
  }
  return result;
}
