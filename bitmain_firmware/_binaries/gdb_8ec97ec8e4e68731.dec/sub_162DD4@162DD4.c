int __fastcall sub_162DD4(int a1, _DWORD *a2)
{
  int v3; // r4
  int result; // r0

  v3 = *(_DWORD *)(a1 + 164);
  if ( (*(_BYTE *)(v3 + 32) & 4) != 0
    || (result = sub_162048((const char **)a1, (int *)(v3 + 36)) & 1,
        *(_BYTE *)(v3 + 32) = *(_BYTE *)(v3 + 32) & 0xFB | (4 * (result & 1)),
        ((4 * (result & 1)) & 4) != 0) )
  {
    *a2 = *(_DWORD *)(v3 + 36);
    return (*(unsigned __int8 *)(v3 + 32) >> 2) & 1;
  }
  return result;
}
