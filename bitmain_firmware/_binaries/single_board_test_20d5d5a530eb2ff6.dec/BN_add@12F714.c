int __fastcall BN_add(int *a1, int *a2, int *a3)
{
  int v4; // r4
  int v7; // r0
  int v8; // r4
  int v9; // r4
  int result; // r0

  v4 = a2[3];
  if ( v4 == a3[3] )
  {
    result = sub_12F408(a1, a2, a3);
    a1[3] = v4;
  }
  else
  {
    v7 = sub_B82F8(a2, a3);
    if ( v7 > 0 )
    {
      v8 = a2[3];
      result = sub_12F56C(a1, a2, a3);
      a1[3] = v8;
    }
    else
    {
      if ( v7 )
      {
        v9 = a3[3];
        result = sub_12F56C(a1, a3, a2);
      }
      else
      {
        v9 = 0;
        sub_B8930((int **)a1, 0);
        result = 1;
      }
      a1[3] = v9;
    }
  }
  return result;
}
