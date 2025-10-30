int __fastcall sub_16BDD8(int a1, __int64 a2)
{
  int result; // r0

  result = a1 + 544;
  *(_QWORD *)(result - 8) = a2;
  return result;
}
