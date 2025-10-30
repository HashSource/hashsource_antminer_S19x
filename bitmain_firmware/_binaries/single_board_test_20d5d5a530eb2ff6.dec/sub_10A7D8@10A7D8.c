int __fastcall sub_10A7D8(int a1, int a2, int a3, int a4, int a5)
{
  bool v5; // zf
  bool v6; // zf
  int v7; // r5
  int v12; // r7
  int v13; // r0
  int *v14; // r8
  int v15; // r0
  int v16; // r4
  int v17; // r0
  int v18; // r0

  v5 = a1 == 0;
  if ( a1 )
    v5 = a3 == 0;
  if ( v5 )
    return 0;
  v6 = a4 == 0;
  if ( a4 )
    v6 = a2 == 0;
  v7 = v6;
  if ( !a5 )
    v7 |= 1u;
  if ( v7 )
    return 0;
  v12 = sub_130B08(a1);
  if ( v12 && (v13 = sub_B822C(), (v14 = (int *)v13) != 0) )
  {
    v15 = sub_132330(v13, a2, a3, a5, v12);
    if ( v15 && (v15 = sub_133F3C(v14, a1, v14, a5, v12)) != 0 )
    {
      v17 = sub_B822C();
      v16 = v17;
      if ( v17 )
      {
        if ( !sub_132330(v17, v14, a4, a5, v12) )
        {
          v18 = v16;
          v16 = 0;
          sub_B895C(v18);
        }
      }
    }
    else
    {
      v16 = v15;
    }
  }
  else
  {
    v16 = 0;
    v14 = 0;
  }
  sub_130B5C(v12);
  sub_B87C8(v14);
  return v16;
}
