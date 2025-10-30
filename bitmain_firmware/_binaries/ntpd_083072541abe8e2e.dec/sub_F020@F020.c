int __fastcall sub_F020(int a1)
{
  __int64 v1; // d0
  int result; // r0

  result = sub_63BA4(0, 24, 0, 1);
  *(_DWORD *)(result + 4) = a1;
  *(_QWORD *)(result + 16) = v1;
  *(_DWORD *)(result + 8) = 289;
  return result;
}
