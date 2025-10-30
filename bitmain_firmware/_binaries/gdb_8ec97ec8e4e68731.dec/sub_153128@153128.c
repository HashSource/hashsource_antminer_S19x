_DWORD *__fastcall sub_153128(int a1, int a2)
{
  _DWORD *result; // r0
  int v5; // r2
  int v6; // r12

  result = sub_93028(0x10u);
  v5 = 0;
  *result = 0;
  v6 = dword_487324;
  result[1] = 0;
  result[2] = a1;
  result[3] = a2;
  if ( v6 )
    v5 = dword_487328;
  else
    dword_487324 = (int)result;
  dword_487328 = (int)result;
  if ( v6 )
    *(_DWORD *)(v5 + 4) = result;
  return result;
}
