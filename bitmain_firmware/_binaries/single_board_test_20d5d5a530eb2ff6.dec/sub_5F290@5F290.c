int __fastcall sub_5F290(int a1, int a2, unsigned int a3, unsigned int a4)
{
  float v4; // s0
  unsigned int v9; // r3
  unsigned int v10; // r8
  int result; // r0
  float v12; // s24
  unsigned int v13; // r5
  float v14; // s18
  float v15; // s16
  float v16; // s15
  float v17; // s16
  double v18; // d8
  _BOOL4 v19; // r3
  int v20; // r2
  int v21; // r0
  _BYTE *v22; // r3
  int v23; // r0
  int v26; // [sp+18h] [bp-5Ch]
  int v27; // [sp+18h] [bp-5Ch]
  int v28; // [sp+18h] [bp-5Ch]
  int v29; // [sp+1Ch] [bp-58h]
  int v30; // [sp+20h] [bp-54h]
  int v31; // [sp+24h] [bp-50h]
  _BYTE v32[4]; // [sp+2Ch] [bp-48h] BYREF
  int v33; // [sp+30h] [bp-44h]
  int v34; // [sp+34h] [bp-40h]
  int v35; // [sp+38h] [bp-3Ch] BYREF
  int v36; // [sp+3Ch] [bp-38h]
  char v37[52]; // [sp+40h] [bp-34h] BYREF

  sub_1E938(v37, 0x30u);
  printf("%s ", v37);
  printf(
    "%s : fixed step freq_start = %d, freq_end = %d, freq_step = %.2f\n\n",
    "inc_freq_with_adjust_voltage",
    a3,
    a4,
    v4);
  snprintf(byte_64BC3C, 0x100u, "fixed step freq_start = %d, freq_end = %d, freq_step = %.2f\n", a3, a4, v4);
  sub_3CC5C((int)byte_64BC3C, v37);
  *(_DWORD *)v37 = 0;
  sub_787A8(a1, a2, 0);
  if ( a3 < a4 )
    v9 = a4 - a3;
  else
    v9 = a4;
  if ( a3 >= a4 )
    v9 = a3 - v9;
  v10 = (unsigned int)(((float)((float)v9 + v4) - 0.01) / v4) + 1;
  sub_1E938(v37, 0x30u);
  printf("%s ", v37);
  printf("%s : step count:%d\n", "inc_freq_with_adjust_voltage", v10);
  snprintf(byte_64BD3C, 0x100u, "step count:%d", v10);
  result = sub_3CC5C((int)byte_64BD3C, v37);
  if ( v10 )
  {
    v12 = (float)a3;
    v29 = 1;
    v13 = 1;
    v14 = (float)a4;
    v30 = 0;
    do
    {
      v35 = 0;
      v36 = 0;
      v16 = (float)v13;
      if ( a3 < a4 )
      {
        v15 = v12 + (float)(v16 * v4);
        if ( v15 > v14 )
          v15 = (float)a4;
        sub_77A24(&v35, v32, 0);
        BYTE2(v36) = v32[0];
        v33 = v35;
        LOWORD(v34) = v36;
        sub_77BD8(a1, a2, v35, v34);
        sub_1E938(v37, 0x30u);
        printf("%s ", v37);
        printf("%s : chain = %d set freq to %.2f\n", "inc_freq_with_adjust_voltage", a1, v15);
        snprintf(byte_64C13C, 0x100u, "chain = %d set freq to %.2f", a1, v15);
        sub_3CC5C((int)byte_64C13C, v37);
        if ( v15 >= 300.0 )
        {
          v26 = (__int16)sub_2BB48();
          sub_1E938(v37, 0x30u);
          printf("%s ", v37);
          printf("%s : inc freq get min board temp: %d\n", "inc_freq_with_adjust_voltage", v26);
          snprintf(byte_64BE3C, 0x100u, "inc freq get min board temp: %d", v26);
          sub_3CC5C((int)byte_64BE3C, v37);
          v19 = v26 > 35;
          if ( v10 <= v13 )
            v19 = 0;
          if ( v19 )
          {
            if ( v30 )
            {
              v20 = *(_DWORD *)&byte_2337B0[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 32];
            }
            else
            {
              v22 = &byte_2337B0[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894];
              v28 = *((_DWORD *)v22 + 8);
              v23 = sub_189090(v28 - 30 - *((_DWORD *)v22 + 7), v10 - v13);
              v20 = v28;
              v30 = v23;
            }
            v27 = v20 - v29 * v30;
            ++v29;
            sub_1E938(v37, 0x30u);
            printf("%s ", v37);
            printf("%s : relax voltage %d\n", "inc_freq_with_adjust_voltage", v27);
            snprintf(byte_64BF3C, 0x100u, "relax voltage %d", v27);
            v21 = sub_3CC5C((int)byte_64BF3C, v37);
            v31 = sub_75B90(v21);
            if ( v31 )
            {
              sub_1E938(v37, 0x30u);
              printf("%s ", v37);
              printf("%s : bitmain_set_voltage %d ret=%d\n", "inc_freq_with_adjust_voltage", v27, v31);
              snprintf(byte_64C03C, 0x100u, "bitmain_set_voltage %d ret=%d", v27, v31);
              sub_3CC5C((int)byte_64C03C, v37);
            }
          }
        }
      }
      else
      {
        v17 = v12 - (float)(v16 * v4);
        if ( v17 < v14 )
          v17 = (float)a4;
        sub_77A24(&v35, v32, 0);
        BYTE2(v36) = v32[0];
        v33 = v35;
        LOWORD(v34) = v36;
        sub_77BD8(a1, a2, v35, v34);
        sub_1E938(v37, 0x30u);
        printf("%s ", v37);
        v18 = v17;
        printf("%s : chain = %d set freq to %.2f\n", "inc_freq_with_adjust_voltage", a1, v18);
        snprintf(byte_64C13C, 0x100u, "chain = %d set freq to %.2f", a1, v18);
        sub_3CC5C((int)byte_64C13C, v37);
      }
      ++v13;
      result = usleep(1000 * *(_DWORD *)(dword_223680 + 248));
    }
    while ( v10 >= v13 );
  }
  return result;
}
