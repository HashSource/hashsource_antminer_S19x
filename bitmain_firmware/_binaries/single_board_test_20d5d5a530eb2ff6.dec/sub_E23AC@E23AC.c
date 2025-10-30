int __fastcall sub_E23AC(int result, int a2, char a3, int a4, int a5)
{
  *(_DWORD *)(result + 44) = a4;
  *(_QWORD *)(result + 32) = 0;
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 40) = a5;
  *(_DWORD *)(result + 4) = 0;
  *(_BYTE *)result = (a3 - 1) & 7 | (8 * (((unsigned int)(a2 - 2) >> 1) & 7));
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  return result;
}
