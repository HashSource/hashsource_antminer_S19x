int __fastcall sub_1C4654(int a1)
{
  int v2; // r2
  int result; // r0

  sub_1C3654();
  v2 = dword_487C9C;
  result = ++dword_487C9C;
  *(_DWORD *)(dword_487C98 + 4 * v2) = a1;
  return result;
}
