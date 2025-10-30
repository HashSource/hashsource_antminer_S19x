int *__fastcall sub_2066E0(int *result)
{
  int v1; // r4
  int *v2; // r5

  v1 = result[3];
  if ( (int *)v1 != result )
  {
    v2 = result;
    do
    {
      if ( *(_DWORD *)(v1 + 20) )
        result = sub_206648(*(int **)(v1 + 24));
      else
        *(_DWORD *)(v1 + 20) = v2[5];
      v1 = *(_DWORD *)(v1 + 12);
    }
    while ( (int *)v1 != v2 );
  }
  return result;
}
