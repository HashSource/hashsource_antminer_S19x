int *__fastcall sub_5AA44(int *a1, int a2)
{
  int *v4; // [sp+0h] [bp-14h]
  int *i; // [sp+Ch] [bp-8h]

  v4 = (int *)a2;
  if ( *(int **)(a2 + 4) != a1 + 1 )
    return sub_5A960((int)a1, *(_DWORD **)(a2 + 4));
  if ( sub_5A9B0((int)a1, *a1) == a2 )
    return 0;
  for ( i = (int *)v4[2]; a1 + 1 != i && (int *)i[1] == v4; i = (int *)i[2] )
    v4 = i;
  return i;
}
