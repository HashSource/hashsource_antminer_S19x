int __fastcall sub_2693C(int a1, int a2, int a3, _DWORD *a4)
{
  _DWORD *v9; // r0

  if ( (a1 & 0xF) != 0xF )
    return sub_1F31C(a1, a2, "copro load/store", a4);
  if ( dword_487978 )
  {
    v9 = (_DWORD *)sub_242FC8(a1);
    sub_2594B0(*v9, "displaced: copying coprocessor load/store insn %.4x%.4x\n", a1, a2);
  }
  a4[42] = a1 & 0xFFF0;
  a4[50] = 2;
  a4[43] = a2;
  sub_268C0(a3, (int)a4, 0, 15);
  return 0;
}
