int __fastcall sub_10AAF8(int *a1, int a2, int *a3, int *a4, int a5, int **a6)
{
  bool v6; // zf
  bool v7; // zf
  bool v8; // zf
  int v12; // r7
  int *v13; // r8
  int *v14; // r10
  int **v15; // r11
  int **v16; // r0
  int **v17; // r6
  int v18; // r5
  int v19; // r4
  _DWORD *v21; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r0

  v6 = a2 == 0;
  if ( a2 )
    v6 = a6 == 0;
  if ( v6 )
    return 0;
  v7 = a3 == 0;
  if ( a3 )
    v7 = a1 == 0;
  if ( v7 )
    return 0;
  v8 = a5 == 0;
  if ( a5 )
    v8 = a4 == 0;
  if ( v8 )
    return 0;
  v12 = sub_130B08(a1);
  if ( !v12 )
    return 0;
  v13 = (int *)sub_B822C();
  if ( v13 && (v14 = (int *)sub_B822C()) != 0 )
  {
    v15 = (int **)sub_B822C();
    if ( v15 )
    {
      v16 = (int **)sub_B822C();
      v17 = v16;
      if ( v16 )
      {
        sub_B8740(v16, a4, 4);
        sub_B87B8((int)v13, 4);
        if ( sub_132330(v13, a3, v17, a1, v12) )
        {
          v18 = 0;
          v21 = sub_10A658(a1, a3, a1);
          v19 = (int)v21;
          if ( v21 )
          {
            v22 = sub_133F3C(v14, v13, v21, a1, v12);
            if ( v22
              && (v22 = sub_133B10(v13, a2, v14, a1, v12)) != 0
              && (v22 = sub_BA0CC(v15, a6, v17, v12)) != 0
              && (v22 = BN_add(v14, a5, v15)) != 0 )
            {
              v23 = sub_B822C();
              v18 = v23;
              if ( v23 )
              {
                if ( !sub_132330(v23, v13, v14, a1, v12) )
                {
                  v24 = v18;
                  v18 = 0;
                  sub_B895C(v24);
                }
              }
            }
            else
            {
              v18 = v22;
            }
          }
        }
        else
        {
          v18 = 0;
          v19 = 0;
        }
      }
      else
      {
        v18 = 0;
        v19 = 0;
      }
    }
    else
    {
      v17 = 0;
      v18 = 0;
      v19 = 0;
    }
  }
  else
  {
    v17 = 0;
    v18 = 0;
    v19 = 0;
    v15 = 0;
    v14 = 0;
  }
  sub_130B5C(v12);
  sub_B895C((int)v17);
  sub_B87C8(v13);
  sub_B87C8(v14);
  sub_B87C8((int *)v15);
  sub_B895C(v19);
  return v18;
}
