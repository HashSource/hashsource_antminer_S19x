int __fastcall sub_CC44C(_DWORD *a1, _DWORD *a2, int a3)
{
  int v3; // r4
  int v8; // r8
  int v9; // r9
  int v10; // r0
  int v11; // r4
  int v12; // r0

  if ( a2[5] )
    return 1;
  v3 = sub_C6CD4(a1, a2);
  if ( v3 )
    return 1;
  v8 = 0;
  if ( a3 )
    goto LABEL_6;
  v12 = sub_130B08(0);
  a3 = v12;
  if ( !v12 )
    return v3;
  v8 = v12;
LABEL_6:
  sub_130BC0(a3);
  v9 = sub_130CCC(a3);
  v10 = sub_130CCC(a3);
  if ( v10 && sub_C6D34(a1, a2, v9, v10, a3) && sub_C6E54(a1, a2) )
  {
    v11 = a2[5];
    if ( v11 )
      v11 = 1;
    else
      sub_D0048(16, 102, 68, "crypto/ec/ecp_smpl.c", 1188);
  }
  else
  {
    v11 = 0;
  }
  sub_130C74(a3);
  sub_130B5C(v8);
  return v11;
}
