int __fastcall sub_170C60(int a1, int a2, int a3, int a4, __int16 a5, int a6)
{
  int v10; // r12
  int result; // r0
  char v12; // r3
  int v13; // r2

  sub_16F708(a1);
  v10 = *(_DWORD *)(a1 + 24);
  *(_BYTE *)v10 = 15;
  *(_DWORD *)(v10 + 20) = a3;
  result = ((int (__fastcall *)(int, int))loc_1709C4)(a1, a2);
  v13 = *(_DWORD *)(a1 + 24);
  if ( a6 )
    v12 = *(_BYTE *)(v13 + 1);
  *(_DWORD *)(v13 + 24) = a4;
  *(_WORD *)(v13 + 4) = a5;
  if ( a6 )
    *(_BYTE *)(v13 + 1) = v12 | 0x80;
  *(_DWORD *)(a1 + 20) = 1;
  return result;
}
