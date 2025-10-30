int __fastcall sub_F900(int a1, int a2, __int16 a3, int a4, int a5)
{
  int result; // r0

  result = sub_63BA4(0, 24, 0, 1);
  *(_DWORD *)(result + 4) = a1;
  *(_DWORD *)(result + 8) = a2;
  *(_WORD *)(result + 20) = a3;
  *(_DWORD *)(result + 12) = a4;
  *(_DWORD *)(result + 16) = a5;
  return result;
}
