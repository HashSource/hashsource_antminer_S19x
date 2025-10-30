bool __fastcall sub_BDDFC(int a1, int a2)
{
  if ( sub_B8354(*(int **)(*(_DWORD *)(a1 + 24) + 8), *(int **)(*(_DWORD *)(a2 + 24) + 8))
    || sub_B8354(*(int **)(*(_DWORD *)(a1 + 24) + 12), *(int **)(*(_DWORD *)(a2 + 24) + 12)) )
  {
    return 0;
  }
  if ( *(_UNKNOWN **)(a1 + 12) == &dhx_asn1_meth )
    return sub_B8354(*(int **)(*(_DWORD *)(a1 + 24) + 36), *(int **)(*(_DWORD *)(a2 + 24) + 36)) == 0;
  return 1;
}
