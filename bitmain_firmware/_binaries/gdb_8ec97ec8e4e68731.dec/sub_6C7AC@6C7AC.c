int **__fastcall sub_6C7AC(int **a1, int a2)
{
  int v3; // r5
  int *v4; // r0
  int *v5; // r3

  if ( *(_DWORD *)(a2 + 60) )
    v3 = sub_25ACB4(*(_DWORD *)(a2 + 56));
  else
    v3 = 0;
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  v4 = (int *)sub_9836C(4);
  v5 = v4 + 1;
  *a1 = v4;
  *v4 = v3;
  a1[2] = v5;
  a1[1] = v5;
  return a1;
}
