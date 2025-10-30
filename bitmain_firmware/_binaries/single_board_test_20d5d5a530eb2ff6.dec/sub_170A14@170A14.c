char *__fastcall sub_170A14(int a1, int a2)
{
  int v4; // r0
  _DWORD *v5; // r3
  char *v6; // r2
  int v7; // t1

  v4 = sub_1272D4(a2);
  v5 = *(_DWORD **)(a1 + 52);
  v6 = (char *)v5[1];
  if ( !v6 )
    return (char *)sub_1223D0(a1, a2);
  if ( v4 != *v5 )
  {
    while ( 1 )
    {
      v6 = (char *)v5[4];
      if ( !v6 )
        break;
      v7 = v5[3];
      v5 += 3;
      if ( v4 == v7 )
        return sub_E9E3C(v6);
    }
    return (char *)sub_1223D0(a1, a2);
  }
  return sub_E9E3C(v6);
}
