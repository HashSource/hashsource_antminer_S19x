int __fastcall sub_865EC(int a1, int a2, int a3)
{
  int v3; // r4

  if ( !*(_DWORD *)(*(_DWORD *)(a2 + 8) + 380) )
  {
    v3 = *(_DWORD *)(a2 + 8);
    *(_DWORD *)(v3 + 380) = getpid();
    if ( *(_DWORD *)(*(_DWORD *)(a2 + 8) + 380) != *(_DWORD *)(*(_DWORD *)(a2 + 8) + 384) )
    {
      *(_DWORD *)(*(_DWORD *)(a2 + 8) + 384) = *(_DWORD *)(*(_DWORD *)(a2 + 8) + 380);
      *(_DWORD *)(*(_DWORD *)(a2 + 8) + 420) = sprintf(
                                                 (char *)(*(_DWORD *)(a2 + 8) + 388),
                                                 "%u",
                                                 *(_DWORD *)(*(_DWORD *)(a2 + 8) + 380));
    }
  }
  return sub_8B584(a3, *(_DWORD *)(a2 + 8) + 388, *(_DWORD *)(*(_DWORD *)(a2 + 8) + 420));
}
