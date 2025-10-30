int sub_1D4570()
{
  int v0; // r0
  int v1; // r4
  int v2; // r3

  v0 = sub_259858("\"set record btrace bts\" must be followed by an appropriate subcommand.\n");
  v1 = dword_487D90;
  v2 = *(_DWORD *)sub_242F8C(v0);
  return sub_53DC0(v1, "set record btrace bts ", -1, v2);
}
