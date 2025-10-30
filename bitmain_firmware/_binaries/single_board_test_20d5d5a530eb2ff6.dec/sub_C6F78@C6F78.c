int __fastcall sub_C6F78(_DWORD *a1, int a2, int a3)
{
  int v6; // r0
  int v7; // r7
  int v8; // r0
  int result; // r0
  int *v10; // r8
  int *v11; // r9
  int *v12; // r10
  int *v13; // r7
  _BOOL4 v14; // r4
  int v15; // r7
  _DWORD *v16; // r7
  _DWORD *v17; // r0
  int *v18; // r8
  int *v19; // r7
  int *v20; // r6
  int v21; // r0
  bool v22; // zf
  int *v23; // r4
  int v24; // [sp+Ch] [bp-10h]
  int *v25; // [sp+10h] [bp-Ch]
  int *v26; // [sp+14h] [bp-8h]

  v6 = sub_C620C((int)a1);
  v7 = sub_C6210(v6);
  v8 = sub_C620C(a2);
  if ( v7 != sub_C6210(v8) )
    return 1;
  if ( sub_C6284((int)a1) )
  {
    if ( sub_C6284(a2) )
    {
      v15 = sub_C6284((int)a1);
      if ( v15 != sub_C6284(a2) )
        return 1;
    }
  }
  if ( (*(_DWORD *)*a1 & 2) != 0 )
    return 0;
  if ( a3 )
  {
    v24 = *(_DWORD *)*a1 & 2;
  }
  else
  {
    a3 = sub_130B08();
    result = -1;
    if ( !a3 )
      return result;
    v24 = a3;
  }
  sub_130BC0(a3);
  v10 = (int *)sub_130CCC(a3);
  v11 = (int *)sub_130CCC(a3);
  v12 = (int *)sub_130CCC(a3);
  v25 = (int *)sub_130CCC(a3);
  v26 = (int *)sub_130CCC(a3);
  v13 = (int *)sub_130CCC(a3);
  if ( v13 )
  {
    if ( !(*(int (__fastcall **)(_DWORD *, int *, int *, int *, int))(*a1 + 28))(a1, v10, v11, v12, a3) )
      goto LABEL_10;
    if ( !(*(int (__fastcall **)(int, int *, int *, int *, int))(*(_DWORD *)a2 + 28))(a2, v25, v26, v13, a3) )
      goto LABEL_10;
    if ( sub_B8354(v10, v25) )
      goto LABEL_10;
    if ( sub_B8354(v11, v26) )
      goto LABEL_10;
    if ( sub_B8354(v12, v13) )
      goto LABEL_10;
    v16 = (_DWORD *)sub_C6214((int)a1);
    v17 = (_DWORD *)sub_C6214(a2);
    if ( sub_C6EFC(a1, v16, v17) )
      goto LABEL_10;
    v18 = (int *)sub_C6244((int)a1);
    v19 = (int *)sub_C6244(a2);
    v20 = (int *)sub_C627C((int)a1);
    v21 = sub_C627C(a2);
    v22 = v19 == 0;
    if ( v19 )
      v22 = v18 == 0;
    v23 = (int *)v21;
    if ( !v22 )
    {
      if ( !sub_B8354(v18, v19) )
      {
        v14 = sub_B8354(v20, v23) != 0;
        goto LABEL_11;
      }
LABEL_10:
      v14 = 1;
LABEL_11:
      sub_130C74(a3);
      sub_130B5C(v24);
      return v14;
    }
  }
  sub_130C74(a3);
  sub_130B5C(v24);
  return -1;
}
