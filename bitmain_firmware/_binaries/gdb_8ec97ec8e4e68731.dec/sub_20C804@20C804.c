int __fastcall sub_20C804(const char *a1, const char **a2, int *a3)
{
  int v6; // r2
  int result; // r0

  v6 = sub_15FE8C(*a3, a3[1], a3[2], a3[3], a3[4]);
  if ( !v6 )
    return sub_946B0("Unable to restore previously selected frame.");
  result = sub_1C7850(a1, a2, v6, a3[6], a3[5]);
  a3[7] = 1;
  return result;
}
