int __fastcall sub_61C40(int result, int a2, int a3)
{
  *(_DWORD *)result = a2;
  *(_DWORD *)(result + 4) = a3;
  *(_BYTE *)(result + 8) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 1;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 36) = 0;
  return result;
}
