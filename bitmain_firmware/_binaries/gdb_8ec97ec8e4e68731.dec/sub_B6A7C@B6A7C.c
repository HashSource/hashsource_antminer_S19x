int __fastcall sub_B6A7C(int a1, int a2, int a3)
{
  const char *v3; // r3
  int v5; // r5
  int v6; // r0
  int v7; // r1

  v3 = *(const char **)a2;
  v5 = a1 + 8;
  v6 = *(_DWORD *)(a2 + 80);
  v7 = *(_DWORD *)(a2 + 76);
  *(_DWORD *)a1 = v5;
  *(_DWORD *)(a1 + 4) = 0;
  *(_BYTE *)(a1 + 8) = 0;
  sub_B5F80(v6, v7, v3, 0, a3, a1, 0, 0, 0);
  return a1;
}
