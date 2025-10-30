int __fastcall sub_12C1C4(int a1, int a2, int a3, char a4)
{
  int v7; // r3

  *(_BYTE *)(a1 + 4) = a4;
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = a3;
  *(_DWORD *)(a1 + 44) = sub_E6044;
  *(_BYTE *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_BYTE *)(a1 + 52) = 0;
  *(_DWORD *)(a1 + 16) = 1;
  *(_DWORD *)(a1 + 20) = 1;
  *(_DWORD *)(a1 + 24) = ((int (__fastcall *)(int, _DWORD, _DWORD))loc_16A9F0)(a2, 0, 0);
  v7 = *(unsigned __int8 *)(a3 + 22);
  *(_DWORD *)(a1 + 32) = 0;
  *(_BYTE *)(a1 + 28) = v7 != 0;
  return a1;
}
