_DWORD *__fastcall sub_1B97B4(int a1)
{
  _DWORD *v2; // r2
  _DWORD *result; // r0

  v2 = sub_1B8A4C();
  result = (_DWORD *)v2[1];
  *v2 = dword_487BBC;
  *result = sub_1B88BC;
  result[1] = a1;
  dword_487BBC = (int)v2;
  return result;
}
