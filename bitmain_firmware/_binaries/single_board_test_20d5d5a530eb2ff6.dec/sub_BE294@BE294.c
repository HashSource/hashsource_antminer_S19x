bool __fastcall sub_BE294(int a1, int a2)
{
  return !sub_B8354(*(int **)(*(_DWORD *)(a1 + 24) + 8), *(int **)(*(_DWORD *)(a2 + 24) + 8))
      && !sub_B8354(*(int **)(*(_DWORD *)(a1 + 24) + 12), *(int **)(*(_DWORD *)(a2 + 24) + 12))
      && (*(_UNKNOWN **)(a1 + 12) != &dhx_asn1_meth
       || !sub_B8354(*(int **)(*(_DWORD *)(a1 + 24) + 36), *(int **)(*(_DWORD *)(a2 + 24) + 36)))
      && sub_B8354(*(int **)(*(_DWORD *)(a2 + 24) + 20), *(int **)(*(_DWORD *)(a1 + 24) + 20)) == 0;
}
