int __fastcall sub_472E4(float *a1, float *a2, int a3, int a4, int a5, _DWORD *a6, unsigned __int8 a7)
{
  float *v8; // r4
  float *v10; // r1
  int v11; // r9
  float *v13; // r3
  int v14; // r0
  int v15; // r0
  int v16; // t1
  int v17; // r12
  int v18; // r0
  int v19; // r1
  int v20; // t1
  int v21; // r2
  int v22; // r1
  int v23; // r3
  unsigned int v24; // r2
  float v25; // s16
  _DWORD *v26; // r5
  int v27; // r6
  int v28; // r3
  int v29; // r3
  int v31; // r6
  float v32; // s14
  float v33; // s14
  float *v34; // r5
  char v35[52]; // [sp+18h] [bp-34h] BYREF

  if ( !a1 )
  {
    sub_1E938(v35, 0x30u);
    printf("%s ", v35);
    printf("%s : conf is null\n\n", "get_conf");
    strcpy(byte_645EE4, "conf is null\n");
    return sub_3CC5C((int)byte_645EE4, v35);
  }
  v8 = a1;
  v10 = a1;
  v11 = 4;
  *a6 = a5;
  a6[1] = *((_DWORD *)a1 + 16);
  v13 = a1;
  a6[2] = *((_DWORD *)a1 + 20);
  v14 = *((_DWORD *)a1 + 21);
  a6[4] = 4;
  a6[3] = v14;
  a6[5] = *((_DWORD *)v8 + 17);
  a6[6] = *((_DWORD *)v8 + 18);
  a6[7] = *((_DWORD *)v8 + 19);
  v15 = *((_DWORD *)v8 + 78);
  a6[9] = 111;
  a6[10] = 2;
  a6[8] = v15;
  a6[12] = *((_DWORD *)v8 + 146);
  a6[13] = *((_DWORD *)v8 + 147);
  a6[14] = *((_DWORD *)v8 + 148);
  a6[15] = *((_DWORD *)v8 + 149);
  a6[16] = *((_DWORD *)v8 + 150);
  a6[17] = *((_DWORD *)v8 + 151);
  a6[18] = *((_DWORD *)v8 + 152);
  a6[19] = *((_DWORD *)v8 + 153);
  a6[20] = *((_DWORD *)v8 + 144);
  a6[21] = *((_DWORD *)v8 + 145);
  v16 = *((_DWORD *)v10 + 12);
  v10 += 12;
  v17 = *((_DWORD *)v10 + 1);
  v18 = *((_DWORD *)v10 + 2);
  v19 = *((_DWORD *)v10 + 3);
  a6[23] = v17;
  a6[24] = v18;
  a6[22] = v16;
  a6[25] = v19;
  a6[37] = 2;
  v20 = *((_DWORD *)v13 + 39);
  v13 += 39;
  v21 = *((_DWORD *)v13 + 2);
  v22 = *((_DWORD *)v13 + 1);
  v23 = *((_DWORD *)v13 + 3);
  a6[27] = v20;
  a6[29] = v21;
  a6[28] = v22;
  a6[30] = v23;
  a6[31] = *((_DWORD *)v8 + 43);
  a6[32] = *((_DWORD *)v8 + 44);
  a6[40] = *((_DWORD *)v8 + 156);
  a6[38] = *((_DWORD *)v8 + 154);
  a6[39] = *((_DWORD *)v8 + 155);
  a6[41] = *((_DWORD *)v8 + 158);
  a6[42] = *((_DWORD *)v8 + 159);
  a6[45] = *((_DWORD *)v8 + 83);
  a6[43] = *((_DWORD *)v8 + 79);
  a6[44] = *((_DWORD *)v8 + 80);
  a6[46] = *((_DWORD *)v8 + 81);
  a6[11] = *((_DWORD *)v8 + 161);
  sub_1E938(v35, 0x30u);
  printf("%s ", v35);
  printf("%s : freq_flex:%d\n", "get_conf", a6[11]);
  snprintf(byte_645FE4, 0x100u, "freq_flex:%d", a6[11]);
  sub_3CC5C((int)byte_645FE4, v35);
  v24 = *((unsigned __int8 *)v8 + 284);
  *((_DWORD *)a2 + 8) = v24;
  if ( v24 > a7 )
    v11 = a3 - 1;
  v25 = (float)*((int *)v8 + 72) / 100.0;
  a2[5] = v25;
  *((_DWORD *)a2 + 7) = *((_DWORD *)v8 + 70) == 0;
  if ( v24 <= a7 )
  {
    v11 = a3 - 1;
    *a2 = v8[86];
    v33 = (float)LODWORD(v8[4 * a3 + 83]);
    a2[2] = v33;
    a2[3] = (float)(int)(float)((float)(v25 + 1.0) * v33);
  }
  if ( !strncmp((const char *)v8, "PT3", 3u) || *((_BYTE *)v8 + 285) )
  {
    if ( a4 < 0 )
    {
      v31 = 4 * v11;
      v34 = &v8[4 * v11];
      a2[2] = (float)(unsigned int)(a6[11] + *((_DWORD *)v34 + 87) - 25);
      sub_1E938(v35, 0x30u);
      printf("%s ", v35);
      printf(
        "%s : pt2 test fail at last level,sweep level adjust from [%d]-->[%d]\n",
        "get_conf",
        *((_DWORD *)v34 + 87),
        *((_DWORD *)v34 + 87) - 25);
      snprintf(
        byte_6460E4,
        0x100u,
        "pt2 test fail at last level,sweep level adjust from [%d]-->[%d]",
        *((_DWORD *)v34 + 87),
        *((_DWORD *)v34 + 87) - 25);
      sub_3CC5C((int)byte_6460E4, v35);
      v32 = a2[2];
      v25 = a2[5];
    }
    else
    {
      if ( a3 <= a4 )
      {
        sub_1E938(v35, 0x30u);
        v31 = 4 * v11;
        printf("%s ", v35);
        printf("%s : pt2 sweep cfg err!,pt2_level:%d,test_levels:%d\n", "get_conf", a4, a3);
        snprintf(byte_6461E4, 0x100u, "pt2 sweep cfg err!,pt2_level:%d,test_levels:%d", a4, a3);
        sub_3CC5C((int)byte_6461E4, v35);
        v25 = a2[5];
        v32 = (float)(unsigned int)(LODWORD(v8[4 * v11 + 87]) - 25 + a6[11]);
      }
      else
      {
        v31 = 4 * v11;
        v32 = (float)(unsigned int)(LODWORD(v8[4 * a4 + 87]) + a6[11]);
      }
      a2[2] = v32;
    }
    a2[3] = (float)(int)(float)((float)(v25 + 1.0) * v32);
    a2[1] = v8[v31 + 85];
    if ( !*((_BYTE *)v8 + 293) )
      goto LABEL_9;
    goto LABEL_18;
  }
  a2[1] = v8[4 * v11 + 85];
  if ( *((_BYTE *)v8 + 293) )
  {
LABEL_18:
    a2[2] = (float)*((int *)v8 + 74);
    a2[3] = (float)*((int *)v8 + 75);
    sub_1E938(v35, 0x30u);
    printf("%s ", v35);
    printf("%s : forece reset freq from [%.0f] to [%.0f]\n", "get_conf", a2[2], a2[3]);
    snprintf(byte_6462E4, 0x100u, "forece reset freq from [%.0f] to [%.0f]", a2[2], a2[3]);
    sub_3CC5C((int)byte_6462E4, v35);
  }
LABEL_9:
  a2[20] = v8[76];
  a2[21] = v8[77];
  if ( a3 > 0 )
  {
    v26 = a6;
    v27 = 0;
    do
    {
      v28 = *((_DWORD *)v8 + 86);
      v8 += 4;
      v26 += 4;
      v26[45] = v28;
      v26[44] = *((_DWORD *)v8 + 81);
      v26[43] = *((_DWORD *)v8 + 80);
      v26[46] = *((_DWORD *)v8 + 83);
      sub_1E938(v35, 0x30u);
      printf("%s ", v35);
      printf("%s : cfg index[%d],level:[%d],freq:[%d]\n", "get_conf", v27, v26[43], v26[46]);
      v29 = v27++;
      snprintf(byte_6468E4, 0x100u, "cfg index[%d],level:[%d],freq:[%d]", v29, v26[43], v26[46]);
      sub_3CC5C((int)byte_6468E4, v35);
    }
    while ( a3 != v27 );
  }
  a6[92] = -1;
  a6[91] = a3;
  sub_1E938(v35, 0x30u);
  printf("%s ", v35);
  printf("%s : sweep_info:reuse:%d\n", "get_conf", *((_DWORD *)a2 + 8));
  snprintf(byte_6463E4, 0x100u, "sweep_info:reuse:%d", *((_DWORD *)a2 + 8));
  sub_3CC5C((int)byte_6463E4, v35);
  sub_1E938(v35, 0x30u);
  printf("%s ", v35);
  printf("%s : sweep_info:bias:%f\n", "get_conf", a2[5]);
  snprintf(byte_6464E4, 0x100u, "sweep_info:bias:%f", a2[5]);
  sub_3CC5C((int)byte_6464E4, v35);
  sub_1E938(v35, 0x30u);
  printf("%s ", v35);
  printf("%s : sweep_info:mode:%d\n", "get_conf", *((_DWORD *)a2 + 7));
  snprintf(byte_6465E4, 0x100u, "sweep_info:mode:%d", *((_DWORD *)a2 + 7));
  sub_3CC5C((int)byte_6465E4, v35);
  sub_1E938(v35, 0x30u);
  printf("%s ", v35);
  printf("%s : sweep_info:voltage:%d\n", "get_conf", *(_DWORD *)a2);
  snprintf(byte_6466E4, 0x100u, "sweep_info:voltage:%d", *(_DWORD *)a2);
  sub_3CC5C((int)byte_6466E4, v35);
  sub_1E938(v35, 0x30u);
  printf("%s ", v35);
  printf("%s : sweep_info:range_freq:[%f],[%f]\n", "get_conf", a2[2], a2[3]);
  snprintf(byte_6467E4, 0x100u, "sweep_info:range_freq:[%f],[%f]", a2[2], a2[3]);
  return sub_3CC5C((int)byte_6467E4, v35);
}
