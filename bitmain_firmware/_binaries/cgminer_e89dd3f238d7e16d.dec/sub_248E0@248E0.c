int __fastcall sub_248E0(int a1, int a2)
{
  unsigned int i; // r0
  int v3; // r0
  unsigned int v7; // [sp+Ch] [bp-8h]

  v7 = 0;
  for ( i = sub_65E3C(a2); i > v7; i = sub_65E3C(a2) )
  {
    v3 = sub_65E88(a2, v7);
    *(_DWORD *)(a1 + 4 * (v7 + 162) + 4) = sub_66FB0(v3);
    ++v7;
  }
  return 1;
}
