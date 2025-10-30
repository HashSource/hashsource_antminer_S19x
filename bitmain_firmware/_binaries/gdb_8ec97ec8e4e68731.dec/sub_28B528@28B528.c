_DWORD *__fastcall sub_28B528(int a1, int a2)
{
  char *v4; // r0
  unsigned __int64 v5; // r2
  _DWORD *v6; // r4
  int v7; // r2
  void *v9; // r3

  v4 = (char *)sub_93028(0x70u);
  v5 = __PAIR64__(dword_4900D4, dword_4900D8);
  v6 = v4;
  *((_DWORD *)v4 + 1) = a2;
  *(_DWORD *)v4 = a1;
  *(_QWORD *)(v4 + 36) = v5;
  *((_DWORD *)v4 + 2) = 0;
  *((_DWORD *)v4 + 3) = 0;
  *((_DWORD *)v4 + 4) = 0;
  *((_DWORD *)v4 + 5) = 0;
  *((_DWORD *)v4 + 6) = 0;
  *((_DWORD *)v4 + 8) = 0;
  *((_DWORD *)v4 + 7) = 0;
  v7 = sub_2978A8(v4);
  v9 = off_46DED0;
  v6[13] = 0;
  v6[14] = 0;
  v6[17] = 0;
  v6[18] = 0;
  v6[19] = 0;
  v6[24] = 0;
  v6[26] = 0;
  v6[25] = 0;
  v6[27] = 0;
  v6[11] = v7;
  v6[12] = v7;
  v6[15] = v9;
  v6[16] = v9;
  return v6;
}
