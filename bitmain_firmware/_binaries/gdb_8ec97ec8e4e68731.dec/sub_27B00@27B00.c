int __fastcall sub_27B00(unsigned int a1, int a2, int a3)
{
  int v3; // r3
  int v4; // r12
  int *v5; // r2
  __int64 v10; // r0
  char v11; // r3
  _DWORD *v12; // r0

  v3 = 1;
  v4 = 983040;
  while ( (v3 & 0xF0000) == 0 )
  {
    v3 *= 2;
    if ( !v3 )
    {
      v5 = (int *)(a3 + 168);
      return sub_1F6AC(a1, "preload", v5);
    }
  }
  while ( ((15 * v3) & ~a1) != 0 )
  {
    v4 &= ~(15 * v3);
    if ( !v4 )
    {
LABEL_10:
      v5 = (int *)(a3 + 168);
      return sub_1F6AC(a1, "preload", v5);
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
    v12 = (_DWORD *)sub_242FC8(a1);
    sub_2594B0(*v12, "displaced: copying preload insn %.8lx\n", a1);
  }
  *(_DWORD *)(a3 + 168) = a1 & 0xFFF0FFFF;
  *(_QWORD *)(a3 + 8) = sub_20B88(a2, 0);
  v10 = sub_25A78(a2, a3, HIWORD(a1) & 0xF);
  sub_25B70(a2, a3, 0, 4, v10, SHIDWORD(v10), 4);
  v11 = *(_BYTE *)(a3 + 144);
  *(_DWORD *)(a3 + 212) = 155564;
  *(_BYTE *)(a3 + 144) = v11 | 1;
  return 0;
}
