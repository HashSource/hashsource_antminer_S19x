int __fastcall sub_46E7C(sigset_t *a1)
{
  sigemptyset(a1);
  sigaddset(a1, 32);
  return sigaddset(a1, 33);
}
