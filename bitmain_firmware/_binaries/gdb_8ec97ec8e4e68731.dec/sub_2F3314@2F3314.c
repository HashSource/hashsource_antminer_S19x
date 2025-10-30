int __fastcall sub_2F3314(int a1)
{
  int v2; // r1

  if ( (unsigned int)*(unsigned __int8 *)(a1 + 12) - 3 > 1 )
    return 1;
  v2 = *(_DWORD *)(a1 + 20);
  if ( (*(_WORD *)(v2 + 24) & 0x380) != 0x180 || !*(_DWORD *)(*(_DWORD *)(v2 + 140) + 136) )
    return 1;
  *(_DWORD *)(a1 + 24) += sub_2F18E8(*(_DWORD *)(a1 + 24), (_DWORD *)v2);
  return 1;
}
