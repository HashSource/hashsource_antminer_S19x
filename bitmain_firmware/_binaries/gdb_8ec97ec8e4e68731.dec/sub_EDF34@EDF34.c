int __fastcall sub_EDF34(int a1, int a2)
{
  int v3; // r5
  int v4; // r0
  int v5; // r1

  *(_DWORD *)(a1 + 4) = 0;
  v3 = a1 + 8;
  *(_BYTE *)(a1 + 8) = 0;
  v4 = *(_DWORD *)(a2 + 88);
  v5 = *(_DWORD *)(a2 + 72);
  *(_DWORD *)a1 = v3;
  sub_ED720(v4, v5, 0, 0, 0, (void **)a1);
  return a1;
}
