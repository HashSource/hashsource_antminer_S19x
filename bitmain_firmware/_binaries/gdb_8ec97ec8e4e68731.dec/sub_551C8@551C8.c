int sub_551C8()
{
  int v0; // r0
  int v1; // r4
  int v2; // r3

  v0 = sub_259858("\"dump ihex\" must be followed by a subcommand.\n");
  v1 = dword_4747C8;
  v2 = *(_DWORD *)sub_242F8C(v0);
  return sub_53DC0(v1, "dump ihex ", -1, v2);
}
