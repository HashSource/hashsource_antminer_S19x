_DWORD *__fastcall sub_23DEA4(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  int v7; // r2
  int v9; // r5
  int v10; // r6
  void *v11; // r0
  void *v12; // r0
  int v13; // r0

  *a1 = 0;
  a1[1] = 0;
  a1[2] = a3;
  a1[3] = a4;
  a1[4] = a5;
  a1[7] = a2;
  a1[8] = 0;
  a1[9] = 0;
  a1[10] = 0;
  a1[11] = 0;
  memset(a1 + 12, 0, 0x60u);
  memset(a1 + 36, 0, 0x20u);
  a1[44] = 0;
  a1[45] = 0;
  a1[46] = 0;
  a1[47] = 0;
  a1[48] = 0;
  a1[49] = 0;
  a1[50] = 0;
  a1[51] = 0;
  a1[56] = 0;
  a1[57] = 0;
  a1[58] = 0;
  a1[59] = 0;
  a1[60] = 0;
  a1[61] = 0;
  a1[62] = 0;
  memset(a1 + 63, 0, 0x48u);
  a1[81] = 0;
  a1[82] = 0;
  a1[83] = 0;
  a1[84] = 0;
  if ( !a2 )
  {
    sub_94700(
      (int)"thread.c",
      343,
      "%s: Assertion `%s' failed.",
      "thread_info::thread_info(inferior*, ptid_t)",
      "inf_ != NULL");
    v9 = a1[69];
    v10 = a1[70];
    while ( v10 != v9 )
    {
      v11 = *(void **)(v9 + 20);
      if ( v11 )
        sub_339E64(v11);
      v9 += 52;
    }
    v12 = (void *)a1[69];
    if ( v12 )
      sub_339E64(v12);
    v13 = a1[62];
    if ( v13 )
      v13 = (*(int (__fastcall **)(int))(*(_DWORD *)v13 + 4))(v13);
    sub_338FFC(v13);
  }
  v7 = *(_DWORD *)(a2 + 20) + 1;
  a1[5] = ++dword_48A4DC;
  *(_DWORD *)(a2 + 20) = v7;
  a1[6] = v7;
  a1[53] = 0;
  a1[54] = 0;
  a1[55] = 0;
  a1[52] = 10;
  a1[38] = 11;
  return a1;
}
