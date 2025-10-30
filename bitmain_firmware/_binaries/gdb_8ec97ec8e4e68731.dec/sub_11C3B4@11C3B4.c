bool __fastcall sub_11C3B4(int a1, int a2)
{
  _DWORD *v2; // r3
  _DWORD *v3; // r2
  int v4; // lr
  int v5; // r12

  v2 = *(_DWORD **)(a1 + 40);
  v3 = *(_DWORD **)(a2 + 40);
  v4 = (int)v2;
  if ( v2 )
    v4 = 1;
  v5 = *(_DWORD *)(a2 + 40);
  if ( v3 )
    v5 = 1;
  return v4 == v5 && (!v2 || *v2 == *v3) && *(_DWORD *)(a1 + 44) == *(_DWORD *)(a2 + 44);
}
