int __fastcall sub_2F667C(int *a1, _DWORD *a2, int a3, int a4)
{
  int v4; // r12
  _DWORD *i; // r4
  _DWORD *v10; // r3

  if ( a3 == a4 )
    return 1;
  v4 = a2[2];
  if ( v4 )
  {
    for ( i = a2; ; v4 = i[2] )
    {
      if ( a3 == v4 )
      {
        i[2] = a4;
        return 1;
      }
      if ( a4 == i[1] )
      {
        i[1] = a3;
        return 1;
      }
      i = (_DWORD *)*i;
      if ( !i )
        break;
    }
    v10 = (_DWORD *)sub_2ACBF4(*a1, 12);
    if ( v10 )
    {
      *v10 = *a2;
      v10[1] = a3;
      v10[2] = a4;
      *a2 = v10;
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    a2[1] = a3;
    a2[2] = a4;
    return 1;
  }
}
