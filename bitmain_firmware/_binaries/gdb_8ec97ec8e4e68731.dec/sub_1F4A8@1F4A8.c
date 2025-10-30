int __fastcall sub_1F4A8(int a1, int *a2)
{
  _DWORD *v4; // r0

  if ( dword_487978 )
  {
    v4 = (_DWORD *)sub_242FC8();
    sub_2594B0(*v4, "displaced: copying unpredictable insn %.8lx\n", a1);
  }
  *a2 = a1;
  return 0;
}
