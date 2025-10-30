int __fastcall sub_5B848(char *a1, size_t a2)
{
  int v5; // [sp+10h] [bp-Ch] BYREF
  int v6; // [sp+14h] [bp-8h] BYREF

  v6 = 0;
  v5 = 0;
  sub_52E24(31, &v6);
  sub_52E24(32, &v5);
  return snprintf(a1, a2, "%08x%08x", v5, v6);
}
