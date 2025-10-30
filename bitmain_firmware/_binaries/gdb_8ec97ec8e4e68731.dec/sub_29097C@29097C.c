int __fastcall sub_29097C(int a1, void (*a2)(int), char *a3)
{
  int v3; // r3
  struct sigaction v8; // [sp+0h] [bp-118h] BYREF
  struct sigaction act; // [sp+8Ch] [bp-8Ch] BYREF

  if ( a1 == 28 )
    v3 = 0x10000000;
  else
    v3 = 0;
  act.sa_flags = v3;
  act.sa_handler = a2;
  sigemptyset(&act.sa_mask);
  sigemptyset((sigset_t *)(a3 + 4));
  sigaction(a1, &act, &v8);
  if ( a2 == (void (*)(int))sub_291134 && v8.sa_handler == (__sighandler_t)sub_291134 )
    return *(_DWORD *)a3;
  memcpy(a3, &v8, 0x8Cu);
  return *(_DWORD *)a3;
}
