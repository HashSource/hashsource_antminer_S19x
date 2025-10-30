int __fastcall sub_1A74F4(char *a1)
{
  int v2; // r5
  size_t v3; // r0

  v2 = sub_220854(dword_487ABC);
  ((void (__fastcall *)(int, int, int))loc_21AEC4)(v2, dword_487AC0, dword_487ABC + 48);
  v3 = strlen(a1);
  sub_21AF48(v2, a1, v3, 1, dword_487ABC);
  return v2;
}
