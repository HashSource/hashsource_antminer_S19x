int __fastcall sub_F8424(int **a1, int a2, int a3, int a4)
{
  int *v4; // lr
  bool v5; // zf
  int *v6; // r4
  bool v7; // zf
  int *v8; // r5
  bool v9; // zf

  v4 = a1[9];
  v5 = v4 == 0;
  if ( !v4 )
    v5 = a2 == 0;
  if ( v5 )
    return 0;
  v6 = a1[10];
  v7 = v6 == 0;
  if ( !v6 )
    v7 = a3 == 0;
  if ( v7 )
    return 0;
  v8 = a1[11];
  v9 = v8 == 0;
  if ( !v8 )
    v9 = a4 == 0;
  if ( v9 )
    return 0;
  if ( a2 )
  {
    sub_B87C8(a1[9]);
    a1[9] = (int *)a2;
    sub_B87B8(a2, 4);
  }
  if ( a3 )
  {
    sub_B87C8(a1[10]);
    a1[10] = (int *)a3;
    sub_B87B8(a3, 4);
  }
  if ( a4 )
  {
    sub_B87C8(a1[11]);
    a1[11] = (int *)a4;
    sub_B87B8(a4, 4);
  }
  return 1;
}
