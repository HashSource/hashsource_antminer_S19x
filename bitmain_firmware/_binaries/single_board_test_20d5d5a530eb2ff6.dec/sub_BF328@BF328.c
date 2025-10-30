int __fastcall sub_BF328(int a1, int *a2)
{
  int v4; // r0
  int v5; // r5
  int *v6; // r7
  int v7; // r6
  int v9; // r0
  int v10; // r3

  *a2 = 0;
  v4 = sub_130B08();
  v5 = v4;
  if ( !v4 )
    goto LABEL_9;
  sub_130BC0(v4);
  v6 = (int *)sub_130CCC(v5);
  if ( !v6 )
    goto LABEL_9;
  if ( !sub_B870C(*(_DWORD *)(a1 + 8)) )
    *a2 |= 1u;
  if ( sub_B8720(*(_DWORD *)(a1 + 12)) || sub_B85B0(*(_DWORD *)(a1 + 12)) || sub_B86D8(*(_DWORD *)(a1 + 12)) )
    *a2 |= 8u;
  if ( sub_B89E4((int)v6, *(_DWORD *)(a1 + 8)) && sub_BACA0((int **)v6, 1u) )
  {
    v9 = sub_B8354(*(int **)(a1 + 12), v6);
    if ( v9 >= 0 )
      v10 = *a2;
    v7 = 1;
    if ( v9 >= 0 )
      *a2 = v10 | 8;
  }
  else
  {
LABEL_9:
    v7 = 0;
  }
  sub_130C74(v5);
  sub_130B5C(v5);
  return v7;
}
