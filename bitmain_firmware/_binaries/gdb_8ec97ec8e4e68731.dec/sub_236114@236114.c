int __fastcall sub_236114(int result)
{
  int *v1; // r3
  int *v2; // r0
  int *i; // r3
  int v4; // t1

  if ( result )
  {
    v1 = *(int **)(result + 36);
    v2 = *(int **)(result + 40);
    if ( v1 == v2 )
      return 0;
    if ( *(_DWORD *)(*v1 + 28) == *(_DWORD *)(*v1 + 32) )
    {
      for ( i = v1 + 1; v2 != i; ++i )
      {
        v4 = *i;
        if ( *(_DWORD *)(v4 + 28) != *(_DWORD *)(v4 + 32) )
          return 1;
      }
      return 0;
    }
    return 1;
  }
  return result;
}
