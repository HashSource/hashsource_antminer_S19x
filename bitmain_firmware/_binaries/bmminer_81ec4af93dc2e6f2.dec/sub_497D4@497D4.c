int __fastcall sub_497D4(int a1, int a2)
{
  int v4; // r0
  int v5; // r4
  char *v6; // r0
  char *v7; // r3
  int v8; // t1
  int v9; // r5
  int v10; // r0
  char *v11; // r2
  int v12; // r4
  int v13; // t1
  double v14; // r0

  v4 = sub_26540();
  if ( v4 > 0 )
  {
    v6 = (char *)&unk_808FFC + 1024 * a1 + 4 * v4 + a2;
    v7 = (char *)&unk_808FFC + 1024 * a1 + a2;
    v5 = 0;
    do
    {
      v8 = *((_DWORD *)v7 + 1);
      v7 += 4;
      v5 += v8;
    }
    while ( v7 != v6 );
  }
  else
  {
    v5 = 0;
  }
  sub_26540();
  v9 = sub_8C490(v5);
  v10 = sub_26540();
  if ( v10 <= 0 )
    return sub_26540();
  v11 = (char *)&unk_808FFC + 1024 * a1 + a2;
  v12 = 0;
  do
  {
    v13 = *((_DWORD *)v11 + 1);
    v11 += 4;
    v12 += (v13 - v9) * (v13 - v9);
  }
  while ( v11 != (char *)&unk_808FFC + 1024 * a1 + 4 * v10 + a2 );
  sub_26540();
  LODWORD(v14) = sub_8C490(v12);
  if ( (double)SLODWORD(v14) < 0.0 )
    v14 = sqrt(v14);
  return LODWORD(v14);
}
