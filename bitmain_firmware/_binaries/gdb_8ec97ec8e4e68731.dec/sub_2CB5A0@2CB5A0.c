int __fastcall sub_2CB5A0(int a1, _BYTE *a2, int a3, char **a4, _DWORD *a5)
{
  if ( (*a2 & 1) == 0 && (*(_DWORD *)(a1 + 40) & 0x800) == 0 )
    return 1;
  if ( sub_2CB538(*(_DWORD *)(a1 + 4), *a4) )
  {
    *(_BYTE *)(a3 + 12) = (*(_BYTE *)(a3 + 12) & 0xF) + 32;
    *a5 |= 0x80u;
  }
  return 1;
}
