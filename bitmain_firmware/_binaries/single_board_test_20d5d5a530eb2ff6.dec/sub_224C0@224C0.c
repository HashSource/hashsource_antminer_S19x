int __fastcall sub_224C0(int a1)
{
  int v2; // r0
  unsigned __int8 *v3; // r2
  _BYTE *v4; // r3
  int v5; // r1
  int v6; // r10
  unsigned __int8 *v7; // r3
  int v8; // r6
  _BYTE *v9; // r2
  unsigned __int8 *v10; // lr
  int v11; // r0
  int v12; // t1
  int v13; // t1
  unsigned __int8 *v14; // r2
  unsigned __int8 *v15; // r2
  _BYTE *v16; // r3
  int v17; // r6
  int v18; // r0
  int v19; // t1
  int v20; // t1
  int *v21; // r4
  _DWORD *v22; // r6
  int v23; // r0
  int v24; // r1
  int v25; // r2
  int v26; // r3
  int v27; // r4
  _WORD *v28; // r6
  int *v30; // r4
  _DWORD *v31; // r6
  int v32; // r0
  int v33; // r1
  int v34; // r2
  int v35; // r3
  int v36; // r4
  _BYTE *v37; // r6
  unsigned __int8 *v38; // r5
  char v39; // [sp+10h] [bp-600h] BYREF
  _BYTE v40[512]; // [sp+210h] [bp-400h] BYREF
  char v41; // [sp+410h] [bp-200h] BYREF
  unsigned __int8 *v42; // [sp+614h] [bp+4h]
  char *v43; // [sp+618h] [bp+8h]
  unsigned __int8 *v44; // [sp+61Ch] [bp+Ch]
  char v45[52]; // [sp+620h] [bp+10h] BYREF

  v42 = (unsigned __int8 *)&unk_5FDA10;
  v44 = (unsigned __int8 *)&v41;
  byte_2333A8[264784 * (unsigned __int8)byte_5FE894 + 1034] = 0;
  v43 = &v39;
  v2 = sub_70990(dword_21B3A4);
  if ( v2 < 0 )
  {
    sub_6FBF4(v2);
    v6 = 0;
    sub_1F650(0, (const char *)(dword_223680 + 32));
    sub_1F650(2, "EEPROM init fail");
    sub_1E938(v45, 0x30u);
    printf("%s ", v45);
    printf("%s : EEPROM init fail!!!\n", "Check_EEPROM");
    strcpy(byte_603AC4, "EEPROM init fail!!!");
    sub_3CC5C(byte_603AC4, v45);
    return v6;
  }
  if ( a1 )
  {
    v3 = v44 - 1;
    v4 = v40;
    do
    {
      v5 = v4 - v40;
      *v4++ = -1;
      *++v3 = v5;
    }
    while ( v4 != &v40[a1] );
  }
  v6 = *(unsigned __int8 *)(dword_223680 + 672);
  if ( !*(_BYTE *)(dword_223680 + 672) )
  {
    sub_1E938(v45, 0x30u);
    printf("%s ", v45);
    printf("%s : Check EEPROM without clear data\n", "Check_EEPROM");
    strcpy(byte_6040C4, "Check EEPROM without clear data");
    sub_3CC5C(byte_6040C4, v45);
    if ( sub_70B40(dword_21B3A4, v6, v43, a1) )
    {
      sub_1E938(v45, 0x30u);
      LOWORD(v30) = (unsigned __int16)"Read EEPROM fail";
      printf("%s ", v45);
      v31 = &unk_6041C4;
      printf("%s : Read EEPROM fail\n", "Check_EEPROM");
LABEL_32:
      HIWORD(v30) = (unsigned int)"Read EEPROM fail" >> 16;
      v32 = *v30;
      v33 = v30[1];
      v34 = v30[2];
      v35 = v30[3];
      v36 = v30[4];
      *v31 = v32;
      v31[1] = v33;
      v31[2] = v34;
      v31[3] = v35;
      v37 = v31 + 4;
      *v37 = v36;
      sub_3CC5C(v37 - 16, v45);
      return v6;
    }
    if ( !sub_70A44(dword_21B3A4, v6, v44, a1) )
    {
      if ( sub_70B40(dword_21B3A4, v6, v40, a1) )
      {
        sub_1E938(v45, 0x30u);
        LOWORD(v30) = 3136;
        printf("%s ", v45);
        v31 = &unk_6043C4;
        printf("%s : Read EEPROM fail\n", "Check_EEPROM");
        goto LABEL_32;
      }
      if ( a1 )
      {
        if ( v40[0] != *v44 )
        {
          v17 = v6;
LABEL_37:
          sub_1E938(v45, 0x30u);
          printf("%s ", v45);
          printf(
            "%s : EEPROM check fail! write_buf[%d] = 0x%02x, read_buf[%d] = 0x%02x\n",
            "Check_EEPROM",
            v17,
            v44[v17],
            v17,
            (unsigned __int8)v40[v17]);
          snprintf(
            byte_6044C4,
            0x100u,
            "EEPROM check fail! write_buf[%d] = 0x%02x, read_buf[%d] = 0x%02x",
            v17,
            v44[v17],
            v17,
            (unsigned __int8)v40[v17]);
          sub_3CC5C(byte_6044C4, v45);
          return v6;
        }
        v15 = v44;
        v16 = v40;
        v17 = v6;
        while ( a1 != ++v17 )
        {
          v19 = *++v15;
          v18 = v19;
          v20 = (unsigned __int8)*++v16;
          if ( v18 != v20 )
            goto LABEL_37;
        }
      }
      if ( sub_70A44(dword_21B3A4, 0, v43, a1) )
      {
        sub_1E938(v45, 0x30u);
        printf("%s ", v45);
        printf("%s : Backup write EEPROM fail\n", "Check_EEPROM");
        strcpy(byte_6045C4, "Backup write EEPROM fail");
        sub_3CC5C(byte_6045C4, v45);
      }
      else
      {
        v6 = 1;
        byte_2333A8[264784 * v42[3716] + 1034] = 1;
      }
      return v6;
    }
    sub_1E938(v45, 0x30u);
    LOWORD(v21) = (unsigned __int16)"Write EEPROM fail";
    printf("%s ", v45);
    v22 = &unk_6042C4;
    printf("%s : Write EEPROM fail\n", "Check_EEPROM");
LABEL_28:
    HIWORD(v21) = (unsigned int)"Write EEPROM fail" >> 16;
    v23 = *v21;
    v24 = v21[1];
    v25 = v21[2];
    v26 = v21[3];
    v27 = v21[4];
    *v22 = v23;
    v22[1] = v24;
    v22[2] = v25;
    v22[3] = v26;
    v28 = v22 + 4;
    *v28 = v27;
    sub_3CC5C(v28 - 8, v45);
    return v6;
  }
  sub_1E938(v45, 0x30u);
  printf("%s ", v45);
  printf("%s : Check EEPROM with clear data\n", "Check_EEPROM");
  strcpy(byte_603BC4, "Check EEPROM with clear data");
  sub_3CC5C(byte_603BC4, v45);
  v43 = (char *)sub_70A44(dword_21B3A4, 0, v44, a1);
  if ( v43 )
  {
    sub_1E938(v45, 0x30u);
    v6 = 0;
    printf("%s ", v45);
    LOWORD(v21) = 3092;
    printf("%s : Write EEPROM fail\n", "Check_EEPROM");
    v22 = &unk_603CC4;
    goto LABEL_28;
  }
  if ( sub_70B40(dword_21B3A4, 0, v40, a1) )
  {
    sub_1E938(v45, 0x30u);
    v6 = (int)v43;
    printf("%s ", v45);
    LOWORD(v30) = 3136;
    printf("%s : Read EEPROM fail\n", "Check_EEPROM");
    v31 = &unk_603DC4;
    goto LABEL_32;
  }
  if ( !a1 )
  {
LABEL_15:
    if ( sub_70A44(dword_21B3A4, 0, v44, a1) )
    {
      sub_1E938(v45, 0x30u);
      printf("%s ", v45);
      printf("%s : Write EEPROM fail\n", "Check_EEPROM");
      v6 = 0;
      strcpy(byte_603FC4, "Write EEPROM fail");
      sub_3CC5C(byte_603FC4, v45);
    }
    else
    {
      byte_2333A8[264784 * v42[3716] + 1034] = 1;
    }
    return v6;
  }
  if ( *v44 == v40[0] )
  {
    v7 = v44;
    v8 = 0;
    v9 = v40;
    v10 = v44;
    while ( a1 != ++v8 )
    {
      v12 = *++v7;
      v11 = v12;
      v13 = (unsigned __int8)*++v9;
      if ( v11 != v13 )
        goto LABEL_34;
    }
    v14 = &v44[a1];
    do
      *v10++ = -1;
    while ( v14 != v10 );
    goto LABEL_15;
  }
  v8 = 0;
LABEL_34:
  sub_1E938(v45, 0x30u);
  printf("%s ", v45);
  v38 = v44;
  printf(
    "%s : EEPROM check fail! write_buf[%d] = 0x%02x, read_buf[%d] = 0x%02x\n",
    "Check_EEPROM",
    v8,
    v44[v8],
    v8,
    (unsigned __int8)v40[v8]);
  snprintf(
    byte_603EC4,
    0x100u,
    "EEPROM check fail! write_buf[%d] = 0x%02x, read_buf[%d] = 0x%02x",
    v8,
    v38[v8],
    v8,
    (unsigned __int8)v40[v8]);
  sub_3CC5C(byte_603EC4, v45);
  return 0;
}
