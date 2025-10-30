int __fastcall sub_2B12A8(unsigned int *a1, int *a2, unsigned int a3)
{
  unsigned __int8 *v3; // r3
  int v4; // r12
  unsigned __int8 *v5; // lr
  int v6; // r12
  int v7; // lr
  int v8; // r12
  unsigned __int8 *v9; // r3
  int v10; // r4
  bool v11; // zf
  int v12; // r3

  v3 = (unsigned __int8 *)*a1;
  if ( *a1 >= a3 )
    return 0;
  v4 = (unsigned __int8)aCccccccccccccc[*v3];
  if ( v4 != 99 )
  {
    v5 = v3 + 1;
    if ( aCccccccccccccc[*v3] )
      v6 = v4 - 1;
    else
      v6 = 15;
    if ( a3 <= (unsigned int)v5 )
    {
      v12 = 0;
      v10 = 0;
LABEL_13:
      *a1 = (unsigned int)v5;
      *a2 = v10;
      return v12;
    }
    v7 = (unsigned __int8)aCccccccccccccc[v3[1]];
    if ( v7 != 99 )
    {
      v8 = v6 - 1;
      v9 = v3 + 2;
      v10 = 0;
      while ( 1 )
      {
        v10 = v7 | (16 * v10);
        v5 = v9;
        if ( v8 == -1 )
        {
          v12 = 1;
          goto LABEL_13;
        }
        v11 = v9 == (unsigned __int8 *)a3;
        --v8;
        ++v9;
        if ( v11 )
          break;
        v7 = (unsigned __int8)aCccccccccccccc[*v5];
        if ( v7 == 99 )
          return 0;
      }
      v12 = 0;
      goto LABEL_13;
    }
  }
  return 0;
}
