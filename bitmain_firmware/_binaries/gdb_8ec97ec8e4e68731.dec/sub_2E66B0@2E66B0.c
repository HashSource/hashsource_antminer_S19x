bool __fastcall sub_2E66B0(int a1)
{
  int v1; // r2

  if ( (*(_BYTE *)(a1 + 52) & 8) != 0 )
    return 0;
  v1 = *(unsigned __int8 *)(a1 + 12);
  if ( (unsigned int)(v1 - 1) <= 1 )
    return 0;
  if ( (unsigned int)(v1 - 3) <= 1 )
    return *(_DWORD *)(*(_DWORD *)(a1 + 20) + 60) != 0;
  return 1;
}
