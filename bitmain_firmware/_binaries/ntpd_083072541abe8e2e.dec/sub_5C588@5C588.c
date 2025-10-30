__int16 *__fastcall sub_5C588(int a1, int a2)
{
  int *v3; // r4
  int v4; // r5
  int v5; // r3
  _BOOL4 v6; // r2
  int v7; // r4
  __int16 *result; // r0

  v3 = *(int **)(a2 + 84);
  v4 = *v3;
  if ( (v3[192] & 2) == 0 && *(_DWORD *)(v4 + 20) <= (unsigned int)current_time )
  {
    *(_DWORD *)(v4 + 12) = -1;
    *(_DWORD *)(v4 + 24) = 1;
    sub_64E00(5, "ARCRON: unit %d: sending resync command", a1);
    sub_5C498((_BYTE *)v4, "h\r");
    *(_DWORD *)(v4 + 20) = current_time + 3420;
  }
  v5 = *(_DWORD *)(v4 + 12);
  v6 = v5 <= 2;
  if ( v5 == -1 )
    v6 = 0;
  if ( v6 )
  {
    v3[46] = 0;
  }
  else
  {
    v7 = *(_DWORD *)(a2 + 84);
    result = (__int16 *)sub_5C498(*(_BYTE **)v7, "o\r");
    if ( result )
    {
      ++*(_DWORD *)(v7 + 776);
      return result;
    }
    *(_DWORD *)(v7 + 184) = 0;
  }
  return sub_394A0((__int16 *)a2, 3);
}
