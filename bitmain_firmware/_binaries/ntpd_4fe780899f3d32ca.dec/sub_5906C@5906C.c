__int16 *__fastcall sub_5906C(int a1, int a2)
{
  _DWORD *v3; // r1
  int v4; // r0
  char v5; // r3
  __int16 *result; // r0
  char buf; // [sp+3h] [bp-9h] BYREF

  v3 = *(_DWORD **)(a2 + 84);
  v4 = v3[7];
  if ( *(_BYTE *)(*v3 + 13) )
    v5 = 82;
  else
    v5 = 84;
  buf = v5;
  result = (__int16 *)write(v4, &buf, 1u);
  if ( result != (__int16 *)((char *)&dword_0 + 1) )
    return sub_394A0((__int16 *)a2, 3);
  return result;
}
