void sub_1BAD4()
{
  __pid_t v0; // r5
  unsigned int v1; // r0

  v0 = getpid();
  v1 = time(0) ^ __ROR4__(v0, 16);
  srand(v1);
}
