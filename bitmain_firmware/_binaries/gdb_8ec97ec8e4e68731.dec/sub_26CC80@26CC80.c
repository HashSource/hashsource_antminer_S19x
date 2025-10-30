int __fastcall sub_26CC80(int a1, __int64 a2)
{
  int result; // r0

  sub_26CC14((_DWORD *)a1);
  *(_QWORD *)(a1 + 24) = a2;
  *(_DWORD *)(a1 + 8) = 4;
  *(_DWORD *)(a1 + 16) = 0;
  return result;
}
