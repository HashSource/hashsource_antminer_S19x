int __fastcall sub_250D58(int result, int a2)
{
  int v2; // r1

  v2 = 16 * a2;
  *(_DWORD *)(result + v2 + 8) = -2;
  *(_QWORD *)(result + v2) = -1;
  return result;
}
