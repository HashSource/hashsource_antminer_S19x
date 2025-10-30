bool __fastcall sub_29E5D8(int a1, int a2, int *a3)
{
  int v3; // r3
  int v4; // r0

  v3 = *(_DWORD *)(a1 + 36);
  v4 = *(_DWORD *)(a1 + 48);
  return (!v3 || v3 == *(_DWORD *)(*(_DWORD *)(v4 + 4 * a2) + 16)) && sub_29E530(v4, a2, a3);
}
