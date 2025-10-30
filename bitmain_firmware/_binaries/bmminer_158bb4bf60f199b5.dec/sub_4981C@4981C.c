_BYTE *__fastcall sub_4981C(_BYTE *result, int a2, int a3)
{
  int v3; // r4
  _BYTE *v4; // r1
  _BYTE *v5; // r12
  unsigned int v6; // t1

  if ( a3 <= 0 )
  {
    *result = 0;
  }
  else
  {
    v3 = a2 + a3 - 1;
    v4 = (_BYTE *)(a2 - 1);
    v5 = result + 2;
    do
    {
      v6 = (unsigned __int8)*++v4;
      v5 += 2;
      *(v5 - 4) = *((_BYTE *)&dword_81958[277] + (v6 >> 4));
      *(v5 - 3) = *((_BYTE *)&dword_81958[277] + (*v4 & 0xF));
    }
    while ( v4 != (_BYTE *)v3 );
    result += 2 * a3;
    *result = 0;
  }
  return result;
}
