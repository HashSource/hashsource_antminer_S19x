int __fastcall sub_43124(int a1, int a2, _DWORD *a3, int *a4, int a5, float *a6)
{
  float v6; // s0
  unsigned __int8 *v8; // r7
  int v9; // r4
  float *v10; // r9
  int v11; // r10
  float v12; // s14
  char v13; // r2
  unsigned int v14; // r5
  int v15; // t1
  int v16; // r2
  bool v17; // zf
  int v18; // r5
  void (__fastcall *v19)(int, _DWORD); // r5
  char v20; // r0
  int v21; // r8
  void (__fastcall *v22)(int, _DWORD); // r4
  char v23; // r0
  void (__fastcall *v24)(int, _DWORD); // r4
  char v25; // r0
  int v26; // r1
  int v27; // r5
  int v28; // r4
  int v29; // r0
  int v30; // r4
  int v31; // r0
  unsigned __int8 *v32; // [sp+18h] [bp-F4h]
  int v33; // [sp+1Ch] [bp-F0h]
  int v38; // [sp+30h] [bp-DCh]
  int v39; // [sp+38h] [bp-D4h] BYREF
  int v40; // [sp+3Ch] [bp-D0h] BYREF
  int v41; // [sp+40h] [bp-CCh] BYREF
  int v42; // [sp+44h] [bp-C8h] BYREF
  int v43; // [sp+48h] [bp-C4h] BYREF
  int v44; // [sp+4Ch] [bp-C0h] BYREF
  int v45; // [sp+50h] [bp-BCh] BYREF
  int v46; // [sp+54h] [bp-B8h] BYREF
  char v47[48]; // [sp+58h] [bp-B4h] BYREF
  _BYTE s[132]; // [sp+88h] [bp-84h] BYREF

  v40 = 256;
  v42 = 256;
  v44 = 256;
  v39 = 128;
  v43 = 0;
  v45 = 0;
  memset(s, 0, 0x80u);
  sub_47A74(*(_DWORD *)dword_705300, &v46);
  if ( (*(int (**)(void))(v46 + 24))() == 4 )
  {
    v33 = sub_38664(5);
    if ( !v33 )
      return 0;
    sub_1E938(v47, 0x30u);
    printf("%s ", v47);
    printf("%s : copy v4 to v5\n", "build_eeprom_data_pt2");
    strcpy(byte_63FAD8, "copy v4 to v5");
    sub_3CC5C((int)byte_63FAD8, v47);
    sub_3E3AC(v46, v33);
    if ( v46 )
    {
      (*(void (**)(void))(v46 + 296))();
      v46 = 0;
    }
    if ( sub_42CE0(v33, a5, a6) )
    {
LABEL_9:
      (*(void (**)(void))(v33 + 296))();
      return 0;
    }
    v38 = 1;
  }
  else
  {
    if ( (*(int (**)(void))(v46 + 24))() != 5 )
    {
      sub_1E938(v47, 0x30u);
      printf("%s ", v47);
      printf("%s : can not find eeprom version\n", "build_eeprom_data_pt2");
      strcpy(byte_63FCD8, "can not find eeprom version");
      sub_3CC5C((int)byte_63FCD8, v47);
      if ( v46 )
      {
        (*(void (**)(void))(v46 + 296))();
        return 0;
      }
      return 0;
    }
    sub_1E938(v47, 0x30u);
    printf("%s ", v47);
    printf("%s : read eeprom is version 5\n", "build_eeprom_data_pt2");
    strcpy(byte_63FBD8, "read eeprom is version 5");
    sub_3CC5C((int)byte_63FBD8, v47);
    v33 = v46;
    if ( sub_42CE0(v46, a5, a6) )
    {
      if ( !v33 )
        return 0;
      goto LABEL_9;
    }
    v38 = 0;
  }
  sub_3DFBC(a6, *(_DWORD *)(*(_DWORD *)(a5 + 138904) + 4));
  sub_3E000(a6, *(_DWORD *)(*(_DWORD *)(a5 + 138904) + 4));
  (*(void (__fastcall **)(int, _DWORD))(v33 + 256))(v33, (unsigned __int16)(unsigned int)v6);
  *(_DWORD *)(a5 + 138320) = (int)(float)((float)((float)(v6 - v6) / 15.0) + 1.0);
  sub_1E938(v47, 0x30u);
  printf("%s ", v47);
  printf(
    "%s : reset min=%f,max=%f, eeprom_freq_step =%d\n\n",
    "build_eeprom_data_pt2",
    v6,
    v6,
    *(_DWORD *)(a5 + 138320));
  snprintf(byte_63FDD8, 0x100u, "reset min=%f,max=%f, eeprom_freq_step =%d\n", v6, v6, *(_DWORD *)(a5 + 138320));
  sub_3CCE0((int)byte_63FDD8);
  (*(void (__fastcall **)(int, _DWORD))(v33 + 264))(v33, *(unsigned __int8 *)(a5 + 138320));
  sub_1E938(v47, 0x30u);
  printf("%s ", v47);
  printf("%s : dump level_temp:%f\n\n", "build_eeprom_data_pt2", v6);
  snprintf(byte_63FED8, 0x100u, "dump level_temp:%f\n", v6);
  sub_3CCE0((int)byte_63FED8);
  if ( *(int *)(*(_DWORD *)(a5 + 138904) + 4) > 0 )
  {
    v8 = s;
    v9 = 0;
    v10 = a6;
    v11 = a5 + 138904;
    do
    {
      while ( 1 )
      {
        v12 = *v10++;
        v13 = 15;
        v32 = v8;
        v14 = (unsigned int)(float)((float)(v12 - v6) / (float)*(int *)(a5 + 138320));
        if ( v14 > 0xE )
          v14 = 15;
        else
          v13 = (unsigned int)(float)((float)(v12 - v6) / (float)*(int *)(a5 + 138320));
        if ( (v9 & 1) != 0 )
          v13 *= 16;
        s[v9 / 2] |= v13;
        sub_1E938(v47, 0x30u);
        printf("%s ", v47);
        v15 = *v8++;
        printf("%s : %d-(%d) \n", "build_eeprom_data_pt2", v14, v15);
        snprintf(byte_63FFD8, 0x100u, "%d-(%d) ", v14, *v32);
        sub_3CCE0((int)byte_63FFD8);
        v16 = v9;
        if ( v9 )
          v16 = 1;
        v17 = 10 * (v9 / 10) == v9;
        ++v9;
        if ( !v17 )
          v16 = 0;
        if ( v16 )
          break;
        if ( *(_DWORD *)(*(_DWORD *)v11 + 4) <= v9 )
          goto LABEL_29;
      }
      sub_1E938(v47, 0x30u);
      printf("%s ", v47);
      printf("%s : \n\n", "build_eeprom_data_pt2");
      word_6400D8 = 10;
      sub_3CCE0((int)&word_6400D8);
    }
    while ( *(_DWORD *)(*(_DWORD *)v11 + 4) > v9 );
  }
LABEL_29:
  v18 = v33;
  (*(void (__fastcall **)(int, _BYTE *, int *))(v33 + 272))(v33, s, &v39);
  (*(void (__fastcall **)(int, _DWORD))(v18 + 288))(v18, (unsigned __int8)byte_7050F8);
  (*(void (__fastcall **)(int, _DWORD))(v18 + 208))(
    v18,
    (unsigned __int16)(unsigned int)(float)(*(float *)(a5 + 138980) * 10000.0));
  v19 = *(void (__fastcall **)(int, _DWORD))(v33 + 216);
  v20 = sub_3DD78((char *)(a5 + 138952), *(_DWORD *)(*(_DWORD *)(a5 + 138904) + 148));
  v21 = v33;
  v19(v33, v20);
  v22 = *(void (__fastcall **)(int, _DWORD))(v33 + 224);
  v23 = sub_3DD40((char *)(a5 + 138952), *(_DWORD *)(*(_DWORD *)(a5 + 138904) + 148));
  v22(v33, v23);
  (*(void (__fastcall **)(int, _DWORD))(v21 + 232))(v21, 0);
  (*(void (__fastcall **)(int, int))(v21 + 240))(v21, 1);
  (*(void (__fastcall **)(int, int))(v21 + 160))(v21, a1);
  (*(void (__fastcall **)(int, int))(v21 + 280))(v21, a1);
  v24 = *(void (__fastcall **)(int, _DWORD))(v33 + 168);
  v25 = (*(int (__fastcall **)(int))(v21 + 164))(v21);
  v24(v33, (unsigned __int8)(v25 + 1));
  if ( v38 )
  {
    (*(void (__fastcall **)(int, int, int *, int *))(v33 + 12))(v33, a2, &v44, &v45);
    sub_1E938(v47, 0x30u);
    printf("%s ", v47);
    printf("%s : region1 len=%d, offset1=%d\n", "build_eeprom_data_pt2", v44, v45);
    snprintf(byte_6401D8, 0x100u, "region1 len=%d, offset1=%d", v44, v45);
    sub_3CC5C((int)byte_6401D8, v47);
    v26 = v44;
  }
  else
  {
    v26 = 0;
    v44 = 0;
    v45 = 0;
  }
  (*(void (__fastcall **)(int, int, int *, int *))(v33 + 16))(v33, v26 + a2, &v42, &v43);
  sub_1E938(v47, 0x30u);
  printf("%s ", v47);
  printf("%s : region2 len=%d offset2=%d\n", "build_eeprom_data_pt2", v42, v43);
  snprintf(byte_6402D8, 0x100u, "region2 len=%d offset2=%d", v42, v43);
  sub_3CC5C((int)byte_6402D8, v47);
  (*(void (__fastcall **)(int, int, int *, int *))(v33 + 20))(v33, v42 + v44 + a2, &v40, &v41);
  *a3 = v40 + v42 + v44;
  sub_1E938(v47, 0x30u);
  printf("%s ", v47);
  printf("%s : region3 len=%d offset3=%d\n", "build_eeprom_data_pt2", v40, v41);
  snprintf(byte_6403D8, 0x100u, "region3 len=%d offset3=%d", v40, v41);
  sub_3CC5C((int)byte_6403D8, v47);
  sub_1E938(v47, 0x30u);
  printf("%s ", v47);
  printf("%s : all region len = %d\n", "build_eeprom_data_pt2", *a3);
  snprintf(byte_6404D8, 0x100u, "all region len = %d", *a3);
  sub_3CC5C((int)byte_6404D8, v47);
  if ( v38 )
    *a4 = 0;
  else
    *a4 = v43;
  sub_1E938(v47, 0x30u);
  printf("%s ", v47);
  v27 = v33;
  v28 = (*(int (__fastcall **)(int))(v33 + 252))(v33);
  v29 = (*(int (__fastcall **)(int))(v27 + 260))(v27);
  printf("%s : base: %d, step:%d\n", "build_eeprom_data_pt2", v28, v29);
  v30 = (*(int (__fastcall **)(int))(v27 + 252))(v27);
  v31 = (*(int (__fastcall **)(int))(v27 + 260))(v27);
  snprintf(byte_6405D8, 0x100u, "base: %d, step:%d", v30, v31);
  sub_3CC5C((int)byte_6405D8, v47);
  (*(void (__fastcall **)(int))(v27 + 292))(v27);
  (*(void (__fastcall **)(int))(v27 + 296))(v27);
  return 1;
}
