int __fastcall sub_23DC4(int a1, int a2, unsigned int a3, unsigned int a4, char a5)
{
  float v5; // s0
  const char *v10; // r3
  int v11; // r3
  int result; // r0
  unsigned int v13; // r3
  unsigned int v14; // r6
  unsigned int v15; // r4
  float v16; // s19
  float v17; // s17
  float v18; // s16
  float v19; // s15
  int v20; // r3
  _BYTE v21[4]; // [sp+24h] [bp-810h] BYREF
  int v22; // [sp+28h] [bp-80Ch] BYREF
  int v23; // [sp+2Ch] [bp-808h]
  char s[2052]; // [sp+30h] [bp-804h] BYREF

  if ( (unsigned int)dword_B308C > 4 )
  {
    v10 = "true";
    if ( !a5 )
      v10 = "false";
    snprintf(
      s,
      0x800u,
      "fixed step chain = %d, freq_start = %d, freq_end = %d, freq_step = %.2f, is_higher_voltage = %s\n",
      a1,
      a3,
      a4,
      v5,
      v10);
    sub_3B6AC(4, s, 0, v11);
  }
  result = sub_28314(a1, 1);
  v23 = 0;
  v22 = 0;
  if ( a3 >= a4 )
    v13 = a3 - a4;
  else
    v13 = a4 - a3;
  v14 = (unsigned int)(((float)((float)v13 + v5) - 0.01) / v5);
  if ( v14 )
  {
    v15 = 1;
    v17 = (float)a4;
    do
    {
      v16 = (float)a3;
      v19 = (float)v15;
      if ( a3 < a4 )
      {
        v18 = v16 + (float)(v19 * v5);
        if ( v18 > v17 )
          v18 = (float)a4;
      }
      else
      {
        v18 = v16 - (float)(v19 * v5);
        if ( v18 < v17 )
          v18 = (float)a4;
      }
      ++v15;
      sub_791C0(&v22, v21, 0);
      BYTE2(v23) = v21[0];
      sub_283A0(a1, 1, 0, a2, v22, v23);
      if ( (unsigned int)dword_B308C > 4 )
      {
        snprintf(s, 0x800u, "chain = %d set freq to %.2f", a1, v18);
        sub_3B6AC(4, s, 0, v20);
      }
      result = usleep(0x186A0u);
    }
    while ( v14 >= v15 );
  }
  dword_B3DE4[a1] = a4;
  dword_B3DE4[a1 + 4] = a4;
  return result;
}
