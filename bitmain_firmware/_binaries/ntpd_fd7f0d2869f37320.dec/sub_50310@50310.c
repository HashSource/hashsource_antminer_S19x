int __fastcall sub_50310(int a1, int a2)
{
  int v2; // r2

  v2 = *(_DWORD *)(a2 + 84);
  *(_BYTE *)(a2 + 95) = sys_precision;
  *(_BYTE *)(v2 + 40) = 3;
  *(_BYTE *)(a2 + 93) = 5;
  *(_DWORD *)(v2 + 764) = *(_DWORD *)"LOCL";
  *(_BYTE *)(v2 + 760) = 5;
  *(_DWORD *)(v2 + 44) = "Undisciplined local clock";
  dword_BE604 = current_time;
  return 1;
}
