int __fastcall sub_2E9038(int a1)
{
  if ( *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4) == 5 && (*(_BYTE *)(a1 + 40) & 7) == 1 )
    return *(_DWORD *)(*(_DWORD *)(a1 + 160) + 544);
  else
    return 0;
}
