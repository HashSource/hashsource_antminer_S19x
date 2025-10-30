int sub_5CBB8()
{
  _DWORD *v1; // r5
  const char *v2; // r4
  int v3; // r0
  int v4; // r1
  int v5; // r2
  int v6; // r3
  _DWORD *v7; // r4
  _DWORD *v8; // r5
  int v9; // r1
  int v10; // r2
  int v11; // r3
  _DWORD *v12; // r5
  const char *v13; // r4
  int v14; // r0
  int v15; // r1
  int v16; // r2
  int v17; // r3
  _DWORD *v18; // r4
  _DWORD *v19; // r5
  int v20; // r1
  int v21; // r2
  int v22; // r3
  _DWORD *v23; // r5
  const char *v24; // r4
  int v25; // r0
  int v26; // r1
  int v27; // r2
  int v28; // r3
  _DWORD *v29; // r4
  _DWORD *v30; // r5
  int v31; // r1
  int v32; // r2
  int v33; // r3
  char v34[52]; // [sp+0h] [bp-34h] BYREF

  if ( strncmp("F1V22B1C2R", haystack, 0xAu) )
  {
    if ( strncmp("F1V22B4C2R", haystack, 0xAu) )
      goto LABEL_19;
    if ( !strncmp("BIN3", dword_6E3358, 4u) )
    {
      sub_1E938(v34, 0x30u);
      v13 = "BHB56907 F1V22B4C2R BIN3 vol-20";
      printf("%s ", v34);
      v12 = &unk_649338;
      printf("%s : BHB56907 F1V22B4C2R BIN3 vol-20\n", "bs_asic_vol_modify_BHB56907");
      goto LABEL_22;
    }
    if ( strncmp("BIN4", dword_6E3358, 4u) )
    {
LABEL_19:
      if ( strncmp("F1V23B1C2R", haystack, 0xAu) )
        goto LABEL_12;
      if ( strncmp("BIN2", dword_6E3358, 4u) )
        goto LABEL_7;
      sub_1E938(v34, 0x30u);
      v12 = &unk_649538;
      v13 = "BHB56907 F1V23B1C2R BIN2 vol-20";
      printf("%s ", v34);
      printf("%s : BHB56907 F1V23B1C2R BIN2 vol-20\n", "bs_asic_vol_modify_BHB56907");
LABEL_22:
      v14 = *(_DWORD *)v13;
      v15 = *((_DWORD *)v13 + 1);
      v16 = *((_DWORD *)v13 + 2);
      v17 = *((_DWORD *)v13 + 3);
      v18 = v13 + 16;
      *v12 = v14;
      v12[1] = v15;
      v12[2] = v16;
      v12[3] = v17;
      v19 = v12 + 4;
      v20 = v18[1];
      v21 = v18[2];
      v22 = v18[3];
      *v19 = *v18;
      v19[1] = v20;
      v19[2] = v21;
      v19[3] = v22;
      sub_3CC5C((int)(v19 - 4), v34);
      return -20;
    }
    sub_1E938(v34, 0x30u);
    v24 = "BHB56907 F1V22B4C2R BIN4 vol-30";
    printf("%s ", v34);
    v23 = &unk_649438;
    printf("%s : BHB56907 F1V22B4C2R BIN4 vol-30\n", "bs_asic_vol_modify_BHB56907");
    goto LABEL_27;
  }
  if ( !strncmp("BIN2", dword_6E3358, 4u) )
  {
    sub_1E938(v34, 0x30u);
    v23 = &unk_649038;
    v24 = "BHB56907 F1V22B1C2R BIN2 vol-30";
    printf("%s ", v34);
    printf("%s : BHB56907 F1V22B1C2R BIN2 vol-30\n", "bs_asic_vol_modify_BHB56907");
LABEL_27:
    v25 = *(_DWORD *)v24;
    v26 = *((_DWORD *)v24 + 1);
    v27 = *((_DWORD *)v24 + 2);
    v28 = *((_DWORD *)v24 + 3);
    v29 = v24 + 16;
    *v23 = v25;
    v23[1] = v26;
    v23[2] = v27;
    v23[3] = v28;
    v30 = v23 + 4;
    v31 = v29[1];
    v32 = v29[2];
    v33 = v29[3];
    *v30 = *v29;
    v30[1] = v31;
    v30[2] = v32;
    v30[3] = v33;
    sub_3CC5C((int)(v30 - 4), v34);
    return -30;
  }
  if ( !strncmp("BIN3", dword_6E3358, 4u) )
  {
    sub_1E938(v34, 0x30u);
    printf("%s ", v34);
    printf("%s : BHB56907 F1V22B1C2R BIN4 vol-40\n", "bs_asic_vol_modify_BHB56907");
    strcpy(byte_649138, "BHB56907 F1V22B1C2R BIN4 vol-40");
    sub_3CC5C((int)byte_649138, v34);
    return -40;
  }
  else
  {
    if ( strncmp("BIN4", dword_6E3358, 4u) )
    {
      if ( strncmp("F1V22B4C2R", haystack, 0xAu) )
      {
        if ( !strncmp("F1V23B1C2R", haystack, 0xAu) )
        {
LABEL_7:
          if ( strncmp("BIN3", dword_6E3358, 4u) )
          {
            if ( !strncmp("F1V23B2C2R", haystack, 0xAu) )
              goto LABEL_9;
            goto LABEL_23;
          }
          sub_1E938(v34, 0x30u);
          v13 = "BHB56907 F1V23B1C2R BIN3 vol-20";
          printf("%s ", v34);
          v12 = &unk_649638;
          printf("%s : BHB56907 F1V23B1C2R BIN3 vol-20\n", "bs_asic_vol_modify_BHB56907");
          goto LABEL_22;
        }
LABEL_12:
        if ( !strncmp("F1V23B2C2R", haystack, 0xAu) )
        {
          if ( strncmp("BIN2", dword_6E3358, 4u) )
          {
LABEL_9:
            if ( strncmp("F1V23B3C2R", haystack, 0xAu) )
              return 0;
            goto LABEL_10;
          }
          sub_1E938(v34, 0x30u);
          v1 = &unk_649738;
          v2 = "BHB56907 F1V23B2C2R BIN2 vol-10";
          printf("%s ", v34);
          printf("%s : BHB56907 F1V23B2C2R BIN2 vol-10\n", "bs_asic_vol_modify_BHB56907");
LABEL_15:
          v3 = *(_DWORD *)v2;
          v4 = *((_DWORD *)v2 + 1);
          v5 = *((_DWORD *)v2 + 2);
          v6 = *((_DWORD *)v2 + 3);
          v7 = v2 + 16;
          *v1 = v3;
          v1[1] = v4;
          v1[2] = v5;
          v1[3] = v6;
          v8 = v1 + 4;
          v9 = v7[1];
          v10 = v7[2];
          v11 = v7[3];
          *v8 = *v7;
          v8[1] = v9;
          v8[2] = v10;
          v8[3] = v11;
          sub_3CC5C((int)(v8 - 4), v34);
          return -10;
        }
LABEL_23:
        if ( strncmp("F1V23B3C2R", haystack, 0xAu) )
          return 0;
        if ( strncmp("BIN2", dword_6E3358, 4u) )
        {
LABEL_10:
          if ( strncmp("BIN3", dword_6E3358, 4u) )
            return 0;
          sub_1E938(v34, 0x30u);
          v2 = "BHB56907 F1V23B3C2R BIN3 vol-10";
          printf("%s ", v34);
          v1 = &unk_649938;
          printf("%s : BHB56907 F1V23B3C2R BIN3 vol-10\n", "bs_asic_vol_modify_BHB56907");
          goto LABEL_15;
        }
        sub_1E938(v34, 0x30u);
        v2 = "BHB56907 F1V23B3C2R BIN2 vol-10";
        printf("%s ", v34);
        v1 = &unk_649838;
        printf("%s : BHB56907 F1V23B3C2R BIN2 vol-10\n", "bs_asic_vol_modify_BHB56907");
        goto LABEL_15;
      }
      goto LABEL_19;
    }
    sub_1E938(v34, 0x30u);
    printf("%s ", v34);
    printf("%s : BHB56907 F1V22B1C2R BIN4 vol-60\n", "bs_asic_vol_modify_BHB56907");
    strcpy(byte_649238, "BHB56907 F1V22B1C2R BIN4 vol-60");
    sub_3CC5C((int)byte_649238, v34);
    return -60;
  }
}
