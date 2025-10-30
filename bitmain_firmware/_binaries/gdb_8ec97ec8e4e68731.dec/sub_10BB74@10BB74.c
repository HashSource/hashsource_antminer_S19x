int __fastcall sub_10BB74(int a1, int a2, _DWORD *a3)
{
  int result; // r0
  int v6; // r3

  *(_DWORD *)(a1 + 156) = 0;
  result = ((int (__fastcall *)(_DWORD, int, int))loc_16A2EC)(*(_DWORD *)a1, a2, a1 + 4);
  if ( result < 0 )
    sub_FA710(-1, *(_DWORD *)(a1 + 156));
  if ( a3 )
  {
    v6 = *(unsigned __int8 *)(a1 + 132);
    if ( *(_BYTE *)(a1 + 132) )
      v6 = *(unsigned __int8 *)(a1 + 133);
    *a3 = v6;
  }
  return result;
}
