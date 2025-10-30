int __fastcall sub_2DD968(int a1, int a2)
{
  int v3; // r3

  if ( (unsigned int)*(unsigned __int8 *)(a1 + 12) - 3 > 1 )
    return 1;
  v3 = *(_DWORD *)(a1 + 20);
  if ( (*(_DWORD *)(v3 + 20) & 0x800000) == 0 || (*(_WORD *)(v3 + 24) & 0x380) != 0x100 )
    return 1;
  *(_DWORD *)(a1 + 24) = sub_30061C(a2, a1 + 20, *(_DWORD *)(*(_DWORD *)(v3 + 140) + 136), *(_DWORD *)(a1 + 24));
  return 1;
}
