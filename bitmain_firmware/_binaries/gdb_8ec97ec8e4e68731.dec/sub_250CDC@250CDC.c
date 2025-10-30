int __fastcall sub_250CDC(int result, int a2, __int64 a3)
{
  int v3; // r1

  v3 = 16 * a2;
  *(_DWORD *)(result + v3 + 8) = -1;
  *(_QWORD *)(result + v3) = a3;
  return result;
}
