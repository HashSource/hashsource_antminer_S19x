int __fastcall sub_2DB778(int result, int a2, int a3)
{
  if ( (*(_BYTE *)(a2 + 52) & 0x10) == 0
    && (*(_BYTE *)result & 3) != 2
    && ((*(_BYTE *)(result + 1) & 8) != 0
     && ((*(_BYTE *)(a2 + 48) & 0xFB) == 1 || a3 && (*(_BYTE *)(a3 + 12) & 0xB) == 1)
     || (result = *(_DWORD *)(result + 128)) != 0
     && (*(_BYTE *)(a2 + 52) & 1) != 0
     && (result = (*(int (__fastcall **)(int, _DWORD, _DWORD))(result + 16))(result, 0, *(_DWORD *)(a2 + 4))) != 0) )
  {
    *(_BYTE *)(a2 + 52) |= 0x10u;
  }
  return result;
}
