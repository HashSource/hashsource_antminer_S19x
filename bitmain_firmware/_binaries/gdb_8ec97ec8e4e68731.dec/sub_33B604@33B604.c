int __fastcall sub_33B604(int result)
{
  *(_DWORD *)result = result + 8;
  *(_DWORD *)(result + 4) = 0;
  *(_BYTE *)(result + 8) = 0;
  return result;
}
