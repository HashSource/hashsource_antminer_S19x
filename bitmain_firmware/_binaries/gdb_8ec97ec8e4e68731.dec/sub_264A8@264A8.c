int __fastcall sub_264A8(int a1, unsigned int a2, int a3, int a4, char a5, int a6)
{
  int v6; // r8
  int v7; // r9
  bool v8; // zf
  unsigned int v10; // r4
  unsigned int v13; // r5
  int v14; // r5
  int v15; // r4
  _DWORD *v16; // r0

  v6 = a2 >> 12;
  v7 = a1 & 0xF;
  v8 = a2 >> 12 == 15;
  if ( a2 >> 12 != 15 )
    v8 = v7 == 15;
  if ( !v8 )
    return sub_1F31C(a1, a2, "load", (_DWORD *)a4);
  v10 = a2;
  if ( dword_487978 )
  {
    v16 = (_DWORD *)sub_242FC8(a1);
    sub_2594B0(*v16, "displaced: copying ldr r%d [r%d] insn %.4x%.4x\n", v6, v7, a1, v10);
  }
  v13 = a1 & 0xFFFFFFF0;
  sub_262C8(a3, a4, (void (__fastcall *)(int, int, int))1, a6, a5, 4, v6, v10 & 0xF, v7);
  if ( !a6 )
    v10 &= 0xFF0u;
  v14 = v13 | 2;
  if ( a6 )
    v15 = v10 & 0xFFF;
  else
    v15 = v10 | 3;
  *(_BYTE *)(a4 + 152) &= ~4u;
  *(_DWORD *)(a4 + 168) = v14;
  *(_DWORD *)(a4 + 172) = v15;
  *(_DWORD *)(a4 + 200) = 2;
  return 0;
}
