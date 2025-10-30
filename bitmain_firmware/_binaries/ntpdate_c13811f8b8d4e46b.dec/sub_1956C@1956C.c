int __fastcall sub_1956C(unsigned int *a1, unsigned int *a2, unsigned int *a3)
{
  int v3; // r3
  unsigned int v4; // r3
  unsigned int v5; // lr
  unsigned int v6; // r0
  unsigned int v7; // r1
  bool v8; // cf
  unsigned int v9; // r0
  unsigned int v10; // r3

  v3 = (int)a3;
  if ( a3 )
    v3 = 1;
  if ( !a2 )
    v3 = 0;
  if ( !a1 )
    v3 = 0;
  if ( !v3 )
    sub_1073C();
  v4 = a1[1];
  if ( v4 > 0x3B9AC9FF || (v5 = a2[1], v5 > 0x3B9AC9FF) )
    sub_1073C();
  v6 = *a1;
  v7 = *a2;
  if ( v6 >= v7 )
  {
    if ( v6 != v7 )
    {
      v8 = v4 >= v5;
      v9 = v6 - v7;
      *a3 = v9;
      v10 = v4 - v5;
      if ( !v8 )
      {
        *a3 = v9 - 1;
        a3[1] = v10 + 1000000000;
        return 0;
      }
      goto LABEL_17;
    }
    if ( v4 >= v5 )
    {
      v10 = v4 - v5;
      *a3 = 0;
LABEL_17:
      a3[1] = v10;
      return 0;
    }
  }
  return 41;
}
