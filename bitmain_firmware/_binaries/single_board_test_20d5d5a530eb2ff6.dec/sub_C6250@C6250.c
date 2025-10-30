bool __fastcall sub_C6250(int a1, int a2)
{
  if ( !*(_DWORD *)(a1 + 12) )
    return 0;
  if ( sub_B89E4(a2, *(_DWORD *)(a1 + 12)) )
    return !sub_B85B0(*(_DWORD *)(a1 + 12));
  return 0;
}
