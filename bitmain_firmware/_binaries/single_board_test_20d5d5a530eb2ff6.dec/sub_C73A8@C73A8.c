int __fastcall sub_C73A8(_DWORD *a1, int a2, int a3, int a4)
{
  int v4; // r4
  int v6; // r6
  int **v10; // r0
  int **v11; // r9
  _BOOL4 v12; // r5
  int v13; // r0

  v4 = *(_DWORD *)(*a1 + 200);
  if ( v4 )
    return (*(int (__fastcall **)(_DWORD *))(*a1 + 200))(a1);
  v6 = a4;
  if ( !a1[23] )
    return 0;
  if ( a4 )
    goto LABEL_5;
  v13 = sub_130B4C();
  v6 = v13;
  if ( !v13 )
    return 0;
  v4 = v13;
LABEL_5:
  sub_130BC0(v6);
  v10 = (int **)sub_130CCC(v6);
  v11 = v10;
  v12 = v10 && sub_B8930(v10, 2) && BN_sub(v11, a1[2], v11) && BN_mod_exp_mont(a2, a3, v11, a1[2], v6, a1[23]) != 0;
  sub_130C74(v6);
  sub_130B5C(v4);
  return v12;
}
