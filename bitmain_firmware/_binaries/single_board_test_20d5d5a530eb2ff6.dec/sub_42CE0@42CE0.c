int __fastcall sub_42CE0(int a1, int a2, float *a3)
{
  float v3; // s0
  int v4; // r11
  float *v6; // r0
  int v7; // r9
  int **v8; // r7
  int v9; // r5
  int v10; // r4
  int v11; // r6
  int v12; // r3
  int *v13; // r4
  int v14; // r3
  signed int v15; // r5
  int *v16; // r1
  int v17; // r2
  int v19; // r3
  int *v20; // r1
  unsigned int v21; // s18
  unsigned int v22; // s20
  unsigned int v23; // r2
  float v24; // s16
  int v25; // r5
  float *v26; // r11
  int v27; // r6
  unsigned int v28; // s19
  const char *v29; // r4
  bool v30; // zf
  int v31; // r1
  signed int v32; // [sp+10h] [bp-44h]
  unsigned __int16 v35; // [sp+1Ch] [bp-38h]
  char v36[52]; // [sp+20h] [bp-34h] BYREF

  v4 = a2 + 138240;
  v6 = sub_3E040(a3, *(_DWORD *)(*(_DWORD *)(a2 + 138904) + 4));
  floorf(*(float *)&v6);
  v7 = (int)v3;
  sub_1E938(v36, 0x30u);
  printf("%s ", v36);
  printf("%s : sweep get matrix avg:%d\n", "match_level", (int)v3);
  snprintf(byte_63F4D8, 0x100u, "sweep get matrix avg:%d", (int)v3);
  sub_3CC5C((int)byte_63F4D8, v36);
  sub_1E938(v36, 0x30u);
  printf("%s ", v36);
  printf("%s : test level:%d\n", "match_level", *(_DWORD *)(*(_DWORD *)(v4 + 664) + 364));
  snprintf(byte_63F5D8, 0x100u, "test level:%d", *(_DWORD *)(*(_DWORD *)(v4 + 664) + 364));
  sub_3CC5C((int)byte_63F5D8, v36);
  if ( *(int *)(*(_DWORD *)(v4 + 664) + 364) <= 0 )
    goto LABEL_10;
  v8 = (int **)(a2 + 138904);
  v9 = 0;
  do
  {
    sub_1E938(v36, 0x30u);
    printf("%s ", v36);
    v10 = 4 * (v9 + 12);
    v11 = 4 * v9;
    printf("%s : cfg index[%d],level:[%d],freq:[%d]\n", "match_level", v9, (*v8)[4 * v9 + 47], (*v8)[v10 + 2]);
    v12 = v9++;
    snprintf(byte_63F7D8, 0x100u, "cfg index[%d],level:[%d],freq:[%d]", v12, (*v8)[v11 + 47], (*v8)[v10 + 2]);
    sub_3CC5C((int)byte_63F7D8, v36);
    v13 = *v8;
    v14 = (*v8)[91];
  }
  while ( v14 > v9 );
  if ( v14 <= 0 )
  {
LABEL_10:
    sub_472C0(14, 0);
    sub_1E938(v36, 0x30u);
    printf("%s ", v36);
    printf("%s : fail match freq\n", "match_level");
    strcpy(byte_63F6D8, "fail match freq");
    sub_3CC5C((int)byte_63F6D8, v36);
    return -1;
  }
  v15 = v13[50];
  if ( v7 < v15 )
  {
    v16 = *v8;
    v17 = 0;
    while ( 1 )
    {
      ++v17;
      v16 += 4;
      if ( v14 == v17 )
        goto LABEL_10;
      v15 = v16[50];
      if ( v7 >= v15 )
        goto LABEL_11;
    }
  }
  v17 = 0;
LABEL_11:
  v19 = v13[4 * v17 + 49];
  v13[92] = v17;
  v35 = v19;
  sub_1E938(v36, 0x30u);
  printf("%s ", v36);
  printf(
    "%s : matched index:[%d] level:%d,freq:%d\n",
    "match_level",
    *(_DWORD *)(*(_DWORD *)(v4 + 664) + 368),
    *(_DWORD *)(*(_DWORD *)(v4 + 664) + 16 * *(_DWORD *)(*(_DWORD *)(v4 + 664) + 368) + 188),
    *(_DWORD *)(*(_DWORD *)(v4 + 664) + 16 * *(_DWORD *)(*(_DWORD *)(v4 + 664) + 368) + 200));
  snprintf(
    byte_63F8D8,
    0x100u,
    "matched index:[%d] level:%d,freq:%d",
    *(_DWORD *)(*(_DWORD *)(v4 + 664) + 368),
    *(_DWORD *)(*(_DWORD *)(v4 + 664) + 16 * *(_DWORD *)(*(_DWORD *)(v4 + 664) + 368) + 188),
    *(_DWORD *)(*(_DWORD *)(v4 + 664) + 16 * *(_DWORD *)(*(_DWORD *)(v4 + 664) + 368) + 200));
  sub_3CC5C((int)byte_63F8D8, v36);
  if ( !v15 )
    goto LABEL_10;
  if ( (unsigned int)(v7 - v15) > 0x78 )
  {
    sub_1E938(v36, 0x30u);
    printf("%s ", v36);
    printf("%s : match failed margin < 0 or too big\n", "match_level");
    strcpy(byte_63F9D8, "match failed margin < 0 or too big");
    sub_3CC5C((int)byte_63F9D8, v36);
    return -1;
  }
  else
  {
    v20 = *(int **)(v4 + 664);
    if ( v20[1] > 0 )
    {
      v21 = v15 + 5;
      v22 = v15 - 10;
      v23 = v15 - 20;
      v32 = v15;
      v24 = (float)(unsigned int)v15;
      v25 = 0;
      v26 = a3;
      v27 = -180;
      v28 = v23;
      do
      {
        if ( (float)(*v26 - v24) > 5.0 )
          *v26 = (float)v21;
        v29 = (const char *)(dword_223680 + 32);
        if ( !strcmp((const char *)(dword_223680 + 32), "BHB56902") )
        {
          if ( (unsigned int)(v25 - 19) <= 1 && (unsigned int)((int)(float)(v24 - *v26) + 19) <= 0x26 )
            *v26 = (float)(unsigned int)(v32 - v27);
        }
        else if ( !strcmp(v29, "BHB56903") || !strcmp(v29, "BHB56907") )
        {
          if ( (unsigned int)(v25 - 5) <= 1 && (unsigned int)((int)(float)(v24 - *v26) + 19) <= 0x26 )
            *v26 = (float)(unsigned int)(v32 - (v27 + 140));
          v30 = v25 == 48;
          if ( v25 != 48 )
            v30 = v25 == 35;
          v31 = v30;
          if ( (unsigned int)(v25 - 20) <= 1 )
            v31 |= 1u;
          if ( v31 )
            *v26 = (float)v28;
          if ( v25 == 22 )
            *v26 = (float)v22;
        }
        v20 = *v8;
        ++v25;
        ++v26;
        v27 += 10;
      }
      while ( (*v8)[1] > v25 );
      LOWORD(v15) = v32;
    }
    sub_3EA4C((int)a3, v20[2], v20[3]);
    (*(void (__fastcall **)(int, _DWORD))(a1 + 192))(a1, v35);
    (*(void (__fastcall **)(int, _DWORD))(a1 + 200))(a1, (unsigned __int16)v15);
    return 0;
  }
}
