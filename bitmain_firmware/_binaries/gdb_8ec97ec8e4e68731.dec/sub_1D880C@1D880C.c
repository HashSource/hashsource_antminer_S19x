int sub_1D880C()
{
  int v0; // r0
  int v1; // r4
  int v2; // r3

  v0 = sub_259858("\"set record full\" must be followed by an appropriate subcommand.\n");
  v1 = dword_4880AC;
  v2 = *(_DWORD *)sub_242F8C(v0);
  return sub_53DC0(v1, "set record full ", -1, v2);
}
