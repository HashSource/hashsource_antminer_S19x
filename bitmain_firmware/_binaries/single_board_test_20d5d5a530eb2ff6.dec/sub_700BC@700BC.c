int *__fastcall sub_700BC(int a1, int a2, int a3)
{
  int *v6; // r0
  int *v7; // r4
  int v8; // r0

  v6 = (int *)malloc(4u);
  if ( v6 && (v7 = v6, v8 = sub_703CC(a1, a2, a3), (*v7 = v8) != 0) )
    return v7;
  else
    return 0;
}
