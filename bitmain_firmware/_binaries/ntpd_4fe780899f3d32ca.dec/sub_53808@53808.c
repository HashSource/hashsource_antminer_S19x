__int16 *__fastcall sub_53808(int a1, int a2)
{
  int v3; // r4
  _DWORD *v4; // t1
  __int16 *result; // r0

  v3 = *(_DWORD *)(a2 + 84);
  v4 = *(_DWORD **)v3;
  *v4 = 0;
  v4[1] = v3 + 56;
  if ( write(*(_DWORD *)(v3 + 28), "QTQDQMT", 6u) != 6 )
    sub_394A0((__int16 *)a2, 3);
  if ( *(_DWORD *)(v3 + 216) == *(_DWORD *)(v3 + 220) )
    return sub_394A0((__int16 *)a2, 1);
  sub_39D44(a2);
  result = (__int16 *)sub_41F44(a2 + 16, (const char *)(v3 + 56));
  ++*(_DWORD *)(v3 + 776);
  return result;
}
