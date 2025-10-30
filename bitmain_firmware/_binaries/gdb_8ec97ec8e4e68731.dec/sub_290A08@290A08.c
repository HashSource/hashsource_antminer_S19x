int __fastcall sub_290A08(int a1, void (*a2)(int), char *a3)
{
  int result; // r0
  struct sigaction oact; // [sp+4h] [bp-8Ch] BYREF

  sigemptyset(&oact.sa_mask);
  result = sub_29097C(a1, a2, a3);
  if ( result == 1 )
    return sigaction(a1, (const struct sigaction *)a3, &oact);
  return result;
}
