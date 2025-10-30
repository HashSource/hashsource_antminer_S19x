size_t __fastcall sub_13A148(int a1, int a2)
{
  int v3; // r0

  v3 = *(_DWORD *)(a1 + 4);
  if ( !*(_DWORD *)v3 )
    return sub_139734(*(int **)(v3 + 4), a2);
  if ( *(_DWORD *)v3 == 1 )
    return sub_139764(*(_DWORD *)(v3 + 4), a2);
  return -1;
}
