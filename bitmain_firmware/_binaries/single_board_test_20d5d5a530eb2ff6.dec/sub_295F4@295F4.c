int __fastcall sub_295F4(int a1, int a2, int a3, int a4, int a5)
{
  int v6; // r0
  int v7; // r5
  char *v8; // r8
  int v9; // r0
  char *v10; // r11
  char *v11; // r3
  char *v12; // r2
  unsigned int v13; // r5
  int v14; // t1
  void (*v15)(void); // r11
  char *v16; // r5
  char *v17; // r3
  int v18; // r1
  int v19; // lr
  int v20; // t1
  int v21; // r1
  char *v22; // r2
  char *v23; // r5
  int v24; // lr
  int v25; // t1
  int v26; // r2
  void (*v27)(void); // r2
  char *v28; // r8
  char *v29; // r3
  int v30; // r1
  int v31; // r12
  int v32; // t1
  int v33; // r1
  char *v34; // r3
  char *v35; // r8
  int v36; // r5
  int v37; // t1
  int v38; // r5
  void (__fastcall *v39)(int, _DWORD); // r7
  unsigned __int8 v40; // r0
  int v41; // r5
  void (__fastcall *v42)(int, _DWORD); // r6
  char v43; // r0
  const char *v45; // r1
  const char *v46; // r1
  int v47; // t1
  const char *v48; // r1
  int v49; // r0
  char v53[52]; // [sp+10h] [bp-34h] BYREF

  v6 = dword_60DED0;
  if ( dword_60DED0 )
    goto LABEL_2;
  v49 = sub_386A0(5);
  dword_60DED0 = v49;
  if ( !v49 )
  {
    v49 = sub_386A0(4);
    dword_60DED0 = v49;
    if ( !v49 )
    {
      sub_1E938(v53, 0x30u);
      printf("%s ", v53);
      printf("%s : edf_get_ctx ( %d ) failed\n\n", "prepare_eeprom_data_pt2", 4);
      snprintf(byte_60EDD4, 0x100u, "edf_get_ctx ( %d ) failed\n", 4);
      sub_3CC5C(byte_60EDD4, v53);
      return 1;
    }
  }
  (*(void (__fastcall **)(int, _DWORD))(v49 + 168))(v49, 0);
  v6 = dword_60DED0;
  if ( dword_60DED0 )
  {
LABEL_2:
    v7 = (_DWORD)&loc_40A50 * a1;
    v8 = &byte_2333A8[(_DWORD)&loc_40A50 * a1];
    (*(void (__fastcall **)(int, _DWORD))(v6 + 192))(v6, *((unsigned __int16 *)v8 + 530));
    (*(void (__fastcall **)(int, _DWORD))(dword_60DED0 + 200))(dword_60DED0, *((unsigned __int16 *)v8 + 534));
    (*(void (__fastcall **)(int, _DWORD))(dword_60DED0 + 208))(
      dword_60DED0,
      (unsigned __int16)(unsigned int)(*(double *)((char *)&unk_2337B0 + (_DWORD)&loc_40A50 * a1 + 16) * 10000.0));
    v9 = dword_223680;
    if ( *(_BYTE *)(dword_223680 + 89) )
    {
      if ( dword_226084 )
      {
        v10 = (char *)&unk_2337B0 + v7 + 264751;
        v11 = v10;
        v12 = (char *)&unk_2337B0 + dword_226084 + v7 + 264751;
        v13 = 1;
        do
        {
          v14 = (unsigned __int8)*++v11;
          v13 &= v14;
        }
        while ( v11 != v12 );
        if ( !v13 )
        {
          sub_1E938(v53, 0x30u);
          printf("%s ", v53);
          printf("%s : %d PIC sensors are not all ok. They are: \n", "prepare_eeprom_data_pt2", dword_226084);
          snprintf(byte_60EFD4, 0x100u, "%d PIC sensors are not all ok. They are: ", dword_226084);
          sub_3CC5C(byte_60EFD4, v53);
          if ( dword_226084 )
          {
            do
            {
              v47 = (unsigned __int8)*++v10;
              ++v13;
              if ( v47 )
                v48 = "true";
              else
                v48 = "false";
              printf("%s ", v48);
            }
            while ( dword_226084 > v13 );
          }
          goto LABEL_46;
        }
        v15 = *(void (**)(void))(dword_60DED0 + 216);
        v16 = (char *)&unk_2337B0 + (_DWORD)&loc_40A50 * a1 + 264770;
        if ( (_BYTE)dword_226084 )
        {
          v17 = (char *)&unk_2337B0 + (_DWORD)&loc_40A50 * a1 + 264769;
          v18 = 127;
          do
          {
            v20 = *++v17;
            v19 = v20;
            if ( v18 >= v20 )
              v18 = v19;
          }
          while ( &v16[(unsigned __int8)(dword_226084 - 1)] != v17 );
        }
      }
      else
      {
        v16 = (char *)&unk_2337B0 + v7 + 264770;
        v15 = *(void (**)(void))(dword_60DED0 + 216);
      }
      v15();
      if ( (_BYTE)dword_226084 )
      {
        v21 = -128;
        v22 = v16 - 1;
        v23 = &v16[(unsigned __int8)(dword_226084 - 1)];
        do
        {
          v25 = *++v22;
          v24 = v25;
          if ( v21 < v25 )
            v21 = v24;
        }
        while ( v22 != v23 );
      }
      (*(void (**)(void))(dword_60DED0 + 224))();
      v9 = dword_223680;
    }
    if ( !*(_BYTE *)(v9 + 88) )
    {
LABEL_34:
      v38 = dword_60DED0;
      v39 = *(void (__fastcall **)(int, _DWORD))(dword_60DED0 + 232);
      v40 = strtol((const char *)(v9 + 648), 0, 10);
      v39(v38, v40);
      (*(void (__fastcall **)(int, _DWORD))(dword_60DED0 + 240))(
        dword_60DED0,
        (unsigned __int8)byte_2333A8[(_DWORD)&loc_40A50 * a1 + 265808]);
      (*(void (__fastcall **)(int, int))(dword_60DED0 + 160))(dword_60DED0, a2);
      v41 = dword_60DED0;
      v42 = *(void (__fastcall **)(int, _DWORD))(dword_60DED0 + 168);
      v43 = (*(int (__fastcall **)(int))(dword_60DED0 + 164))(dword_60DED0);
      v42(v41, (unsigned __int8)(v43 + 1));
      (*(void (__fastcall **)(int, int, int, int))(dword_60DED0 + 16))(dword_60DED0, a3, a4, a5);
      (*(void (**)(void))(dword_60DED0 + 292))();
      return 1;
    }
    if ( !dword_227094 )
    {
      v27 = *(void (**)(void))(dword_60DED0 + 216);
      v28 = (char *)&unk_2337B0 + (_DWORD)&loc_40A50 * a1 + 264774;
LABEL_28:
      v27();
      if ( (_BYTE)dword_227094 )
      {
        v33 = -128;
        v34 = v28 - 1;
        v35 = &v28[(unsigned __int8)(dword_227094 - 1)];
        do
        {
          v37 = *++v34;
          v36 = v37;
          if ( v33 < v37 )
            v33 = v36;
        }
        while ( v35 != v34 );
      }
      (*(void (**)(void))(dword_60DED0 + 224))();
      v9 = dword_223680;
      goto LABEL_34;
    }
    v26 = (unsigned __int8)byte_2333A8[(_DWORD)&loc_40A50 * a1 + 265792];
    if ( (unsigned int)dword_227094 > 1 )
      v26 = (unsigned __int8)(v26 & byte_2333A8[(_DWORD)&loc_40A50 * a1 + 265793]);
    if ( v26 )
    {
      v27 = *(void (**)(void))(dword_60DED0 + 216);
      v28 = (char *)&unk_2337B0 + (_DWORD)&loc_40A50 * a1 + 264774;
      if ( (_BYTE)dword_227094 )
      {
        v29 = (char *)&unk_2337B0 + (_DWORD)&loc_40A50 * a1 + 264773;
        v30 = 127;
        do
        {
          v32 = *++v29;
          v31 = v32;
          if ( v30 >= v32 )
            v30 = v31;
        }
        while ( v29 != &v28[(unsigned __int8)(dword_227094 - 1)] );
      }
      goto LABEL_28;
    }
    sub_1E938(v53, 0x30u);
    printf("%s ", v53);
    printf("%s : %d PIC sensors are not all ok. They are: \n", "prepare_eeprom_data_pt2", dword_227094);
    snprintf(byte_60F0D4, 0x100u, "%d PIC sensors are not all ok. They are: ", dword_227094);
    sub_3CC5C(byte_60F0D4, v53);
    if ( dword_226084 )
    {
      v45 = byte_2333A8[(_DWORD)&loc_40A50 * a1 + 265792] ? "true" : "false";
      printf("%s ", v45);
      if ( (unsigned int)dword_226084 > 1 )
      {
        if ( byte_2333A8[(_DWORD)&loc_40A50 * a1 + 265793] )
          v46 = "true";
        else
          v46 = "false";
        printf("%s ", v46);
      }
    }
LABEL_46:
    putchar(10);
    return 1;
  }
  sub_1E938(v53, 0x30u);
  printf("%s ", v53);
  printf("%s : edf ctx should not be NULL\n\n", "prepare_eeprom_data_pt2");
  strcpy(byte_60EED4, "edf ctx should not be NULL\n");
  sub_3CC5C(byte_60EED4, v53);
  return 1;
}
