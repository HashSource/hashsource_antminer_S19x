int __fastcall sub_C0900(int a1, int a2, int a3)
{
  void *v6; // r0
  void *v7; // r0
  char v8; // r3

  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 1;
  v6 = sub_93028(1u);
  *(_DWORD *)(a1 + 12) = a2;
  *(_DWORD *)a1 = v6;
  *(_DWORD *)(a1 + 16) = a3;
  *(_DWORD *)(a1 + 40) = 1;
  v7 = sub_93094(1u, 1u);
  v8 = *(_BYTE *)(a1 + 48);
  *(_DWORD *)(a1 + 44) = v7;
  *(_DWORD *)(a1 + 52) = 0;
  *(_BYTE *)(a1 + 48) = v8 & 0xFE;
  return a1;
}
