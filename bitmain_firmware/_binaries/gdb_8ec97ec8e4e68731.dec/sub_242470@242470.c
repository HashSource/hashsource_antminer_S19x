int __fastcall sub_242470(int result, int a2, int a3)
{
  *(_DWORD *)(result + 4) = a2;
  *(_DWORD *)(result + 40) = a3;
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 32) = 0;
  *(_BYTE *)(result + 36) = 0;
  return result;
}
