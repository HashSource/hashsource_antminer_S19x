int __fastcall sub_F8AC0(_DWORD *a1, int a2, int a3)
{
  int v4; // r0
  int v5; // r9
  int v6; // r8
  int **v7; // r10
  int v8; // r5
  int **v9; // r6
  int **v10; // r0
  int ***v11; // r4
  int **v12; // r4

  v4 = sub_10C010(a1[12], a2, a3);
  v5 = v4;
  if ( v4 > 0 && (v6 = sub_130B08(v4)) != 0 )
  {
    v7 = (int **)a1[7];
    v8 = 0;
    v9 = (int **)a1[8];
    do
    {
      v11 = (int ***)sub_10C01C(a1[12], v8);
      v10 = v11[3];
      ++v8;
      if ( !v10 && (v10 = (int **)sub_B8264(), (v11[3] = v10) == 0) || (v10 = (int **)sub_BA0CC(v10, v7, v9, v6)) == 0 )
      {
        v12 = v10;
        sub_130B5C(v6);
        return (int)v12;
      }
      v7 = v11[3];
      v9 = *v11;
    }
    while ( v8 != v5 );
    sub_130B5C(v6);
    return 1;
  }
  else
  {
    sub_130B5C(0);
    return 0;
  }
}
