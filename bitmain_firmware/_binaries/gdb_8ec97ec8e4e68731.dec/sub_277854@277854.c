_DWORD *__fastcall sub_277854(int *a1, void **a2, int a3, int *a4)
{
  _DWORD *result; // r0
  _DWORD *v9; // r7
  int *v10; // r9
  int v11; // r5
  int v12; // t1

  result = sub_93050(*a2, 4 * (a3 + *a1 + 1));
  v9 = result;
  *a2 = result;
  if ( a3 > 0 )
  {
    v10 = &a4[a3];
    do
    {
      v11 = *a1;
      v12 = *a4++;
      ++*a1;
      result = (_DWORD *)sub_327254(v12);
      v9[v11] = result;
      v9 = *a2;
    }
    while ( v10 != a4 );
  }
  v9[*a1] = 0;
  return result;
}
