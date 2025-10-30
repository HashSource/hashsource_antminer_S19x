int __fastcall sub_4581C(float **a1, int a2, int a3)
{
  float v3; // s0
  int v4; // r8
  float v6; // s16
  int i; // r5
  int v8; // r4
  int j; // r4
  int v10; // r9
  int v11; // s16
  const char *v12; // r5
  bool v13; // zf
  int v14; // r3
  int v15; // r0
  int v16; // r4
  int v17; // r0
  int v18; // r0
  int v19; // r4
  int v20; // r0
  float v22; // s15
  float v23; // s15
  float *v24; // r9
  char v25[52]; // [sp+18h] [bp-34h] BYREF

  v4 = a3 * a2;
  sub_3DFBC(*a1, a3 * a2);
  v6 = (float)(flt_7050B4 + 1.0) * v3;
  sub_1E938(v25, 0x30u);
  printf("%s ", v25);
  printf("%s : min %f, max %f\n", "sw_nomalize_matrix", v3, v6);
  snprintf(byte_643DDC, 0x100u, "min %f, max %f", v3, v6);
  sub_3CC5C((int)byte_643DDC, v25);
  if ( v4 > 0 )
  {
    for ( i = 0; i != v4; ++i )
    {
      v8 = i;
      if ( !sub_3DF8C() )
        (*a1)[v8] = v6;
    }
    for ( j = 0; j != v4; ++j )
    {
      v10 = j;
      v11 = *(_DWORD *)(dword_705300 + 44);
      (*a1)[j] = (*a1)[j] - (float)((float)((int (*)(void))sub_62E24)() + (float)v11);
      sub_1E938(v25, 0x30u);
      printf("%s ", v25);
      printf("%s : diff board name[%s], diff stragety\n", "sw_nomalize_matrix", (const char *)(dword_223680 + 32));
      snprintf(byte_643FDC, 0x100u, "diff board name[%s], diff stragety", (const char *)(dword_223680 + 32));
      sub_3CC5C((int)byte_643FDC, v25);
      v12 = (const char *)(dword_223680 + 32);
      if ( !strcmp((const char *)(dword_223680 + 32), "BHB56902") )
      {
        if ( (unsigned int)(j - 19) <= 1 )
        {
          v23 = 10.0;
          v24 = &(*a1)[v10];
          if ( j == 20 )
            v23 = 20.0;
          *v24 = *v24 - v23;
        }
      }
      else if ( !strcmp(v12, "BHB56903") || !strcmp(v12, "BHB56907") )
      {
        if ( (unsigned int)(j - 5) <= 1 )
        {
          v22 = 10.0;
          if ( j == 6 )
            v22 = 20.0;
          (*a1)[j] = (*a1)[j] - v22;
        }
        v13 = j == 35;
        if ( j != 35 )
          v13 = j == 48;
        v14 = v13;
        if ( (unsigned int)(j - 20) <= 1 )
          v14 |= 1u;
        if ( v14 )
          (*a1)[j] = (*a1)[j] - 20.0;
        if ( j == 22 )
          (*a1)[v10] = (*a1)[v10] - 10.0;
      }
    }
  }
  sub_1E938(v25, 0x30u);
  v15 = printf("%s ", v25);
  v16 = *(_DWORD *)(dword_705300 + 44);
  v17 = sub_62E24(v15);
  v18 = printf("%s : fix freq by freq_flex,flex:%d\n", "sw_nomalize_matrix", v16 + v17);
  v19 = *(_DWORD *)(dword_705300 + 44);
  v20 = sub_62E24(v18);
  snprintf(byte_643EDC, 0x100u, "fix freq by freq_flex,flex:%d", v19 + v20);
  sub_3CC5C((int)byte_643EDC, v25);
  return sub_3EA4C((int)*a1, *(_DWORD *)(dword_705300 + 8), *(_DWORD *)(dword_705300 + 12));
}
