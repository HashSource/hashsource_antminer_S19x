int __fastcall sub_1CC580(int result, int *a2, int (__fastcall *a3)(int *, int *))
{
  int *v3; // r9
  int *v6; // r4
  int v7; // r7
  int *v8; // r8
  int v9; // r9
  int v10; // r2
  int v11; // r12
  int *v12; // lr
  int v13; // r1

  if ( (int *)result != a2 )
  {
    v3 = (int *)(result + 8);
    if ( (int *)(result + 8) != a2 )
    {
      v6 = (int *)result;
      v7 = -8 - result;
      do
      {
        result = a3(v3, v6);
        v8 = v3 + 2;
        if ( result )
        {
          v9 = *v3;
          v10 = *(v8 - 1);
          v11 = ((int)v8 + v7) >> 3;
          v12 = v8;
          if ( (int)v8 + v7 > 0 )
          {
            do
            {
              --v11;
              result = *(v12 - 4);
              v13 = *(v12 - 3);
              v12 -= 2;
              *v12 = result;
              v12[1] = v13;
            }
            while ( v11 );
          }
          *v6 = v9;
          v6[1] = v10;
        }
        else
        {
          result = sub_1CC524(v3, a3);
        }
        v3 = v8;
      }
      while ( v8 != a2 );
    }
  }
  return result;
}
