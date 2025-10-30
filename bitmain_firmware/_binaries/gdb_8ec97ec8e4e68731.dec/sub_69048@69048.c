int __fastcall sub_69048(int a1, int a2)
{
  int v2; // r2
  int v3; // r4
  int result; // r0
  _BYTE *v5; // r2

  v2 = *(_DWORD *)(a1 + 36);
  if ( v2 - *(_DWORD *)(a1 + 32) != 4 )
    return *(_DWORD *)(((int (*)(void))loc_15A5C)() + 28);
  v3 = *(_DWORD *)(v2 - 4);
  result = (*(int (__fastcall **)(int, _DWORD, _DWORD))(*(_DWORD *)a2 + 8))(
             a2,
             *(_DWORD *)(v3 + 4),
             *(_DWORD *)(v3 + 8));
  v5 = *(_BYTE **)(v3 + 4);
  *(_DWORD *)(v3 + 8) = 0;
  *v5 = 0;
  return result;
}
