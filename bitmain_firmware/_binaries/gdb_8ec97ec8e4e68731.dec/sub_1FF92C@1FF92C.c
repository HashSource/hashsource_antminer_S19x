bool __fastcall sub_1FF92C(int a1, int a2)
{
  int v4; // r7
  int v5; // r0
  int v6; // r0

  if ( !((int (__fastcall *)(_DWORD, _DWORD, int))loc_25B524)(
          *(_DWORD *)(a1 + 8),
          *(_DWORD *)(*(_DWORD *)(a2 + 4) + 12),
          3) )
    return 1;
  if ( !dword_489708 )
  {
    v4 = sub_3245A4(*(_DWORD *)(a1 + 8));
    v5 = sub_3245A4(*(_DWORD *)(*(_DWORD *)(a2 + 4) + 12));
    if ( ((int (__fastcall *)(int, int, int))loc_25B524)(v4, v5, 3) )
      return 0;
  }
  v6 = sub_204308(*(_DWORD *)(a2 + 4));
  return sub_21A830(v6, *(_DWORD *)(a1 + 8)) != 0;
}
