int __fastcall sub_250CF8(int a1, int a2, __int64 a3)
{
  int result; // r0
  int v4; // r1

  result = *(_DWORD *)(a1 + 8);
  v4 = 16 * a2;
  *(_DWORD *)(result + v4 + 8) = -1;
  *(_QWORD *)(result + v4) = a3;
  return result;
}
