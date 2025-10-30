__int64 __fastcall sub_A2354(int a1, int a2)
{
  int v3; // r4
  int v4; // r6
  int v5; // r4
  int v6; // r0
  int v7; // r0

  v3 = a2 - 1;
  v4 = sub_A0870(a1);
  v5 = sub_171928(
         0,
         *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v4 + 24) + 24) + 12) + 24) + 20),
         a2,
         a2 >> 31,
         v3,
         v3 >> 31);
  v6 = sub_A1770(v4, 1);
  v7 = sub_172124(0, v6, v5);
  return sub_26BB80(v7);
}
