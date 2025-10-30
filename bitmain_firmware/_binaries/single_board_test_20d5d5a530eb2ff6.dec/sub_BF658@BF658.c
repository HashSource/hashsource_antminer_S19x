int __fastcall sub_BF658(int a1, int *a2, _DWORD *a3)
{
  int v6; // r0
  int v7; // r4
  int **v8; // r0
  int *v9; // r6
  int v10; // r6
  int v12; // r0
  int v13; // r1
  int v14; // r0
  int v15; // r2

  *a3 = 0;
  v6 = sub_130B08();
  v7 = v6;
  if ( v6 )
  {
    sub_130BC0(v6);
    v8 = (int **)sub_130CCC(v7);
    v9 = (int *)v8;
    if ( v8 )
    {
      if ( sub_B8930(v8, 1) )
      {
        v12 = sub_B8354(a2, v9);
        v13 = *(_DWORD *)(a1 + 8);
        if ( v12 <= 0 )
          *a3 |= 1u;
        if ( sub_B89E4((int)v9, v13) && sub_BACA0((int **)v9, 1u) )
        {
          v14 = sub_B8354(a2, v9);
          v15 = *(_DWORD *)(a1 + 36);
          if ( v14 >= 0 )
            *a3 |= 2u;
          if ( !v15 )
            goto LABEL_16;
          if ( sub_132330(v9, a2, v15, *(_DWORD *)(a1 + 8), v7) )
          {
            if ( !sub_B86D8((int)v9) )
            {
              v10 = 1;
              *a3 |= 4u;
              goto LABEL_5;
            }
LABEL_16:
            v10 = 1;
            goto LABEL_5;
          }
        }
      }
    }
  }
  v10 = 0;
LABEL_5:
  sub_130C74(v7);
  sub_130B5C(v7);
  return v10;
}
