void __fastcall __noreturn sub_7CF18(int a1, int a2, int a3)
{
  FILE *v6; // r8
  const char *v7; // r9
  int v8; // r7
  char *v9; // r0

  v6 = stderr;
  v7 = off_B84B0[0];
  v8 = *_errno_location();
  v9 = strerror(v8);
  fprintf(v6, v7, a1, v8, v9, a2, a3);
  sub_7CE5C(1);
}
