bool __fastcall sub_C14E4(int a1, int a2, int **a3, int *a4)
{
  int v5; // r0
  int v8; // r8
  _BOOL4 v9; // r5
  int v11; // r5
  int v12; // r0
  bool v13; // zf
  int *v14; // r9
  int v15; // r10
  int v16; // r4
  int *v17; // r0
  int v18; // r11
  int v19; // r0
  int (__fastcall *v20)(int, int, _DWORD, int, _DWORD, int, _DWORD); // r11
  int v21; // r11
  int **v22; // r8
  int v23; // r4
  int v24; // [sp+14h] [bp-8h]

  v5 = *(_DWORD *)(a1 + 8);
  if ( v5 && *(_DWORD *)(a1 + 12) && *(_DWORD *)(a1 + 16) )
  {
    v8 = *a4;
    if ( sub_B85B0(v5) || sub_B85B0(*(_DWORD *)(a1 + 12)) || (v9 = sub_B85B0(*(_DWORD *)(a1 + 16))) )
    {
      v9 = 0;
      sub_D0048(10, 107, 112, "crypto/dsa/dsa_ossl.c", 199);
    }
    else if ( *(_DWORD *)(a1 + 24) )
    {
      v11 = sub_B822C();
      v12 = sub_B822C();
      v13 = v12 == 0;
      if ( v12 )
        v13 = v11 == 0;
      v14 = (int *)v12;
      if ( !v13 && ((v15 = a2) != 0 || (v15 = sub_130B08()) != 0) )
      {
        v24 = sub_B85BC(*(_DWORD **)(a1 + 12));
        v18 = sub_133578(*(_DWORD *)(a1 + 12)) + 2;
        if ( sub_B89D8(v11, v18) && sub_B89D8((int)v14, v18) )
        {
          while ( sub_1365E8(v11, *(_DWORD *)(a1 + 12)) )
          {
            if ( !sub_B85B0(v11) )
            {
              sub_B87B8(v11, 4);
              sub_B87B8((int)v14, 4);
              if ( ((*(_DWORD *)(a1 + 28) & 1) == 0
                 || sub_B96D8((int **)(a1 + 32), *(_DWORD *)(a1 + 52), *(int ***)(a1 + 8), v15))
                && BN_add(v14, v11, *(_DWORD *)(a1 + 12))
                && BN_add(v11, v14, *(_DWORD *)(a1 + 12)) )
              {
                v19 = sub_B83F0(v14, v24);
                sub_B84C4(v19, v11, (int)v14, v18);
                v20 = *(int (__fastcall **)(int, int, _DWORD, int, _DWORD, int, _DWORD))(*(_DWORD *)(a1 + 44) + 20);
                if ( v20 )
                {
                  if ( !v20(a1, v8, *(_DWORD *)(a1 + 16), v11, *(_DWORD *)(a1 + 8), v15, *(_DWORD *)(a1 + 32)) )
                    break;
                }
                else if ( !BN_mod_exp_mont(
                             v8,
                             *(_DWORD *)(a1 + 16),
                             v11,
                             *(_DWORD *)(a1 + 8),
                             v15,
                             *(_DWORD *)(a1 + 32)) )
                {
                  break;
                }
                if ( sub_131220(0, v8, v8, *(_DWORD *)(a1 + 12), v15) )
                {
                  v21 = *(_DWORD *)(a1 + 12);
                  v22 = (int **)sub_B822C();
                  if ( v22 )
                  {
                    sub_130BC0(v15);
                    v23 = sub_130CCC(v15);
                    if ( !v23
                      || !sub_B8930(v22, 2)
                      || !BN_sub(v23, v21, v22)
                      || !BN_mod_exp_mont(v22, v11, v23, v21, v15, 0) )
                    {
                      sub_B895C((int)v22);
                      sub_130C74(v15);
                      break;
                    }
                    v16 = 1;
                    sub_130C74(v15);
                    sub_B87C8(*a3);
                    *a3 = (int *)v22;
                    goto LABEL_17;
                  }
                }
              }
              break;
            }
          }
        }
      }
      else
      {
        v15 = 0;
      }
      v16 = 0;
      sub_D0048(10, 107, 3, "crypto/dsa/dsa_ossl.c", 291);
LABEL_17:
      if ( a2 != v15 )
        sub_130B5C(v15);
      v17 = (int *)v11;
      v9 = v16;
      sub_B87C8(v17);
      sub_B87C8(v14);
    }
    else
    {
      sub_D0048(10, 107, 111, "crypto/dsa/dsa_ossl.c", 203);
    }
    return v9;
  }
  else
  {
    sub_D0048(10, 107, 101, "crypto/dsa/dsa_ossl.c", 193);
    return 0;
  }
}
