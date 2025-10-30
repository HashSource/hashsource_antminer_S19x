int sub_1537B4()
{
  const char *v0; // r4
  int v1; // r0
  _DWORD *v2; // r0
  int v3; // r0
  sigset_t v5; // [sp+0h] [bp-80h] BYREF

  v0 = (const char *)sub_2445C4();
  signal(20, 0);
  sigemptyset(&v5);
  sigprocmask(2, &v5, 0);
  raise(20);
  signal(20, (__sighandler_t)sub_1538BC);
  v1 = sub_259858("%s", v0);
  v2 = (_DWORD *)sub_242F8C(v1);
  v3 = sub_25680C(*v2);
  return sub_243C34(v3);
}
