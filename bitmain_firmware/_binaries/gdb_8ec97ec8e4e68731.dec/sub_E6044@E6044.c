int *__fastcall sub_E6044(int *result, int a2, int a3)
{
  int *v3; // r4
  int v6; // r3
  int v7; // r2
  int v8; // r1
  _DWORD *v9; // r1
  _DWORD *v10; // r12

  if ( a2 != 0xFFFF )
  {
    v3 = result;
    result = (int *)result[2];
    if ( result )
    {
      v6 = *result;
      v7 = *result + 1;
    }
    else
    {
      v3[3] = 1000;
      result = (int *)sub_93028(0x1F4Cu);
      dword_478970 = 1;
      v7 = 1;
      v3[2] = (int)result;
      v6 = 0;
      *result = 0;
    }
    v8 = v3[3];
    if ( v8 <= v7 )
    {
      v3[3] = 2 * v8;
      result = (int *)sub_93050(result, 16 * v8 + 12);
      v6 = *result;
      v9 = result + 1;
      v3[2] = (int)result;
      if ( !a2 )
        goto LABEL_6;
    }
    else
    {
      v9 = result + 1;
      if ( !a2 )
      {
LABEL_6:
        if ( v6 > 0 )
        {
          v10 = &v9[2 * v6 + 1073741822];
          if ( a3 == v10[1] )
          {
            do
            {
              --v6;
              v10 -= 2;
            }
            while ( v6 && v10[1] == a3 );
          }
        }
      }
    }
    *result = v6 + 1;
    v9[2 * v6] = a2;
    v9[2 * v6 + 1] = a3;
  }
  return result;
}
