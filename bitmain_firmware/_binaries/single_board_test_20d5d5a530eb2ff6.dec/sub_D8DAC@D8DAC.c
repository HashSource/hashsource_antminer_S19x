int __fastcall sub_D8DAC(int result, int a2)
{
  *(_DWORD *)(result + 8) &= ~a2;
  return result;
}
