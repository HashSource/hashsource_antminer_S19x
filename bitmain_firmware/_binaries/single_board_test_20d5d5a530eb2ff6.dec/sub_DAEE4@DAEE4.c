int __fastcall sub_DAEE4(int a1, int a2, int a3)
{
  int v5; // r0
  _DWORD *v6; // r3
  int (*v7)(void); // r2

  v5 = sub_B89D4(a3);
  v6 = *(_DWORD **)(v5 + 32);
  v7 = *(int (**)(void))(v5 + 28);
  *v6 = a1;
  v6[1] = a2;
  return v7();
}
