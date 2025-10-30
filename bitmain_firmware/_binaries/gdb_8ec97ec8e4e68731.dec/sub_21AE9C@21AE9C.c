int __fastcall sub_21AE9C(int a1)
{
  if ( (*(_BYTE *)(a1 + 20) & 0x1F) != 0xE || (*(_BYTE *)(a1 + 20) & 0x20) != 0 )
    return *(_DWORD *)(a1 + 16);
  else
    return 0;
}
