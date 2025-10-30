bool __fastcall sub_2A9F10(int a1, int a2, char *a3)
{
  unsigned int v3; // r3
  bool v4; // zf

  if ( (*(_BYTE *)(a1 + 40) & 0x18) == 0x10 )
  {
    v3 = *(_DWORD *)(a2 + 36);
    v4 = a3 == 0;
    if ( a3 )
      v4 = v3 == 0;
    if ( !v4 && !*(_DWORD *)(a2 + 108) && !*(_DWORD *)(a2 + 44) && (*(_BYTE *)(a2 + 24) & 0x30) == 0 )
      return sub_2A9AAC(a1, a2, a3, v3) != 0;
  }
  ((void (__fastcall *)(int))loc_2A6C48)(5);
  return 0;
}
