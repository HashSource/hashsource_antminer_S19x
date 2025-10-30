_DWORD *__fastcall sub_275B60(int a1)
{
  int **v2; // r0
  int **v3; // r4
  _DWORD *result; // r0
  int *v5; // r3
  unsigned int v6; // r12
  _DWORD *v7; // r12
  char *v8; // r2
  int *v9; // lr
  int v10; // t1

  sub_2755DC(a1);
  v2 = (int **)((int (__fastcall *)(int))loc_16CE10)(a1);
  v3 = v2;
  if ( !v2 )
    return 0;
  result = sub_93028((((char *)v2[1] - (char *)*v2) & 0xFFFFFFFC) + 4);
  v5 = *v3;
  v6 = (char *)v3[1] - (char *)*v3;
  if ( v6 >> 2 )
  {
    v8 = (char *)(result - 1);
    v9 = (int *)((char *)v5 + v6);
    do
    {
      v10 = *v5++;
      *((_DWORD *)v8 + 1) = *(_DWORD *)(v10 + 4);
      v8 += 4;
    }
    while ( v5 != v9 );
    v7 = (_DWORD *)((char *)result + v6);
  }
  else
  {
    v7 = result;
  }
  *v7 = 0;
  return result;
}
