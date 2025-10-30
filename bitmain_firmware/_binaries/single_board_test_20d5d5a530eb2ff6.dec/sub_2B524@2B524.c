int sub_2B524()
{
  unsigned int v0; // r5
  unsigned int v1; // r3
  char v2; // r4
  char v3; // r2
  char *v4; // r1
  unsigned int v5; // r2
  int v6; // r6
  unsigned int v7; // r4
  int v8; // r3
  char *v9; // r3
  char *v10; // r5
  int v11; // r1
  char *v12; // r3
  int v13; // r0
  unsigned int v14; // r3
  char *v15; // r4
  char *v16; // r1
  char *v17; // r0
  char *v18; // r3
  int v19; // r1
  char *v20; // r5
  int v21; // r2
  int v22; // t1
  char *v23; // r3
  int v24; // r0
  int v25; // r2
  int v26; // t1
  char *v27; // r3
  char *v28; // r2
  int v29; // r0
  char *v30; // r4
  int v31; // r1
  int v32; // t1
  int v33; // r1
  int v34; // r2
  int v35; // t1
  int i; // r4
  int v38; // lr
  int v39; // lr
  char *v40; // r3
  int v41; // r2
  int v42; // r1
  int v43; // t1
  char *v44; // r2
  int v45; // r3
  int v46; // r1
  int v47; // t1
  char *v48; // r0
  __int16 v49; // [sp+18h] [bp-3Ch] BYREF
  _WORD v50[2]; // [sp+1Ch] [bp-38h] BYREF
  char v51[52]; // [sp+20h] [bp-34h] BYREF

  v50[0] = 0;
  v49 = -1;
  sub_1E938(v51, 0x30u);
  printf("%s ", v51);
  printf("%s : Start %s\n", "read_temperature_from_CtrlBoard", "read_temperature_from_CtrlBoard");
  snprintf(byte_611ED4, 0x100u, "Start %s", "read_temperature_from_CtrlBoard");
  sub_3CC5C(byte_611ED4, v51);
  v0 = dword_227094;
  if ( dword_227094 )
  {
    v1 = 0;
    v2 = byte_6005B8;
    do
    {
      v3 = *((_BYTE *)&word_227298 + v1);
      v4 = &v51[v1 + 48];
      v1 = (unsigned __int8)(v1 + 1);
      *(v4 - 52) = v3 + v2;
    }
    while ( v1 < v0 );
  }
  if ( sub_7619C(dword_21B3A4, v50) < 0 )
  {
    sub_1E938(v51, 0x30u);
    printf("%s ", v51);
    printf(
      "%s : %s: chain %d tsensor_open failed\n\n",
      "read_temperature_from_CtrlBoard",
      "read_temperature_from_CtrlBoard",
      dword_21B3A4);
    snprintf(byte_611FD8, 0x100u, "%s: chain %d tsensor_open failed\n", "read_temperature_from_CtrlBoard", dword_21B3A4);
    sub_3CC5C(byte_611FD8, v51);
    sub_1E938(v51, 0x30u);
    printf("%s ", v51);
    printf("%s : WARNING CAN NOT OPEN TEMP SENSOR ...\n", "read_temperature_from_CtrlBoard");
    strcpy(byte_6120D8, "WARNING CAN NOT OPEN TEMP SENSOR ...");
    v48 = byte_6120D8;
LABEL_68:
    sub_3CC5C(v48, v51);
    sub_2B420("sensor err");
  }
  if ( !byte_611FD4 )
    goto LABEL_48;
  do
  {
    v5 = dword_227094;
    v6 = 0;
    v7 = 0;
    if ( !dword_227094 )
    {
      v38 = (unsigned __int8)byte_5FE894;
      v6 = 0;
LABEL_49:
      v39 = (_DWORD)&loc_40A50 * v38;
      byte_5FE779 = 1;
      v17 = (char *)&unk_2337B0 + v39 + 264774;
      byte_2333A8[v39 + 1037] = 1;
      if ( v5 )
        goto LABEL_19;
      goto LABEL_24;
    }
    do
    {
      while ( 1 )
      {
        v10 = &v51[v7 + 48];
        v11 = *((unsigned __int8 *)v50 + v7);
        v49 = -1;
        if ( sub_76468(dword_21B3A4, v11, (unsigned __int8)byte_2333A0, &v49, 2) == 2 )
          break;
        sub_1E938(v51, 0x30u);
        printf("%s ", v51);
        printf(
          "%s : Read CtrlBoard sensor fail,addr: %d\n",
          "read_temperature_from_CtrlBoard",
          (unsigned __int8)*(v10 - 52));
        ++v6;
        snprintf(byte_6121D8, 0x100u, "Read CtrlBoard sensor fail,addr: %d", (unsigned __int8)*(v10 - 52));
        sub_3CC5C(byte_6121D8, v51);
        v8 = (unsigned __int8)byte_5FE894;
LABEL_9:
        v9 = &byte_2333A8[(_DWORD)&loc_40A50 * v8 + 264192 + v7];
        v7 = (unsigned __int8)(v7 + 1);
        v9[1600] = 0;
        v5 = dword_227094;
        if ( v7 >= dword_227094 )
          goto LABEL_14;
      }
      v8 = (unsigned __int8)byte_5FE894;
      if ( (unsigned __int8)(v49 + 1) <= 1u )
      {
        ++v6;
        goto LABEL_9;
      }
      v12 = &byte_2333A8[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 264192 + v7];
      v7 = (unsigned __int8)(v7 + 1);
      v12[1614] = v49;
      v5 = dword_227094;
      v12[1600] = 1;
    }
    while ( v7 < v5 );
LABEL_14:
    v38 = (unsigned __int8)byte_5FE894;
    if ( !v5 )
      goto LABEL_49;
    LOBYTE(v13) = 1;
    v14 = 0;
    v15 = &byte_2333A8[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894];
    do
    {
      v16 = &v15[v14];
      v14 = (unsigned __int8)(v14 + 1);
      v13 = (unsigned __int8)(v13 & v16[265792]);
    }
    while ( v5 > v14 );
    v5 = (unsigned __int8)v5;
    if ( v13 )
      goto LABEL_49;
    v15[1037] = 0;
    byte_5FE779 = 1;
    v17 = (char *)&unk_2337B0 + (_DWORD)&loc_40A50 * v38 + 264774;
LABEL_19:
    v18 = v17 - 1;
    v19 = -128;
    v20 = &v17[(unsigned __int8)(v5 - 1)];
    do
    {
      v22 = *++v18;
      v21 = v22;
      if ( v19 < v22 )
        v19 = v21;
    }
    while ( v20 != v18 );
    if ( v19 > 46 )
    {
      sub_1E938(v51, 0x30u);
      printf("%s ", v51);
      if ( (_BYTE)dword_227094 )
      {
        v40 = (char *)&unk_2337B0 + (_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 264773;
        v41 = -128;
        do
        {
          v43 = *++v40;
          v42 = v43;
          if ( v41 < v43 )
            v41 = v42;
        }
        while ( (char *)&unk_2337B0
              + (_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894
              + (unsigned __int8)(dword_227094 - 1)
              + 264774 != v40 );
      }
      else
      {
        v41 = -128;
      }
      printf("%s : Temp max:%d\n", "read_temperature_from_CtrlBoard", v41);
      if ( (_BYTE)dword_227094 )
      {
        v44 = (char *)&unk_2337B0 + (_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 264773;
        v45 = -128;
        do
        {
          v47 = *++v44;
          v46 = v47;
          if ( v45 < v47 )
            v45 = v46;
        }
        while ( (char *)&unk_2337B0
              + (_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894
              + (unsigned __int8)(dword_227094 - 1)
              + 264774 != v44 );
      }
      else
      {
        v45 = -128;
      }
      snprintf(byte_6122D8, 0x100u, "Temp max:%d", v45);
      sub_3CC5C(byte_6122D8, v51);
    }
LABEL_24:
    if ( byte_5FE774 && !byte_5FE777 && !byte_5FE776 )
    {
      if ( (_BYTE)dword_227094 )
      {
        v23 = (char *)&unk_2337B0 + (_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 264773;
        v24 = -128;
        do
        {
          v26 = *++v23;
          v25 = v26;
          if ( v24 < v26 )
            v24 = v25;
        }
        while ( v23 != (char *)&unk_2337B0
                     + (_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894
                     + (unsigned __int8)(dword_227094 - 1)
                     + 264774 );
        sub_48240(v24);
      }
      else
      {
        sub_48240(-128);
      }
    }
    if ( v6 )
    {
      sub_1E938(v51, 0x30u);
      printf("%s ", v51);
      printf("%s : WARNING READ TEMP SENSOR ERR...\n", "read_temperature_from_CtrlBoard");
      strcpy(byte_6123D8, "WARNING READ TEMP SENSOR ERR...");
      v48 = byte_6123D8;
      goto LABEL_68;
    }
    if ( (_BYTE)dword_227094 )
    {
      v27 = (char *)&unk_2337B0 + (_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 264773;
      v28 = v27;
      v29 = -128;
      v30 = (char *)&unk_2337B0
          + (_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894
          + (unsigned __int8)(dword_227094 - 1)
          + 264774;
      do
      {
        v32 = *++v28;
        v31 = v32;
        if ( v29 < v32 )
          v29 = v31;
      }
      while ( v28 != v30 );
      v33 = 127;
      do
      {
        v35 = *++v27;
        v34 = v35;
        if ( v33 >= v35 )
          v33 = v34;
      }
      while ( v30 != v27 );
    }
    if ( !sub_62F38() )
    {
      sub_1E938(v51, 0x30u);
      printf("%s ", v51);
      printf("%s : WARNING TEMP OUT OF PROTECT...\n", "read_temperature_from_CtrlBoard");
      strcpy(byte_6124D8, "WARNING TEMP OUT OF PROTECT...");
      sub_3CC5C(byte_6124D8, v51);
      sub_1E938(v51, 0x30u);
      printf("%s ", v51);
      printf(
        "%s : WARNING temp[0]:%d,temp[1]:%d\n",
        "read_temperature_from_CtrlBoard",
        byte_2333A8[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 265806],
        byte_2333A8[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 265807]);
      snprintf(
        byte_6125D8,
        0x100u,
        "WARNING temp[0]:%d,temp[1]:%d",
        byte_2333A8[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 265806],
        byte_2333A8[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 265807]);
      sub_3CC5C(byte_6125D8, v51);
      sub_2B420("sensor err");
    }
    for ( i = 0; i != 4; ++i )
    {
      if ( sub_6DD90(i) == -1 )
        break;
    }
    sleep(1u);
  }
  while ( byte_611FD4 );
LABEL_48:
  sub_1E938(v51, 0x30u);
  printf("%s ", v51);
  printf("%s : %s stop\n", "read_temperature_from_CtrlBoard", "read_temperature_from_CtrlBoard");
  snprintf(byte_6126D8, 0x100u, "%s stop", "read_temperature_from_CtrlBoard");
  sub_3CC5C(byte_6126D8, v51);
  return 0;
}
