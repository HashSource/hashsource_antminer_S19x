int __fastcall sub_170D60(int a1, int a2, char *s)
{
  size_t v6; // r0
  char vars0[9]; // [sp+8h] [bp-14h] BYREF
  char dest; // [sp+11h] [bp-Bh] BYREF

  v6 = strlen(s);
  qmemcpy(vars0, "unsigned ", sizeof(vars0));
  memcpy(&dest, s, v6 + 1);
  return sub_170CD8(a1, a2, vars0, 0, 0);
}
