int sub_1D30F8()
{
  int v0; // r0
  int v1; // r4
  int v2; // r3

  v0 = sub_259858("\"set record\" must be followed by an apporpriate subcommand.\n");
  v1 = dword_487D54;
  v2 = *(_DWORD *)sub_242F8C(v0);
  return sub_53DC0(v1, "set record ", -1, v2);
}
