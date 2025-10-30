int __fastcall sub_1DEBF0(int a1, int a2, int a3, int a4, unsigned __int8 a5)
{
  int v9; // r7

  v9 = ((int (__fastcall *)(_DWORD))loc_165BB8)(**(_DWORD **)a1);
  ((void (__fastcall *)(int, int))loc_1DD940)(a1, a2);
  return ((int (__fastcall *)(int, int, int, _DWORD, _DWORD, int))loc_15AF68)(
           a3,
           a4,
           *(_DWORD *)(a1 + 8) + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)a1 + 16) + 4 * a2),
           *(_DWORD *)(*(_DWORD *)(*(_DWORD *)a1 + 20) + 4 * a2),
           a5,
           v9);
}
