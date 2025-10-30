_DWORD *__fastcall sub_F6BAC(int a1, int a2, int a3)
{
  _DWORD *v6; // r4
  int v7; // r0
  _DWORD *v8; // r0
  _DWORD *v9; // r0

  v6 = (_DWORD *)sub_F7890();
  if ( !v6 )
    goto LABEL_15;
  if ( a3 != 20 )
  {
    v7 = sub_B20A4();
    v6[2] = v7;
    if ( !v7 || !sub_126EFC(v7, a3) )
      goto LABEL_15;
  }
  if ( a1 && sub_D8C70(a1) != 64 )
  {
    v8 = (_DWORD *)sub_B2888();
    *v6 = v8;
    if ( !v8 )
      goto LABEL_15;
    sub_B2974(v8, a1);
  }
  if ( a2 )
  {
    if ( !sub_F688C(v6 + 1, a2) )
      goto LABEL_15;
  }
  else
  {
    if ( !sub_F688C(v6 + 1, a1) )
      goto LABEL_15;
    if ( !a1 )
      return v6;
    a2 = a1;
  }
  if ( sub_D8C70(a2) == 64 )
    return v6;
  v9 = (_DWORD *)sub_B2888();
  v6[4] = v9;
  if ( v9 )
  {
    sub_B2974(v9, a2);
    return v6;
  }
LABEL_15:
  sub_F78A4(v6);
  return 0;
}
