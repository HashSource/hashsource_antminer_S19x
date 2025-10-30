int __fastcall sub_C5A98(_DWORD *a1, int *a2, int *a3)
{
  bool v4; // zf
  int result; // r0
  int v8; // r7
  int v9; // r8
  int *v10; // r10
  int *v11; // r9
  _BOOL4 v12; // r4

  if ( !a1 || !a1[3] )
    goto LABEL_7;
  v4 = a3 == 0;
  if ( a3 )
    v4 = a2 == 0;
  if ( v4 )
  {
LABEL_7:
    sub_D0048(16, 229, 67, "crypto/ec/ec_key.c", 348);
    return 0;
  }
  result = sub_130B08();
  v8 = result;
  if ( result )
  {
    sub_130BC0(result);
    v9 = sub_C63F4(a1[3]);
    if ( v9 )
    {
      v10 = (int *)sub_130CCC(v8);
      v11 = (int *)sub_130CCC(v8);
      if ( v11 )
      {
        if ( sub_C6E54(a1[3], v9, a2, a3, v8) && sub_C6D34(a1[3], v9, v10, v11, v8) )
        {
          if ( sub_B8354(a2, v10)
            || sub_B8354(a3, v11)
            || sub_B8354(a2, *(int **)(a1[3] + 40)) >= 0
            || sub_B8354(a3, *(int **)(a1[3] + 40)) >= 0 )
          {
            sub_D0048(16, 229, 146, "crypto/ec/ec_key.c", 379);
          }
          else if ( sub_C5A6C(a1, v9) )
          {
            v12 = sub_C579C((int)a1) != 0;
            goto LABEL_13;
          }
        }
      }
    }
    v12 = 0;
LABEL_13:
    sub_130C74(v8);
    sub_130B5C(v8);
    sub_C6490(v9);
    return v12;
  }
  return result;
}
