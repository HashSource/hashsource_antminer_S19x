int __fastcall sub_9C3C4(int a1, int a2, int (__fastcall *a3)(int, int), int a4)
{
  int result; // r0
  int v6; // r3

  if ( (unsigned int)(*(_DWORD *)(a1 + 16 + 16 * a2) - 111) > 1 )
    return sub_1C339C();
  result = *(_DWORD *)(a1 + 16 + 16 * a2 + 16);
  if ( result )
  {
    v6 = *(_DWORD *)(result + 24);
    result = *(_BYTE *)(v6 + 2) & 0x10;
    if ( (*(_BYTE *)(v6 + 2) & 0x10) != 0 )
    {
      result = *(_DWORD *)(v6 + 16);
      if ( result )
        return a3(result, a4) != 0;
    }
  }
  return result;
}
