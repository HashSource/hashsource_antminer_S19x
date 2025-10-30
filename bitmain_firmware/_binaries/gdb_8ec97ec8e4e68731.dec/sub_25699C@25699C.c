int __fastcall sub_25699C(int result, int a2, char a3, int a4, char a5)
{
  *(_DWORD *)(result + 4) = a2;
  *(_DWORD *)(result + 8) = a4;
  *(_BYTE *)(result + 13) = a5;
  *(_BYTE *)(result + 12) = a3;
  *(_DWORD *)result = off_3F2974;
  return result;
}
