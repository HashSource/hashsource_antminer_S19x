int __fastcall sub_1F7E8(int a1)
{
  int v1; // r4
  int v2; // r0
  int v3; // r6
  int result; // r0
  int v5; // r3
  int v6; // r6
  const char *v7; // r1
  int v8; // r3
  int v9; // r2
  int v10; // r3
  int v11; // r2
  int v12; // r2
  _DWORD *v13; // r5
  int *v14; // r4
  int v15; // r0
  int v16; // r1
  int v17; // r2
  int v18; // r3
  int *v19; // r4
  _DWORD *v20; // r5
  int v21; // r0
  int v22; // r1
  int v23; // r2
  int v24; // r3
  int v25; // r4
  int v26; // r2
  _DWORD *v27; // r4
  const char *v28; // r5
  int v29; // r0
  int v30; // r1
  int v31; // r2
  int v32; // r3
  int *v33; // r5
  int *v34; // r4
  int v35; // r0
  int v36; // r1
  int v37; // r2
  int v38; // r3
  int v39; // r1
  int v40; // r2
  int v41; // r3
  int v42; // r3
  int v43; // r2
  int v44; // r3
  int v45; // r2
  int v46; // [sp+0h] [bp-44h] BYREF
  int v47; // [sp+4h] [bp-40h]
  int v48; // [sp+8h] [bp-3Ch]
  int v49; // [sp+Ch] [bp-38h]
  char v50[52]; // [sp+10h] [bp-34h] BYREF

  sub_6FBF4(a1);
  v1 = dword_223680;
  v2 = *(unsigned __int8 *)dword_223680;
  v3 = 80 - v2;
  if ( v2 == 80
    && *(_BYTE *)(dword_223680 + 1) == 84
    && *(_BYTE *)(dword_223680 + 2) == 49
    && !*(_BYTE *)(dword_223680 + 3) )
  {
    sub_1F650(*(unsigned __int8 *)(dword_223680 + 3), (const char *)(dword_223680 + 32));
    sub_1F650(2, "Only find ASIC");
    sub_1E938(v50, 0x30u);
    printf("%s ", v50);
    printf("%s : Only find ASIC\n", "display_main_page");
    strcpy(byte_5FEAB0, "Only find ASIC");
    return sub_3CC5C(byte_5FEAB0, v50);
  }
  if ( !strcmp((const char *)dword_223680, "PT1new") )
  {
    sub_1F650(0, (const char *)(v1 + 32));
    if ( *(_BYTE *)(dword_223680 + 673) )
    {
      LOWORD(v14) = -2988;
      sub_1F650(1, "PT1");
      v13 = &unk_5FEBB0;
      sub_1F650(2, "Repair mode");
      sub_1F650(3, "Only find ASIC");
    }
    else
    {
      v13 = &unk_5FECB0;
      sub_1F650(1, "PT1 scan QR");
      LOWORD(v14) = (unsigned __int16)"Only find ASIC and save chip info";
      sub_1F650(2, "Only find ASIC");
      sub_1F650(3, "save chip info");
    }
    sub_1E938(v50, 0x30u);
    printf("%s ", v50);
    printf("%s : Only find ASIC and save chip info\n", "display_main_page");
    HIWORD(v14) = (unsigned int)"Only find ASIC and save chip info" >> 16;
    v15 = *v14;
    v16 = v14[1];
    v17 = v14[2];
    v18 = v14[3];
    v19 = v14 + 4;
    *v13 = v15;
    v13[1] = v16;
    v13[2] = v17;
    v13[3] = v18;
    v20 = v13 + 4;
    v21 = *v19;
    v22 = v19[1];
    v23 = v19[2];
    v24 = v19[3];
    v25 = v19[4];
    *v20 = v21;
    v20[1] = v22;
    v20[2] = v23;
    v20[3] = v24;
    v20 += 4;
    *(_WORD *)v20 = v25;
    return sub_3CC5C(v20 - 8, v50);
  }
  else
  {
    if ( !strcmp((const char *)v1, "PT1+") )
    {
      sub_1F650(0, (const char *)(v1 + 32));
      sub_1F650(1, "Find ASIC");
      v46 = 0;
      v26 = *(_DWORD *)(dword_223680 + 312);
      v47 = 0;
      v48 = 0;
      v49 = 0;
      sprintf((char *)&v46, "%d pattern test", v26);
      sub_1F650(2, (const char *)&v46);
      sub_1E938(v50, 0x30u);
      printf("%s ", v50);
      printf("%s : do PT1+ test\n", "display_main_page");
      strcpy(byte_5FEDB0, "do PT1+ test");
      return sub_3CC5C(byte_5FEDB0, v50);
    }
    result = strcmp((const char *)v1, "SWEEP");
    if ( !result )
    {
      sub_1F650(0, (const char *)(v1 + 32));
      sub_1F650(1, "SWEEP Mode");
      sub_1F650(2, "Press");
      sub_1F650(3, "Start Key");
      sub_1E938(v50, 0x30u);
      printf("%s ", v50);
      printf("%s : SWEEP mode, press test button to start\n", "display_main_page");
      strcpy(byte_5FEEB0, "SWEEP mode, press test button to start");
      return sub_3CC5C(byte_5FEEB0, v50);
    }
    if ( !v3 && *(_BYTE *)(v1 + 1) == 84 )
    {
      v5 = *(unsigned __int8 *)(v1 + 2);
      if ( v5 == 51 )
      {
        if ( !*(_BYTE *)(v1 + 3) )
        {
          sub_1F650(0, (const char *)(v1 + 32));
          sub_1F650(1, "PT3 Mode");
          sub_1F650(2, "Press");
          sub_1F650(3, "Start Key");
          sub_1E938(v50, 0x30u);
          printf("%s ", v50);
          printf("%s : PT3 mode, press test button to start\n", "display_main_page");
          strcpy(byte_5FEFB0, "PT3 mode, press test button to start");
          return sub_3CC5C(byte_5FEFB0, v50);
        }
      }
      else if ( v5 == 50 && !*(_BYTE *)(v1 + 3) )
      {
        if ( *(_DWORD *)(v1 + 64) == 1 )
        {
          sub_1F650(0, (const char *)(v1 + 48));
          v46 = 0;
          v42 = *(_DWORD *)(dword_223680 + 312);
          v43 = *(_DWORD *)(dword_223680 + 64);
          v47 = 0;
          v48 = 0;
          v49 = 0;
          sprintf((char *)&v46, "IC:%2d  P:%d", v43, v42);
          sub_1F650(1, (const char *)&v46);
          v47 = 0;
          v44 = *(_DWORD *)(dword_223680 + 336);
          v45 = *(_DWORD *)(dword_223680 + 348);
          v48 = 0;
          v49 = 0;
          v46 = 0;
          sprintf((char *)&v46, "FREQ:%d L:%d", v45, v44);
          sub_1F650(2, (const char *)&v46);
          sub_1F650(3, "Vol: set power");
          sub_1E938(v50, 0x30u);
          printf("%s ", v50);
          printf("%s : Single ASIC pattern test\n", "display_main_page");
          strcpy(byte_5FF0B0, "Single ASIC pattern test");
          return sub_3CC5C(byte_5FF0B0, v50);
        }
        v6 = *(unsigned __int8 *)(v1 + 260);
        if ( *(_BYTE *)(v1 + 260) )
        {
          sub_1F650(0, (const char *)(v1 + 32));
          v28 = "Factory Mode:PT2, press test button to start";
          sub_1F650(1, "Factory Mode:PT2");
          v27 = &unk_5FF1B0;
          sub_1F650(2, "Press");
          sub_1F650(3, "Start Key");
          sub_1E938(v50, 0x30u);
          printf("%s ", v50);
          printf("%s : Factory Mode:PT2, press test button to start\n", "display_main_page");
        }
        else
        {
          v7 = (const char *)(v1 + 32);
          if ( *(_BYTE *)(v1 + 261) )
          {
            sub_1F650(0, v7);
            v46 = v6;
            v8 = *(_DWORD *)(dword_223680 + 312);
            v9 = *(_DWORD *)(dword_223680 + 64);
            v47 = v6;
            v48 = v6;
            v49 = v6;
            sprintf((char *)&v46, "IC:%2d  P:%d", v9, v8);
            sub_1F650(1, (const char *)&v46);
            v47 = v6;
            v10 = *(_DWORD *)(dword_223680 + 336);
            v11 = *(_DWORD *)(dword_223680 + 348);
            v48 = v6;
            v49 = v6;
            v46 = v6;
            sprintf((char *)&v46, "FREQ:%d L:%d", v11, v10);
            sub_1F650(2, (const char *)&v46);
            v47 = v6;
            v12 = *(_DWORD *)(dword_223680 + 344);
            v48 = v6;
            v49 = v6;
            v46 = v6;
            sprintf((char *)&v46, "Voltage: %d", v12);
            sub_1F650(3, (const char *)&v46);
            sub_1E938(v50, 0x30u);
            printf("%s ", v50);
            printf("%s : Manual Mode:PT2, does not use scan code gun\n", "display_main_page");
            strcpy(byte_5FF2B0, "Manual Mode:PT2, does not use scan code gun");
            return sub_3CC5C(byte_5FF2B0, v50);
          }
          sub_1F650(*(unsigned __int8 *)(v1 + 261), v7);
          v27 = &unk_5FF3B0;
          sub_1F650(1, "Manual Mode:PT2");
          v28 = "Manual Test Mode:PT2, Please Scan code first";
          sub_1F650(2, "Please Scan code");
          sub_1F650(3, "first");
          sub_1E938(v50, 0x30u);
          printf("%s ", v50);
          printf("%s : Manual Test Mode:PT2, Please Scan code first\n", "display_main_page");
        }
        v29 = *(_DWORD *)v28;
        v30 = *((_DWORD *)v28 + 1);
        v31 = *((_DWORD *)v28 + 2);
        v32 = *((_DWORD *)v28 + 3);
        v33 = (int *)(v28 + 16);
        *v27 = v29;
        v27[1] = v30;
        v27[2] = v31;
        v27[3] = v32;
        v34 = v27 + 4;
        v35 = *v33;
        v36 = v33[1];
        v37 = v33[2];
        v38 = v33[3];
        v33 += 4;
        *v34 = v35;
        v34[1] = v36;
        v34[2] = v37;
        v34[3] = v38;
        v34 += 4;
        v39 = v33[1];
        v40 = v33[2];
        v41 = v33[3];
        *v34 = *v33;
        v34[1] = v39;
        v34[2] = v40;
        v34 += 3;
        *(_BYTE *)v34 = v41;
        return sub_3CC5C(v34 - 11, v50);
      }
    }
  }
  return result;
}
