int __fastcall sub_238DC(int a1, int a2, unsigned int a3, unsigned int a4, char a5)
{
  float v5; // s0
  float v10; // s18
  const char *v11; // r3
  int v12; // r3
  int result; // r0
  unsigned int v14; // r3
  float v15; // s17
  float v16; // s19
  unsigned int v17; // r4
  float v18; // s16
  float v19; // s0
  int v20; // r3
  unsigned int v21; // [sp+1Ch] [bp-820h]
  _BYTE v22[4]; // [sp+2Ch] [bp-810h] BYREF
  int v23; // [sp+30h] [bp-80Ch] BYREF
  int v24; // [sp+34h] [bp-808h]
  char s[2052]; // [sp+38h] [bp-804h] BYREF

  v10 = v5;
  if ( (unsigned int)off_AFC24 > 4 )
  {
    v11 = "false";
    if ( a5 )
      v11 = "true";
    snprintf(
      s,
      0x800u,
      "fixed step chain = %d, freq_start = %d, freq_end = %d, freq_step = %.2f, is_higher_voltage = %s\n",
      a1,
      a3,
      a4,
      v5,
      v11);
    sub_3AF5C(4, s, 0, v12);
  }
  result = sub_27D94(a1, 1);
  v24 = 0;
  v23 = 0;
  if ( a3 >= a4 )
    v14 = a3 - a4;
  else
    v14 = a4 - a3;
  v21 = (unsigned int)(((float)((float)v14 + v5) - 0.01) / v5);
  if ( v21 )
  {
    v15 = (float)a4;
    v16 = (float)a3;
    v17 = 1;
    do
    {
      v19 = (float)v17 * v10;
      if ( a3 < a4 )
      {
        v18 = v19 + v16;
        if ( (float)(v19 + v16) > v15 )
          v18 = (float)a4;
      }
      else
      {
        v18 = v16 - v19;
        if ( (float)(v16 - v19) < v15 )
          v18 = (float)a4;
      }
      sub_75D54(&v23, v22, 0);
      ++v17;
      BYTE2(v24) = v22[0];
      sub_27E18(a1, 1, 0, a2, v23, v24);
      if ( (unsigned int)off_AFC24 > 4 )
      {
        snprintf(s, 0x800u, "chain = %d set freq to %.2f", a1, v18);
        sub_3AF5C(4, s, 0, v20);
      }
      result = usleep((__useconds_t)&off_186A0);
    }
    while ( v21 >= v17 );
  }
  dword_B1070[a1] = a4;
  dword_B1070[a1 + 4] = a4;
  return result;
}
