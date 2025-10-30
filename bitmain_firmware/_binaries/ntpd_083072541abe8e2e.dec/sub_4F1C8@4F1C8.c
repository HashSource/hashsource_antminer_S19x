int __fastcall sub_4F1C8(int a1, int a2)
{
  int v2; // r3

  v2 = *(_DWORD *)(a2 + 84);
  *(_BYTE *)(a2 + 95) = sys_precision;
  *(_BYTE *)(v2 + 40) = 3;
  *(_BYTE *)(a2 + 93) = 5;
  *(_BYTE *)(v2 + 760) = 5;
  *(_DWORD *)(v2 + 764) = *(_DWORD *)"LOCL";
  *(_DWORD *)(v2 + 44) = "Undisciplined local clock";
  return 1;
}
