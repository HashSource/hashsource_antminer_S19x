int __fastcall sub_2E8F98(int a1)
{
  if ( *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4) == 5 && (*(_BYTE *)(a1 + 40) & 7) == 1 )
    return (*(unsigned __int16 *)(*(_DWORD *)(a1 + 160) + 2340) >> 6) & 0xF;
  else
    return 0;
}
