int __fastcall sub_1C4854(int a1)
{
  __int64 v2; // r2
  int v3; // r3
  int result; // r0

  sub_1C3654();
  v2 = *(_QWORD *)&dword_487C98;
  ++dword_487C9C;
  *(_DWORD *)(v2 + 4 * HIDWORD(v2)) = a1;
  sub_1C3654();
  v3 = dword_487C9C;
  result = ++dword_487C9C;
  *(_DWORD *)(dword_487C98 + 4 * v3) = 5;
  return result;
}
