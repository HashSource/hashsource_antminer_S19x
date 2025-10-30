int __fastcall sub_153A1C(int a1)
{
  __sighandler_t v1; // r0

  v1 = signal(a1, (__sighandler_t)sub_153A1C);
  dword_487684 = 1;
  sub_158084(v1);
  return sub_153174((_DWORD *)dword_487688);
}
