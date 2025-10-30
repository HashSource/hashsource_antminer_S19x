bool __fastcall sub_2DBFC(int a1, int a2)
{
  *(_DWORD *)(a1 + 76) = a2;
  sub_2B350(a1);
  return *(_DWORD *)(a1 + 220) == 0;
}
