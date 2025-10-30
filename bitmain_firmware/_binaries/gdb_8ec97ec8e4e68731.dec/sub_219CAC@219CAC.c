bool __fastcall sub_219CAC(int *a1, const char *a2)
{
  int v2; // r0

  v2 = *a1;
  return !*(_BYTE *)(v2 + 32) || j_regexec((const regex_t *)v2, a2, 0, 0, 0) == 0;
}
