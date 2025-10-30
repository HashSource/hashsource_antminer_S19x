int __fastcall sub_29ACC(int a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v9; // r10
  int v10; // r0
  int v11; // r5
  void (__fastcall *v12)(int, _DWORD); // r9
  char v13; // r0
  int *v15; // r3
  char v16; // t1
  int v17; // r0
  int v18; // [sp+0h] [bp-10Ch] BYREF
  size_t v19; // [sp+4h] [bp-108h] BYREF
  char v20[260]; // [sp+8h] [bp-104h] BYREF

  v5 = dword_60DED0;
  v18 = 0;
  v19 = 0;
  if ( !dword_60DED0 )
  {
    v17 = sub_386A0(5);
    dword_60DED0 = v17;
    if ( !v17 )
    {
      sub_1E938(v20, 0x30u);
      printf("%s ", v20);
      printf("%s : edf_get_ctx ( %d ) failed\n\n", "prepare_eeprom_data_pt1", 5);
      snprintf(byte_60F1D4, 0x100u, "edf_get_ctx ( %d ) failed\n", 5);
      sub_3CC5C(byte_60F1D4, v20);
      return 1;
    }
    (*(void (__fastcall **)(int, _DWORD))(v17 + 152))(v17, 0);
    v5 = dword_60DED0;
  }
  (*(void (__fastcall **)(int, int))(v5 + 32))(v5, 1);
  (*(void (__fastcall **)(int, int))(dword_60DED0 + 40))(dword_60DED0, 1);
  v19 = 32;
  (*(void (__fastcall **)(int, int *, size_t *))(dword_60DED0 + 184))(dword_60DED0, &dword_6E3318, &v19);
  v19 = 32;
  (*(void (__fastcall **)(int, char *, size_t *))(dword_60DED0 + 48))(dword_60DED0, src, &v19);
  v19 = 2;
  (*(void (__fastcall **)(int, int *, size_t *))(dword_60DED0 + 56))(dword_60DED0, &dword_6E3338, &v19);
  v19 = 13;
  (*(void (__fastcall **)(int, int *, size_t *))(dword_60DED0 + 64))(dword_60DED0, &dword_6E3348, &v19);
  v19 = 16;
  (*(void (__fastcall **)(int, char *, size_t *))(dword_60DED0 + 72))(dword_60DED0, haystack, &v19);
  v19 = 2;
  (*(void (__fastcall **)(int, char *, size_t *))(dword_60DED0 + 80))(dword_60DED0, (char *)&dword_6E3394 + 1, &v19);
  (*(void (__fastcall **)(int, _DWORD))(dword_60DED0 + 88))(dword_60DED0, (unsigned __int8)(dword_6E3358[3] - 48));
  LOBYTE(v9) = sub_26A30((int)&dword_6E3318);
  if ( *(_BYTE *)(dword_223680 + 89) )
  {
    (*(void (__fastcall **)(int, int))(dword_60DED0 + 112))(dword_60DED0, (unsigned __int8)v9 | 0x80);
    strcpy((char *)(dword_223680 + 92), dword_6E3380);
    v18 = 0;
    if ( dword_226084 )
    {
      v15 = &dword_226288;
      LOBYTE(v9) = 0;
      do
      {
        v16 = *(_BYTE *)v15;
        v15 = (int *)((char *)v15 + 1);
        v9 = (unsigned __int8)((1 << v16) | v9);
      }
      while ( (int *)((char *)&dword_226288 + dword_226084) != v15 );
      v18 = dword_226084;
    }
    else
    {
      v9 = 0;
    }
    (*(void (__fastcall **)(int, int))(dword_60DED0 + 120))(dword_60DED0, v9);
    v10 = dword_60DED0;
    if ( *(_BYTE *)(dword_223680 + 90) )
      goto LABEL_4;
LABEL_12:
    (*(void (**)(void))(v10 + 96))();
    goto LABEL_5;
  }
  (*(void (**)(void))(dword_60DED0 + 112))();
  v10 = dword_60DED0;
  if ( !*(_BYTE *)(dword_223680 + 90) )
    goto LABEL_12;
LABEL_4:
  (*(void (__fastcall **)(int, int))(v10 + 96))(v10, (unsigned __int8)v9 | 0x80);
  memset(v20, 0, 0x100u);
  memcpy(v20, &dword_226A90, dword_22688C);
  v19 = 256;
  (*(void (__fastcall **)(int, char *, size_t *))(dword_60DED0 + 104))(dword_60DED0, v20, &v19);
LABEL_5:
  memset(v20, 0, 0x100u);
  *(_WORD *)v20 = *(_WORD *)dword_6E3390;
  v20[2] = dword_6E3390[2];
  _isoc99_sscanf(v20, "%x", &v18);
  (*(void (__fastcall **)(int, _DWORD))(dword_60DED0 + 128))(dword_60DED0, (unsigned __int16)v18);
  memset(v20, 0, 0x100u);
  *(_WORD *)v20 = *(_WORD *)&dword_6E3390[3];
  _isoc99_sscanf(v20, "%x", &v18);
  (*(void (__fastcall **)(int, _DWORD))(dword_60DED0 + 136))(dword_60DED0, (unsigned __int16)v18);
  memset(v20, 0, 0x100u);
  v19 = 2;
  *(_WORD *)v20 = *(_WORD *)((char *)&dword_6E3394 + 1);
  (*(void (__fastcall **)(int, char *, size_t *))(dword_60DED0 + 80))(dword_60DED0, v20, &v19);
  v19 = strlen((const char *)(dword_223680 + 32)) + 1;
  (*(void (__fastcall **)(int, int, size_t *))(dword_60DED0 + 176))(dword_60DED0, dword_223680 + 32, &v19);
  (*(void (__fastcall **)(int, int))(dword_60DED0 + 144))(dword_60DED0, a1);
  v11 = dword_60DED0;
  v12 = *(void (__fastcall **)(int, _DWORD))(dword_60DED0 + 152);
  v13 = (*(int (__fastcall **)(int))(dword_60DED0 + 148))(dword_60DED0);
  v12(v11, (unsigned __int8)(v13 + 1));
  (*(void (__fastcall **)(int, int, int, int))(dword_60DED0 + 12))(dword_60DED0, a2, a3, a4);
  (*(void (**)(void))(dword_60DED0 + 292))();
  return 1;
}
