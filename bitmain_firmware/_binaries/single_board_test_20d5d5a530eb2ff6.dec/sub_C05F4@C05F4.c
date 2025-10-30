bool __fastcall sub_C05F4(int a1, int a2)
{
  return !sub_B8354(*(int **)(*(_DWORD *)(a1 + 24) + 8), *(int **)(*(_DWORD *)(a2 + 24) + 8))
      && !sub_B8354(*(int **)(*(_DWORD *)(a1 + 24) + 12), *(int **)(*(_DWORD *)(a2 + 24) + 12))
      && sub_B8354(*(int **)(*(_DWORD *)(a1 + 24) + 16), *(int **)(*(_DWORD *)(a2 + 24) + 16)) == 0;
}
