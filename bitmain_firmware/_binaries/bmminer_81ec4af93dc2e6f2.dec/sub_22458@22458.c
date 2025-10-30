unsigned int *__fastcall sub_22458(unsigned int *a1, unsigned int *a2, unsigned int *a3, _DWORD *a4)
{
  unsigned int *result; // r0
  unsigned int *v9; // r6
  int v10; // r5
  unsigned int *v11; // r6
  unsigned int v12; // lr
  unsigned int v13; // r4
  unsigned int v14; // r12
  unsigned int v15; // t1

  result = (unsigned int *)sub_26540();
  v9 = result;
  if ( (int)result <= 0 )
  {
    v10 = 0;
    v13 = 0xFFFFFF;
    v12 = 0;
  }
  else
  {
    v10 = 0;
    result = a1;
    v11 = &a1[(_DWORD)v9];
    v12 = 0;
    v13 = 0xFFFFFF;
    do
    {
      v15 = *result++;
      v14 = v15;
      v10 += v15;
      if ( v12 < v15 )
        v12 = v14;
      if ( v13 >= v14 )
        v13 = v14;
    }
    while ( result != v11 );
  }
  *a2 = v13;
  *a3 = v12;
  *a4 = v10;
  return result;
}
