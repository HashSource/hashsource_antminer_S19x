int __fastcall sub_1BDE54(int a1, int a2, int a3, int a4)
{
  char *v5; // r5
  size_t v6; // r0

  v5 = *(char **)(sub_273FA0(a4, "name") + 4);
  v6 = strlen(v5);
  return sub_33BC54(a3 + 4, 0, *(_DWORD *)(a3 + 8), v5, v6);
}
