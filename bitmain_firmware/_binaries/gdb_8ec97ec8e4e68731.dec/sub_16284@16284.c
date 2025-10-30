void __fastcall __noreturn sub_16284(const char **a1, int a2)
{
  const char *v3; // r5
  int v4; // r0
  const char *v5; // r0

  v3 = *a1;
  v4 = sub_2A6910();
  v5 = (const char *)sub_2A6920(v4);
  sub_946E0("Failed to write %d bytes to core file %s ('%s').", a2, v3, v5);
}
