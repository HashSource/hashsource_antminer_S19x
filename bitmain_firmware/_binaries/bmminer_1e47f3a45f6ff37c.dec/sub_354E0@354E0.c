void __noreturn sub_354E0()
{
  int v0; // r0

  sigaction(15, &stru_5C1F5C, 0);
  sigaction(2, &stru_5C301C, 0);
  v0 = sigaction(6, &stru_5BFE54, 0);
  sub_40E04(v0);
  exit(0);
}
