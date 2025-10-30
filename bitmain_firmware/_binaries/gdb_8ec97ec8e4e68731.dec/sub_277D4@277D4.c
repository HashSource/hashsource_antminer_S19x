int __fastcall sub_277D4(unsigned int a1, int a2, int a3)
{
  int v3; // r3
  int v4; // r12
  int *v5; // r2
  _DWORD *v10; // r0

  v3 = 1;
  v4 = 983040;
  while ( (v3 & 0xF0000) == 0 )
  {
    v3 *= 2;
    if ( !v3 )
    {
      v5 = (int *)(a3 + 168);
      return sub_1F6AC(a1, "copro load/store", v5);
    }
  }
  while ( ((15 * v3) & ~a1) != 0 )
  {
    v4 &= ~(15 * v3);
    if ( !v4 )
    {
LABEL_10:
      v5 = (int *)(a3 + 168);
      return sub_1F6AC(a1, "copro load/store", v5);
    }
    while ( (v4 & v3) == 0 )
    {
      v3 *= 2;
      if ( !v3 )
        goto LABEL_10;
    }
  }
  if ( dword_487978 )
  {
    v10 = (_DWORD *)sub_242FC8(a1);
    sub_2594B0(*v10, "displaced: copying coprocessor load/store insn %.8lx\n", a1);
  }
  *(_DWORD *)(a3 + 168) = a1 & 0xFFF0FFFF;
  sub_268C0(a2, a3, (a1 & 0x2000000) != 0, HIWORD(a1) & 0xF);
  return 0;
}
