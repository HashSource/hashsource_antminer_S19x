unsigned int __fastcall sub_15C250(unsigned __int8 *a1, int a2, unsigned int a3)
{
  unsigned __int8 *v3; // r3
  int v4; // r1
  int v5; // t1
  unsigned __int8 *v7; // r3
  unsigned __int8 *v8; // r0
  int v9; // r1
  int v10; // t1

  v3 = &a1[a2];
  if ( a2 > 8 )
    sub_946E0("That operation is not available on integers of more than %d bytes.", 8);
  if ( !a3 )
  {
    v4 = 0;
    if ( a1 < v3 )
    {
      do
      {
        v5 = *a1++;
        v4 = (v4 << 8) | HIBYTE(a3);
        a3 = v5 | (a3 << 8);
      }
      while ( v3 != a1 );
    }
    return a3;
  }
  v7 = v3 - 1;
  a3 = 0;
  if ( a1 > v7 )
    return a3;
  v8 = a1 - 1;
  v9 = 0;
  do
  {
    v10 = *v7--;
    v9 = (v9 << 8) | HIBYTE(a3);
    a3 = v10 | (a3 << 8);
  }
  while ( v7 != v8 );
  return a3;
}
