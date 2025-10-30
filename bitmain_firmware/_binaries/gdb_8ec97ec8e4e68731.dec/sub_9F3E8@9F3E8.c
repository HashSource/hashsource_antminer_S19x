bool __fastcall sub_9F3E8(const regex_t ***a1, const char *a2)
{
  char *v3; // r0
  const regex_t *v4; // r1

  v3 = sub_9EB80(a2);
  v4 = **a1;
  return !v4 || sub_9F3B0(v3, v4);
}
