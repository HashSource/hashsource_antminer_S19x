int __fastcall sub_532A8(int result, int a2)
{
  char v2; // r2

  v2 = *(_BYTE *)(result + 12);
  *(_DWORD *)(result + 36) = a2;
  *(_BYTE *)(result + 12) = v2 | 3;
  return result;
}
