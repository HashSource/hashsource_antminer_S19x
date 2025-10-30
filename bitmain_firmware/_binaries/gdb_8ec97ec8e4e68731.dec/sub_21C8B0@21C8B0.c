char *__fastcall sub_21C8B0(char *a1, int a2, int *a3)
{
  int v5; // r6
  void *v7; // r0

  if ( a2 == 4 )
    return sub_21A4F0(a1, a3);
  if ( a2 == 5 )
  {
    v5 = sub_103580(a1);
    if ( v5 )
      goto LABEL_8;
    return a1;
  }
  if ( a2 != 6 )
    return a1;
  v5 = sub_17C104(a1);
  if ( !v5 )
    return a1;
LABEL_8:
  v7 = (void *)a3[6];
  a3[6] = v5;
  if ( !v7 )
    return (char *)v5;
  free(v7);
  return (char *)v5;
}
