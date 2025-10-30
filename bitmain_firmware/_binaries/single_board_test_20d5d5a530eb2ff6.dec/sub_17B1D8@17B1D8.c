int __fastcall sub_17B1D8(int a1, int a2, int a3, _DWORD *a4)
{
  int ***v9; // r0
  int ***v10; // r8
  int **v11; // r1
  int **v12; // r10
  int **v13; // r1
  int **v14; // r9
  int v15; // r4
  int v16; // r0
  int v17; // r0

  if ( *(_DWORD *)(*(_DWORD *)(a1 + 64) + 32) )
    return (*(int (**)(void))(*(_DWORD *)(a1 + 64) + 32))();
  v9 = (int ***)sub_130B08();
  v10 = v9;
  if ( !v9 )
    goto LABEL_11;
  sub_130BC0((int)v9);
  v12 = sub_130CCC(v10, v11);
  v14 = sub_130CCC(v10, v13);
  if ( !v14 )
    goto LABEL_11;
  if ( !*(_DWORD *)(a1 + 8) )
  {
    v16 = sub_B822C();
    *(_DWORD *)(a1 + 8) = v16;
    if ( !v16 )
      goto LABEL_11;
  }
  if ( !*(_DWORD *)(a1 + 12) )
  {
    v17 = sub_B822C();
    *(_DWORD *)(a1 + 12) = v17;
    if ( !v17 )
      goto LABEL_11;
  }
  if ( a3 <= 1 )
  {
    sub_D0048(5, 106, 101, (int)"crypto/dh/dh_gen.c", 84);
    goto LABEL_11;
  }
  if ( a3 == 2 )
  {
    if ( !sub_B8930(v12, 24) )
      goto LABEL_11;
    goto LABEL_14;
  }
  if ( a3 == 5 )
  {
    if ( !sub_B8930(v12, 60) || !sub_B8930(v14, 23) )
      goto LABEL_11;
    goto LABEL_15;
  }
  if ( sub_B8930(v12, 12) )
  {
LABEL_14:
    if ( !sub_B8930(v14, 11) )
      goto LABEL_11;
LABEL_15:
    if ( sub_1351B4(*(int **)(a1 + 8), a2, 1, (int *)v12, (int *)v14, a4) )
    {
      if ( sub_134EE0(a4, 3, 0) )
      {
        v15 = 1;
        if ( sub_B8930(*(int ***)(a1 + 12), a3) )
          goto LABEL_12;
      }
    }
  }
LABEL_11:
  v15 = 0;
  sub_D0048(5, 106, 3, (int)"crypto/dh/dh_gen.c", 121);
LABEL_12:
  sub_130C74(v10);
  sub_130B5C((void **)v10);
  return v15;
}
