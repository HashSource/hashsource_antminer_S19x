int __fastcall sub_1F31C(int a1, int a2, const char *a3, _DWORD *a4)
{
  _DWORD *v8; // r0

  if ( dword_487978 )
  {
    v8 = (_DWORD *)sub_242FC8();
    sub_2594B0(*v8, "displaced: copying insn %.4x %.4x, opcode/class '%s' unmodified\n", a1, a2, a3);
  }
  a4[42] = a1;
  a4[43] = a2;
  a4[50] = 2;
  return 0;
}
