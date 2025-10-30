int __fastcall sub_899A4(int a1, int a2, int a3)
{
  int v3; // r4
  int v4; // r4

  if ( !*(_DWORD *)(*(_DWORD *)(a2 + 8) + 380) )
  {
    v3 = *(_DWORD *)(a2 + 8);
    *(_DWORD *)(v3 + 380) = getpid();
    if ( *(_DWORD *)(*(_DWORD *)(a2 + 8) + 380) != *(_DWORD *)(*(_DWORD *)(a2 + 8) + 384) )
    {
      *(_DWORD *)(*(_DWORD *)(a2 + 8) + 384) = *(_DWORD *)(*(_DWORD *)(a2 + 8) + 380);
      v4 = *(_DWORD *)(a2 + 8);
      *(_DWORD *)(v4 + 420) = sprintf((char *)(v4 + 388), "%u", *(_DWORD *)(v4 + 380));
    }
  }
  return sub_8E904(a3, *(_DWORD *)(a2 + 8) + 388, *(_DWORD *)(*(_DWORD *)(a2 + 8) + 420));
}
