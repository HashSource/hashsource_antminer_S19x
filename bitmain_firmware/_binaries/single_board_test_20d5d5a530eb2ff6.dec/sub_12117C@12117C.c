int __fastcall sub_12117C(int a1, int a2)
{
  int v4; // r4
  _DWORD *v5; // r6
  bool v6; // cc
  unsigned int v7; // r1

  v4 = 0;
  do
  {
    v6 = v4 < sub_10C010(*(_DWORD *)(a1 + 4));
    v7 = v4++;
    if ( !v6 )
      return 0;
    v5 = (_DWORD *)sub_10C01C(*(_DWORD **)(a1 + 4), v7);
  }
  while ( sub_126528(*v5, a2) );
  return v5[1];
}
