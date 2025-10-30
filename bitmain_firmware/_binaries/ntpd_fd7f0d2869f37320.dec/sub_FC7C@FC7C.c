int __fastcall sub_FC7C(int a1, int a2)
{
  int result; // r0

  result = sub_64B04(0, 12, 0, 0);
  *(_DWORD *)(result + 4) = a1;
  *(_DWORD *)(result + 8) = a2;
  return result;
}
