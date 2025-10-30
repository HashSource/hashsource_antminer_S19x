bool __fastcall sub_9F3B0(const char *a1, const regex_t *a2)
{
  char *v3; // r0

  v3 = sub_9EB80(a1);
  return j_regexec(a2, v3, 0, 0, 0) == 0;
}
