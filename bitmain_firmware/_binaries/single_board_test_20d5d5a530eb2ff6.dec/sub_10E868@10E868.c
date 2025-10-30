int __fastcall sub_10E868(_DWORD *a1, int a2)
{
  int v4; // r4
  int v5; // r6
  int v6; // r0
  bool v7; // cc
  unsigned int v8; // r1

  v4 = 0;
  while ( 1 )
  {
    v7 = v4 < sub_10C010((int)a1);
    v8 = v4++;
    if ( !v7 )
      break;
    v5 = sub_10C01C(a1, v8);
    v6 = sub_10E660(v5);
    if ( !sub_10E6E0(v6, a2) )
      return v5;
  }
  return 0;
}
