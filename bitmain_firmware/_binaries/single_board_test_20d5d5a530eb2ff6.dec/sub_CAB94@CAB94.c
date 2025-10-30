int __fastcall sub_CAB94(int a1, int a2, int a3, int a4, int a5)
{
  int *v5; // r4
  bool v8; // zf
  int v9; // r8
  _BOOL4 v10; // r4
  int v12; // r0

  v5 = (int *)a1;
  if ( a2 )
  {
    a1 = sub_B89E4(a2, *(_DWORD *)(a1 + 40));
    if ( !a1 )
      return 0;
  }
  v8 = a4 == 0;
  if ( !a4 )
    v8 = a3 == 0;
  if ( v8 )
  {
LABEL_13:
    sub_130B5C(0);
    return 1;
  }
  if ( !*(_DWORD *)(*v5 + 156) )
  {
    if ( a3 && !sub_B89E4(a3, v5[17]) )
    {
      v9 = 0;
      v10 = 0;
      goto LABEL_12;
    }
    if ( a4 )
    {
      v9 = 0;
      v10 = sub_B89E4(a4, v5[18]) != 0;
      goto LABEL_12;
    }
    goto LABEL_13;
  }
  v9 = 0;
  if ( a5 )
  {
    if ( a3 )
      goto LABEL_9;
    goto LABEL_10;
  }
  v12 = sub_130B08(a1);
  a5 = v12;
  if ( !v12 )
    return 0;
  v9 = v12;
  if ( a3 )
  {
LABEL_9:
    if ( !(*(int (__fastcall **)(int *, int, int, int))(*v5 + 156))(v5, a3, v5[17], a5) )
    {
      sub_130B5C(v9);
      return 0;
    }
  }
LABEL_10:
  if ( a4 )
  {
    v10 = (*(int (__fastcall **)(int *, int, int, int))(*v5 + 156))(v5, a4, v5[18], a5) != 0;
LABEL_12:
    sub_130B5C(v9);
    return v10;
  }
  sub_130B5C(v9);
  return 1;
}
