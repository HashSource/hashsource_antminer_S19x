_BYTE *__fastcall sub_50B5C(_BYTE *result, int a2)
{
  _BYTE *v2; // r12
  unsigned int v3; // r3
  char v4; // lr
  char v5; // t1
  char v6; // t1

  if ( a2 != 1 )
  {
    v2 = result - 1;
    v3 = 0;
    result += a2;
    do
    {
      ++v3;
      v5 = *++v2;
      v4 = v5;
      v6 = *--result;
      *v2 = v6;
      *result = v4;
    }
    while ( v3 < ~v3 + a2 );
  }
  return result;
}
