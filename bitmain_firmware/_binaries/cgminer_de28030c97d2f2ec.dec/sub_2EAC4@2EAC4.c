bool __fastcall sub_2EAC4(int a1, int a2)
{
  return *(_DWORD *)(a1 + 8) < *(_DWORD *)(a2 + 8)
      || *(_DWORD *)(a1 + 8) == *(_DWORD *)(a2 + 8) && *(_DWORD *)(a1 + 4) < *(_DWORD *)(a2 + 4);
}
