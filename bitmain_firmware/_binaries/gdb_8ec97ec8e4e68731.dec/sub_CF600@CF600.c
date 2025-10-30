bool __fastcall sub_CF600(int a1, int a2, int a3)
{
  if ( !*(_BYTE *)(a1 + 39) )
    return 0;
  if ( !sub_CF3B0(*(_DWORD *)(*(_DWORD *)(a1 + 48) + 20), *(_DWORD *)(a1 + 52), a2, a3) )
    return 0;
  if ( dword_489690 && sub_2142A0(*(_DWORD *)(a1 + 64)) )
    return sub_2142D0(*(_DWORD *)(a1 + 64)) != 0;
  return 1;
}
