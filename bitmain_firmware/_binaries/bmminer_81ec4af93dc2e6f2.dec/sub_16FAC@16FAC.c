int sub_16FAC()
{
  float v0; // s0
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  float v5; // s8
  float v6; // s0
  int v7; // s8
  int v8; // r3
  double v9; // d0
  int v10; // s16
  int result; // r0
  float v12; // s0
  int v13; // r6
  int v14; // r0
  int v15; // r3
  int v16; // r3
  int v17; // r3
  char s[2048]; // [sp+20h] [bp-800h] BYREF

  if ( (byte_9C89FC & 2) != 0 )
  {
    v1 = (unsigned __int8)byte_9C8A02;
    if ( (unsigned __int8)byte_9C8A02 <= 0x64u )
      return sub_16E7C(v1);
  }
  if ( dword_B0F00 == 3 )
  {
    if ( sub_18DB4() <= 65 )
    {
LABEL_5:
      if ( flt_AF2E0 == -10000.0 )
        flt_AF2E0 = (float)sub_26910();
      if ( dword_B0F00 == 3 )
        v2 = sub_18DB4();
      else
        v2 = sub_18A2C();
      flt_B0E84 = (float)v2;
      v3 = sub_18D7C(v2);
      flt_B0E88 = (float)v3;
      v4 = sub_18D24(v3);
      v5 = flt_AF2E0;
      flt_B0E8C = (float)v4;
      sub_16820((int)flt_AF2E0);
      v6 = v5 + v0;
      flt_AF2E0 = v6;
      v7 = (int)(float)(v5 - v6);
      v8 = v7;
      if ( v7 < 0 )
        v8 = -v7;
      if ( (double)v8 > 0.9 )
      {
        v9 = v6;
        if ( (unsigned int)off_AFC24 <= 4 )
          goto LABEL_13;
        snprintf(s, 0x800u, "feedback: %f %f, input: %f", flt_B0E84, flt_B0E88, v9);
        sub_3AF5C(4, s, 0, v17);
        v6 = flt_AF2E0;
      }
      v9 = v6;
LABEL_13:
      v10 = (int)(v9 + 0.5);
      result = sub_26910();
      if ( v10 == result )
        return result;
      v12 = (float)v10;
      if ( (float)v10 > flt_B0E7C )
      {
        if ( v12 <= flt_B0E78[0] )
        {
          v1 = (unsigned __int8)(unsigned int)v12;
          return sub_16E7C(v1);
        }
      }
      else if ( flt_B0E7C <= flt_B0E78[0] )
      {
        v1 = (unsigned __int8)(unsigned int)flt_B0E7C;
        return sub_16E7C(v1);
      }
      v1 = (unsigned __int8)(unsigned int)flt_B0E78[0];
      return sub_16E7C(v1);
    }
  }
  else if ( sub_18A2C() <= 65 )
  {
    goto LABEL_5;
  }
  if ( dword_B0F00 == 3 )
  {
    v13 = ((int (*)(void))sub_18D7C)();
    v14 = sub_18DB4();
  }
  else
  {
    v13 = sub_18C30();
    v14 = sub_18A2C();
  }
  flt_B0E84 = (float)v14;
  sub_16820(100);
  if ( (unsigned int)off_AFC24 > 4 )
  {
    snprintf(s, 0x800u, "feedback: %f, input: %d\n", flt_B0E84, 100);
    sub_3AF5C(4, s, 0, v16);
  }
  result = sub_16E7C(100);
  if ( (unsigned int)off_AFC24 > 4 )
  {
    strcpy(s, " Air out temprature is too high, set fixed full fan speed\n");
    result = sub_3AF5C(4, s, 0, *(unsigned __int16 *)"");
    if ( (unsigned int)off_AFC24 > 4 )
    {
      snprintf(s, 0x800u, "PWM keep 100:  airin_temp=%d, airout_temp=%f\n", v13, flt_B0E84);
      return sub_3AF5C(4, s, 0, v15);
    }
  }
  return result;
}
