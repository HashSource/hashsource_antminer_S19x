void __fastcall sub_27CE44(int a1, int a2, int a3)
{
  int v3; // r4
  int v4; // r5
  int v5; // r6
  int v6; // r7
  int v7; // r8
  int v8; // r9
  int v9; // r10
  int v13; // r1
  int v14; // r3
  int (__fastcall *v15)(int); // r3
  void *v16; // r0
  size_t v17; // r3
  void *v18; // r10
  void *v19; // r8
  int v20; // r0
  unsigned int v21; // r6
  int v22; // r0
  const char *v23; // r5
  const char *v24; // r4
  int v25; // r0
  const char *v26; // r0
  const char *v27; // r5
  const char *v28; // r7
  int v29; // r0
  char *v30; // r8
  int v31; // r0
  char *v32; // r0
  __int64 v33; // r0
  _DWORD v34[2]; // [sp+8h] [bp-C8h] BYREF
  _DWORD v35[6]; // [sp+10h] [bp-C0h] BYREF
  _DWORD s[42]; // [sp+28h] [bp-A8h] BYREF

  if ( (*(_DWORD *)(a2 + 20) & 3) == 3 && *(_DWORD *)(a2 + 36) )
  {
    s[34] = v3;
    s[35] = v4;
    s[36] = v5;
    s[37] = v6;
    s[38] = v7;
    s[39] = v8;
    s[40] = v9;
    memset(s, 0, 0x88u);
    v13 = *(_DWORD *)(a1 + 156);
    v14 = *(_DWORD *)(a1 + 4);
    s[15] = a1 + 156;
    v34[1] = v13;
    v15 = *(int (__fastcall **)(int))(v14 + 360);
    s[12] = a1;
    s[14] = a1;
    v34[0] = a1;
    *(_DWORD *)(a1 + 156) = 0;
    s[7] = v15(a1);
    v16 = sub_9253C((int)sub_27CA8C, (int)v34);
    v17 = *(_DWORD *)(a2 + 36);
    v18 = v16;
    v35[1] = 1;
    v35[0] = 0;
    v35[3] = v17;
    v35[4] = a2;
    s[6] = &unk_3FB8D4;
    v35[2] = 0;
    v35[5] = 0;
    v19 = sub_93028(v17);
    sub_9253C(2607808, (int)v19);
    v20 = sub_2A7B54(a1, s, v35, v19, 0, a3);
    if ( !v20 )
    {
      v23 = *(const char **)a1;
      v24 = *(const char **)a2;
      v25 = sub_2A6910(0);
      v26 = (const char *)sub_2A6920(v25);
      sub_946E0("Cannot map compiled module \"%s\" section \"%s\": %s", v23, v24, v26);
    }
    if ( v19 == (void *)v20 )
    {
      v21 = *(_DWORD *)(a2 + 28);
      v22 = sub_230484(v21, (int)v19, *(_DWORD *)(a2 + 36));
      if ( v22 )
      {
        v27 = *(const char **)a1;
        v28 = *(const char **)a2;
        v29 = sub_16F654(v22);
        v30 = sub_25AC8C(v29, v21);
        v31 = sub_16F654((int)v30);
        v32 = sub_25AC8C(v31, v21 + *(_DWORD *)(a2 + 36));
        sub_946E0(
          "Cannot write compiled module \"%s\" section \"%s\" to inferior memory range %s-%s.",
          v27,
          v28,
          v30,
          v32);
      }
      sub_92620(v18);
    }
    else
    {
      v33 = sub_94700(
              (int)"compile/compile-object-load.c",
              389,
              "%s: Assertion `%s' failed.",
              "void copy_sections(bfd*, asection*, void*)",
              "sect_data_got == sect_data");
      sub_27D004(v33, HIDWORD(v33));
    }
  }
}
