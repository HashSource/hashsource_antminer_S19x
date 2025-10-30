bool __fastcall sub_C7798(int a1)
{
  _DWORD *v2; // r4

  if ( *(_DWORD *)(a1 + 72) != dword_487D2C )
    return 0;
  v2 = (_DWORD *)(a1 + 196);
  if ( sub_98F78((_DWORD *)(a1 + 196), &dword_475848) )
    return 1;
  if ( sub_98F78(&dword_4878EC, v2) )
    return ((int (__fastcall *)(int, int, int))loc_23F1FC)(dword_4878EC, dword_4878F0, dword_4878F4) == 0;
  return 0;
}
