_DWORD *__fastcall sub_16640(_DWORD *result, int *a2)
{
  int v2; // r2
  int **v3; // r3
  int v4; // r3
  int v5; // t1

  if ( !result || *result != 1281586296 )
    sub_10C38();
  if ( !a2 || (v2 = *a2) == 0 )
    sub_10C38();
  v3 = (int **)result[4];
  if ( v3 )
  {
    while ( *v3 )
    {
      if ( v3[1] == (int *)-1 )
        v3 = (int **)*v3;
      else
        v3 += 2;
    }
    *v3 = a2;
    v2 = *a2;
    v3[1] = (int *)-1;
  }
  else
  {
    result[4] = a2;
  }
  if ( v2 )
  {
    v4 = result[5];
    do
    {
      a2[1] = v4++;
      v5 = a2[2];
      a2 += 2;
    }
    while ( v5 );
    result[5] = v4;
  }
  return result;
}
