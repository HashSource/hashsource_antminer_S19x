int __fastcall sub_17B538(int a1)
{
  int (*v1)(void); // r3
  int ***v4; // r7
  int **v5; // r6
  int **v6; // r5
  int v7; // r8
  _DWORD *v8; // r0
  _DWORD *v9; // r8
  int v10; // r0
  int v11; // r0

  v1 = *(int (**)(void))(*(_DWORD *)(a1 + 44) + 44);
  if ( v1 )
    return v1();
  v4 = (int ***)sub_130B08();
  if ( !v4 || (v5 = *(int ***)(a1 + 24)) == 0 && (v10 = sub_B8264(), (v5 = (int **)v10) == 0) )
  {
    v5 = 0;
    v6 = 0;
    goto LABEL_9;
  }
  do
  {
    if ( !sub_1365E8(v5, *(int **)(a1 + 12)) )
    {
      v6 = 0;
      goto LABEL_9;
    }
  }
  while ( sub_B85B0((int)v5) );
  v6 = *(int ***)(a1 + 20);
  if ( !v6 )
  {
    v6 = (int **)sub_B822C();
    if ( !v6 )
      goto LABEL_9;
  }
  v8 = (_DWORD *)sub_B822C();
  v9 = v8;
  if ( !v8 )
    goto LABEL_9;
  sub_B8740(v8, (int *)v5, 4);
  if ( !sub_132330(v6, *(int **)(a1 + 16), v9, *(int ***)(a1 + 8), v4) )
  {
    sub_B895C((int)v9);
LABEL_9:
    if ( *(int ***)(a1 + 20) != v6 )
      sub_B895C((int)v6);
    v7 = 0;
    if ( v5 != *(int ***)(a1 + 24) )
      sub_B895C((int)v5);
    goto LABEL_13;
  }
  v11 = (int)v9;
  v7 = 1;
  sub_B895C(v11);
  *(_DWORD *)(a1 + 24) = v5;
  *(_DWORD *)(a1 + 20) = v6;
LABEL_13:
  sub_130B5C((void **)v4);
  return v7;
}
