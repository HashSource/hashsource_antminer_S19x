int *__fastcall sub_345F14(int *a1, char *s, _DWORD *a3)
{
  size_t v6; // r8

  v6 = strlen(s);
  *a1 = (int)&unk_48FF24;
  sub_3458D8(a1, *(_DWORD *)(*a3 - 12) + v6);
  sub_345AC0(a1, (unsigned int)s, v6);
  sub_345994(a1, a3);
  return a1;
}
