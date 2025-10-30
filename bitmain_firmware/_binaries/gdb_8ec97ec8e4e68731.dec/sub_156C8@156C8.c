int __fastcall sub_156C8(unsigned int a1, int a2, int a3)
{
  unsigned int v3; // r12
  int v4; // r3
  int v5; // r2
  _DWORD *v10; // r0
  __int64 v11; // r6
  __int64 v12; // r8
  int v13; // r3
  int v14; // r3
  char v15; // r2

  v3 = (unsigned int)&loc_F000C + 3;
  v4 = 1;
  while ( (((unsigned int)&loc_F000C + 3) & v4) == 0 )
  {
    v4 *= 2;
    if ( !v4 )
    {
      v5 = a3 + 168;
      return sub_1F6AC(a1, "preload reg", v5);
    }
  }
  while ( ((15 * v4) & ~a1) != 0 )
  {
    v3 &= ~(15 * v4);
    if ( !v3 )
    {
LABEL_10:
      v5 = a3 + 168;
      return sub_1F6AC(a1, "preload reg", v5);
    }
    while ( (v3 & v4) == 0 )
    {
      v4 *= 2;
      if ( !v4 )
        goto LABEL_10;
    }
  }
  if ( dword_487978 )
  {
    v10 = (_DWORD *)sub_242FC8();
    sub_2594B0(*v10, "displaced: copying preload insn %.8lx\n", a1);
  }
  *(_DWORD *)(a3 + 168) = a1 & 0xFFF0FFF0 | 1;
  *(_QWORD *)(a3 + 8) = sub_20B88(a2, 0);
  *(_QWORD *)(a3 + 16) = sub_20B88(a2, 1);
  v11 = sub_25A78(a2, a3, HIWORD(a1) & 0xF);
  v12 = sub_25A78(a2, a3, a1 & 0xF);
  sub_25B70(a2, a3, 0, v13, v11, HIDWORD(v11), 4);
  sub_25B70(a2, a3, 1, v14, v12, HIDWORD(v12), 4);
  v15 = *(_BYTE *)(a3 + 144);
  *(_DWORD *)(a3 + 212) = 155564;
  *(_BYTE *)(a3 + 144) = v15 & 0xFE;
  return 0;
}
