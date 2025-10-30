void __fastcall sub_1E1240(int a1)
{
  unsigned int *v1; // r2
  unsigned int v3; // r3
  unsigned int v4; // r4
  void *v5; // r0

  v1 = *(unsigned int **)(a1 + 40);
  if ( v1 )
  {
    if ( *v1 )
    {
      v3 = 0;
      while ( 1 )
      {
        v4 = v3 + 1;
        v5 = (void *)v1[2 * v3 + 3];
        if ( v5 )
        {
          free(v5);
          v1 = *(unsigned int **)(a1 + 40);
        }
        v3 = v4;
        if ( !v1 )
          break;
        if ( v4 >= *v1 )
          goto LABEL_10;
      }
    }
    else
    {
LABEL_10:
      free(v1);
    }
  }
  *(_DWORD *)(a1 + 40) = 0;
}
