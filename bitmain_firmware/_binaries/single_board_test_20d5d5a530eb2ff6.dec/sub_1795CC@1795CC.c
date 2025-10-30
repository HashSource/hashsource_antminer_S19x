int __fastcall sub_1795CC(int a1)
{
  _DWORD *v1; // r3
  int v2; // r0

  v1 = *(_DWORD **)(a1 + 4);
  v2 = v1[1];
  if ( *(_DWORD *)(v2 + 12) && v1[2] )
    *v1 = 2;
  return sub_17916C(v2);
}
