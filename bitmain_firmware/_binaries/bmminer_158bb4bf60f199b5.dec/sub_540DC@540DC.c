bool __fastcall sub_540DC(int a1, int a2)
{
  *(_DWORD *)(a1 + 76) = a2;
  sub_51DD0(a1);
  return *(_DWORD *)(a1 + 220) == 0;
}
