int __fastcall sub_163E78(int a1)
{
  _DWORD *v2; // r0

  if ( (unsigned int)dword_4877EC > 1 )
  {
    v2 = (_DWORD *)sub_242FC8(a1);
    sub_2594B0(*v2, "gdbarch_tdep called\n");
  }
  return *(_DWORD *)(a1 + 28);
}
