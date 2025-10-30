int __fastcall sub_10A890(int a1, int *a2, int *a3, int a4)
{
  bool v4; // zf
  bool v5; // zf
  int v10; // r9
  int *v11; // r11
  int *v12; // r10
  int v13; // r4
  int v14; // r5
  int v15; // r0
  _DWORD *v17; // r0

  v4 = a2 == 0;
  if ( a2 )
    v4 = a1 == 0;
  if ( v4 )
    return 0;
  v5 = a4 == 0;
  if ( a4 )
    v5 = a3 == 0;
  if ( v5 )
    return 0;
  v10 = sub_130B08(a1);
  if ( v10 )
  {
    v11 = (int *)sub_B822C();
    if ( v11 && (v12 = (int *)sub_B822C()) != 0 )
    {
      v13 = sub_B822C();
      if ( v13 )
      {
        if ( sub_132330(v12, a3, a1, a2, v10) && (v17 = sub_10A658(a2, a3, a2), (v14 = (int)v17) != 0) )
        {
          if ( sub_133F3C(v11, a4, v17, a2, v10) && sub_13384C(v13, v12, v11, a2, v10) )
            goto LABEL_15;
        }
        else
        {
          v14 = 0;
        }
        v15 = v13;
        v13 = 0;
        sub_B895C(v15);
      }
      else
      {
        v14 = 0;
      }
    }
    else
    {
      v14 = 0;
      v13 = 0;
      v12 = 0;
    }
LABEL_15:
    sub_130B5C(v10);
    sub_B87C8(v11);
    sub_B87C8(v12);
    sub_B895C(v14);
    return v13;
  }
  return 0;
}
