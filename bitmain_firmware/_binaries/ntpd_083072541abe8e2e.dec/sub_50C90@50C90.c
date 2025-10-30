__int16 *__fastcall sub_50C90(int a1, int a2)
{
  int v2; // r4
  __int16 *result; // r0
  int v4; // r3

  v2 = *(_DWORD *)(a2 + 84);
  result = *(__int16 **)v2;
  if ( *(_DWORD *)v2 )
    free(result);
  v4 = *(_DWORD *)(v2 + 28);
  *(_DWORD *)v2 = 0;
  if ( v4 != -1 )
    result = sub_18E64(v2 + 8);
  *(_DWORD *)(v2 + 28) = -1;
  return result;
}
