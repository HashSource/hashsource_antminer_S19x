int __fastcall sub_5F070(int a1, int a2, unsigned int a3, unsigned int a4)
{
  float v4; // s0
  unsigned int v9; // r3
  unsigned int v10; // r5
  unsigned int v11; // r5
  unsigned int v14; // [sp+18h] [bp-54h]
  char v16[4]; // [sp+24h] [bp-48h] BYREF
  int v17; // [sp+28h] [bp-44h]
  int v18; // [sp+2Ch] [bp-40h]
  int v19; // [sp+30h] [bp-3Ch] BYREF
  int v20; // [sp+34h] [bp-38h]
  char v21[52]; // [sp+38h] [bp-34h] BYREF

  dword_64B938 = a2;
  sub_1E938(v21, 0x30u);
  printf("%s ", v21);
  printf(
    "%s : set freq_start = %d, freq_end = %d, freq_step = %.2f\n\n",
    "inc_freq_with_fixed_step_parallel",
    a3,
    a4,
    v4);
  snprintf(byte_64B93C, 0x100u, "set freq_start = %d, freq_end = %d, freq_step = %.2f\n", a3, a4, v4);
  sub_3CC5C((int)byte_64B93C, v21);
  *(_DWORD *)v21 = 0;
  sub_787A8(a1, a2, 0);
  sub_77A24(&v19, v16, 0);
  if ( a3 < a4 )
    v9 = a4 - a3;
  else
    v9 = a4;
  if ( a3 >= a4 )
    v9 = a3 - v9;
  v10 = (unsigned int)(((float)((float)v9 + v4) - 0.01) / v4) + 1;
  v14 = v10;
  sub_1E938(v21, 0x30u);
  printf("%s ", v21);
  printf("%s : set_count:%d\n", "inc_freq_with_fixed_step_parallel", v10);
  snprintf(byte_64BA3C, 0x100u, "set_count:%d", v10);
  sub_3CC5C((int)byte_64BA3C, v21);
  if ( v10 )
  {
    v11 = 1;
    do
    {
      v19 = 0;
      v20 = 0;
      ++v11;
      sub_77A24(&v19, v16, 0);
      BYTE2(v20) = v16[0];
      v17 = v19;
      LOWORD(v18) = v20;
      sub_77BD8(a1, (unsigned __int8)dword_64B938, v19, v18);
      usleep((__useconds_t)&loc_493E0);
    }
    while ( v14 >= v11 );
  }
  sub_1E938(v21, 0x30u);
  printf("%s ", v21);
  printf("%s : set freq end\n", "inc_freq_with_fixed_step_parallel");
  strcpy(byte_64BB3C, "set freq end");
  return sub_3CC5C((int)byte_64BB3C, v21);
}
