int __fastcall sub_6FB84(char *a1, size_t a2)
{
  int v5; // [sp+8h] [bp-Ch] BYREF
  int v6; // [sp+Ch] [bp-8h] BYREF

  v5 = 0;
  v6 = 0;
  sub_6688C(31, &v5);
  sub_6688C(32, &v6);
  return snprintf(a1, a2, "%08x%08x", v6, v5);
}
