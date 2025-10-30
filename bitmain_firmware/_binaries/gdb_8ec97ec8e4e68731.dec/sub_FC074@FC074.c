int __fastcall sub_FC074(int result)
{
  int v1; // r2

  v1 = dword_47AD08;
  dword_47AD08 = result;
  *(_DWORD *)(result + 16) = v1;
  return result;
}
