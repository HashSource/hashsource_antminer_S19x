int __fastcall sub_1CE278(int a1, int a2)
{
  char **v4; // r0
  int (__fastcall *v5)(int, int, _DWORD); // r6
  int v6; // r0

  v4 = sub_194438(*(_BYTE *)(a1 + 20) & 0x1F);
  v5 = (int (__fastcall *)(int, int, _DWORD))sub_194570((int)v4, a2);
  v6 = sub_21B7DC(a1);
  return v5(v6, a2, 0);
}
