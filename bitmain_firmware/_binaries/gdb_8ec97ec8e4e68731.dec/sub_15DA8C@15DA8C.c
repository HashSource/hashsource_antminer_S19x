int __fastcall sub_15DA8C(int a1)
{
  int v1; // r3

  v1 = *(_DWORD *)(a1 + 16);
  if ( v1 )
    return *(_DWORD *)v1;
  sub_160DD4(a1, a1 + 12);
  return **(_DWORD **)(a1 + 16);
}
