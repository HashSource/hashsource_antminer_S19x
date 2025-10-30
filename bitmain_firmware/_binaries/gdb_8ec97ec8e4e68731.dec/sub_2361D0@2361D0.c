int *__fastcall sub_2361D0(int a1, char *s)
{
  int *v3; // r4
  int *v4; // r7
  int v5; // r0
  int *v6; // r5
  int i; // r4

  v3 = *(int **)(a1 + 40);
  v4 = *(int **)(a1 + 44);
  if ( v3 == v4 )
  {
LABEL_6:
    for ( i = 0; i != 136; i += 8 )
    {
      if ( !sub_33CAA0((int)&dword_48A298[i], s) )
        return &dword_48A294[i];
    }
    return 0;
  }
  else
  {
    while ( 1 )
    {
      v5 = *v3;
      v6 = v3++;
      if ( !sub_33CAA0(v5 + 4, s) )
        return (int *)*v6;
      if ( v4 == v3 )
        goto LABEL_6;
    }
  }
}
