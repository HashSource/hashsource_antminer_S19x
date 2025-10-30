int __fastcall sub_1588A0(_DWORD *a1, int a2, int a3, int ***a4)
{
  void **v8; // r9
  int **v9; // r1
  int *v10; // r10
  int **v11; // r1
  int *v12; // r11
  int **v13; // r1
  int **v14; // r1
  int *v15; // r8
  int v16; // r5
  int ***v18; // r0
  int *v19; // [sp+Ch] [bp-8h]

  if ( sub_C6CD4(a1, (_DWORD *)a2) )
    return sub_C6CD4(a1, (_DWORD *)a3) == 0;
  if ( sub_C6CD4(a1, (_DWORD *)a3) )
    return 1;
  if ( *(_DWORD *)(a2 + 20) && *(_DWORD *)(a3 + 20) )
  {
    if ( sub_B8354(*(int **)(a2 + 8), *(int **)(a3 + 8)) )
      return 1;
    return sub_B8354(*(int **)(a2 + 12), *(int **)(a3 + 12)) != 0;
  }
  else
  {
    v8 = 0;
    if ( !a4 )
    {
      v18 = (int ***)sub_130B08();
      a4 = v18;
      if ( !v18 )
        return -1;
      v8 = (void **)v18;
    }
    sub_130BC0((int)a4);
    v10 = (int *)sub_130CCC(a4, v9);
    v12 = (int *)sub_130CCC(a4, v11);
    v19 = (int *)sub_130CCC(a4, v13);
    v15 = (int *)sub_130CCC(a4, v14);
    if ( v15
      && sub_C6D34(a1, (_DWORD *)a2, (int)v10, (int)v12, (int)a4)
      && sub_C6D34(a1, (_DWORD *)a3, (int)v19, (int)v15, (int)a4) )
    {
      v16 = 1;
      if ( !sub_B8354(v10, v19) )
        v16 = sub_B8354(v12, v15) != 0;
    }
    else
    {
      v16 = -1;
    }
    sub_130C74(a4);
    sub_130B5C(v8);
    return v16;
  }
}
