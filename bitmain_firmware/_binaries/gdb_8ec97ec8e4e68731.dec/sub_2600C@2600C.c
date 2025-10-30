int __fastcall sub_2600C(unsigned int a1, unsigned int a2, int a3, int a4, int a5)
{
  int v7; // r7
  unsigned int v8; // r8
  int v9; // r5
  int v10; // r0
  int v11; // r3
  char v13; // r3
  _DWORD *v14; // r0
  int v15; // r3

  v7 = (a1 >> 7) & 1;
  v8 = a2 >> 12;
  v9 = a2 & 0xFFF;
  if ( dword_487978 )
  {
    v14 = (_DWORD *)sub_242FC8(a1);
    if ( v7 )
      v15 = 43;
    else
      v15 = 45;
    sub_2594B0(*v14, "displaced: copying ldr pc (0x%x) R%d %c imm12 %.4x\n", *(_DWORD *)(a4 + 204), v8, v15, v9);
  }
  if ( !v7 )
    v9 = -v9;
  *(_QWORD *)(a4 + 8) = sub_20B88(a3, 0);
  *(_QWORD *)(a4 + 24) = sub_20B88(a3, 2);
  *(_QWORD *)(a4 + 32) = sub_20B88(a3, 3);
  v10 = sub_25A78(a3, a4, 15);
  sub_25B70(a3, a4, 2, v11, v10 & 0xFFFFFFFC, 0, 4);
  sub_25B70(a3, a4, 3, v9 >> 31, v9, v9 >> 31, 4);
  v13 = *(_BYTE *)(a4 + 152) & 0xF8;
  *(_DWORD *)(a4 + 136) = v8;
  *(_DWORD *)(a4 + 144) = a5;
  *(_BYTE *)(a4 + 152) = v13;
  *(_DWORD *)(a4 + 212) = 155976;
  *(_DWORD *)(a4 + 168) = 63570;
  *(_DWORD *)(a4 + 172) = 3;
  *(_DWORD *)(a4 + 200) = 2;
  return 0;
}
