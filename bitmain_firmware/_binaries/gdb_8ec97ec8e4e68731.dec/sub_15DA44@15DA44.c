bool __fastcall sub_15DA44(int a1, int a2)
{
  int v2; // r3

  v2 = *(_DWORD *)(a1 + 16);
  if ( !v2 )
  {
    sub_160DD4(a1, a1 + 12);
    v2 = *(_DWORD *)(a1 + 16);
  }
  return a2 == v2;
}
