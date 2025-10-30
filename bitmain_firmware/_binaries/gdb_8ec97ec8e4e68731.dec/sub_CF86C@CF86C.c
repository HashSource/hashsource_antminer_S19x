bool __fastcall sub_CF86C(_DWORD *a1, int a2, int a3, _DWORD *a4)
{
  if ( *a4 != 1 || a4[1] != 5 )
    return 0;
  if ( !sub_CF3B0(*(_DWORD *)(a1[12] + 20), a1[13], a2, a3) )
    return 0;
  if ( dword_489690 && sub_2142A0(a1[16]) )
    return sub_2142D0(a1[16]) != 0;
  return 1;
}
