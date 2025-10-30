__int16 *__fastcall sub_48568(int a1, int a2)
{
  int v3; // r4
  __int16 *result; // r0

  v3 = *(_DWORD *)(a2 + 84);
  if ( *(_DWORD *)(v3 + 216) == *(_DWORD *)(v3 + 220) )
    return sub_394A0((__int16 *)a2, 1);
  result = (__int16 *)sub_39D44(a2);
  if ( (*(_BYTE *)(v3 + 768) & 8) == 0 )
    result = (__int16 *)sub_41F44(a2 + 16, (const char *)(v3 + 56));
  ++*(_DWORD *)(v3 + 776);
  return result;
}
