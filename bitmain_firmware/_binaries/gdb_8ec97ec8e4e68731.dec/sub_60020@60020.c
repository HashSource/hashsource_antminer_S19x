int __fastcall sub_60020(int a1, int a2, int a3, char a4)
{
  sub_256760(a1);
  *(_DWORD *)a1 = off_35AD68;
  *(_DWORD *)(a1 + 4) = a2;
  sub_256760(a1 + 8);
  *(_DWORD *)(a1 + 36) = a3;
  *(_BYTE *)(a1 + 40) = a4;
  *(_DWORD *)(a1 + 8) = &off_3F2924;
  *(_QWORD *)(a1 + 12) = (unsigned int)(a1 + 20);
  *(_BYTE *)(a1 + 20) = 0;
  return a1;
}
