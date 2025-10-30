int __fastcall sub_102E30(int a1, void *a2, size_t a3, int a4)
{
  int v7; // r0

  v7 = ((int (__fastcall *)(_DWORD, _DWORD, int))loc_25AE1C)(*(_DWORD *)(a1 + 8), 0, a4);
  if ( ((int (__fastcall *)(int, int, int))loc_102C50)(a1, v7 - *(_DWORD *)(a1 + 8), 1) )
    return -1;
  else
    return -(sub_102D0C(*(FILE **)(a1 + 4), (_DWORD *)(a1 + 8), a2, a3) != 0);
}
