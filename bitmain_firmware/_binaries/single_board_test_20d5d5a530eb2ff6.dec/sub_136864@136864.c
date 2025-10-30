int __fastcall sub_136864(int **a1, int **a2, int *a3, int a4, int ***a5)
{
  int **v9; // r1
  int **v10; // r10
  int **v11; // r1
  int **v12; // r9
  int v13; // r0
  int v14; // r3
  int v15; // r5
  int v16; // r5
  int *v18; // r3

  sub_130BC0((int)a5);
  if ( !a1 )
    a1 = sub_130CCC(a5, v9);
  if ( !a2 )
    a2 = sub_130CCC(a5, v9);
  v10 = sub_130CCC(a5, v9);
  v12 = sub_130CCC(a5, v11);
  if ( !v12 )
    goto LABEL_13;
  if ( sub_B82F8(a3, (int *)a4) >= 0 )
  {
    v13 = sub_B85BC(a3);
    v14 = *(_DWORD *)(a4 + 44);
    v15 = 2 * *(_DWORD *)(a4 + 40);
    if ( v15 < v13 )
      v15 = v13;
    if ( v14 != v15 )
    {
      v14 = sub_13680C((int **)(a4 + 20), (_DWORD *)a4, v15, a5);
      *(_DWORD *)(a4 + 44) = v14;
    }
    if ( v14 != -1 )
    {
      if ( sub_BA7EC(v10, a3, *(_DWORD *)(a4 + 40)) )
      {
        if ( sub_BA0CC(v12, v10, (int **)(a4 + 20), (int)a5) )
        {
          if ( sub_BA7EC(a1, v12, v15 - *(_DWORD *)(a4 + 40)) )
          {
            a1[3] = 0;
            if ( sub_BA0CC(v12, (int **)a4, a1, (int)a5) )
            {
              if ( sub_12F56C(a2, a3, v12) )
              {
                a2[3] = 0;
                v16 = 4;
                while ( sub_B82F8((int *)a2, (int *)a4) >= 0 )
                {
                  if ( !--v16 )
                  {
                    sub_D0048(3, 130, 101, (int)"crypto/bn/bn_recp.c", 149);
                    goto LABEL_14;
                  }
                  if ( !sub_12F56C(a2, (int *)a2, (_DWORD *)a4) || !sub_BAD28((int)a1, 1u) )
                    goto LABEL_13;
                }
                if ( sub_B85B0((int)a2) )
                  v18 = 0;
                else
                  v18 = (int *)a3[3];
                a2[3] = v18;
                v16 = 1;
                a1[3] = (int *)(*(_DWORD *)(a4 + 12) ^ a3[3]);
                goto LABEL_14;
              }
            }
          }
        }
      }
    }
LABEL_13:
    v16 = 0;
LABEL_14:
    sub_130C74(a5);
    return v16;
  }
  sub_B8930(a1, 0);
  if ( sub_B89E4((int)a2, (int)a3) )
  {
    sub_130C74(a5);
    return 1;
  }
  else
  {
    sub_130C74(a5);
    return 0;
  }
}
