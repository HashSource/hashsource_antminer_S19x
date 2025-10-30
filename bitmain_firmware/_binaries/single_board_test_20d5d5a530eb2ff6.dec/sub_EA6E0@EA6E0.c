int __fastcall sub_EA6E0(int result)
{
  int v1; // r3
  int v2; // r2

  v1 = *(_DWORD *)(result + 4);
  v2 = *(_DWORD *)(v1 + 20);
  *(_DWORD *)(v1 + 8) = 0;
  *(_DWORD *)(v1 + 20) = v2 | 0xD;
  return result;
}
