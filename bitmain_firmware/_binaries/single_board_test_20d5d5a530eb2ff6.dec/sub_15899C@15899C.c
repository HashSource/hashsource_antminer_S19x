int __fastcall sub_15899C(_DWORD *a1, int a2, int ***a3)
{
  int v3; // r4
  void **v8; // r8
  int **v9; // r1
  int **v10; // r9
  int **v11; // r1
  int **v12; // r4
  int v13; // r4
  int ***v14; // r0

  if ( *(_DWORD *)(a2 + 20) )
    return 1;
  v3 = sub_C6CD4(a1, (_DWORD *)a2);
  if ( v3 )
    return 1;
  v8 = 0;
  if ( a3 )
    goto LABEL_6;
  v14 = (int ***)sub_130B08();
  a3 = v14;
  if ( !v14 )
    return v3;
  v8 = (void **)v14;
LABEL_6:
  sub_130BC0((int)a3);
  v10 = sub_130CCC(a3, v9);
  v12 = sub_130CCC(a3, v11);
  if ( v12
    && sub_C6D34(a1, (_DWORD *)a2, (int)v10, (int)v12, (int)a3)
    && sub_B89E4(*(_DWORD *)(a2 + 8), (int)v10)
    && sub_B89E4(*(_DWORD *)(a2 + 12), (int)v12)
    && sub_B8930(*(int ***)(a2 + 16), 1) )
  {
    v13 = 1;
    *(_DWORD *)(a2 + 20) = 1;
  }
  else
  {
    v13 = 0;
  }
  sub_130C74(a3);
  sub_130B5C(v8);
  return v13;
}
