int __fastcall sub_69350(int a1, int a2, int a3, _DWORD *a4)
{
  __int64 v4; // r4
  int v5; // r3

  LODWORD(v4) = 1359773268;
  HIDWORD(v4) = a4[2];
  *(_QWORD *)(a2 + 4) = v4;
  *(_DWORD *)a2 = a3;
  HIDWORD(v4) = a4[5];
  v5 = a4[4];
  *(_DWORD *)(a2 + 20) = HIDWORD(v4);
  *(_DWORD *)(a2 + 16) = v5;
  return sub_6E6E8();
}
