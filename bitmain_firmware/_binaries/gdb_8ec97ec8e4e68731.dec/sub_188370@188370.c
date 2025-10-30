int __fastcall sub_188370(int a1, unsigned int a2)
{
  int v4; // r2
  int v5; // r3
  char *v6; // r0
  char *v7; // r0
  int v8; // r2
  int v9; // r3
  const char *v10; // r0
  int v11; // r2
  int v12; // r3
  int v13; // r2
  int v14; // r3

  sub_B7574();
  if ( sub_2573F0(a1) )
  {
    v6 = sub_9835C(8);
    sub_2575E8(a1, "reason", v6);
  }
  sub_257380(a1, "\nProgram terminated with signal ", v4, v5);
  sub_B75B4();
  v7 = sub_99A4C(a2);
  sub_2575E8(a1, "signal-name", v7);
  sub_B75D4();
  sub_257380(a1, ", ", v8, v9);
  sub_B75F4();
  v10 = sub_99A28(a2);
  sub_2575E8(a1, "signal-meaning", v10);
  sub_B7614();
  sub_257380(a1, ".\n", v11, v12);
  return sub_257380(a1, "The program no longer exists.\n", v13, v14);
}
