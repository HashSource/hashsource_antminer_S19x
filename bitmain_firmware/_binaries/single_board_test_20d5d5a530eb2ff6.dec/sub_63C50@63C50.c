int sub_63C50()
{
  _DWORD *v0; // r3
  int v1; // r2
  int v2; // r1
  double v3; // d7
  unsigned int v4; // r4
  int v5; // r10
  unsigned int v6; // r3
  int result; // r0
  char v8[52]; // [sp+8h] [bp-34h] BYREF

  v0 = (_DWORD *)dword_223680;
  v1 = 12;
  v2 = *(_DWORD *)(dword_223680 + 344);
  dword_22B69C = 13;
  do
  {
    v0 -= 4;
    v3 = (double)v1;
    v0[136] = v1--;
    v0[138] = v2;
    v0[137] = 1500;
    v0[139] = (unsigned int)(485.0 - v3 * 6.25);
  }
  while ( v1 != -1 );
  v4 = 0;
  do
  {
    sub_1E938(v8, 0x30u);
    printf("%s ", v8);
    printf("%s : Test_Loop[%d]->Level : %d\n", "fake_more_levels", v4, *(_DWORD *)(dword_223680 + 16 * v4 + 336));
    snprintf(&byte_652440[256], 0x100u, "Test_Loop[%d]->Level : %d", v4, *(_DWORD *)(dword_223680 + 16 * v4 + 336));
    sub_3CC5C((int)&byte_652440[256], v8);
    sub_1E938(v8, 0x30u);
    printf("%s ", v8);
    printf(
      "%s : Test_Loop[%d]->Pre_Open_Core_Voltage : %d\n",
      "fake_more_levels",
      v4,
      *(_DWORD *)(dword_223680 + 16 * v4 + 340));
    v5 = 16 * (v4 + 21);
    snprintf(
      &byte_652440[512],
      0x100u,
      "Test_Loop[%d]->Pre_Open_Core_Voltage : %d",
      v4,
      *(_DWORD *)(dword_223680 + 16 * v4 + 340));
    sub_3CC5C((int)&byte_652440[512], v8);
    sub_1E938(v8, 0x30u);
    printf("%s ", v8);
    printf("%s : Test_Loop[%d]->Voltage : %d\n", "fake_more_levels", v4, *(_DWORD *)(dword_223680 + v5 + 8));
    snprintf(&byte_652440[768], 0x100u, "Test_Loop[%d]->Voltage : %d", v4, *(_DWORD *)(dword_223680 + v5 + 8));
    sub_3CC5C((int)&byte_652440[768], v8);
    sub_1E938(v8, 0x30u);
    printf("%s ", v8);
    printf("%s : Test_Loop[%d]->Frequence : %d\n", "fake_more_levels", v4, *(_DWORD *)(dword_223680 + v5 + 12));
    v6 = v4++;
    snprintf(&byte_652440[1024], 0x100u, "Test_Loop[%d]->Frequence : %d", v6, *(_DWORD *)(v5 + dword_223680 + 12));
    result = sub_3CC5C((int)&byte_652440[1024], v8);
  }
  while ( v4 < dword_22B69C );
  return result;
}
