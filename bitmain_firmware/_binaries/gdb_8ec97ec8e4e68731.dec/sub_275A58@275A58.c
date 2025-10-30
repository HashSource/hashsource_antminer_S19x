int __fastcall sub_275A58(int a1, unsigned int a2, unsigned int *a3)
{
  int result; // r0
  int v7; // r2
  int **v8; // r3
  int **v9; // r1
  int *v10; // r2
  int **v11; // r3
  int *v12; // t1

  sub_2755DC(a1);
  *a3 = a2;
  result = ((int (__fastcall *)(int))loc_16CE10)(a1);
  if ( result )
    v7 = a2 >> 31;
  else
    v7 = 1;
  if ( v7 || (v8 = *(int ***)result, v9 = *(int ***)(result + 4), *(int ***)result == v9) )
  {
LABEL_11:
    a3[1] = 0;
    return result;
  }
  v10 = *v8;
  result = **v8;
  if ( a2 != result )
  {
    v11 = v8 + 1;
    while ( v9 != v11 )
    {
      v12 = *v11++;
      v10 = v12;
      result = *v12;
      if ( a2 == *v12 )
        goto LABEL_12;
    }
    goto LABEL_11;
  }
LABEL_12:
  a3[1] = v10[1];
  return result;
}
