int *__fastcall sub_214938(unsigned int a1)
{
  _DWORD *v1; // r5
  int *i; // r3
  int *v4; // r4

  if ( !dword_489690 )
    return 0;
  v1 = *(_DWORD **)(dword_487D2C + 36);
  if ( !v1 )
    return 0;
  for ( i = (int *)v1[43]; ; i = v4 )
  {
    v4 = (int *)v1[42];
    if ( v4 < i )
      break;
LABEL_11:
    if ( i == v4 )
    {
      v1 = (_DWORD *)*v1;
      if ( !v1 )
        return 0;
      v4 = (int *)v1[43];
    }
    else if ( (int *)v1[43] != v4 )
    {
      return 0;
    }
  }
  while ( !*v4 || !sub_214668(a1, v4) || !sub_2142D0(v4) )
  {
    i = (int *)v1[43];
    v4 += 3;
    if ( i <= v4 )
      goto LABEL_11;
  }
  return v4;
}
