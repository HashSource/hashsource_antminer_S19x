int __fastcall sub_EE9C0(int a1, _DWORD *a2, int a3)
{
  *(_DWORD *)a1 = a1 + 8;
  *(_DWORD *)(a1 + 4) = 0;
  *(_BYTE *)(a1 + 8) = 0;
  sub_EDFEC(a2, a3, a1, 0, 0, 0);
  return a1;
}
