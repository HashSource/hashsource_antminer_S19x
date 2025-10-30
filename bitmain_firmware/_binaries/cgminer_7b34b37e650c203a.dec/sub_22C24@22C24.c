_BYTE *__fastcall sub_22C24(int a1, int a2)
{
  int v2; // r5
  int v4; // r0
  int v6; // r12
  _BYTE *result; // r0
  _BYTE *v8; // r5
  _BYTE *v9; // r2
  char *v10; // r12
  unsigned int v11; // t1

  v2 = 2 * a2;
  v4 = 2 * a2 + 1;
  v6 = v4 & 3;
  if ( v4 <= 0 )
    v6 = -(-v4 & 3);
  result = sub_22A44(4 - v6 + v4, 1u, "util.c", "bin2hex", 789);
  if ( a2 > 0 )
  {
    v9 = (_BYTE *)(a1 - 1);
    v10 = result + 2;
    do
    {
      v11 = (unsigned __int8)*++v9;
      v10 += 2;
      *(v10 - 4) = *((_BYTE *)&dword_4C8CC[277] + (v11 >> 4));
      *(v10 - 3) = *((_BYTE *)&dword_4C8CC[277] + (*v9 & 0xF));
    }
    while ( v9 != (_BYTE *)(a1 - 1 + a2) );
    v8 = &result[v2];
  }
  else
  {
    v8 = result;
  }
  *v8 = 0;
  return result;
}
