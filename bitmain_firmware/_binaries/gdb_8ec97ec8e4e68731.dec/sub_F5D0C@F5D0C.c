int __fastcall sub_F5D0C(int result, int a2, int a3, char a4)
{
  *(_DWORD *)result = a2;
  *(_DWORD *)(result + 4) = a3;
  *(_BYTE *)(result + 8) = a4;
  return result;
}
