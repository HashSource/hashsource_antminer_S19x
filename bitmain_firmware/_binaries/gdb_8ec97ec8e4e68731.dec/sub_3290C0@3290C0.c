int __fastcall sub_3290C0(int *a1, unsigned int a2)
{
  int v3; // r0
  _WORD *v4; // r2
  unsigned int v5; // r3
  __int16 v6; // r12
  int result; // r0

  v3 = (int)a1 + 10;
  if ( a2 )
  {
    v4 = (_WORD *)v3;
    do
    {
      v5 = a2 / 0x3E8;
      v6 = a2 - 1000 * v5;
      a2 = v5;
      *v4++ = v6;
    }
    while ( v5 );
    a2 = ((int)v4 - v3) >> 1;
  }
  result = sub_327CA8(v3, a2);
  *a1 = result;
  return result;
}
