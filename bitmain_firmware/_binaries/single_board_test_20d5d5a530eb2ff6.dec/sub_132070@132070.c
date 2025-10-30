int __fastcall sub_132070(int **a1, int a2, _DWORD *a3, int **a4, int ***a5, int *a6)
{
  int **v9; // r4
  int v11; // r7
  int **v12; // r1
  int **v13; // r6
  int **v14; // r1
  int v15; // r7
  int v16; // r5
  int v17; // r9
  int v18; // r0
  int **v19; // r3
  int **v20; // r3
  int **v22; // r3
  int v23; // r1
  int *v24; // r0
  int *v26; // [sp+18h] [bp-14h]

  if ( sub_B87C0((int)a3, 4) || sub_B87C0((int)a4, 4) )
  {
    v9 = 0;
    sub_D0048(3, 117, 66, (int)"crypto/bn/bn_exp.c", 1167);
    return (int)v9;
  }
  v9 = (int **)sub_B870C((int)a4);
  if ( !v9 )
  {
    sub_D0048(3, 117, 102, (int)"crypto/bn/bn_exp.c", 1175);
    return (int)v9;
  }
  if ( a4[1] == (int *)1 )
  {
    sub_1892EC(a2, **a4);
    a2 = v23;
  }
  v11 = sub_B85BC(a3);
  if ( v11 )
  {
    if ( a2 )
    {
      sub_130BC0((int)a5);
      v13 = sub_130CCC(a5, v12);
      v9 = sub_130CCC(a5, v14);
      if ( !v9 )
      {
        v26 = 0;
        goto LABEL_34;
      }
      if ( a6 )
      {
        v26 = a6;
      }
      else
      {
        v24 = sub_B9478();
        v26 = v24;
        if ( !v24 || !sub_B94F0((int)v24, a4, (int)a5) )
        {
          v9 = 0;
          goto LABEL_62;
        }
      }
      v15 = v11 - 2;
      if ( v15 < 0 )
      {
        if ( a2 != 1 )
        {
          v16 = a2;
          goto LABEL_49;
        }
LABEL_64:
        v9 = (int **)(sub_B8930(a1, 1) != 0);
        goto LABEL_34;
      }
      v16 = a2;
      v17 = 1;
      while ( v16 == sub_189090(v16 * v16, v16) )
      {
        v16 *= v16;
        if ( !v17 )
          goto LABEL_19;
        v17 = 1;
LABEL_21:
        if ( sub_B83F0(a3, v15) )
        {
          if ( sub_189090(v16 * a2, a2) == v16 )
          {
            v16 *= a2;
          }
          else if ( v17 )
          {
            v18 = sub_B8930(v13, v16);
            if ( !v18 )
              goto LABEL_51;
            v18 = sub_B872C((int)v13, (int)v13, (int)v26, (int)a5);
            if ( !v18 )
              goto LABEL_51;
            v16 = a2;
            v17 = 0;
          }
          else
          {
            if ( !sub_BADB4(v13, v16) || !sub_131220(0, v9, (int *)v13, a4, a5) )
              goto LABEL_33;
            v22 = v13;
            v16 = a2;
            v13 = v9;
            v9 = v22;
          }
        }
        if ( v15-- == 0 )
        {
          if ( v16 != 1 )
          {
            if ( !v17 )
            {
              if ( !sub_BADB4(v13, v16) || !sub_131220(0, v9, (int *)v13, a4, a5) )
              {
LABEL_33:
                v9 = 0;
                goto LABEL_34;
              }
LABEL_56:
              v13 = v9;
LABEL_57:
              v9 = (int **)(sub_B9428((int *)a1, (int)v13, v26, (int)a5) != 0);
LABEL_34:
              if ( a6 )
              {
LABEL_35:
                sub_130C74(a5);
                return (int)v9;
              }
LABEL_62:
              sub_B94B4(v26);
              goto LABEL_35;
            }
LABEL_49:
            v18 = sub_B8930(v13, v16);
            if ( v18 )
            {
              v18 = sub_B872C((int)v13, (int)v13, (int)v26, (int)a5);
              v9 = v13;
              if ( v18 )
                goto LABEL_56;
            }
LABEL_51:
            v9 = (int **)v18;
            goto LABEL_34;
          }
          if ( !v17 )
            goto LABEL_57;
          goto LABEL_64;
        }
      }
      if ( v17 )
      {
        v18 = sub_B8930(v13, v16);
        if ( !v18 )
          goto LABEL_51;
        v18 = sub_B872C((int)v13, (int)v13, (int)v26, (int)a5);
        if ( !v18 )
          goto LABEL_51;
        v19 = v9;
        v9 = v13;
        v13 = v19;
      }
      else if ( !sub_BADB4(v13, v16) || !sub_131220(0, v9, (int *)v13, a4, a5) )
      {
        goto LABEL_33;
      }
      v20 = v13;
      v16 = 1;
      v13 = v9;
      v9 = v20;
LABEL_19:
      v18 = sub_B93C0((int *)v13, (int)v13, (int)v13, v26, (int)a5);
      if ( !v18 )
        goto LABEL_51;
      v17 = 0;
      goto LABEL_21;
    }
    goto LABEL_43;
  }
  if ( sub_B8590((int)a4, 1) )
  {
LABEL_43:
    sub_B8930(a1, 0);
    return 1;
  }
  return sub_B8930(a1, 1);
}
