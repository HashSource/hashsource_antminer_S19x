int __fastcall sub_2A3BB4(int a1, int a2)
{
  int v2; // r1

  v2 = *(_DWORD *)(*(_DWORD *)(a1 + 160) + 16) + 16 * a2;
  return sub_2A399C(a1, v2, *(_QWORD *)(v2 + 8));
}
