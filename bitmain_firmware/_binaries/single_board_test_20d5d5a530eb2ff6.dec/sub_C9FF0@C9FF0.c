int __fastcall sub_C9FF0(int a1, int a2, int a3, int a4)
{
  int v7; // r4
  int v8; // r6
  int **v9; // r0
  int **v10; // r7
  int v11; // r5
  int v13; // r0

  if ( *(_DWORD *)(a1 + 80) )
  {
    v7 = a4;
    v8 = 0;
    if ( a4 )
    {
LABEL_3:
      sub_130BC0(v7);
      v9 = (int **)sub_130CCC(v7);
      v10 = v9;
      if ( v9
        && sub_B8930(v9, 2)
        && BN_sub(v10, *(_DWORD *)(a1 + 40), v10)
        && BN_mod_exp_mont(a2, a3, v10, *(_DWORD *)(a1 + 40), v7, *(_DWORD *)(a1 + 80)) )
      {
        v11 = 1;
        if ( !sub_B85B0(a2) )
          goto LABEL_6;
        sub_D0048(16, 297, 165, "crypto/ec/ecp_mont.c", 246);
      }
      v11 = 0;
LABEL_6:
      sub_130C74(v7);
      sub_130B5C(v8);
      return v11;
    }
    v13 = sub_130B4C();
    v7 = v13;
    if ( v13 )
    {
      v8 = v13;
      goto LABEL_3;
    }
  }
  return 0;
}
