int sub_172BC()
{
  float v0; // s0
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  float v5; // s16
  float v6; // s0
  int v7; // s16
  int v8; // r3
  int v9; // s16
  int result; // r0
  float v11; // s0
  int v12; // r7
  int v13; // r0
  int v14; // r3
  int v15; // r3
  int v16; // r3
  char s[2052]; // [sp+20h] [bp-804h] BYREF

  if ( (byte_9CD8B4 & 2) != 0 )
  {
    v1 = (unsigned __int8)byte_9CD8BA;
    if ( (unsigned __int8)byte_9CD8BA <= 0x64u )
      return sub_1718C(v1);
  }
  if ( dword_B3C70 != 3 )
  {
    if ( sub_18E28() <= 65 )
      goto LABEL_5;
LABEL_21:
    if ( dword_B3C70 == 3 )
    {
      v12 = ((int (*)(void))sub_191B8)();
      v13 = sub_191F8();
    }
    else
    {
      v12 = sub_19058();
      v13 = sub_18E28();
    }
    flt_B3BF4 = (float)v13;
    sub_16A98(100);
    if ( (unsigned int)dword_B308C > 4 )
    {
      snprintf(s, 0x800u, "feedback: %f, input: %d\n", flt_B3BF4, 100);
      sub_3B6AC(4, s, 0, v15);
    }
    result = sub_1718C(100);
    if ( (unsigned int)dword_B308C > 4 )
    {
      strcpy(s, " Air out temprature is too high, set fixed full fan speed\n");
      result = sub_3B6AC(4, s, 0, *(unsigned __int16 *)"");
      if ( (unsigned int)dword_B308C > 4 )
      {
        snprintf(s, 0x800u, "PWM keep 100:  airin_temp=%d, airout_temp=%f\n", v12, flt_B3BF4);
        return sub_3B6AC(4, s, 0, v14);
      }
    }
    return result;
  }
  if ( sub_191F8() > 65 )
    goto LABEL_21;
LABEL_5:
  if ( flt_B2748 == -10000.0 )
    flt_B2748 = (float)sub_26E38();
  if ( dword_B3C70 == 3 )
    v2 = sub_191F8();
  else
    v2 = sub_18E28();
  flt_B3BF4 = (float)v2;
  v3 = sub_191B8(v2);
  flt_B3BF8 = (float)v3;
  v4 = sub_19160(v3);
  v5 = flt_B2748;
  flt_B3BFC = (float)v4;
  sub_16A98((int)flt_B2748);
  v6 = v5 + v0;
  flt_B2748 = v6;
  v7 = (int)(float)(v5 - v6);
  v8 = v7;
  if ( v7 < 0 )
    v8 = -v7;
  if ( (double)v8 > 0.9 && (unsigned int)dword_B308C > 4 )
  {
    snprintf(s, 0x800u, "feedback: %f %f, input: %f", flt_B3BF4, flt_B3BF8, v6);
    sub_3B6AC(4, s, 0, v16);
    v6 = flt_B2748;
  }
  v9 = (int)(v6 + 0.5);
  result = sub_26E38();
  if ( v9 != result )
  {
    v11 = (float)v9;
    if ( (float)v9 <= *(float *)&dword_B3BEC )
    {
      if ( *(float *)&dword_B3BEC > *(float *)dword_B3BE8 )
        goto LABEL_17;
      if ( v11 <= *(float *)&dword_B3BEC )
      {
        v1 = (unsigned __int8)(unsigned int)*(float *)&dword_B3BEC;
        return sub_1718C(v1);
      }
    }
    else if ( v11 > *(float *)dword_B3BE8 )
    {
LABEL_17:
      v1 = (unsigned __int8)(unsigned int)*(float *)dword_B3BE8;
      return sub_1718C(v1);
    }
    v1 = (unsigned __int8)(unsigned int)v11;
    return sub_1718C(v1);
  }
  return result;
}
