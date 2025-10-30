unsigned int *__fastcall sub_1CF21C(unsigned int *result, unsigned int *a2)
{
  unsigned int *v2; // r2
  int v3; // r7
  unsigned int *v4; // r5
  unsigned int v5; // lr
  unsigned int v6; // r6
  _DWORD *v7; // r3
  int v8; // r2
  int v9; // r12
  unsigned int v10; // r12
  unsigned int *v11; // r3
  unsigned int v12; // r4
  unsigned int v13; // t1

  if ( result != a2 )
  {
    v2 = result + 2;
    if ( a2 != result + 2 )
    {
      v3 = -8 - (_DWORD)result;
      do
      {
        v4 = v2 + 2;
        v5 = *v2;
        v6 = v2[1];
        if ( *v2 >= *result )
        {
          v10 = *(v2 - 2);
          if ( v5 < v10 )
          {
            v11 = v2 - 2;
            do
            {
              v12 = v11[1];
              v2 = v11;
              v11[2] = v10;
              v11[3] = v12;
              v13 = *(v11 - 2);
              v11 -= 2;
              v10 = v13;
            }
            while ( v5 < v13 );
          }
          *v2 = v5;
          v2[1] = v6;
        }
        else
        {
          v7 = v2 + 2;
          v8 = ((int)v4 + v3) >> 3;
          if ( (int)v4 + v3 > 0 )
          {
            do
            {
              --v8;
              v9 = *(v7 - 3);
              *(v7 - 2) = *(v7 - 4);
              *(v7 - 1) = v9;
              v7 -= 2;
            }
            while ( v8 );
          }
          *result = v5;
          result[1] = v6;
        }
        v2 = v4;
      }
      while ( a2 != v4 );
    }
  }
  return result;
}
