int __fastcall sub_25ADC(unsigned int a1, int a2, int a3)
{
  unsigned int v5; // r7
  unsigned int v6; // r6
  int v7; // r9
  _DWORD *v9; // r0
  int v10; // r0
  char v11; // r3

  v5 = a1 >> 28;
  v6 = a1 >> 5;
  v7 = a1 & 0xF;
  if ( dword_487978 )
  {
    v9 = (_DWORD *)sub_242FC8(a1);
    sub_2594B0(*v9, "displaced: copying insn %.8lx", a1);
  }
  *(_DWORD *)(a3 + 168) = -509607936;
  v10 = sub_25A78(a2, a3, v7);
  v11 = *(_BYTE *)(a3 + 148);
  *(_DWORD *)(a3 + 144) = v10;
  *(_DWORD *)(a3 + 212) = 154604;
  *(_BYTE *)(a3 + 148) = v11 & 0xC2 | (4 * (v5 & 0xF)) | v6 & 1 | 2;
  return 0;
}
