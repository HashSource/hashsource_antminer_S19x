int __fastcall sub_2AE99C(int a1, int a2)
{
  int v4; // r8
  int *v5; // r0
  int *v6; // r4
  char *v7; // r0
  int v8; // r3
  char *v9; // r0
  int v10; // r12
  __int64 v11; // r2

  v4 = *(_DWORD *)(a1 + 160);
  v5 = (int *)sub_2ACBF4(a1, 72);
  v6 = v5;
  if ( !v5 )
    return -1;
  *v5 = a1;
  v5[1] = (int)sub_2AE908((const char **)a1, "start");
  v6[4] = v4;
  v6[6] = a1;
  v6[2] = 0;
  v6[5] = 0;
  v6[3] = 2;
  v7 = sub_2AE908((const char **)a1, "end");
  v8 = *(_DWORD *)(v4 + 36);
  v6[7] = (int)v7;
  v6[9] = 2;
  v6[8] = v8;
  v6[11] = 0;
  v6[10] = v4;
  v6[12] = a1;
  v9 = sub_2AE908((const char **)a1, "size");
  v10 = *(_DWORD *)(v4 + 36);
  LODWORD(v11) = v6 + 6;
  HIDWORD(v11) = v6 + 12;
  v6[13] = (int)v9;
  v6[14] = v10;
  v6[15] = 2;
  v6[17] = 0;
  v6[16] = (int)&off_470950;
  *(_DWORD *)(a2 + 12) = 0;
  *(_DWORD *)a2 = v6;
  *(_QWORD *)(a2 + 4) = v11;
  return 3;
}
