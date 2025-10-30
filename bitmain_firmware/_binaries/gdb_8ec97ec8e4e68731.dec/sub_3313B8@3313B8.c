int __fastcall sub_3313B8(int result, int a2, int a3)
{
  *(_DWORD *)(result + 20) ^= a3 & (a2 ^ *(_DWORD *)(result + 20));
  return result;
}
