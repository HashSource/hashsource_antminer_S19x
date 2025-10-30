void sub_1409C()
{
  float v0; // s0
  int v1; // r0
  int v2; // r6
  int v3; // r5
  int v4; // r4
  int v5; // r0
  bool v6; // cc
  bool v7; // cc
  _BOOL4 v8; // r5
  int v9; // r0
  int v10; // r8
  int v11; // r7
  int v12; // r6
  float v13; // s14
  int v14; // r0
  int v15; // r6
  char s[2048]; // [sp+18h] [bp-800h] BYREF

  v1 = sub_1758C();
  v2 = sub_171C0(v1);
  v3 = sub_17264();
  v4 = sub_169E4();
  v5 = sub_16B30();
  v6 = v3 <= 2;
  if ( v3 <= 2 )
    v6 = v2 <= 2;
  if ( !v6 )
    goto LABEL_21;
  v7 = v5 <= 85;
  if ( v5 <= 85 )
    v7 = v4 <= 70;
  v8 = !v7;
  if ( !v7 )
  {
LABEL_21:
    v15 = sub_16940(v5);
    flt_9F7E8 = (float)sub_16B30();
    sub_13BE8();
    sub_13EE8(100);
    if ( (unsigned int)dword_9E31C > 3 )
    {
      strcpy(s, " Air out temprature is too high, set fixed full fan speed\n");
      sub_47AB4(3, s, 0);
      if ( (unsigned int)dword_9E31C > 3 )
      {
        snprintf(s, 0x800u, "PWM keep 100:  airin_temp=%d, airout_temp=%f\n", v15, flt_9F7E8);
        sub_47AB4(3, s, 0);
      }
    }
    return;
  }
  if ( (byte_241D04 & 2) == 0 || (unsigned __int8)byte_241D0A > 0x64u )
  {
    v9 = sub_1758C();
    v10 = *(unsigned __int8 *)(dword_A0D68 + 12978);
    v11 = sub_16940(v9);
    flt_9F7E8 = (float)sub_16B30();
    sub_13BE8();
    v12 = (int)v0 + v10;
    if ( v12 == *(unsigned __int8 *)(dword_A0D68 + 12978) )
      goto LABEL_19;
    v13 = (float)v12;
    if ( (float)v12 > *(float *)&dword_9F7E0 )
    {
      if ( v13 <= *(float *)&dword_9F7DC )
      {
        v14 = (unsigned __int8)(unsigned int)v13;
        goto LABEL_18;
      }
    }
    else if ( *(float *)&dword_9F7E0 <= *(float *)&dword_9F7DC )
    {
      v14 = (unsigned __int8)(unsigned int)*(float *)&dword_9F7E0;
LABEL_18:
      sub_13EE8(v14);
LABEL_19:
      if ( (unsigned int)dword_9E31C > 4 )
      {
        snprintf(
          s,
          0x800u,
          "PWM change from %d to %d:  airin_temp=%d, airout_temp=%f\n",
          *(unsigned __int8 *)(dword_A0D68 + 12978),
          v12,
          v11,
          flt_9F7E8);
        sub_47AB4(4, s, 0);
      }
      return;
    }
    v14 = (unsigned __int8)(unsigned int)*(float *)&dword_9F7DC;
    goto LABEL_18;
  }
  sub_13EE8((unsigned __int8)byte_241D0A);
  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(s, 0x800u, "fan_etf: Set fixed fan speed=%d\n", (unsigned __int8)byte_241D0A);
    sub_47AB4(3, s, v8);
  }
}
