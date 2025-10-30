int __fastcall sub_F11A0(int a1, unsigned int a2, int a3)
{
  char **v5; // r0

  v5 = sub_EAA20(a2);
  *(_DWORD *)(a1 + 20) = a3;
  *(_DWORD *)(a1 + 16) = v5;
  return 1;
}
