int __fastcall sub_2E8FD4(int result, char a2)
{
  int v2; // r2

  if ( *(_DWORD *)(*(_DWORD *)(result + 4) + 4) == 5 && (*(_BYTE *)(result + 40) & 7) == 1 )
  {
    v2 = *(_DWORD *)(result + 160);
    result = *(_WORD *)(v2 + 2340) & 0xFC3F | ((a2 & 0xF) << 6);
    *(_WORD *)(v2 + 2340) = result;
  }
  return result;
}
