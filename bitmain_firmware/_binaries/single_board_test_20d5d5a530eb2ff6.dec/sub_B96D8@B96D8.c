int *__fastcall sub_B96D8(int **a1, int a2, int **a3, int a4)
{
  int *v8; // r4
  int *v10; // r0

  sub_10C544(a2);
  v8 = *a1;
  sub_10C564(a2);
  if ( v8 )
    return v8;
  v10 = sub_B9478();
  v8 = v10;
  if ( !v10 )
    return v8;
  if ( sub_B94F0((int)v10, a3, a4) )
  {
    sub_10C554(a2);
    if ( *a1 )
    {
      sub_B94B4(v8);
      v8 = *a1;
    }
    else
    {
      *a1 = v8;
    }
    sub_10C564(a2);
    return v8;
  }
  else
  {
    sub_B94B4(v8);
    return 0;
  }
}
