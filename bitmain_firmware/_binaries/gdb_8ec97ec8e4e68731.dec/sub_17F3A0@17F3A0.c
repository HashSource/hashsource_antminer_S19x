int sub_17F3A0()
{
  int v0; // r0
  int v1; // r4
  int v2; // r3

  v0 = sub_259F10("\"unset\" must be followed by the name of an unset subcommand.\n");
  v1 = dword_474794;
  v2 = *(_DWORD *)sub_242F8C(v0);
  return sub_53DC0(v1, "unset ", -1, v2);
}
