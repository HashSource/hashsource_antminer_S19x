unsigned __int16 *__fastcall sub_7D204(int a1, int a2, _DWORD *a3)
{
  unsigned __int16 *v3; // r4
  unsigned __int16 *result; // r0
  int v5; // r5
  int v6; // r3

  v3 = *(unsigned __int16 **)(a1 + 3896);
  result = 0;
  v5 = *(_DWORD *)(a2 + 36);
  v6 = *v3;
  *a3 = 0;
  if ( v5 == v6 )
    return v3 + 2;
  if ( v5 == v6 + 1 && v3[14] != v6 && (unsigned int)(*(_DWORD *)(a2 + 4) - 21) <= 1 )
  {
    *a3 = 1;
    return v3 + 8;
  }
  return result;
}
