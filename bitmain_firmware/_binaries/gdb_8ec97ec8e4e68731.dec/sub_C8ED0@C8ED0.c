int sub_C8ED0()
{
  int v0; // r0
  int v1; // r4
  int v2; // r3

  v0 = sub_259858("\"save\" must be followed by the name of a save subcommand.\n");
  v1 = dword_478364;
  v2 = *(_DWORD *)sub_242F8C(v0);
  return sub_53DC0(v1, "save ", -1, v2);
}
