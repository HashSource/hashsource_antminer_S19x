int __fastcall sub_BFDBC(_DWORD *a1, int a2, _DWORD *a3, int a4)
{
  int v5; // r0
  bool v6; // zf
  int v7; // r6
  bool v8; // zf

  v5 = a1[2];
  v6 = v5 == 0;
  if ( !v5 )
    v6 = a2 == 0;
  if ( v6 )
    return 0;
  v7 = a1[3];
  v8 = v7 == 0;
  if ( !v7 )
    v8 = a4 == 0;
  if ( v8 )
    return 0;
  if ( a2 )
  {
    sub_B895C(v5);
    a1[2] = a2;
  }
  if ( a3 )
  {
    sub_B895C(a1[9]);
    a1[9] = a3;
    if ( a4 )
    {
      sub_B895C(a1[3]);
      a1[3] = a4;
    }
    a1[4] = sub_B85BC(a3);
    return 1;
  }
  else
  {
    if ( a4 )
    {
      sub_B895C(a1[3]);
      a1[3] = a4;
    }
    return 1;
  }
}
