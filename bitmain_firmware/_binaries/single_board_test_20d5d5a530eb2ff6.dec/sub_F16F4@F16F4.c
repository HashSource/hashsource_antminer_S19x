int __fastcall sub_F16F4(int a1, int a2)
{
  if ( sub_EAC84(*(_DWORD *)(a1 + 16)) == (char *)22 )
    return sub_10E824(
             *(_DWORD *)(*(_DWORD *)(a1 + 20) + 8),
             **(_DWORD **)(a2 + 4),
             *(_DWORD *)(*(_DWORD *)(a2 + 4) + 4));
  else
    return 0;
}
