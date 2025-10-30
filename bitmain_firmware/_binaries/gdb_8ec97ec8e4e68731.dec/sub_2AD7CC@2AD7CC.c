char *__fastcall sub_2AD7CC(int a1, const char **a2)
{
  int **v3; // r4
  int *v4; // r6
  const char *v5; // r7
  char *v7; // r0

  v3 = (int **)*(a2 - 4);
  v4 = (int *)*(a2 - 2);
  v5 = *a2;
  if ( v3 )
  {
    while ( v3[2] != v4 || strcmp((const char *)v3[1], v5) )
    {
      v3 = (int **)*v3;
      if ( !v3 )
        goto LABEL_7;
    }
    return (char *)(v3 + 4);
  }
  else
  {
LABEL_7:
    if ( a1 )
    {
      while ( 1 )
      {
        a1 = *(_DWORD *)(a1 + 156);
        if ( !a1 )
          break;
        v7 = sub_2AAC2C((_DWORD *)(a1 + 72), v5, 0, 0);
        if ( v7 )
          return v7 + 16;
      }
    }
    return 0;
  }
}
