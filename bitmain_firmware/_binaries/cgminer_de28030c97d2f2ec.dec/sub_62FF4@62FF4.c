int __fastcall sub_62FF4(int a1)
{
  int result; // r0

  result = sub_64DEC(*(_DWORD *)(a1 + 64));
  *(_DWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 68) = 0;
  return result;
}
