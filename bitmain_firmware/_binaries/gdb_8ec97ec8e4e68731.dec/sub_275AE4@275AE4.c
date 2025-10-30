int __fastcall sub_275AE4(int a1, char *a2, _DWORD *a3)
{
  int result; // r0
  bool v7; // zf
  int *v8; // r4
  int *v9; // r7
  int v10; // r0
  int *v11; // r5

  sub_2755DC(a1);
  result = ((int (__fastcall *)(int))loc_16CE10)(a1);
  v7 = a2 == 0;
  if ( a2 )
    v7 = result == 0;
  if ( v7 || (v8 = *(int **)result, v9 = *(int **)(result + 4), *(int **)result == v9) )
  {
LABEL_9:
    *a3 = -1;
    a3[1] = a2;
  }
  else
  {
    while ( 1 )
    {
      v10 = *v8;
      v11 = v8++;
      result = sub_33CAA0(v10 + 4, a2);
      if ( !result )
        break;
      if ( v9 == v8 )
        goto LABEL_9;
    }
    *a3 = *(_DWORD *)*v11;
    a3[1] = a2;
  }
  return result;
}
