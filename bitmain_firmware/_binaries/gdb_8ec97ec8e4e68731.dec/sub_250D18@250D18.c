int __fastcall sub_250D18(int a1, int a2, int a3)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 8) + 16 * a2;
  *(_DWORD *)(result + 8) = a3;
  *(_QWORD *)result = -1;
  return result;
}
