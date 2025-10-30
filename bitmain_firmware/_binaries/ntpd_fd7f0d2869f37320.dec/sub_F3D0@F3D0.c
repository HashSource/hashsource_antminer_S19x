int __fastcall sub_F3D0(int a1)
{
  int result; // r0

  result = sub_64B04(0, 8, 0, 1);
  *(_DWORD *)(result + 4) = a1;
  return result;
}
