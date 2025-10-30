int __fastcall sub_F8D8(unsigned __int16 *a1)
{
  int v1; // r12
  unsigned __int16 v2; // r3
  unsigned __int16 *v3; // r0
  unsigned int v4; // lr
  char *v5; // r2
  unsigned int i; // r1
  __int16 v7; // t1

  v1 = *a1;
  v2 = 37 * *(unsigned __int8 *)a1 + *((unsigned __int8 *)a1 + 1);
  if ( v1 == 2 )
  {
    v3 = a1 + 2;
    v4 = 4;
  }
  else
  {
    if ( v1 != 10 )
      return v2;
    v3 = a1 + 4;
    v4 = 16;
  }
  v5 = (char *)v3 - 1;
  for ( i = 0; i < v4; ++i )
  {
    v7 = (unsigned __int8)*++v5;
    v2 = v7 + 37 * v2;
  }
  return v2;
}
