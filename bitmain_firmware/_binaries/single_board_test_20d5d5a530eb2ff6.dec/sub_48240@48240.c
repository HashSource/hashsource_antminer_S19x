int __fastcall sub_48240(int a1)
{
  float v1; // s0
  int v2; // r5
  int v3; // r3
  float v4; // s16
  int result; // r0
  int v6; // s14
  float v7; // s14
  int v8; // r0
  float v9; // s15
  char v10[48]; // [sp+18h] [bp-30h] BYREF

  v2 = a1;
  if ( !byte_647730 )
  {
    flt_64770C = -5.6;
    flt_647710 = -0.2;
    flt_647714 = 0.0;
    dword_647708 = -1059481190;
    a1 = sub_62120(-1059481190);
    v9 = 25.0;
    if ( a1 )
      v9 = 47.0;
    flt_6476F8 = 100.0;
    flt_647700 = v9;
    flt_6476FC = 30.0;
    byte_647730 = 1;
  }
  if ( sub_62120(a1) )
    v3 = 49;
  else
    v3 = 27;
  if ( v3 < v2 )
  {
    flt_647704 = (float)v2;
    sub_4819C();
    return sub_48168(100);
  }
  v4 = flt_21C104;
  if ( flt_21C104 == -10000.0 )
    v4 = (float)dword_6476F4;
  flt_647704 = (float)v2;
  sub_4819C();
  flt_21C104 = v1 + v4;
  sub_1E938(v10, 0x30u);
  printf("%s ", v10);
  printf("%s : feedback: %f, input: %f\n\n", "set_pwm_by_pid", flt_647704, flt_21C104);
  snprintf(byte_647734, 0x100u, "feedback: %f, input: %f\n", flt_647704, flt_21C104);
  result = sub_3CC5C((int)byte_647734, v10);
  v6 = (int)(flt_21C104 + 0.5);
  if ( v6 != dword_6476F4 )
  {
    v7 = (float)v6;
    if ( v7 < flt_6476FC )
    {
      if ( flt_6476FC > flt_6476F8 )
        goto LABEL_11;
    }
    else
    {
      if ( v7 > flt_6476F8 )
      {
LABEL_11:
        v8 = (unsigned __int8)(unsigned int)flt_6476F8;
        return sub_48168(v8);
      }
      if ( v7 >= flt_6476FC )
      {
        v8 = (unsigned __int8)(unsigned int)v7;
        return sub_48168(v8);
      }
    }
    v8 = (unsigned __int8)(unsigned int)flt_6476FC;
    return sub_48168(v8);
  }
  return result;
}
