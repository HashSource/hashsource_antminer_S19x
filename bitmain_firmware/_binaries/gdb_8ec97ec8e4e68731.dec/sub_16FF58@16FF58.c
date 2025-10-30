void __fastcall sub_16FF58(int a1)
{
  if ( (*(_BYTE *)(*(_DWORD *)(a1 + 24) + 2) & 0x10) == 0 )
    JUMPOUT(0x16FED4);
  JUMPOUT(0x16FD44);
}
