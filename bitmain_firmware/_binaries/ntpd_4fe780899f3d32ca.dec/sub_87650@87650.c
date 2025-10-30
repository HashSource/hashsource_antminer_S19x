_BYTE *__fastcall sub_87650(_BYTE *result, int a2)
{
  _BYTE *v2; // r1
  int v3; // t1

  v2 = (_BYTE *)(a2 - 1);
  do
  {
    v3 = (unsigned __int8)*++v2;
    *result++ = *((_BYTE *)&dword_B8164 + v3 + 8);
  }
  while ( *v2 );
  return result;
}
