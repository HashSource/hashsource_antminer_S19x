int __fastcall sub_C67B4(int a1, _DWORD *a2, _DWORD *a3, int a4)
{
  int v6; // r0
  int v9; // r4
  int v11; // r9
  _DWORD *v12; // r0
  int v13; // r4
  int v14; // r0
  int v15; // r4
  int **v16; // r0
  int *v17; // r6
  int v18; // r6
  _DWORD *v19; // r0
  int v20; // r0
  int v21; // r6
  _UNKNOWN **v22; // r0
  int v23; // r6

  if ( !a2 )
  {
    v9 = 0;
    sub_D0048(16, 111, 67, "crypto/ec/ec_lib.c", 334);
    return v9;
  }
  v6 = *(_DWORD *)(a1 + 40);
  if ( !v6 || sub_B85B0(v6) || sub_B8720(*(_DWORD *)(a1 + 40)) )
  {
    v9 = 0;
    sub_D0048(16, 111, 103, "crypto/ec/ec_lib.c", 341);
    return v9;
  }
  if ( a3 )
  {
    if ( !sub_B85B0((int)a3) && !sub_B8720((int)a3) )
    {
      v11 = sub_B85BC(a3);
      if ( v11 <= sub_B85BC(*(_DWORD **)(a1 + 40)) + 1 )
      {
        if ( a4 && sub_B8720(a4) )
        {
          v9 = 0;
          sub_D0048(16, 111, 164, "crypto/ec/ec_lib.c", 362);
          return v9;
        }
        v12 = *(_DWORD **)(a1 + 4);
        if ( !v12 )
        {
          v12 = sub_C63F4((_DWORD *)a1);
          *(_DWORD *)(a1 + 4) = v12;
          if ( !v12 )
            return 0;
        }
        if ( !sub_C6594(v12, a2) || !sub_B89E4(*(_DWORD *)(a1 + 8), (int)a3) )
          return 0;
        if ( a4 && !sub_B85B0(a4) )
        {
          if ( !sub_B89E4(*(_DWORD *)(a1 + 12), a4) )
            return 0;
          goto LABEL_33;
        }
        v13 = sub_B85BC(*(_DWORD **)(a1 + 8));
        if ( v13 <= (sub_B85BC(*(_DWORD **)(a1 + 40)) + 1) / 2 + 3 )
        {
          sub_B8930(*(int ***)(a1 + 12), 0);
          goto LABEL_33;
        }
        v14 = sub_130B08();
        v15 = v14;
        if ( !v14 )
        {
LABEL_28:
          sub_B8930(*(int ***)(a1 + 12), 0);
          return 0;
        }
        sub_130BC0(v14);
        v16 = (int **)sub_130CCC(v15);
        v17 = (int *)v16;
        if ( v16 )
        {
          if ( *(_DWORD *)(*(_DWORD *)a1 + 4) == 407 )
          {
            sub_B8930(v16, 0);
            v20 = sub_B85BC(*(_DWORD **)(a1 + 40));
            if ( sub_B8A68(v17, v20 - 1) )
              goto LABEL_26;
          }
          else if ( sub_B89E4((int)v16, *(_DWORD *)(a1 + 40)) )
          {
LABEL_26:
            if ( sub_BA324(*(_DWORD *)(a1 + 12), *(int **)(a1 + 8)) )
            {
              if ( BN_add(*(_DWORD *)(a1 + 12), *(_DWORD *)(a1 + 12), v17) )
              {
                v21 = *(_DWORD *)(a1 + 12);
                v22 = sub_B81FC();
                if ( BN_add(v21, v21, v22) )
                {
                  v23 = sub_131220(*(_DWORD *)(a1 + 12), 0, *(_DWORD *)(a1 + 12), *(_DWORD *)(a1 + 8), v15);
                  sub_130C74(v15);
                  sub_130B5C(v15);
                  if ( !v23 )
                    goto LABEL_28;
LABEL_33:
                  if ( sub_B870C(*(_DWORD *)(a1 + 8)) )
                  {
                    v18 = sub_130B08();
                    sub_B94B4(*(int **)(a1 + 92));
                    *(_DWORD *)(a1 + 92) = 0;
                    if ( v18 && (v19 = sub_B9478(), (*(_DWORD *)(a1 + 92) = v19) != 0) )
                    {
                      v9 = 1;
                      if ( !sub_B94F0((int)v19, *(int ***)(a1 + 8), v18) )
                      {
                        v9 = 0;
                        sub_B94B4(*(int **)(a1 + 92));
                        *(_DWORD *)(a1 + 92) = 0;
                      }
                    }
                    else
                    {
                      v9 = 0;
                    }
                    sub_130B5C(v18);
                  }
                  else
                  {
                    v9 = 1;
                    sub_B94B4(*(int **)(a1 + 92));
                    *(_DWORD *)(a1 + 92) = 0;
                  }
                  return v9;
                }
              }
            }
          }
        }
        sub_130C74(v15);
        sub_130B5C(v15);
        goto LABEL_28;
      }
    }
  }
  sub_D0048(16, 111, 122, "crypto/ec/ec_lib.c", 352);
  return 0;
}
