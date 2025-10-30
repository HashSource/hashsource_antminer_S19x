int __fastcall sub_3DDA8(int a1, int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  float v5; // s0
  __int64 v9; // r6
  unsigned int v11; // r3
  float v12; // s19
  float v13; // s17
  float v14; // s16
  float v15; // s15
  double v16; // d8
  unsigned int v18; // [sp+10h] [bp-54h]
  _BYTE v19[4]; // [sp+1Ch] [bp-48h] BYREF
  int v20; // [sp+20h] [bp-44h] BYREF
  int v21; // [sp+24h] [bp-40h]
  int v22; // [sp+28h] [bp-3Ch]
  int v23; // [sp+2Ch] [bp-38h]
  char v24[52]; // [sp+30h] [bp-34h] BYREF

  v9 = 3435973837LL * a5;
  dword_635DC8 = a2;
  sub_1E938(v24, 0x30u);
  printf("%s ", v24);
  printf("%s : fixed step freq_start = %d, freq_end = %d, freq_step = %.2f\n\n", "inc_freq_with_fix", a3, a4, v5);
  snprintf(byte_635DCC, 0x100u, "fixed step freq_start = %d, freq_end = %d, freq_step = %.2f\n", a3, a4, v5);
  sub_3CC5C((int)byte_635DCC, v24);
  *(_DWORD *)v24 = 0;
  sub_7879C(a1, 0, a2, 0);
  if ( a3 >= a4 )
    v11 = a3 - a4;
  else
    v11 = a4 - a3;
  v18 = (unsigned int)(((float)((float)v11 + v5) - 0.01) / v5);
  if ( v18 )
  {
    LODWORD(v9) = 1;
    v13 = (float)a4;
    do
    {
      v20 = 0;
      v21 = 0;
      v15 = (float)(unsigned int)v9;
      v12 = (float)a3;
      if ( a3 < a4 )
      {
        v14 = v12 + (float)(v15 * v5);
        if ( v14 > v13 )
          v14 = (float)a4;
      }
      else
      {
        v14 = v12 - (float)(v15 * v5);
        if ( v14 < v13 )
          v14 = (float)a4;
      }
      sub_77A24(&v20, v19, 0);
      LODWORD(v9) = v9 + 1;
      BYTE2(v21) = v19[0];
      v22 = v20;
      v23 = v21;
      sub_77BD8(a1, (unsigned __int8)dword_635DC8, v20, v21);
      usleep(1000 * (-100 * (HIDWORD(v9) >> 3) + 600));
    }
    while ( v18 >= (unsigned int)v9 );
  }
  else
  {
    v14 = 0.0;
  }
  sub_1E938(v24, 0x30u);
  printf("%s ", v24);
  v16 = v14;
  printf("%s : freq set to  %.2f\n", "inc_freq_with_fix", v16);
  snprintf(byte_635ECC, 0x100u, "freq set to  %.2f", v16);
  return sub_3CC5C((int)byte_635ECC, v24);
}
