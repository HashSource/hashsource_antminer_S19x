int __fastcall BN_sub(int *a1, int *a2, int *a3)
{
  int v4; // r4
  int result; // r0
  int v8; // r0
  int v9; // r4

  v4 = a2[3];
  if ( v4 != a3[3] )
  {
    result = sub_12F408(a1, a2, a3);
LABEL_3:
    a1[3] = v4;
    return result;
  }
  v8 = sub_B82F8(a2, a3);
  if ( v8 > 0 )
  {
    v9 = a2[3];
    result = sub_12F56C(a1, a2, a3);
    a1[3] = v9;
  }
  else
  {
    if ( v8 )
    {
      v4 = a3[3] == 0;
      result = sub_12F56C(a1, a3, a2);
      goto LABEL_3;
    }
    sub_B8930((int **)a1, 0);
    a1[3] = 0;
    return 1;
  }
  return result;
}
