int __fastcall sub_2E8E84(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  unsigned int v6; // r12
  int v7; // r12
  int result; // r0

  v6 = *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)(a2 + 4) + 444) + 466);
  a1[17] = -1;
  a1[18] = -1;
  a1[19] = 1;
  v7 = ((v6 >> 2) & 1) - 1;
  a1[15] = v7;
  a1[16] = v7;
  result = sub_2FC89C();
  a1[10] = 1;
  a1[11] = a5;
  return result;
}
