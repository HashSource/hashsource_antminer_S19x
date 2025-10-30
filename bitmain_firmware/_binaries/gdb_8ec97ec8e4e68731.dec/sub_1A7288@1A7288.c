int sub_1A7288()
{
  int v0; // lr
  int v1; // r1
  void (__fastcall *v2)(int, int, _DWORD *); // r5
  int v3; // r0
  _DWORD v5[4]; // [sp+4h] [bp-10h] BYREF

  v0 = *(_DWORD *)(dword_487AA8 + 20);
  v1 = *(_DWORD *)(dword_487AA4 + 108);
  v2 = *(void (__fastcall **)(int, int, _DWORD *))(dword_487AA8 + 52);
  v3 = ++dword_487AB0 + *(_DWORD *)(dword_487AB4 + 16);
  v2(dword_487AAC, v1 + v0 * v3, v5);
  return *(_DWORD *)(dword_487AA4 + 120) + *(_DWORD *)(dword_487AB4 + 8) + v5[0];
}
