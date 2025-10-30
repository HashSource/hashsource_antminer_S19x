int sub_550D8()
{
  int v0; // r0
  int v1; // r4
  int v2; // r3

  v0 = sub_259858("\"append binary\" must be followed by a subcommand.\n");
  v1 = dword_4747B8;
  v2 = *(_DWORD *)sub_242F8C(v0);
  return sub_53DC0(v1, "append binary ", -1, v2);
}
