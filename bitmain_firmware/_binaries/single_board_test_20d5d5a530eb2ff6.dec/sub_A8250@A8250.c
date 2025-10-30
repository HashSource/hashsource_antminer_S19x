int __fastcall sub_A8250(unsigned int **a1, unsigned int a2, int *a3)
{
  unsigned int *v3; // r3
  bool v4; // zf
  unsigned int *v6; // r6
  unsigned int *v9; // r0
  unsigned int v10; // r1

  v3 = a1[5];
  v4 = v3 == 0;
  if ( v3 )
    v4 = a2 == 0;
  if ( v4 )
    return 0;
  v6 = a1[3];
  if ( a2 > (char *)a1[4] - (char *)v6 )
    return 0;
  if ( !a1[1] )
  {
    v9 = *a1;
    if ( a2 > *v9 - (unsigned int)v6 )
    {
      if ( a2 < *v9 )
        a2 = *v9;
      if ( (a2 & 0x80000000) == 0 )
      {
        v10 = 2 * a2;
        if ( v10 <= 0xFF )
          v10 = 256;
      }
      else
      {
        v10 = -1;
      }
      if ( !sub_BAE84(v9, v10) )
        return 0;
    }
  }
  if ( a3 )
    *a3 = sub_A823C(a1);
  return 1;
}
