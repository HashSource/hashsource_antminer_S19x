int __fastcall sub_1539F4(int a1)
{
  __sighandler_t v1; // r0

  v1 = signal(a1, (__sighandler_t)sub_1539F4);
  sub_158084(v1);
  return sub_153174((_DWORD *)dword_487680);
}
