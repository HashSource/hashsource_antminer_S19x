int *__fastcall sub_59A7C(int *a1, int a2)
{
  int *v4; // [sp+0h] [bp-14h]
  int *i; // [sp+Ch] [bp-8h]

  v4 = (int *)a2;
  if ( *(int **)(a2 + 4) != a1 + 1 )
    return sub_59998((int)a1, *(_DWORD **)(a2 + 4));
  if ( a2 == sub_599E8((int)a1, *a1) )
    return 0;
  for ( i = (int *)v4[2]; i != a1 + 1 && v4 == (int *)i[1]; i = (int *)i[2] )
    v4 = i;
  return i;
}
