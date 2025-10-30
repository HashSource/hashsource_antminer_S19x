int sub_109A84()
{
  int v0; // r0
  int v1; // r4
  int v2; // r3

  v0 = sub_259858("\"set dcache\" must be followed by the name of a subcommand.\n");
  v1 = dword_4872A8;
  v2 = *(_DWORD *)sub_242F8C(v0);
  return sub_53DC0(v1, "set dcache ", -1, v2);
}
