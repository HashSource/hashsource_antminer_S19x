int __fastcall sub_BACA0(int **a1, unsigned int a2)
{
  int result; // r0
  unsigned int v4; // r4
  int *v5; // r6
  int *v6; // r2
  unsigned int v7; // r3
  int *v8; // r1
  int v9; // t1
  int v10; // r3
  int v11; // r3
  int v12; // r4

  if ( !a2 )
    return 1;
  v4 = a2;
  if ( sub_B85B0((int)a1) )
  {
    result = sub_B8930(a1, v4);
    v12 = result;
    if ( result )
    {
      sub_B86BC((_BOOL4)a1, 1);
      return v12;
    }
  }
  else
  {
    v5 = a1[3];
    if ( v5 )
    {
      a1[3] = 0;
      result = sub_BAD28(a1, v4);
      a1[3] = (int *)1;
    }
    else
    {
      result = (int)a1[1];
      v6 = *a1;
      v7 = **a1;
      if ( result != 1 )
      {
        v8 = a1[3];
        if ( v4 > v7 )
        {
          do
          {
            v8 = (int *)((char *)v8 + 1);
            *v6 = v7 - v4;
            v4 = 1;
            v9 = v6[1];
            ++v6;
            v7 = v9;
          }
          while ( !v9 );
        }
        v10 = v7 - v4;
        *v6 = v10;
        if ( v10 )
          return 1;
        v5 = (int *)(result - 1);
        if ( (int *)(result - 1) != v8 )
          return 1;
        goto LABEL_13;
      }
      if ( v4 <= v7 )
      {
        v11 = v7 - v4;
        *v6 = v11;
        if ( v11 )
          return 1;
LABEL_13:
        a1[1] = v5;
        return 1;
      }
      *v6 = v4 - v7;
      a1[3] = (int *)1;
    }
  }
  return result;
}
