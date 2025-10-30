int __fastcall sub_58738(int a1)
{
  int v1; // r0

  if ( *(_DWORD *)(a1 + 20) )
    v1 = sub_59A7C(**(_DWORD **)(a1 + 12), *(_DWORD *)(a1 + 20));
  else
    v1 = sub_586F8(*(_DWORD ***)(a1 + 12));
  *(_DWORD *)(a1 + 20) = v1;
  if ( *(_DWORD *)(a1 + 20) )
    return *(_DWORD *)(*(_DWORD *)(a1 + 20) + 20);
  else
    return 0;
}
