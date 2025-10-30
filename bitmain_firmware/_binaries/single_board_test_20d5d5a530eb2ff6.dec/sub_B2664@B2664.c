int *__fastcall sub_B2664(int *result, int a2)
{
  int v2; // r3
  int v3; // r2
  char *v4; // r1

  if ( result )
  {
    v2 = *result;
    if ( *result )
    {
      v3 = *(_DWORD *)(a2 + 16);
      if ( v3 )
      {
        if ( (*(_DWORD *)(v3 + 4) & 2) != 0 )
        {
          result = *(int **)(v3 + 20);
          v4 = (char *)result + v2;
          if ( (int *)((char *)result + v2) )
          {
            *(int *)((char *)result + v2) = 0;
            *((_DWORD *)v4 + 2) = 1;
            *((_DWORD *)v4 + 1) = 0;
          }
        }
      }
    }
  }
  return result;
}
