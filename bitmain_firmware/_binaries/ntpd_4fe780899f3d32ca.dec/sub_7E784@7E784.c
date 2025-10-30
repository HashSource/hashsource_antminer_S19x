int __fastcall sub_7E784(int **a1, int a2)
{
  int *v4; // r4
  int v5; // r3
  int v6; // r0
  int result; // r0
  size_t v8; // r9
  int *v9; // r0
  int *v10; // r0

  v4 = *a1;
  if ( *a1 )
  {
    v5 = *v4;
    v6 = v4[1];
    if ( *v4 >= v6 )
    {
      v4[1] = v6 + 8;
      v8 = 4 * v6 + 40;
      v9 = (int *)realloc(v4, v8);
      if ( !v9 )
      {
        fprintf(stderr, off_B8474[0], v8, v4);
        sub_7CE5C(1);
      }
      v5 = *v9;
      v4 = v9;
      *a1 = v9;
    }
    result = v5 + 1;
  }
  else
  {
    v10 = (int *)malloc(0x20u);
    v4 = v10;
    if ( !v10 )
      sub_C610(32);
    *a1 = v10;
    v5 = 0;
    *v10 = 0;
    result = 1;
    v4[1] = 6;
  }
  *v4 = result;
  v4[v5 + 2] = a2;
  return result;
}
