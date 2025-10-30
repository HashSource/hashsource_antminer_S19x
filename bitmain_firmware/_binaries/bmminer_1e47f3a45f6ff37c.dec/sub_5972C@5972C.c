int __fastcall sub_5972C(int a1)
{
  int v1; // r0

  if ( *(_DWORD *)(a1 + 20) )
    v1 = sub_5AA44(**(_DWORD **)(a1 + 12), *(_DWORD *)(a1 + 20));
  else
    v1 = sub_596EC(*(_DWORD ***)(a1 + 12));
  *(_DWORD *)(a1 + 20) = v1;
  if ( *(_DWORD *)(a1 + 20) )
    return *(_DWORD *)(*(_DWORD *)(a1 + 20) + 20);
  else
    return 0;
}
