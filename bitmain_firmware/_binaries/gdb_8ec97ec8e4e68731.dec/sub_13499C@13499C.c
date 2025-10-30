int __fastcall sub_13499C(int a1, int a2)
{
  int v4; // r0
  _DWORD *v6; // [sp+4h] [bp-8h] BYREF

  ((void (__fastcall *)(_DWORD))loc_11EB1C)(*(_DWORD *)(a2 + 20));
  if ( *(_DWORD *)(a2 + 16) )
  {
    v6 = *(_DWORD **)(a2 + 16);
  }
  else
  {
    sub_130DE0(a2);
    v6 = *(_DWORD **)(a2 + 16);
    if ( !v6 )
      return 0;
  }
  v4 = ((int (__fastcall *)(int, int, _DWORD **))loc_12E49C)(a1, (*(unsigned __int8 *)(a2 + 10) >> 3) & 1, &v6);
  if ( v4 )
    return sub_1345C4(v4, v6);
  return 0;
}
