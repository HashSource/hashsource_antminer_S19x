int __fastcall sub_5A7B0(int a1)
{
  int v1; // r4

  if ( *(_DWORD *)(a1 + 4) )
    v1 = __ROR4__(*(_DWORD *)(a1 + 12), 25)
       + __ROR4__(*(_DWORD *)(a1 + 8), 31)
       + __ROR4__(*(_DWORD *)(a1 + 16), 20)
       + __ROR4__(*(_DWORD *)(a1 + 20), 14);
  else
    v1 = *(_DWORD *)(a1 + 16) + 374761393;
  return sub_5A0F0(v1 + *(_DWORD *)a1, (unsigned __int8 *)(a1 + 24), *(_DWORD *)(a1 + 40), 0);
}
